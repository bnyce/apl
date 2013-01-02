<?php
/**
 * @file
 * suggest_a_title.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function suggest_a_title_user_default_permissions() {
  $permissions = array();

  // Exported permission: create field_follow_up.
  $permissions['create field_follow_up'] = array(
    'name' => 'create field_follow_up',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_most_recent_email_sent.
  $permissions['create field_most_recent_email_sent'] = array(
    'name' => 'create field_most_recent_email_sent',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create suggest_a_title content.
  $permissions['create suggest_a_title content'] = array(
    'name' => 'create suggest_a_title content',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'materials selector',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any suggest_a_title content.
  $permissions['delete any suggest_a_title content'] = array(
    'name' => 'delete any suggest_a_title content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own suggest_a_title content.
  $permissions['delete own suggest_a_title content'] = array(
    'name' => 'delete own suggest_a_title content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any suggest_a_title content.
  $permissions['edit any suggest_a_title content'] = array(
    'name' => 'edit any suggest_a_title content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit field_follow_up.
  $permissions['edit field_follow_up'] = array(
    'name' => 'edit field_follow_up',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_most_recent_email_sent.
  $permissions['edit field_most_recent_email_sent'] = array(
    'name' => 'edit field_most_recent_email_sent',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_follow_up.
  $permissions['edit own field_follow_up'] = array(
    'name' => 'edit own field_follow_up',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_most_recent_email_sent.
  $permissions['edit own field_most_recent_email_sent'] = array(
    'name' => 'edit own field_most_recent_email_sent',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own suggest_a_title content.
  $permissions['edit own suggest_a_title content'] = array(
    'name' => 'edit own suggest_a_title content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: view field_follow_up.
  $permissions['view field_follow_up'] = array(
    'name' => 'view field_follow_up',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_most_recent_email_sent.
  $permissions['view field_most_recent_email_sent'] = array(
    'name' => 'view field_most_recent_email_sent',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_follow_up.
  $permissions['view own field_follow_up'] = array(
    'name' => 'view own field_follow_up',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_most_recent_email_sent.
  $permissions['view own field_most_recent_email_sent'] = array(
    'name' => 'view own field_most_recent_email_sent',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
