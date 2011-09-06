<?php
/**
 * @file
 * coa_biography.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function coa_biography_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implementation of hook_views_api().
 */
function coa_biography_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implementation of hook_node_info().
 */
function coa_biography_node_info() {
  $items = array(
    'biography' => array(
      'name' => t('Biography'),
      'base' => 'node_content',
      'description' => t('Individual biography pages and member profiles.'),
      'has_title' => '1',
      'title_label' => t('Position'),
      'help' => '',
    ),
  );
  return $items;
}
