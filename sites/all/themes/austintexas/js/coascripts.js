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


(function ($) {
	$(document).ready(function() {
	
		
		
		//add active class to sub-pages of Resident, Business, Development, Government, Environment

		//RESIDENT
		if (/\/resident\//.test(window.location)) {
	    	$('#main-menu-links .menu-877').addClass('active');
		}
		//BUSINESS
		if (/\/business\//.test(window.location)) {
	    	$('#main-menu-links .menu-572').addClass('active');
		}
		//DEVELOPMENT
		if (/\/development\//.test(window.location)) {
	    	$('#main-menu-links .menu-573').addClass('active');
		}
		//GOVERNMENT
		if (/\/government\//.test(window.location)) {
	    	$('#main-menu-links .menu-574').addClass('active');
		}
		//ENVIRONMENT
		if (/\/environmnet\//.test(window.location)) {
	    	$('#main-menu-links .menu-575').addClass('active');
		}




	//add arrows to select (online services)
	$('.select-arrow select').customStyle();

	//remove view all links on portal left menu items
	
	$('.view-portal-menu .view-dom-id-4').find('.more-link').css('display', 'none');
	$('.view-portal-menu .view-dom-id-5').find('.more-link').css('display', 'none');
	$('.view-portal-menu .view-dom-id-6').find('.more-link').css('display', 'none');
	$('.view-portal-menu .view-dom-id-1').find('.more-link').css('display', 'none');


	});
})(jQuery);
		
