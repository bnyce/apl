(function ($) {
$(document).ready(function() {

  



var f = $('#tiny_search_form');

/*
f.bind('keydown', function(e) {
    e.preventDefault();
});
*/

$( "input[name='search_type']" ).bind( "click", radioClicks );

var form_action = "http://austin.bibliocommons.com/search";
		
function radioClicks()
  {
  var query = $( this ).val();
  switch(query)
   {
    case "books":
		//query = 
		form_action = "http://austin.bibliocommons.com/search";
		//alert(action);

        document.tiny_search_form.action = form_action;

		break;
    case "articles":
		form_action = "http://www.austinlibrary.com:2048/form";
		//alert("aeu" + action);

        document.tiny_search_form.action = form_action;
		
		var input = document.createElement("input");
			input.setAttribute("type", "hidden");
			input.setAttribute("name", "SS_LibHash");
			input.setAttribute("value", "YL9AR3TQ5L");
			document.getElementById("tiny_search_form").appendChild(input);
			
		var input2 = document.createElement("input");
			input2.setAttribute("type", "hidden");
			input2.setAttribute("name", "dbIDList");
			input2.setAttribute("value", "");
			document.getElementById("tiny_search_form").appendChild(input2);

		var input3 = document.createElement("input");
			input3.setAttribute("type", "hidden");
			input3.setAttribute("name", "searchType");
			input3.setAttribute("value", "basic");
			document.getElementById("tiny_search_form").appendChild(input3);

		var input4 = document.createElement("input");
			input4.setAttribute("type", "hidden");
			input4.setAttribute("name", "action");
			input4.setAttribute("value", "start");
			document.getElementById("tiny_search_form").appendChild(input4);

		var input5 = document.createElement("input");
			input5.setAttribute("type", "hidden");
			input5.setAttribute("name", "catGroupList");
			input5.setAttribute("value", "default");
			document.getElementById("tiny_search_form").appendChild(input5);

		var input6 = document.createElement("input");
			input6.setAttribute("type", "hidden");
			input6.setAttribute("name", "Category");
			input6.setAttribute("value", "searchBy");
			document.getElementById("tiny_search_form").appendChild(input6);

		var input7 = document.createElement("input");
			input7.setAttribute("type", "hidden");
			input7.setAttribute("name", "qurl");
			input7.setAttribute("value", "http://YL9AR3TQ5L.cs.serialssolutions.com/results");
			document.getElementById("tiny_search_form").appendChild(input7);

		break;
    case "site":
		form_action = "http://library.austintexas.gov/gsearch";

        document.tiny_search_form.action = form_action;

		//alert(action);
	}
	//return action;
  }


var i = $("#search_input");

i.bind("keyup", function(event) {
      // track enter key

      var keycode = (event.keyCode ? event.keyCode : (event.which ? event.which : event.charCode));
	  
//	  alert(action);
	  
	  
      if (keycode == 13) { // keycode for enter key

	  

	  
         f.submit();
         return false;
      } else  {
	  //alert('fail');
         return true;
      }
}); // end of function
  
  
  
  
  
  
  
  
  
  
  
  


  });

}(jQuery));
