<?php
/**
 * @file
 * coa_department_page_and_feature_views.features.inc
 */

/**
 * Implementation of hook_views_api().
 */
function coa_department_page_and_feature_views_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}
