<?php
/**
 * @file
 * news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function news_user_default_permissions() {
  $permissions = array();

  // Exported permission: create alert content.
  $permissions['create alert content'] = array(
    'name' => 'create alert content',
    'roles' => array(
      0 => 'administrator',
      1 => 'pio',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any alert content.
  $permissions['delete any alert content'] = array(
    'name' => 'delete any alert content',
    'roles' => array(
      0 => 'administrator',
      1 => 'pio',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own alert content.
  $permissions['delete own alert content'] = array(
    'name' => 'delete own alert content',
    'roles' => array(
      0 => 'administrator',
      1 => 'pio',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any alert content.
  $permissions['edit any alert content'] = array(
    'name' => 'edit any alert content',
    'roles' => array(
      0 => 'administrator',
      1 => 'pio',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own alert content.
  $permissions['edit own alert content'] = array(
    'name' => 'edit own alert content',
    'roles' => array(
      0 => 'administrator',
      1 => 'pio',
    ),
    'module' => 'node',
  );

  return $permissions;
}
