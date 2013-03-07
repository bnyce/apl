<?php
/**
 * @file
 * library_blogs.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function library_blogs_user_default_roles() {
  $roles = array();

  // Exported role: blog moderator.
  $roles['blog moderator'] = array(
    'name' => 'blog moderator',
    'weight' => '6',
  );

  // Exported role: blogger.
  $roles['blogger'] = array(
    'name' => 'blogger',
    'weight' => '4',
  );

  return $roles;
}
