<?php
/**
 * @file
 * library_services.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_services_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function library_services_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function library_services_node_info() {
  $items = array(
    'services' => array(
      'name' => t('Services'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Service Name'),
      'help' => '',
    ),
  );
  return $items;
}
