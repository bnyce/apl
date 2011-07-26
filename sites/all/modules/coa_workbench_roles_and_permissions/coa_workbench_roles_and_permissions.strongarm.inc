<?php
/**
 * @file
 * coa_workbench_roles_and_permissions.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function coa_workbench_roles_and_permissions_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access';
  $strongarm->value = 'taxonomy';
  $export['workbench_access'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_allow_multiple';
  $strongarm->value = 1;
  $export['workbench_access_allow_multiple'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_taxonomy';
  $strongarm->value = array(
    'business_portal' => 'business_portal',
    'development_taxonomy' => 'development_taxonomy',
    'environment_taxonomy' => 'environment_taxonomy',
    'government_taxonomy' => 'government_taxonomy',
    'portal' => 'portal',
    'forums' => 0,
    'calander_departments' => 0,
    'department' => 0,
    'departmental' => 0,
    'development' => 0,
    'home_page_category' => 0,
    'tags' => 0,
    'spobrastoge' => 0,
  );
  $export['workbench_access_taxonomy'] = $strongarm;

  return $export;
}
