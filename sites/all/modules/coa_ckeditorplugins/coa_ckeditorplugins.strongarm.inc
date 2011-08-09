<?php
/**
 * @file
 * coa_ckeditorplugins.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function coa_ckeditorplugins_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kcfinder_upload_dir';
  $strongarm->value = '';
  $export['kcfinder_upload_dir'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kcfinder_upload_url';
  $strongarm->value = 'sites/default/kcfiles';
  $export['kcfinder_upload_url'] = $strongarm;

  return $export;
}
