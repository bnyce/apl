<?php
/**
 * @file
 * meeting_rooms_2014.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function meeting_rooms_2014_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function meeting_rooms_2014_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function meeting_rooms_2014_node_info() {
  $items = array(
    'group' => array(
      'name' => t('Group'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Group Name'),
      'help' => '',
    ),
    'room_reservation' => array(
      'name' => t('Room Reservation'),
      'base' => 'node_content',
      'description' => t('Meeting Room requests for January 1, 2014 and later...

Please note that your request is not complete until an Austin Public Library staff member confirms your request. Please allow 5 days for processing. We will confirm your request or inquire further by 
phone or email.'),
      'has_title' => '1',
      'title_label' => t('Topic'),
      'help' => '',
    ),
  );
  return $items;
}
