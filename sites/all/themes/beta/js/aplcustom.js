(function ($) {
$(document).ready(function() {


// search field at #bottom
var i = $('#gsearch-input');
var t = $('.cst a');
var i_s = $('.SSCentralSearchSearchCriteria');
var i_b = $('#BookAndMore_search, #BookAndMore_search2');
var i_t = $('#searchTermFld, #searchTermFld2');
//var f = $('#gsearch-form, .SSCentralSearchSearchForm, #BookAndMore_form, #search-block-form');
var f = $('#gsearch-form');

var searchString = '';
  
var default_value_i = i.val();
var default_value_i_s = i_s.val();
var default_value_i_b = i_b.val();
var default_value_i_t = i_t.val();
i.css('color', 'silver');
i_s.css('color', 'silver');
i_b.css('color', 'silver');
i_t.css('color', 'silver');
i.css('padding-left', '3px');
f.css('display', 'inline');




i.focus(function() {
	this.style.color="black";
if(i.val() == default_value_i) {
	this.value=""; 
    };

i.bind("keyup", function(event) {
  searchString = i.val();
});

});

i_s.focus(function() {
	this.style.color="black";
if(i_s.val() == default_value_i_s) {
	this.value=""; 
    };
    
i_s.bind("keyup", function(event) {
  searchString = i_s.val();
});

});

i_b.focus(function() {
	this.style.color="black";
if(i_b.val() == default_value_i_b) {
	this.value=""; 
    };
    

i_b.bind("keyup", function(event) {
  searchString = i_b.val();
});

});

i_t.focus(function() {
	this.style.color="black";
if(i_t.val() == default_value_i_t) {
	this.value=""; 

    };

i_t.bind("keyup", function(event) {
  searchString = i_t.val();
});

});
	
i.blur(function() {
	this.style.color="silver";

if(i.val() == '') {
	i.val(default_value_i); 
    };
}); 
	
i_s.blur(function() {
	this.style.color="silver";

if(i_s.val() == '') {
	i_s.val(default_value_i_s); 

    };
}); 
	
i_b.blur(function() {
	this.style.color="silver";

if(i_b.val() == '') {
	i_b.val(default_value_i_b); 

    };
}); 
	
i_t.blur(function() {
	this.style.color="silver";

if(i_t.val() == '') {
	i_t.val(default_value_i_t); 

    };
}); 

i.bind("keydown", function(event) {
      // track enter key
      var keycode = (event.keyCode ? event.keyCode : (event.which ? event.which : event.charCode));
      if (keycode == 13) { // keycode for enter key
	  
	  f.attr("action", "/gsearch/" + i.val());

         f.submit();
         return false;
      } else  {
         return true;
      }
}); // end of function



//On Hover Over
function megaHoverOver(){
    $(this).find(".sub").stop().fadeTo('fast', 10).show(); //Find sub and fade it in
    $(this).find("a:first").addClass("selected_nav"); 
	$(this).prev("li").addClass("prev_selected_nav"); 
	
	
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
  $(this).find("a:first").removeClass("selected_nav"); 
  $(this).prev("li").removeClass("prev_selected_nav"); 

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
   t.click(function() {
//alert('ss='+searchString);
if(searchString != "") {

  i.val(searchString);
  i_s.val(searchString);
  i_b.val(searchString);
  i_t.val(searchString);
};
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
    $("div#virtual span.show-hide").click(function(){
		var my_dt=$(this);
//		var my_question=$(this).text();
//		var my_answer=$(this).parent().parent().parent().find(".toggleable");
//		var my_answer2=$(this).parent().siblings(":first");
		var my_dd=$(this).closest('.virtual-service').find('.description');
//		var my_answer3=$(my_answer2);
		$(my_dt).toggleClass('expanded');
//		$(my_dt).fadeToggle('expanded');
//		$(my_answer3).removeClass('hide');
//		$(my_dd).slideDown();
		$(my_dd).toggleClass('more-info');
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

/*
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
*/	
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
