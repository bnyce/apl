
/**
 * @file
 * Integrates Views data with the FullCalendar plugin.
 */

(function ($) {

Drupal.behaviors.fullCalendar = {
  attach: function(context) {
    // Process each view and its settings.
    $.each(Drupal.settings.fullcalendar, function(index, settings) {
      // Hide the failover display.
      console.log(settings);
      $(index).find('.fullcalendar-content').hide();

       // Add events from Drupal.
       var eventSourcesArray = [
         function(start, end, callback) {
           var events = [];
           $(index).find('.fullcalendar-event-details').each(function() {
            events.push({
              field: $(this).attr('field'),
              index: $(this).attr('index'),
              eid: $(this).attr('eid'),
              entity_type: $(this).attr('entity_type'),
              title: $(this).attr('title'),
              start: $(this).attr('start'),
              end: $(this).attr('end'),
              url: $(this).attr('href'),
              allDay: ($(this).attr('allDay') === '1'),
              className: $(this).attr('cn'),
              editable: $(this).attr('editable'),
              dom_id: index
            });
          });
          callback(events);
        }
      ];

       // Add events from Google Calendar feeds.
       $.each(settings.gcal, function(i, gcalEntry) {
         eventSourcesArray.push($.fullCalendar.gcalFeed(gcalEntry[0], gcalEntry[1]));
      });

      // Use .once() to protect against extra AJAX calls from Colorbox.
      $(index).find('.fullcalendar').once().fullCalendar({
        defaultView: settings.defaultView,
        theme: settings.theme,
        header: {
          left: settings.left,
          center: settings.center,
          right: settings.right
        },
        isRTL: settings.isRTL === '1',
        eventClick: function(calEvent, jsEvent, view) {
          // Use colorbox only for events based on entities
          if (settings.colorbox && (calEvent.eid !== undefined)) {
            // Open in colorbox if exists, else open in new window.
            if ($.colorbox) {
              var url = calEvent.url;
              if (settings.colorboxClass !== '') {
                url += ' ' + settings.colorboxClass;
              }
              $.colorbox({
                href: url,
                width: settings.colorboxWidth,
                height: settings.colorboxHeight
              });
            }
          }
          else {
            if (settings.sameWindow) {
              window.open(calEvent.url, '_self');
            }
            else {
              window.open(calEvent.url);
            }
          }
          return false;
        },
        year: (settings.year) ? settings.year : undefined,
        month: (settings.month) ? settings.month : undefined,
        day: (settings.day) ? settings.day : undefined,
        timeFormat: {
          agenda: (settings.clock) ? 'HH:mm{ - HH:mm}' : settings.agenda,
          '': (settings.clock) ? 'HH:mm' : settings.agenda
        },
        axisFormat: (settings.clock) ? 'HH:mm' : 'h(:mm)tt',
        weekMode: settings.weekMode,
        firstDay: settings.firstDay,
        monthNames: settings.monthNames,
        monthNamesShort: settings.monthNamesShort,
        dayNames: settings.dayNames,
        dayNamesShort: settings.dayNamesShort,
        allDayText: settings.allDayText,
        buttonText: {
          today:  settings.todayString,
          day: settings.dayString,
          week: settings.weekString,
          month: settings.monthString
        },
        eventSources: eventSourcesArray,
        eventDrop: function(event, dayDelta, minuteDelta, allDay, revertFunc) {
          $.post(Drupal.settings.basePath + 'fullcalendar/ajax/update/drop/'+ event.eid,
            'field=' + event.field + '&entity_type=' + event.entity_type + '&index=' + event.index + '&day_delta=' + dayDelta + '&minute_delta=' + minuteDelta + '&all_day=' + allDay + '&dom_id=' + event.dom_id,
            fullcalendarUpdate);
          return false;
        },
        eventResize: function(event, dayDelta, minuteDelta, revertFunc) {
          $.post(Drupal.settings.basePath + 'fullcalendar/ajax/update/resize/'+ event.eid,
            'field=' + event.field + '&entity_type=' + event.entity_type + '&index=' + event.index + '&day_delta=' + dayDelta + '&minute_delta=' + minuteDelta + '&dom_id=' + event.dom_id,
            fullcalendarUpdate);
          return false;
        },
        dayClick: function(date, allDay, jsEvent, view) {
          console.log(date, allDay, jsEvent, view, this);
          $('#paramDayDate').append('<img id="ajaxLoader" src="/sites/all/themes/austintexas/images/ajax-loader.gif" />');
          if (view.name == 'basicWeek') {
            console.log('monthView',date.getFullYear(), date.getMonth(), date.getDate());
            ajaxPostDay(date);
            $('.view-dom-id-fc-2').find('.fullcalendar').fullCalendar('gotoDate', date.getFullYear(), date.getMonth(), date.getDate());
            // remove highlighting from previously selected day in week view
            $('.fc-view-basicWeek .fc-widget-content').removeClass('fc-state-highlight');
            // remove highlighting from previously selected day in month view
            $('.view-display-id-calendar_month_block .fc-widget-content').removeClass('fc-state-highlight');
            /* TODO:  need to find a way to select/highlight the day in month view, using fc-sun, etc selects all sundays for the month. =( */
            //highlight selected day in week view
            $(this).addClass('fc-state-highlight');
          }
          if (view.name == 'month') {
            console.log('monthView',date.getFullYear(), date.getMonth(), date.getDate());
            ajaxPostDay(date);
            $('.view-dom-id-fc-1').find('.fullcalendar').fullCalendar('gotoDate', date.getFullYear(), date.getMonth(), date.getDate());
            // remove highlighting from previously selected day in month view
            $('.view-display-id-calendar_month_block .fc-widget-content').removeClass('fc-state-highlight');
            // remove highlighting from previously selected day in week view
            $('.fc-view-basicWeek .fc-widget-content').removeClass('fc-state-highlight');
            //find which day is selected in month view by class name
            var classArr = $(this).attr('class').split(' ');
            var classPageArr = ['fc-sun', 'fc-mon', 'fc-tue', 'fc-wed', 'fc-thu', 'fc-fri', 'fc-sat'];
            var i=0;
            for (i=0;i<classArr.length;i++) {
              console.log(classArr[i]);
              var tt = classArr[i];
              if (jQuery.inArray(classArr[i], classPageArr) > -1){
                // apply highlighting to selected day from month view to week view.
                $('.fc-view-basicWeek tbody .' + tt).addClass('fc-state-highlight');
                break;
              }
            }
            //highlight selected day in month view
            $(this).addClass('fc-state-highlight');
          }
        }
      });
    });

    var fullcalendarUpdate = function(result) {
      fcStatus = $(result.dom_id).find('.fullcalendar-status');
      if (fcStatus.text() === '') {
        fcStatus.html(result.msg).slideDown();
      }
      else {
        fcStatus.effect('highlight', {}, 5000);
      }
      return false;
    };

    $('.fullcalendar-status-close').live('click', function() {
      $(this).parent().slideUp();
      return false;
    });
/*
    $('.fc-view-basicWeek .fc-widget-content', context).click(function () {
      //on click, remove shading for today and change to clicked day
      $('.fc-view-basicWeek .fc-widget-content').removeClass('fc-state-highlight');
      $(this).addClass('fc-state-highlight');
      ajaxPostDay(this);
    });
*/
    var ajaxPostDay = function(dateObj){
      console.log('ajaxpost: ' + dateObj );
      var updateProducts = function(data) {
        console.log('success');
        if(data.memo != '') { console.debug(data.memo); }
        $('#block-views-fullcalendar-calendar-day-block .content').html(data.products);
        if ($('#block-system-main').find('div#paramDayDate').length == 0) {
          $('#block-system-main .view-display-id-fullcalendar_page .fc').after('<div id="paramDayDate">' + data.paramDate + '</div>');
        }else{
          $('#paramDayDate').text(data.paramDate);
        }
      }
      if(!dateObj) { dateObj = null; }
      //trim leading '/' off url
      var locPathStr = window.location.pathname.replace(/^\/?/, '');
      // replace any other '/' to @ so it will not think each / is another parameter
      var locPathStr = locPathStr.replace(/\//, '@');
      console.log(locPathStr);
      $.ajax({
        type: 'POST',
        //url: '/calendar/update/' + $(thisObj).attr('class') + '/' + $('#block-system-main h2').text() + '/' + dateObj,
        url: '/calendar/update/' + dateObj + '/' + locPathStr,
        success: updateProducts, // The js function that will be called upon success request
        dataType: 'json', //define the type of data that is going to get back from the server
        data: 'js=1' //Pass a key/value pair
      });
    }

    // click department header to hide that department's events
    $('#block-views-fullcalendar-calendar-day-block .view-content h3').live('click', function() {
      $(this).next().fadeToggle('slow','linear');
    });

    // Trigger a window resize so that calendar will redraw itself as it loads funny in some browsers occasionally
    $(window).resize();
  }
};

})(jQuery);
