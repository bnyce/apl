<?php
/**
 * @file
 * coa_directory.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function coa_directory_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implementation of hook_views_api().
 */
function coa_directory_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implementation of hook_node_info().
 */
function coa_directory_node_info() {
  $items = array(
    'customer_service_entry' => array(
      'name' => t('Customer Service Entry'),
      'base' => 'node_content',
      'description' => t('Any service that needs to be listed in the customer services directory'),
      'has_title' => '1',
      'title_label' => t('Service'),
      'help' => '',
    ),
  );
  return $items;
}
