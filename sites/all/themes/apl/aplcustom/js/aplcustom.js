(function ($) {
$(document).ready(function() {
//On Hover Over
function megaHoverOver(){
    $(this).find(".sub").stop().fadeTo('fast', 10).show(); //Find sub and fade it in
    (function($) {
        //Function to calculate total width of all ul's
        jQuery.fn.calcSubWidth = function() {
            rowWidth = 0;
            //Calculate row
            $(this).find("ul").each(function() { //for each ul...
                rowWidth += $(this).width(); //Add each ul's width together
            });
        };
    })(jQuery); 

    if ( $(this).find(".row").length > 0 ) { //If row exists...

        var biggestRow = 0;	

        $(this).find(".row").each(function() {	//for each row...
            $(this).calcSubWidth(); //Call function to calculate width of all ul's
            //Find biggest row
            if(rowWidth > biggestRow) {
                biggestRow = rowWidth;
            }
        });

        $(this).find(".sub").css({'width' :biggestRow}); //Set width
        $(this).find(".row:last").css({'margin':'0'});  //Kill last row's margin

    } else { //If row does not exist...

        $(this).calcSubWidth();  //Call function to calculate width of all ul's
        $(this).find(".sub").css({'width' : rowWidth}); //Set Width

    }
}
//On Hover Out
function megaHoverOut(){
  $(this).find(".sub").stop().fadeTo('fast', 0, function() { //Fade to 0 opactiy
      $(this).hide();  //after fading, hide it
  });
}

//Set custom configurations
var config = {
     sensitivity: 1, // number = sensitivity threshold (must be 1 or higher)
     interval: 1, // number = milliseconds for onMouseOver polling interval
     over: megaHoverOver, // function = onMouseOver callback (REQUIRED)
     timeout: 50, // number = milliseconds delay before onMouseOut
     out: megaHoverOut // function = onMouseOut callback (REQUIRED)
};

$("ul#topnav li .sub").css({'opacity':'0'}); //Fade sub nav to 0 opacity on default
$("ul#topnav li").hoverIntent(config); //Trigger Hover intent with custom configurations

 $(".CustomSearchTab").click(function(event) {

	   var activeDiv= $(this).attr("id").split("_");
		//alert(activeDiv[1]);
		event.preventDefault();
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
// $(".blEntryWrapper").addClass("clearfix"); 

var adjustheight = 180;
var moreText = "+ More";  // The "more" link text
var lessText = "- Less";  // The "less" link text
// Sets the .more-block div to the specified height and hides any content that overflows
$(".more-block").css('max-height', 112).css('overflow', 'hidden').css('height', 'auto');
$(".more-less").css('max-height', 100).css('overflow', 'hidden').css('height', 'auto');
// The section added to the bottom of the "more-less" div
// Set the "More" text

$(".blEntryWrapper").append('<span class="continued" style="float:right;"> <a href="#" class="adjust"></a></span>');
$("a.adjust").text(moreText); 
$(".more-less").each(function(){
// $("a.adjust").text(moreText); 
});

$("a.adjust").click(function(event) {
	event.preventDefault();
	// alert("Si");
	$(this).parents("div:first").find(".more-less").css('max-height', '').css('overflow', 'visible');
	$(this).parents("div:first").find(".more-block").css('max-height', '').css('overflow', 'visible');
	$(this).parents("div:first").find("span.continued").css('display', ' ');
	$(this).parents("div:first").find("span.continued").css('display', 'none');
	

});
var d = new Date();
var weekday=new Array(7);
weekday[0]="sunday";
weekday[1]="monday";
weekday[2]="tuesday";
weekday[3]="wednesday";
weekday[4]="thursday";
weekday[5]="friday";
weekday[6]="saturday";

//alert(weekday[d.getDay()]);

$(".views-field-field-"+weekday[d.getDay()]).css('font-weight', 'bold');

});

}(jQuery));