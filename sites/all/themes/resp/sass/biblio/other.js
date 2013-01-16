 
  if (typeof console == "undefined" || typeof console.debug == "undefined") var console = { log: function() {}, warn: function() {}, info: function() {}, error: function() {}  }; 
    console.debug = function() {};
      
  document.write("<style type=\"text/css\">.hide_on_script{display:none;}</style>");
  var is_lite = "false";
  var auto_suggest_enabled = true;
  var open_dropdown = "";
  var open_popup = "";
  var open_editor = "";
  var open_details = "";
  var selected_items = [];
  var open_tip = "";
  var help_win = false;
  var od_localizations = {
      fetch_message: "Checking Availability...",
      wait_message: "Please wait, other requests are pending.",
      request_available: "Check availability",
      digital_request: "Request this Download"
  }
  var renew_enabled = true;
  var hold_request = '/jsvars/__action__?format=js';
  var registrar = {
    hooks: {},
    handlers: {},
    remove_hook: function(type){
      this.hooks[type] = [];
    },
    add_hook: function(type, o) {
      if (typeof(o) == "string") o = {element: o};
      if (this.hooks[type] == undefined) {
       this.hooks[type] = [];
      }
      this.hooks[type].push(o);
      if (this.handlers[type] != undefined) {
       for (var i=0; i < this.handlers[type].length; i++) {
         this.inform_handler(this.handlers[type][i], o);
       };
      }
    },
    add_handler: function(types, handler, opts) {
      if (typeof(types) != "object") {
       types = [types];
      }
      
      if (opts == undefined) {
       opts = {delay: 0};
      }
           
      for (var i=0; i < types.length; i++) {
       var type = types[i];
       if (this.handlers[type] == undefined) {
         this.handlers[type] = [];
       }
       var h = {handler: handler, opts: opts};
       this.handlers[type].push(h);
       if (this.hooks[type] != undefined) {
         var hook_length = this.hooks[type].length;
         if (hook_length > 0) {
          if (h.opts.delay != 0) {
            this.chained_inform_handler(0, h, type);
          } else {
            for (var i=0; i < this.hooks[type].length; i++) {
             this.inform_handler(h, this.hooks[type][i]);
            }
          }
         }
       }
      };
    },
    chained_inform_handler: function(idx, h, type) {
      if (idx < this.hooks[type].length) {
        registrar.inform_handler(h, this.hooks[type][idx]);
        setTimeout(function() { registrar.chained_inform_handler(idx+1, h, type); }, h.opts.delay);
      }
    },
    inform_handler: function(h, hook) {
      h.handler(hook);
    }
  };
  
  registrar.add_handler("dropdown", function(o) {
    var hover = false;
    if (o.hover != undefined && o.hover != null) hover = o.hover;
    if (!o.hover && o.trigger) document.getElementById(o.trigger).onclick = function(){return false;};
  });
  
  var CLOSETEXT = "Close";  
  
  var START_DATE = "Pick a start date.";
    
  var MORE = "More";  
  
  var LESS = "Less";
  
  var DISABLE_MSG = "If you edit the query directly, the form below will be disabled.";
  
 
  
  var ADDED = "<img alt='' src='http://cdn.bibliocommons.com/images/icon.win.xsmall.png?1326508188' testid='img_added_success' title=''> Added";
  
  var DONE_BUTTON =  "Done"; 
  var END_DATE = "Suspension End Date"; 
  var START_DATE = "Suspension Start Date"; 
  
     var DOAUTH = true;

   

  HAS_SCHOOLS = false


var CHECK_FOR_BADGES = false;


var YOUR_USERNAME_IS = "Your username is:";

var _gaq = _gaq || [];

// Google Analytics
   var external_id = 'UA-33245732-1';
   
   _gaq.push(['_setAccount', 'UA-12552489-1'],
             ['_setDomainName', 'auto'],
             ['_trackPageview']); 
   if(typeof external_id != "undefined"){
     _gaq.push(['b._setAccount', 'UA-33245732-1'],
               ['b._setDomainName', 'auto'],
               ['b._trackPageview']);
   }
   (function() {
     var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
     ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
     (document.getElementsByTagName('head')[0] || document.getElementsByTagName('body')[0]).appendChild(ga);
   })();

var LIBRARY_CHANGE_MESSAGE = "You are about to leave Austin Public Library. Click 'Okay' to continue to __DESTINATION__. Click 'Cancel' to stay on this page.";
var BYPASS_SITE_CHANGE_CONFIRMATION = true;
var localized_validator_messages = {
  accept_terms: {
    required: "You must accept the terms."
  }
  , user_name:{
    remote:  "Someone already has that username"
  }
  , validExactPwd: "Your password must be {0} characters in length"
  , validExactPin:  "Your PIN must be {0} numeric digits"
  , required: "This field is required."
  , remote: "Please fix this field."
  , email: "Please enter a valid email address."
  , url: "Please enter a valid URL."
  , date: "Please enter a valid date."
  , dateISO: "Please enter a valid date (ISO)."
  , number: "Please enter a valid number."
  , digits: "Please enter only digits."
  , creditcard: "Please enter a valid credit card number."
  , equalTo: "Please enter the same value again."
  , accept: "Please enter a value with a valid extension."
  , maxlength: "Please enter no more than {0} characters."
  , minlength: "Please enter at least {0} characters."
  , rangelength: "Please enter a value between {0} and {1} characters long."
  , range: "Please enter a value between {0} and {1}."
  , max: "Please enter a value less than or equal to {0}."
  , min: "Please enter a value greater than or equal to {0}."
};



