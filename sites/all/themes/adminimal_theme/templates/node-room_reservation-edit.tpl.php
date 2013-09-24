<?php
  dpm($form);
//echo "form id=".$form_id;
function adminimal_theme_form_alter(&$form, &$form_state, $form_id) {
//switch ($form_id) {
 // case 'room_reservation_node_form': {
    //$form['field_room']['#states'] = array(
    $form['edit-field-room-und']['settings']['#states'] = array(
      //'visible' => array(':input[id="field_location"]' => array('value' => 'Austin History Center'),
      'visible' => array(':input[id="edit-field-location-und"]' => array('value' => 'Austin History Center'),
    ),
  ); 

// }
//}
}




//echo "hi";
  print drupal_render($form);
  //return $form;


  //Enable below to show all Array Variables of Form

  //print '<pre>';
  //print_r($form);
  //print '</pre>';
?>
