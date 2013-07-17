<?php
/**
 * @file
 * youth_subsite.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function youth_subsite_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function youth_subsite_views_api() {
  return array("api" => "3.0");
}
