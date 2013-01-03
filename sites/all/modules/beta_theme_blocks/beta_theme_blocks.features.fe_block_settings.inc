<?php
/**
 * @file
 * beta_theme_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function beta_theme_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'panels_mini-front_page_highlighted_area' => array(
      'delta' => 'front_page_highlighted_area',
      'module' => 'panels_mini',
    ),
    'panels_mini-messages' => array(
      'delta' => 'messages',
      'module' => 'panels_mini',
    ),
    'panels_mini-top' => array(
      'delta' => 'top',
      'module' => 'panels_mini',
    ),
    'panels_mini-top_navigation' => array(
      'delta' => 'top_navigation',
      'module' => 'panels_mini',
    ),
  );

  // alpha
  $theme = array();

  $theme['panels_mini-front_page_highlighted_area'] = array(
    'module' => 'panels_mini',
    'delta' => 'front_page_highlighted_area',
    'theme' => 'alpha',
    'status' => '1',
    'weight' => '0',
    'region' => 'header',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $theme['panels_mini-messages'] = array(
    'module' => 'panels_mini',
    'delta' => 'messages',
    'theme' => 'alpha',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['panels_mini-top'] = array(
    'module' => 'panels_mini',
    'delta' => 'top',
    'theme' => 'alpha',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['panels_mini-top_navigation'] = array(
    'module' => 'panels_mini',
    'delta' => 'top_navigation',
    'theme' => 'alpha',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['alpha'] = $theme;

  // apl
  $theme = array();

  $theme['panels_mini-front_page_highlighted_area'] = array(
    'module' => 'panels_mini',
    'delta' => 'front_page_highlighted_area',
    'theme' => 'apl',
    'status' => '1',
    'weight' => '0',
    'region' => 'highlight',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $theme['panels_mini-messages'] = array(
    'module' => 'panels_mini',
    'delta' => 'messages',
    'theme' => 'apl',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['panels_mini-top'] = array(
    'module' => 'panels_mini',
    'delta' => 'top',
    'theme' => 'apl',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['panels_mini-top_navigation'] = array(
    'module' => 'panels_mini',
    'delta' => 'top_navigation',
    'theme' => 'apl',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['apl'] = $theme;

  // beta
  $theme = array();

  $theme['panels_mini-front_page_highlighted_area'] = array(
    'module' => 'panels_mini',
    'delta' => 'front_page_highlighted_area',
    'theme' => 'beta',
    'status' => '1',
    'weight' => '0',
    'region' => 'highlight',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['panels_mini-messages'] = array(
    'module' => 'panels_mini',
    'delta' => 'messages',
    'theme' => 'beta',
    'status' => '1',
    'weight' => '0',
    'region' => 'help',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['panels_mini-top'] = array(
    'module' => 'panels_mini',
    'delta' => 'top',
    'theme' => 'beta',
    'status' => '1',
    'weight' => '0',
    'region' => 'top',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['panels_mini-top_navigation'] = array(
    'module' => 'panels_mini',
    'delta' => 'top_navigation',
    'theme' => 'beta',
    'status' => '1',
    'weight' => '0',
    'region' => 'top_navigation',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['beta'] = $theme;

  // seven
  $theme = array();

  $theme['panels_mini-front_page_highlighted_area'] = array(
    'module' => 'panels_mini',
    'delta' => 'front_page_highlighted_area',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $theme['panels_mini-messages'] = array(
    'module' => 'panels_mini',
    'delta' => 'messages',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['panels_mini-top'] = array(
    'module' => 'panels_mini',
    'delta' => 'top',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['panels_mini-top_navigation'] = array(
    'module' => 'panels_mini',
    'delta' => 'top_navigation',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['seven'] = $theme;

  // zen
  $theme = array();

  $theme['panels_mini-front_page_highlighted_area'] = array(
    'module' => 'panels_mini',
    'delta' => 'front_page_highlighted_area',
    'theme' => 'zen',
    'status' => '1',
    'weight' => '0',
    'region' => 'header',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $theme['panels_mini-messages'] = array(
    'module' => 'panels_mini',
    'delta' => 'messages',
    'theme' => 'zen',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['panels_mini-top'] = array(
    'module' => 'panels_mini',
    'delta' => 'top',
    'theme' => 'zen',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['panels_mini-top_navigation'] = array(
    'module' => 'panels_mini',
    'delta' => 'top_navigation',
    'theme' => 'zen',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['zen'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}
