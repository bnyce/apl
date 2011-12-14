(function ($) {
$(document).ready(function() {
	
 $(".CustomSearchTab").click(function() {

	   var activeDiv= $(this).attr("id").split("_");
		//alert(activeDiv[1]);
		$(".CustomSearchTab").css('float');
	  	$(".customSearch_formContainer").hide();
		$(".CustomSearchTab").removeClass('customSearchTab_active');
		$(this).addClass('customSearchTab_active');
		$("#"+activeDiv[1]+"_formContainer").show();
	   //$("#BookAndMore_formContainer").show();
   });

//    $("div.overlogodiv").click(function(e){
	//alert("I think you want to head to the main APL site");
//	alert('hello click');
//	window.location.href = "http://library.austintexas.gov";  
//	});
	
});
	
}(jQuery));
