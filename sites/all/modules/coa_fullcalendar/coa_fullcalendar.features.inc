<?php
/**
 * @file
 * coa_fullcalendar.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function coa_fullcalendar_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implementation of hook_node_info().
 */
function coa_fullcalendar_node_info() {
  $items = array(
    'calender_events' => array(
      'name' => t('Calender Events'),
      'base' => 'node_content',
      'description' => t('Calendar Events'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
