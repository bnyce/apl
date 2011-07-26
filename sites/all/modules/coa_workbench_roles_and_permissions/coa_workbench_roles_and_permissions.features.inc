<?php
/**
 * @file
 * coa_workbench_roles_and_permissions.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function coa_workbench_roles_and_permissions_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
