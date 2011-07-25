<?php
/**
 * @file
 * coa_fullcalendar.features.hierarchical_select.inc
 */

/**
 * Implementation of hook_hierarchical_select_default_configs().
 */
function coa_fullcalendar_hierarchical_select_default_configs() {
$configs = array();
$config = array(
  'config_id'       => 'taxonomy-15',
  'save_lineage'    => 0,
  'enforce_deepest' => 0,
  'entity_count'    => 0,
  'require_entity'  => 0,
  'resizable'       => 1,
  'level_labels' => array(
    'status' => 0,
    'labels' => array(
      0 => '',
      1 => '',
      2 => '',
    ),
  ),
  'dropbox' => array(
    'status'    => 1,
    'title'     => 'All selections',
    'limit'     => 1,
    'reset_hs'  => 1,
  ),
  'editability' => array(
    'status' => 0,
    'item_types' => array(
    ),
    'allowed_levels' => array(
    ),
    'allow_new_levels' => 0,
    'max_levels'       => 3,
  ),
);

$configs['taxonomy-15'] = $config;
return $configs;
}
