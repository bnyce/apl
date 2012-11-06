<?php
/**
 * @file
 * pathologic_link_fixer.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function pathologic_link_fixer_filter_default_formats() {
  $formats = array();

  // Exported format: Truly Unfiltered HTML.
  $formats['truly_unfiltered_html'] = array(
    'format' => 'truly_unfiltered_html',
    'name' => 'Truly Unfiltered HTML',
    'cache' => '1',
    'status' => '1',
    'weight' => '-10',
    'filters' => array(
      'pathologic' => array(
        'weight' => '50',
        'status' => '1',
        'settings' => array(
          'local_paths' => '',
          'protocol_style' => 'path',
        ),
      ),
    ),
  );

  return $formats;
}
