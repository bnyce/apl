<?php
/**
 * @file
 * apl_2014_menus_and_minipanels.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function apl_2014_menus_and_minipanels_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
