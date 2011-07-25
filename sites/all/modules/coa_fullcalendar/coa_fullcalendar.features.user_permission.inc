<?php
/**
 * @file
 * coa_fullcalendar.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function coa_fullcalendar_user_default_permissions() {
  $permissions = array();

  // Exported permission: calendar update
  $permissions['calendar update'] = array(
    'name' => 'calendar update',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'calendar_update',
  );

  return $permissions;
}
