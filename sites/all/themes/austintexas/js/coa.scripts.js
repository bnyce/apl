$(function(){
	

alert('test');

$('select#edit-jump').customStyle();


		
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
