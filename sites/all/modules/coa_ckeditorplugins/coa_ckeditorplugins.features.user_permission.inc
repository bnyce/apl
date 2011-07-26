<?php
/**
 * @file
 * coa_ckeditorplugins.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function coa_ckeditorplugins_user_default_permissions() {
  $permissions = array();

  // Exported permission: access kcfinder
  $permissions['access kcfinder'] = array(
    'name' => 'access kcfinder',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'kcfinder',
  );

  return $permissions;
}
