(function ($) {

/**
 * Custom summary for the module vertical tab.
 */
Drupal.behaviors.vertical_tabs_exampleFieldsetSummaries = {
  attach: function (context) {
    // Use the fieldset class to identify the vertical tab element
    $('fieldset#edit-workbench-notification', context).drupalSetSummary(function (context) {
      // Depending on the checkbox status, the settings will be customized, so
      // update the summary with the custom setting textfield string or a use a
      // default string.
      if ($('#edit-workbench-notification-enabled', context).attr('checked')) {
        return Drupal.checkPlain($('#edit-workbench-notification-custom-setting', context).val());
      }
      else {
        return Drupal.t('Using default');
      }
    });
  }
};

})(jQuery);
