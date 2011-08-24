<?php
/**
 * @file
 * coa_workbench_roles_and_permissions.features.user_role.inc
 */

/**
 * Implementation of hook_user_default_roles().
 */
function coa_workbench_roles_and_permissions_user_default_roles() {
  $roles = array();

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  // Exported role: approver
  $roles['approver'] = array(
    'name' => 'approver',
    'weight' => '5',
  );

  // Exported role: author
  $roles['author'] = array(
    'name' => 'author',
    'weight' => '3',
  );

  // Exported role: dept_admin
  $roles['dept_admin'] = array(
    'name' => 'dept_admin',
    'weight' => '7',
  );

  // Exported role: developer
  $roles['developer'] = array(
    'name' => 'developer',
    'weight' => '4',
  );

  // Exported role: pio
  $roles['pio'] = array(
    'name' => 'pio',
    'weight' => '6',
  );

  return $roles;
}
