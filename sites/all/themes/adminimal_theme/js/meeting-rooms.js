(function ($) {
  Drupal.behaviors.room_reservation_node_form = {
    attach: function(context) {
      $('.form-type-date-popup input[id*="datepicker"]', context).once('room-reservation-node-form', function() {
        $(this).change(function() {
          $('#' + $(this).attr('id').replace(/value/g, 'value2')).val($(this).val());
        });
      });
    }
  };
}(jQuery));
