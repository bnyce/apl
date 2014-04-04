<?php
/**
 * @file
 * library_services.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function library_services_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'administrator',
      1 => 'blogger',
      2 => 'library service editor',
      3 => 'pio',
    ),
    'module' => 'node',
  );

  // Exported permission: create services content.
  $permissions['create services content'] = array(
    'name' => 'create services content',
    'roles' => array(
      0 => 'library service editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any services content.
  $permissions['delete any services content'] = array(
    'name' => 'delete any services content',
    'roles' => array(
      0 => 'library service editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own services content.
  $permissions['delete own services content'] = array(
    'name' => 'delete own services content',
    'roles' => array(
      0 => 'library service editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 18.
  $permissions['delete terms in 18'] = array(
    'name' => 'delete terms in 18',
    'roles' => array(
      0 => 'library service editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 19.
  $permissions['delete terms in 19'] = array(
    'name' => 'delete terms in 19',
    'roles' => array(
      0 => 'library service editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any services content.
  $permissions['edit any services content'] = array(
    'name' => 'edit any services content',
    'roles' => array(
      0 => 'library service editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own services content.
  $permissions['edit own services content'] = array(
    'name' => 'edit own services content',
    'roles' => array(
      0 => 'library service editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in 18.
  $permissions['edit terms in 18'] = array(
    'name' => 'edit terms in 18',
    'roles' => array(
      0 => 'library service editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 19.
  $permissions['edit terms in 19'] = array(
    'name' => 'edit terms in 19',
    'roles' => array(
      0 => 'library service editor',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
