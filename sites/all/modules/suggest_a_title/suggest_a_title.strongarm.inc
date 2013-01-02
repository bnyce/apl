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
  $strongarm->name = 'comment_anonymous_suggest_a_title';
  $strongarm->value = 0;
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
  $strongarm->name = 'node_options_suggest_a_title';
  $strongarm->value = array(
    0 => 'status',
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

  return $export;
}
