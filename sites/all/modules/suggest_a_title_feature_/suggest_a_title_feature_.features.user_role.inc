<?php
/**
 * @file
 * suggest_a_title_feature_.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function suggest_a_title_feature__user_default_roles() {
  $roles = array();

  // Exported role: materials selector.
  $roles['materials selector'] = array(
    'name' => 'materials selector',
    'weight' => '6',
  );

  return $roles;
}
