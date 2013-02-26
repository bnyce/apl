<?php
/**
 * @file
 * information_guides.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function information_guides_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
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
function information_guides_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function information_guides_node_info() {
  $items = array(
    'information_guide' => array(
      'name' => t('Information Guide'),
      'base' => 'node_content',
      'description' => t('Job searching, locating people, marketing, fund raising, finding statistics, and more.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'new_information_guides' => array(
      'name' => t('New Information Guides'),
      'base' => 'node_content',
      'description' => t('A test for a new information guide system'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
