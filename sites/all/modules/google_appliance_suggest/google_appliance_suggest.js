(function ($) {
  /**
   * Overwrites Drupal's default in misc/autocomplete.js to submit when
   * selected. This applies to clicking only.
   */
  Drupal.jsAC.prototype.select = function (node) {
    this.input.value = $(node).data('autocompleteValue');
    if($(this.input).hasClass('auto_submit')){
      this.input.form.submit();
    }
  };

  /**
   * Overwrites Drupal's default in misc/autocomplete.js to submit when a user
   * hits the enter key. Otherwise, it behaves normally.
   */
  Drupal.jsAC.prototype.onkeyup = function (input, e) {
    if (!e) {
      e = window.event;
    }
    switch (e.keyCode) {
      case 16: // Shift.
      case 17: // Ctrl.
      case 18: // Alt.
      case 20: // Caps lock.
      case 33: // Page up.
      case 34: // Page down.
      case 35: // End.
      case 36: // Home.
      case 37: // Left arrow.
      case 38: // Up arrow.
      case 39: // Right arrow.
      case 40: // Down arrow.
        return true;

      case 13: // Enter.
        this.hidePopup(e.keyCode);
        this.input.form.submit();
        return true;

      case 9:  // Tab.
      case 27: // Esc.
        this.hidePopup(e.keyCode);
        return true;

      default: // All other keys.
        if (input.value.length > 0)
          this.populatePopup();
        else
          this.hidePopup(e.keyCode);
        return true;
    }
  };
}) (jQuery);
