$(document).ready(function() {
		
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