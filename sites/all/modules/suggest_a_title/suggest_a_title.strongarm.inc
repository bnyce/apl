<?php
/**
 * @file
 * suggest_a_title.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function suggest_a_title_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clientside_validation_filter_paths';
  $strongarm->value = '1';
  $export['clientside_validation_filter_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clientside_validation_path_list';
  $strongarm->value = '*/webform*
*suggest-a-title*';
  $export['clientside_validation_path_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clientside_validation_validate_all';
  $strongarm->value = '1';
  $export['clientside_validation_validate_all'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clientside_validation_validate_specific';
  $strongarm->value = '';
  $export['clientside_validation_validate_specific'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_suggest_a_title';
  $strongarm->value = '0';
  $export['comment_anonymous_suggest_a_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_suggest_a_title';
  $strongarm->value = 1;
  $export['comment_default_mode_suggest_a_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_suggest_a_title';
  $strongarm->value = '50';
  $export['comment_default_per_page_suggest_a_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_suggest_a_title';
  $strongarm->value = 1;
  $export['comment_form_location_suggest_a_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_suggest_a_title';
  $strongarm->value = '1';
  $export['comment_preview_suggest_a_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_suggest_a_title';
  $strongarm->value = 1;
  $export['comment_subject_field_suggest_a_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_suggest_a_title';
  $strongarm->value = '1';
  $export['comment_suggest_a_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_messages_debug_visible_div';
  $strongarm->value = 0;
  $export['disable_messages_debug_visible_div'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_messages_enable';
  $strongarm->value = 1;
  $export['disable_messages_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_messages_enable_debug';
  $strongarm->value = 0;
  $export['disable_messages_enable_debug'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_messages_exclude_users';
  $strongarm->value = '';
  $export['disable_messages_exclude_users'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_messages_filter_by_page';
  $strongarm->value = '2';
  $export['disable_messages_filter_by_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_messages_ignore_case';
  $strongarm->value = 1;
  $export['disable_messages_ignore_case'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_messages_ignore_patterns';
  $strongarm->value = '.*has been created.*
.*has been updated.*';
  $export['disable_messages_ignore_patterns'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_messages_ignore_regex';
  $strongarm->value = array(
    0 => '/^.*has been created.*$/i',
    1 => '/^.*has been updated.*$/i',
  );
  $export['disable_messages_ignore_regex'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_messages_page_filter_paths';
  $strongarm->value = 'suggest*';
  $export['disable_messages_page_filter_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__suggest_a_title';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '8',
        ),
        'redirect' => array(
          'weight' => '9',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__suggest_a_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_suggest_a_title';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_suggest_a_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_suggest_a_title';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_suggest_a_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_buttons_edit_delete_edit_suggest_a_title';
  $strongarm->value = 'Delete!';
  $export['node_buttons_edit_delete_edit_suggest_a_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_buttons_edit_preview_edit_suggest_a_title';
  $strongarm->value = 'Preview';
  $export['node_buttons_edit_preview_edit_suggest_a_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_buttons_edit_preview_new_suggest_a_title';
  $strongarm->value = 'Preview';
  $export['node_buttons_edit_preview_new_suggest_a_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_buttons_edit_save_edit_suggest_a_title';
  $strongarm->value = 'Update';
  $export['node_buttons_edit_save_edit_suggest_a_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_buttons_edit_save_new_suggest_a_title';
  $strongarm->value = 'Submit your suggestion';
  $export['node_buttons_edit_save_new_suggest_a_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_suggest_a_title';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_suggest_a_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_suggest_a_title';
  $strongarm->value = '0';
  $export['node_preview_suggest_a_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_suggest_a_title';
  $strongarm->value = 0;
  $export['node_submitted_suggest_a_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_suggest_a_title_pattern';
  $strongarm->value = 'suggest-a-title/[node:nid]/[node:title]';
  $export['pathauto_node_suggest_a_title_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_paths';
  $strongarm->value = array(
    0 => array(
      'path' => 'node/#/revisions/#/view',
      'callbacks' => array(),
      'wildcards' => array(
        1 => 'node:nid',
        3 => 'node:vid',
      ),
      'weight' => 10,
      'fit' => 21,
    ),
    1 => array(
      'path' => 'comment/reply/#/#',
      'callbacks' => array(),
      'wildcards' => array(
        2 => 'node:nid',
        3 => 'comment:cid',
      ),
      'weight' => 3,
      'fit' => 12,
    ),
    2 => array(
      'path' => 'taxonomy/term/#',
      'callbacks' => array(),
      'wildcards' => array(
        2 => 'taxonomy:tid',
      ),
      'weight' => 1,
      'fit' => 6,
    ),
    3 => array(
      'path' => 'comment/reply/#',
      'callbacks' => array(),
      'wildcards' => array(
        2 => 'node:nid',
      ),
      'weight' => 1,
      'fit' => 6,
    ),
    4 => array(
      'path' => 'comment/#/edit',
      'callbacks' => array(),
      'wildcards' => array(
        1 => 'comment:cid',
      ),
      'weight' => 2,
      'fit' => 5,
    ),
    5 => array(
      'path' => 'comment/#/delete',
      'callbacks' => array(),
      'wildcards' => array(
        1 => 'comment:cid',
      ),
      'weight' => 2,
      'fit' => 5,
    ),
    6 => array(
      'path' => 'node/#',
      'callbacks' => array(),
      'wildcards' => array(
        1 => 'node:nid',
      ),
      'weight' => 1,
      'fit' => 2,
    ),
    7 => array(
      'path' => 'blog/#',
      'callbacks' => array(),
      'wildcards' => array(
        1 => 'blog:uid',
      ),
      'weight' => 1,
      'fit' => 2,
    ),
  );
  $export['themekey_paths'] = $strongarm;

  return $export;
}
