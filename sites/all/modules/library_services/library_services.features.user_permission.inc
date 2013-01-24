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

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
      2 => 'blogger',
      3 => 'library service editor',
      4 => 'pio',
    ),
    'module' => 'node',
  );

  // Exported permission: access contextual links.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
      2 => 'blogger',
      3 => 'library service editor',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access toolbar.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      0 => 'blogger',
      1 => 'library service editor',
      2 => 'meeting rooms administrator',
      3 => 'pio',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      0 => 'administrator',
      1 => 'library service editor',
      2 => 'pio',
    ),
    'module' => 'taxonomy',
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

  // Exported permission: delete terms in 17.
  $permissions['delete terms in 17'] = array(
    'name' => 'delete terms in 17',
    'roles' => array(
      0 => 'library service editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 18.
  $permissions['delete terms in 18'] = array(
    'name' => 'delete terms in 18',
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

  // Exported permission: edit terms in 17.
  $permissions['edit terms in 17'] = array(
    'name' => 'edit terms in 17',
    'roles' => array(
      0 => 'library service editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 18.
  $permissions['edit terms in 18'] = array(
    'name' => 'edit terms in 18',
    'roles' => array(
      0 => 'library service editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: use text format full_html.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      0 => 'administrator',
      1 => 'blogger',
      2 => 'library service editor',
      3 => 'pio',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
