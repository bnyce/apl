<?php
/**
 * @file
 * coa_workbench_roles_and_permissions.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function coa_workbench_roles_and_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'author',
    ),
    'module' => 'node',
  );

  // Exported permission: access workbench
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      0 => 'administrator',
      1 => 'approver',
      2 => 'author',
      3 => 'dept_admin',
      4 => 'developer',
      5 => 'pio',
    ),
    'module' => 'workbench',
  );

  // Exported permission: access workbench access by role
  $permissions['access workbench access by role'] = array(
    'name' => 'access workbench access by role',
    'roles' => array(
      0 => 'administrator',
      1 => 'approver',
      2 => 'author',
      3 => 'dept_admin',
      4 => 'developer',
      5 => 'pio',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: administer workbench
  $permissions['administer workbench'] = array(
    'name' => 'administer workbench',
    'roles' => array(
      0 => 'administrator',
      1 => 'developer',
    ),
    'module' => 'workbench',
  );

  // Exported permission: administer workbench access
  $permissions['administer workbench access'] = array(
    'name' => 'administer workbench access',
    'roles' => array(
      0 => 'administrator',
      1 => 'developer',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: administer workbench moderation
  $permissions['administer workbench moderation'] = array(
    'name' => 'administer workbench moderation',
    'roles' => array(
      0 => 'administrator',
      1 => 'developer',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: assign workbench access
  $permissions['assign workbench access'] = array(
    'name' => 'assign workbench access',
    'roles' => array(
      0 => 'administrator',
      1 => 'developer',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: batch update workbench access
  $permissions['batch update workbench access'] = array(
    'name' => 'batch update workbench access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: bypass workbench moderation
  $permissions['bypass workbench moderation'] = array(
    'name' => 'bypass workbench moderation',
    'roles' => array(
      0 => 'administrator',
      1 => 'developer',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: create calender_events content
  $permissions['create calender_events content'] = array(
    'name' => 'create calender_events content',
    'roles' => array(
      0 => 'administrator',
      1 => 'approver',
      2 => 'author',
      3 => 'dept_admin',
      4 => 'developer',
      5 => 'pio',
    ),
    'module' => 'node',
  );

  // Exported permission: create department content
  $permissions['create department content'] = array(
    'name' => 'create department content',
    'roles' => array(
      0 => 'administrator',
      1 => 'dept_admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any calender_events content
  $permissions['delete any calender_events content'] = array(
    'name' => 'delete any calender_events content',
    'roles' => array(
      0 => 'administrator',
      1 => 'approver',
      2 => 'dept_admin',
      3 => 'developer',
      4 => 'pio',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any department content
  $permissions['delete any department content'] = array(
    'name' => 'delete any department content',
    'roles' => array(
      0 => 'administrator',
      1 => 'dept_admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own calender_events content
  $permissions['delete own calender_events content'] = array(
    'name' => 'delete own calender_events content',
    'roles' => array(
      0 => 'administrator',
      1 => 'approver',
      2 => 'author',
      3 => 'dept_admin',
      4 => 'developer',
      5 => 'pio',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own department content
  $permissions['delete own department content'] = array(
    'name' => 'delete own department content',
    'roles' => array(
      0 => 'administrator',
      1 => 'dept_admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'pio',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any calender_events content
  $permissions['edit any calender_events content'] = array(
    'name' => 'edit any calender_events content',
    'roles' => array(
      0 => 'administrator',
      1 => 'approver',
      2 => 'dept_admin',
      3 => 'developer',
      4 => 'pio',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any department content
  $permissions['edit any department content'] = array(
    'name' => 'edit any department content',
    'roles' => array(
      0 => 'administrator',
      1 => 'dept_admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own calender_events content
  $permissions['edit own calender_events content'] = array(
    'name' => 'edit own calender_events content',
    'roles' => array(
      0 => 'administrator',
      1 => 'approver',
      2 => 'author',
      3 => 'dept_admin',
      4 => 'developer',
      5 => 'pio',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own department content
  $permissions['edit own department content'] = array(
    'name' => 'edit own department content',
    'roles' => array(
      0 => 'administrator',
      1 => 'dept_admin',
    ),
    'module' => 'node',
  );

  // Exported permission: moderate content from Draft to Needs Review
  $permissions['moderate content from Draft to Needs Review'] = array(
    'name' => 'moderate content from Draft to Needs Review',
    'roles' => array(
      0 => 'administrator',
      1 => 'approver',
      2 => 'author',
      3 => 'dept_admin',
      4 => 'developer',
      5 => 'pio',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from Needs Review to Draft
  $permissions['moderate content from Needs Review to Draft'] = array(
    'name' => 'moderate content from Needs Review to Draft',
    'roles' => array(
      0 => 'administrator',
      1 => 'approver',
      2 => 'author',
      3 => 'dept_admin',
      4 => 'developer',
      5 => 'pio',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from Needs Review to Published
  $permissions['moderate content from Needs Review to Published'] = array(
    'name' => 'moderate content from Needs Review to Published',
    'roles' => array(
      0 => 'administrator',
      1 => 'approver',
      2 => 'dept_admin',
      3 => 'developer',
      4 => 'pio',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: modify department restrictions
  $permissions['modify department restrictions'] = array(
    'name' => 'modify department restrictions',
    'roles' => array(
      0 => 'administrator',
      1 => 'developer',
      2 => 'pio',
    ),
    'module' => 'coa_department_content',
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'approver',
      2 => 'pio',
    ),
    'module' => 'node',
  );

  // Exported permission: unpublish live revision
  $permissions['unpublish live revision'] = array(
    'name' => 'unpublish live revision',
    'roles' => array(
      0 => 'administrator',
      1 => 'dept_admin',
      2 => 'developer',
      3 => 'pio',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: use workbench_media add form
  $permissions['use workbench_media add form'] = array(
    'name' => 'use workbench_media add form',
    'roles' => array(
      0 => 'administrator',
      1 => 'approver',
      2 => 'author',
      3 => 'dept_admin',
      4 => 'developer',
      5 => 'pio',
    ),
    'module' => 'workbench_media',
  );

  // Exported permission: use workbench_moderation my drafts tab
  $permissions['use workbench_moderation my drafts tab'] = array(
    'name' => 'use workbench_moderation my drafts tab',
    'roles' => array(
      0 => 'administrator',
      1 => 'approver',
      2 => 'author',
      3 => 'dept_admin',
      4 => 'developer',
      5 => 'pio',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: use workbench_moderation needs review tab
  $permissions['use workbench_moderation needs review tab'] = array(
    'name' => 'use workbench_moderation needs review tab',
    'roles' => array(
      0 => 'administrator',
      1 => 'approver',
      2 => 'dept_admin',
      3 => 'developer',
      4 => 'pio',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view all unpublished content
  $permissions['view all unpublished content'] = array(
    'name' => 'view all unpublished content',
    'roles' => array(
      0 => 'administrator',
      1 => 'approver',
      2 => 'dept_admin',
      3 => 'developer',
      4 => 'pio',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view moderation history
  $permissions['view moderation history'] = array(
    'name' => 'view moderation history',
    'roles' => array(
      0 => 'administrator',
      1 => 'approver',
      2 => 'author',
      3 => 'dept_admin',
      4 => 'developer',
      5 => 'pio',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view moderation messages
  $permissions['view moderation messages'] = array(
    'name' => 'view moderation messages',
    'roles' => array(
      0 => 'administrator',
      1 => 'approver',
      2 => 'author',
      3 => 'dept_admin',
      4 => 'developer',
      5 => 'pio',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view own unpublished content
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
      2 => 'author',
    ),
    'module' => 'node',
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'approver',
      2 => 'author',
      3 => 'dept_admin',
      4 => 'developer',
      5 => 'pio',
    ),
    'module' => 'node',
  );

  // Exported permission: view workbench access information
  $permissions['view workbench access information'] = array(
    'name' => 'view workbench access information',
    'roles' => array(
      0 => 'administrator',
      1 => 'approver',
      2 => 'author',
      3 => 'dept_admin',
      4 => 'developer',
      5 => 'pio',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: view workbench taxonomy pages
  $permissions['view workbench taxonomy pages'] = array(
    'name' => 'view workbench taxonomy pages',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'workbench_access',
  );

  return $permissions;
}
