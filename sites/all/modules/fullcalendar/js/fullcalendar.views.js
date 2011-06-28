
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

    $('.fc-view-basicWeek .fc-widget-content, a.calendarEventDay', context).click(function () {
      // This function will get exceuted after the ajax request is completed successfully
      var updateProducts = function(data) {
        // The data parameter is a JSON object. The “products” property is the list of products items that was returned from the server response to the ajax request.
        alert('here');
        //$('#view-display-id-calendar_day_block').html(data.products);
      }
      $.ajax({
        type: 'POST',
        url: 'xxxfullcalendar/update/20', //this.href, // Which url should be handle the ajax request. This is the url defined in the <a> html tag
        success: updateProducts, // The js function that will be called upon success request
        dataType: 'json', //define the type of data that is going to get back from the server
        data: 'js=1' //Pass a key/value pair
      });
      return false;  // return false so the navigation stops here and not continue to the page in the link
    });

    // Trigger a window resize so that calendar will redraw itself as it loads funny in some browsers occasionally
    $(window).resize();
  }
};

})(jQuery);
