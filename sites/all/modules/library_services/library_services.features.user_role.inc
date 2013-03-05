<?php
/**
 * @file
 * library_services.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function library_services_user_default_roles() {
  $roles = array();

  // Exported role: library service editor.
  $roles['library service editor'] = array(
    'name' => 'library service editor',
    'weight' => '7',
  );

  return $roles;
}
