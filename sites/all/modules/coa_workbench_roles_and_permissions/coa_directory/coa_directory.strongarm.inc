<?php
/**
 * @file
 * coa_directory.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function coa_directory_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_customer_service_entry';
  $strongarm->value = 0;
  $export['comment_anonymous_customer_service_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_customer_service_entry';
  $strongarm->value = '1';
  $export['comment_customer_service_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_customer_service_entry';
  $strongarm->value = 1;
  $export['comment_default_mode_customer_service_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_customer_service_entry';
  $strongarm->value = '50';
  $export['comment_default_per_page_customer_service_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_customer_service_entry';
  $strongarm->value = 1;
  $export['comment_form_location_customer_service_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_customer_service_entry';
  $strongarm->value = '1';
  $export['comment_preview_customer_service_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_customer_service_entry';
  $strongarm->value = 1;
  $export['comment_subject_field_customer_service_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_customer_service_entry';
  $strongarm->value = '0';
  $export['language_content_type_customer_service_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_customer_service_entry';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_customer_service_entry'] = $strongarm;

  return $export;
}
