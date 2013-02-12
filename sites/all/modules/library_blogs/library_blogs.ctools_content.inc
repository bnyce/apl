<?php
/**
 * @file
 * library_blogs.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function library_blogs_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'comment_policy';
  $content->admin_title = 'Comment Policy';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'Comment Policy',
    'title' => 'Comment Policy',
    'body' => 'Posted comments do not necessarily reflect the views or position of the Library. You must be 13 or older to post a comment. Off topic or inappropriate comments will be deleted by the moderator.',
    'format' => 'truly_unfiltered_html',
    'substitute' => 1,
  );
  $export['comment_policy'] = $content;

  return $export;
}
