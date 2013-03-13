<?php
/**
 * @file
 * library_services.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function library_services_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'lib_services_nav';
  $content->admin_title = 'Library Services Navigation';
  $content->admin_description = '';
  $content->category = 'Library Services';
  $content->settings = array(
    'admin_title' => 'Library Services Navigation',
    'title' => '',
    'body' => '<a href="/libraryservices">&laquo; Library Services: Home</a>',
    'format' => 'truly_unfiltered_html',
    'substitute' => 1,
  );
  $export['lib_services_nav'] = $content;

  return $export;
}
