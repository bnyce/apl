<?php
/**
 * @file
 * coa_contact_us.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function coa_contact_us_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_contact_information';
  $strongarm->value = 0;
  $export['comment_anonymous_contact_information'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_contact_information';
  $strongarm->value = '0';
  $export['comment_contact_information'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_contact_information';
  $strongarm->value = 1;
  $export['comment_default_mode_contact_information'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_contact_information';
  $strongarm->value = '50';
  $export['comment_default_per_page_contact_information'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_contact_information';
  $strongarm->value = 1;
  $export['comment_form_location_contact_information'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_contact_information';
  $strongarm->value = '1';
  $export['comment_preview_contact_information'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_contact_information';
  $strongarm->value = 1;
  $export['comment_subject_field_contact_information'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_contact_information';
  $strongarm->value = '0';
  $export['language_content_type_contact_information'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_contact_information';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_contact_information'] = $strongarm;

  return $export;
}
