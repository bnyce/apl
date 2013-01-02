<?php
/**
 * @file
 * suggest_a_title.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function suggest_a_title_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function suggest_a_title_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function suggest_a_title_node_info() {
  $items = array(
    'suggest_a_title' => array(
      'name' => t('Suggest a Title for Purchase'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
