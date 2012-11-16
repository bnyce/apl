<?php
/**
 * @file
 * suggest_a_title_feature_.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function suggest_a_title_feature__user_default_permissions() {
  $permissions = array();

  // Exported permission: create suggest_a_title content.
  $permissions['create suggest_a_title content'] = array(
    'name' => 'create suggest_a_title content',
    'roles' => array(
      0 => 'anonymous user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
