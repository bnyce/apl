<?php
/**
 * @file
 * library_blogs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_blogs_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function library_blogs_flag_default_flags() {
  $flags = array();
  // Exported flag: "Blog Comment Moderation".
  $flags['blog_comment_moderation'] = array(
    'content_type' => 'comment',
    'title' => 'Blog Comment Moderation',
    'global' => '0',
    'types' => array(
      0 => 'comment_node_blog',
    ),
    'flag_short' => 'Flag for moderation',
    'flag_long' => 'Flag this comment for moderation',
    'flag_message' => 'You flagged this comment for moderation',
    'unflag_short' => 'Unflag this comment',
    'unflag_long' => 'Unflag this comment',
    'unflag_message' => 'You unflagged this comment',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_comment' => 1,
    'api_version' => 2,
    'module' => 'library_blogs',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}
