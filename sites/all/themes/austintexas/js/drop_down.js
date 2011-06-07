        (function ($) {
		
		$(document).ready(function() {

            $(".dropdown dt a").click(function() {
                $(".dropdown dd ul").toggle();
            });
                        
            $(".dropdown dd ul li a").click(function() {
                var text = $(this).html();
                $(".dropdown dt a span").html(text);
                $(".dropdown dd ul").hide();
                $("#result").html("Selected value is: " + getSelectedValue("sample"));
            });
                        
            function getSelectedValue(id) {
                return $("#" + id).find("dt a span.value").html();
            }

            $(document).bind('click', function(e) {
                var $clicked = $(e.target);
                if (! $clicked.parents().hasClass("dropdown"))
                    $(".dropdown dd ul").hide();
            });
           
		   // Drop Down 2
		   
		    $(".dropdown2 dt a").click(function() {
                $(".dropdown2 dd ul").toggle();
            });
                        
            $(".dropdown2 dd ul li a").click(function() {
                var text = $(this).html();
                $(".dropdown2 dt a span").html(text);
                $(".dropdown2 dd ul").hide();
                $("#result").html("Selected value is: " + getSelectedValue("sample"));
            });
                        
            function getSelectedValue(id) {
                return $("#" + id).find("dt a span.value").html();
            }

            $(document).bind('click', function(e) {
                var $clicked = $(e.target);
                if (! $clicked.parents().hasClass("dropdown2"))
                    $(".dropdown2 dd ul").hide();
            });
		   
		    // Drop Down 3
		   
		    $(".dropdown3 dt a").click(function() {
                $(".dropdown3 dd ul").toggle();
            });
                        
            $(".dropdown3 dd ul li a").click(function() {
                var text = $(this).html();
                $(".dropdown3 dt a span").html(text);
                $(".dropdown3 dd ul").hide();
                $("#result").html("Selected value is: " + getSelectedValue("sample"));
            });
                        
            function getSelectedValue(id) {
                return $("#" + id).find("dt a span.value").html();
            }

            $(document).bind('click', function(e) {
                var $clicked = $(e.target);
                if (! $clicked.parents().hasClass("dropdown3"))
                    $(".dropdown3 dd ul").hide();
            });
		
		
		
		
		
		//set active class for main menu items
		
		// get id of secondary menu
		var secondary_menu_id = $('#submenubar .content ul').attr('id');
		//alert(secondary_menu_id);
		
		switch(secondary_menu_id)
		{
		
			case 'nice-menu-1':
			$('#main-menu-links .menu-877').attr('class', 'active');
			break;
			
			case 'nice-menu-2':
			$('#main-menu-links .menu-572').attr('class', 'menu-572 active');
			break;

			case 'nice-menu-3':
			$('#main-menu-links .menu-573').attr('class', 'active');
			break;

			case 'nice-menu-4':
			$('#main-menu-links .menu-574').attr('class', 'active');
			break;

			case 'nice-menu-5':
			$('#main-menu-links .menu-575').attr('class', 'active');
			break;
		
		}
		
		


		
		   
        });
		
		})(jQuery);
		
		




// custom select plugin

(function($){
 $.fn.extend({
 
 	customStyle : function(options) {
	  if(!$.browser.msie || ($.browser.msie&&$.browser.version>6)){
	  return this.each(function() {
	  
			var currentSelected = $(this).find(':selected');
			$(this).after('<span class="customStyleSelectBox"><span class="customStyleSelectBoxInner">'+currentSelected.text()+'</span></span>').css({position:'absolute', opacity:0,fontSize:$(this).next().css('font-size')});
			var selectBoxSpan = $(this).next();
			var selectBoxWidth = parseInt($(this).width()) - parseInt(selectBoxSpan.css('padding-left')) -parseInt(selectBoxSpan.css('padding-right'));			
			var selectBoxSpanInner = selectBoxSpan.find(':first-child');
			selectBoxSpan.css({display:'inline-block'});
			selectBoxSpanInner.css({width:selectBoxWidth, display:'inline-block'});
			var selectBoxHeight = parseInt(selectBoxSpan.height()) + parseInt(selectBoxSpan.css('padding-top')) + parseInt(selectBoxSpan.css('padding-bottom'));
			$(this).height(selectBoxHeight).change(function(){
				// selectBoxSpanInner.text($(this).val()).parent().addClass('changed');   This was not ideal
			selectBoxSpanInner.text($(this).find(':selected').text()).parent().addClass('changed');
				// Thanks to Juarez Filho & PaddyMurphy
			});
			
	  });
	  }
	}
 });
})(jQuery);





$(document).ready(function(){
	$('#ctools-jump-menu select').customStyle();
});