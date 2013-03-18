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

  // Exported permission: access administration menu.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
      2 => 'blogger',
      3 => 'materials selector',
      4 => 'meeting rooms administrator',
      5 => 'pio',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: create field_anticipated_.
  $permissions['create field_anticipated_'] = array(
    'name' => 'create field_anticipated_',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_follow_up.
  $permissions['create field_follow_up'] = array(
    'name' => 'create field_follow_up',
    'roles' => array(
      0 => 'administrator',
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

  // Exported permission: create field_ready_to_email_.
  $permissions['create field_ready_to_email_'] = array(
    'name' => 'create field_ready_to_email_',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_selector_s_comment.
  $permissions['create field_selector_s_comment'] = array(
    'name' => 'create field_selector_s_comment',
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
    'roles' => array(
      0 => 'materials selector',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own suggest_a_title content.
  $permissions['delete own suggest_a_title content'] = array(
    'name' => 'delete own suggest_a_title content',
    'roles' => array(
      0 => 'materials selector',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any suggest_a_title content.
  $permissions['edit any suggest_a_title content'] = array(
    'name' => 'edit any suggest_a_title content',
    'roles' => array(
      0 => 'materials selector',
    ),
    'module' => 'node',
  );

  // Exported permission: edit field_anticipated_.
  $permissions['edit field_anticipated_'] = array(
    'name' => 'edit field_anticipated_',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
    ),
    'module' => 'field_permissions',
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

  // Exported permission: edit field_ready_to_email_.
  $permissions['edit field_ready_to_email_'] = array(
    'name' => 'edit field_ready_to_email_',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_selector_s_comment.
  $permissions['edit field_selector_s_comment'] = array(
    'name' => 'edit field_selector_s_comment',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_anticipated_.
  $permissions['edit own field_anticipated_'] = array(
    'name' => 'edit own field_anticipated_',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
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

  // Exported permission: edit own field_ready_to_email_.
  $permissions['edit own field_ready_to_email_'] = array(
    'name' => 'edit own field_ready_to_email_',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_selector_s_comment.
  $permissions['edit own field_selector_s_comment'] = array(
    'name' => 'edit own field_selector_s_comment',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own suggest_a_title content.
  $permissions['edit own suggest_a_title content'] = array(
    'name' => 'edit own suggest_a_title content',
    'roles' => array(
      0 => 'materials selector',
    ),
    'module' => 'node',
  );

  // Exported permission: exclude from message filtering.
  $permissions['exclude from message filtering'] = array(
    'name' => 'exclude from message filtering',
    'roles' => array(),
    'module' => 'disable_messages',
  );

  // Exported permission: view error messages.
  $permissions['view error messages'] = array(
    'name' => 'view error messages',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'blogger',
      4 => 'materials selector',
      5 => 'meeting rooms administrator',
      6 => 'pio',
    ),
    'module' => 'disable_messages',
  );

  // Exported permission: view field_anticipated_.
  $permissions['view field_anticipated_'] = array(
    'name' => 'view field_anticipated_',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
    ),
    'module' => 'field_permissions',
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

  // Exported permission: view field_ready_to_email_.
  $permissions['view field_ready_to_email_'] = array(
    'name' => 'view field_ready_to_email_',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_selector_s_comment.
  $permissions['view field_selector_s_comment'] = array(
    'name' => 'view field_selector_s_comment',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_anticipated_.
  $permissions['view own field_anticipated_'] = array(
    'name' => 'view own field_anticipated_',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
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

  // Exported permission: view own field_ready_to_email_.
  $permissions['view own field_ready_to_email_'] = array(
    'name' => 'view own field_ready_to_email_',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_selector_s_comment.
  $permissions['view own field_selector_s_comment'] = array(
    'name' => 'view own field_selector_s_comment',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view status messages.
  $permissions['view status messages'] = array(
    'name' => 'view status messages',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'blogger',
      4 => 'materials selector',
      5 => 'meeting rooms administrator',
      6 => 'pio',
    ),
    'module' => 'disable_messages',
  );

  // Exported permission: view warning messages.
  $permissions['view warning messages'] = array(
    'name' => 'view warning messages',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'blogger',
      4 => 'materials selector',
      5 => 'meeting rooms administrator',
      6 => 'pio',
    ),
    'module' => 'disable_messages',
  );

  return $permissions;
}
