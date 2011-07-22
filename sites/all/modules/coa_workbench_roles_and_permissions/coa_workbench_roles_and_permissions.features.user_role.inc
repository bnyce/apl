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
    'weight' => '4',
  );

  // Exported role: author
  $roles['author'] = array(
    'name' => 'author',
    'weight' => '3',
  );

  // Exported role: dept_admin
  $roles['dept_admin'] = array(
    'name' => 'dept_admin',
    'weight' => '6',
  );

  // Exported role: pio
  $roles['pio'] = array(
    'name' => 'pio',
    'weight' => '5',
  );

  return $roles;
}
