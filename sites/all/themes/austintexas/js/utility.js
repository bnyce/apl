jQuery(document).ready(function() {
	jQuery('.slides').cycle({
		fx: 		'fade',
   		speed:       500, 
    	        timeout:     6000, 
    	        pager:      '.slidenav', 
   		pagerEvent: 'click', 
   		pauseOnPagerHover: true,
		pause:		true
	})
});