<?php
/**
 * @file
 * portal_list_pages.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function portal_list_pages_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  return $export;
}
