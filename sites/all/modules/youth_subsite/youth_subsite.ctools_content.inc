<?php
/**
 * @file
 * youth_subsite.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function youth_subsite_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'calendar_button';
  $content->admin_title = '';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<img id="calendar_button" src="http://austinlibrary.com/images/youth_calendar.png"/>',
    'format' => 'truly_unfiltered_html',
    'substitute' => TRUE,
  );
  $export['calendar_button'] = $content;

  return $export;
}
