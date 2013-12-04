<?php
/**
 * @file
 * meeting_rooms_2014.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function meeting_rooms_2014_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-mr_2014'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'mr_2014',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'basic-page/meeting-rooms
reservations/*
room-request-form
services/meeting-rooms',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -55,
      ),
      'ahc1' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ahc1',
        'weight' => 0,
      ),
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => 0,
      ),
      'apl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl',
        'weight' => 0,
      ),
      'apl_blanco' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'apl_blanco',
        'weight' => -55,
      ),
      'apl_colores' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'apl_colores',
        'weight' => -55,
      ),
      'apl_raw' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_raw',
        'weight' => 0,
      ),
      'apl_recycled_reads' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_recycled_reads',
        'weight' => 0,
      ),
      'apl_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_seven',
        'weight' => 0,
      ),
      'apl_spanish' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_spanish',
        'weight' => 0,
      ),
      'apl_youth' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_youth',
        'weight' => 0,
      ),
      'beta' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'beta',
        'weight' => 0,
      ),
      'beta_spanish' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'beta_spanish',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => 'Meeting Rooms Announcement for 2014',
    'visibility' => 1,
  );

  $export['block-mr_step_0'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'mr_step_0',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'group/register
create-new-account
account/register',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -61,
      ),
      'ahc1' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ahc1',
        'weight' => 0,
      ),
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => 0,
      ),
      'apl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl',
        'weight' => 0,
      ),
      'apl_blanco' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_blanco',
        'weight' => 0,
      ),
      'apl_colores' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_colores',
        'weight' => 0,
      ),
      'apl_raw' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_raw',
        'weight' => 0,
      ),
      'apl_recycled_reads' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_recycled_reads',
        'weight' => 0,
      ),
      'apl_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_seven',
        'weight' => 0,
      ),
      'apl_spanish' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_spanish',
        'weight' => 0,
      ),
      'apl_youth' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_youth',
        'weight' => 0,
      ),
      'beta' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'beta',
        'weight' => 0,
      ),
      'beta_spanish' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'beta_spanish',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-mr_step_0b'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'mr_step_0b',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'account',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -62,
      ),
      'ahc1' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ahc1',
        'weight' => 0,
      ),
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => 0,
      ),
      'apl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl',
        'weight' => 0,
      ),
      'apl_blanco' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_blanco',
        'weight' => 0,
      ),
      'apl_colores' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_colores',
        'weight' => 0,
      ),
      'apl_raw' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_raw',
        'weight' => 0,
      ),
      'apl_recycled_reads' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_recycled_reads',
        'weight' => 0,
      ),
      'apl_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_seven',
        'weight' => 0,
      ),
      'apl_spanish' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_spanish',
        'weight' => 0,
      ),
      'apl_youth' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_youth',
        'weight' => 0,
      ),
      'beta' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'beta',
        'weight' => 0,
      ),
      'beta_spanish' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'beta_spanish',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-mr_step_2b'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'mr_step_2b',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'choose-a-group',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -63,
      ),
      'ahc1' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ahc1',
        'weight' => 0,
      ),
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => 0,
      ),
      'apl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl',
        'weight' => 0,
      ),
      'apl_blanco' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_blanco',
        'weight' => 0,
      ),
      'apl_colores' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_colores',
        'weight' => 0,
      ),
      'apl_raw' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_raw',
        'weight' => 0,
      ),
      'apl_recycled_reads' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_recycled_reads',
        'weight' => 0,
      ),
      'apl_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_seven',
        'weight' => 0,
      ),
      'apl_spanish' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_spanish',
        'weight' => 0,
      ),
      'apl_youth' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_youth',
        'weight' => 0,
      ),
      'beta' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'beta',
        'weight' => 0,
      ),
      'beta_spanish' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'beta_spanish',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-mr_step_3'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'mr_step_3',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'request-a-meeting-room',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -59,
      ),
      'ahc1' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ahc1',
        'weight' => 0,
      ),
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => 0,
      ),
      'apl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl',
        'weight' => 0,
      ),
      'apl_blanco' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_blanco',
        'weight' => 0,
      ),
      'apl_colores' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_colores',
        'weight' => 0,
      ),
      'apl_raw' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_raw',
        'weight' => 0,
      ),
      'apl_recycled_reads' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_recycled_reads',
        'weight' => 0,
      ),
      'apl_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_seven',
        'weight' => 0,
      ),
      'apl_spanish' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_spanish',
        'weight' => 0,
      ),
      'apl_youth' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_youth',
        'weight' => 0,
      ),
      'beta' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'beta',
        'weight' => 0,
      ),
      'beta_spanish' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'beta_spanish',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-mr_step_two'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'mr_step_two',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'register-a-group',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -60,
      ),
      'ahc1' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ahc1',
        'weight' => 0,
      ),
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => 0,
      ),
      'apl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl',
        'weight' => 0,
      ),
      'apl_blanco' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_blanco',
        'weight' => 0,
      ),
      'apl_colores' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_colores',
        'weight' => 0,
      ),
      'apl_raw' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_raw',
        'weight' => 0,
      ),
      'apl_recycled_reads' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_recycled_reads',
        'weight' => 0,
      ),
      'apl_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_seven',
        'weight' => 0,
      ),
      'apl_spanish' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_spanish',
        'weight' => 0,
      ),
      'apl_youth' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_youth',
        'weight' => 0,
      ),
      'beta' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'beta',
        'weight' => 0,
      ),
      'beta_spanish' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'beta_spanish',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-apl_rooms_2014-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'apl_rooms_2014-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'ahc1' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ahc1',
        'weight' => 0,
      ),
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => 0,
      ),
      'apl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl',
        'weight' => 0,
      ),
      'apl_blanco' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_blanco',
        'weight' => 0,
      ),
      'apl_colores' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_colores',
        'weight' => 0,
      ),
      'apl_raw' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_raw',
        'weight' => 0,
      ),
      'apl_recycled_reads' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_recycled_reads',
        'weight' => 0,
      ),
      'apl_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_seven',
        'weight' => 0,
      ),
      'apl_spanish' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_spanish',
        'weight' => 0,
      ),
      'apl_youth' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_youth',
        'weight' => 0,
      ),
      'beta' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'beta',
        'weight' => 0,
      ),
      'beta_spanish' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'beta_spanish',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-apl_rooms_2014-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'apl_rooms_2014-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'ahc1' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ahc1',
        'weight' => 0,
      ),
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => 0,
      ),
      'apl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl',
        'weight' => 0,
      ),
      'apl_blanco' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_blanco',
        'weight' => 0,
      ),
      'apl_colores' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_colores',
        'weight' => 0,
      ),
      'apl_raw' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_raw',
        'weight' => 0,
      ),
      'apl_recycled_reads' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_recycled_reads',
        'weight' => 0,
      ),
      'apl_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_seven',
        'weight' => 0,
      ),
      'apl_spanish' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_spanish',
        'weight' => 0,
      ),
      'apl_youth' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'apl_youth',
        'weight' => 0,
      ),
      'beta' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'beta',
        'weight' => 0,
      ),
      'beta_spanish' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'beta_spanish',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
