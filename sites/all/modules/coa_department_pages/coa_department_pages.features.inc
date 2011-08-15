<?php
/**
 * @file
 * coa_department_pages.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function coa_department_pages_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implementation of hook_node_info().
 */
function coa_department_pages_node_info() {
  $items = array(
    'department' => array(
      'name' => t('Department or Program Home Page'),
      'base' => 'node_content',
      'description' => t('Create a Department or Program home page complete with Department or Program Name,  Summary (for lists), Mission Statement, Message and references to select features (like News, Photo Gallery, Video, Blog or Forums).'),
      'has_title' => '1',
      'title_label' => t('Department or Program Name'),
      'help' => t('The Department or Program Name should exactly or closely match the name selected in the Section Select.  If this Department or Program can\'t be found in the Section Select then contact CTM to request adding your account to the editorial section, or if the program is new, adding a term to the Department taxonomy.'),
    ),
  );
  return $items;
}