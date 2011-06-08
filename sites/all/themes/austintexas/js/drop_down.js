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





	//online services select lists
	$('.select-arrow select').customStyle();

		   
        });
		
		})(jQuery);
		
