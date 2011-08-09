<?php
/**
 * @file
 * coa_fullcalendar.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function coa_fullcalendar_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_inline';
  $strongarm->value = 0;
  $export['colorbox_inline'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_load';
  $strongarm->value = 1;
  $export['colorbox_load'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_calender_events';
  $strongarm->value = 0;
  $export['comment_anonymous_calender_events'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_calender_events';
  $strongarm->value = '0';
  $export['comment_calender_events'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_calender_events';
  $strongarm->value = 0;
  $export['comment_default_mode_calender_events'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_calender_events';
  $strongarm->value = '50';
  $export['comment_default_per_page_calender_events'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_calender_events';
  $strongarm->value = 0;
  $export['comment_form_location_calender_events'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_calender_events';
  $strongarm->value = '0';
  $export['comment_preview_calender_events'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_calender_events';
  $strongarm->value = 0;
  $export['comment_subject_field_calender_events'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_calender_events';
  $strongarm->value = '0';
  $export['language_content_type_calender_events'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_calender_events';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_calender_events'] = $strongarm;

  return $export;
}