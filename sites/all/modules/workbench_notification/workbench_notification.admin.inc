<?php

/**
* @file
* Administration page callbacks for the workbench_notification module.
*/
/**
* Form builder. Configure annotations.
*
* @ingroup forms
* @see system_settings_form().
*/
function workbench_notification_admin_form() {
// Get an array of node types with internal names as keys and
// "friendly names" as values. E.g.,
// array('page' => ’Basic Page, 'article' => 'Articles')
 $types = node_type_get_types();
 foreach($types as $node_type) {
   $options[$node_type->type] = $node_type->name;
 }

 $form['workbench_notification_node_types'] = array(
		'#type' => 'checkboxes',
		'#title' => t('Users can send notifications for these content types'),
		'#options' => $options,
		'#default_value' => variable_get('workbench_notification_node_types', array('article', 'page')),
		'#description' => t('An "Email Notification" tab be available on these content types.'),
       );
 $form['#submit'][] = 'workbench_notification_admin_form_submit';
 return system_settings_form($form);
}

/**
* Custom settings submission.
*/
function workbench_notification_admin_form_submit($form, $form_state) {
  $results = $form_state['values']['workbench_notification_node_types'];
  $results = array_filter($results); // filter out empty options
  $form_state['values']['workbench_notification_node_types'] = $results;
  //variable_set('workbench_notification_node_types', $results);
  if(function_exists('dpm')) {
      $values = $form_state['values'];
      dpm($values, "form_state[values] - workbench_notification_admin_form_submit");
      dpm($results, "results - workbench_notification_admin_form_submit");
  }
}