<?php
/**
 * @file
 * image_rotator.features.inc
 */

/**
 * Implements hook_views_api().
 */
function image_rotator_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function image_rotator_node_info() {
  $items = array(
    'image_rotator' => array(
      'name' => t('Image Rotator'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
