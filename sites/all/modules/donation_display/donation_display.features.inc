<?php
/**
 * @file
 * donation_display.features.inc
 */

/**
 * Implements hook_node_info().
 */
function donation_display_node_info() {
  $items = array(
    'donation' => array(
      'name' => t('Donation'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
