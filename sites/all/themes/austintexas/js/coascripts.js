(function ($) {
	$(document).ready(function() {
	
		
		
		//add active class to sub-pages of Resident, Business, Development, Government, Environment

		//RESIDENT
		if (/\/resident\//.test(window.location)) {
	    	$('#main-menu-links .menu-877').attr('class', 'active');
		}
		//BUSINESS
		if (/\/business\//.test(window.location)) {
	    	$('#main-menu-links .menu-572').attr('class', 'active');
		}
		//DEVELOPMENT
		if (/\/development\//.test(window.location)) {
	    	$('#main-menu-links .menu-573').attr('class', 'active');
		}
		//GOVERNMENT
		if (/\/government\//.test(window.location)) {
	    	$('#main-menu-links .menu-574').attr('class', 'active');
		}
		//ENVIRONMENT
		if (/\/environmnet\//.test(window.location)) {
	    	$('#main-menu-links .menu-575').attr('class', 'active');
		}









	});
})(jQuery);
		
