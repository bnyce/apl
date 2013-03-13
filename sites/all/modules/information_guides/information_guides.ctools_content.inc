<?php
/**
 * @file
 * information_guides.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function information_guides_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'new_info_guides_nav';
  $content->admin_title = 'New info guides nav';
  $content->admin_description = '';
  $content->category = 'New Information Guides';
  $content->settings = array(
    'admin_title' => 'New info guides nav',
    'title' => '',
    'body' => '<p class="nav"><a href="/new-information-guides">&laquo; Information Guides: Home</a></p>
',
    'format' => 'truly_unfiltered_html',
    'substitute' => 1,
  );
  $export['new_info_guides_nav'] = $content;

  return $export;
}
