Drupal.behaviors.beta = {
  attach: function(context, settings) {
    (function ($) {
      /* =============================================================================
         Add 'x' close button and handler to status messages.
         ========================================================================== */
      $.fn.closeButtonMessages = function() {
        $('.messages').each(function() {
          if ($(this).find('a.close').length < 1) {
            $(this).prepend('<a class="close" href="#" title="' + Drupal.t('Close') + '">x</a>');
          }
        });
        $('.messages a.close').click(function(e) {
          e.preventDefault();
          $(this).parent().fadeOut('slow');
        });
      };
      $().closeButtonMessages();
    })(jQuery);
  }
}
