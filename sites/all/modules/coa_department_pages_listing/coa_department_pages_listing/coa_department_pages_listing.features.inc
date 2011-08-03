<?php
/**
 * @file
 * coa_department_pages_listing.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function coa_department_pages_listing_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}

/**
 * Implementation of hook_views_api().
 */
function coa_department_pages_listing_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}
