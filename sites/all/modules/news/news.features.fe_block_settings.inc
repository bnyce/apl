<?php
/**
 * @file
 * news.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function news_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['panels_mini-clone_of_messages'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'clone_of_messages',
    'module' => 'panels_mini',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ahc1' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ahc1',
        'weight' => '0',
      ),
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => '0',
      ),
      'apl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl',
        'weight' => '0',
      ),
      'apl_blanco' => array(
        'region' => 'help',
        'status' => '1',
        'theme' => 'apl_blanco',
        'weight' => '-32',
      ),
      'beta' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'beta',
        'weight' => '0',
      ),
      'beta_spanish' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'beta_spanish',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  return $export;
}
