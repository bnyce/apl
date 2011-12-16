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

	$("form.siteSearchForm").submit(function()
   {
		var searchGo = $("#searchURLFld").val()+"/"+$("#searchTermFld").val();
		//alert(searchGo);
		document.location=searchGo;
		return false;
   }
   );

	// FAQ Question Click
    $("dt.handler").click(function(){
		var my_dt=$(this);
		var my_question=$(this).text();
		var my_answer=$(this).parent().parent().parent().find(".toggleable");
		$(my_dt).toggleClass('bold');
		$(my_answer).toggleClass('element-invisible');
		return false;
	});

	// FAQ Expand All button Click
    $(".show_all_button").click(function(){
		$(".toggleable").removeClass('element-invisible');
		$("dt.handler").removeClass('bold');
		$("dt.handler").addClass('bold');
		$(".show_all_button").toggleClass('element-invisible');
		$(".hide_all_button").toggleClass('element-invisible');
		return false;
	});

	// FAQ Collapse All button Click
    $(".hide_all_button").click(function(){
		$(".toggleable").addClass('element-invisible');
		$("dt.handler").removeClass('bold');
		$(".show_all_button").toggleClass('element-invisible');
		$(".hide_all_button").toggleClass('element-invisible');
		return false;
	});

$(".book_desc").addClass("more-block").addClass("clearfix");
$(".blEntryWrapper").addClass("clearfix"); 

var adjustheight = 180;
var moreText = "+ More";  // The "more" link text
var lessText = "- Less";  // The "less" link text
// Sets the .more-block div to the specified height and hides any content that overflows
$(".more-block").css('max-height', 200).css('overflow', 'hidden').css('height', 'auto');
$(".more-less").css('max-height', 180).css('overflow', 'hidden').css('height', 'auto');
// The section added to the bottom of the "more-less" div
$(".blEntryWrapper").append('<span class="continued" style="float:right;"> <a href="#" class="adjust"></a></span>');
// Set the "More" text
$("a.adjust").text(moreText);
$(".adjust").toggle(function() {
	$(this).parents("div:first").find(".more-less").css('max-height', '').css('overflow', 'visible');
	$(this).parents("div:first").find(".more-block").css('max-height', '').css('overflow', 'visible');
	// Hide the [...] when expanded
	$(this).parents("div:first").find("span.continued").css('display', ' ');
	$(this).text(lessText);
	}, function() {
	$(this).parents("div:first").find(".more-less").css('max-height', '182').css('overflow', 'hidden').css('height', 'auto');
	$(this).parents("div:first").find(".more-block").css('max-height', '202').css('overflow', 'hidden').css('height', 'auto');
	$(this).parents("div:first").find("span.continued").css('display', ' ');
	$(this).text(moreText);
});

});

}(jQuery));
