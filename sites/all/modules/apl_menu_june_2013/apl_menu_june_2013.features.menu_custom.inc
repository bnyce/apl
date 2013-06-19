<?php
/**
 * @file
 * apl_menu_june_2013.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function apl_menu_june_2013_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-apl-2013-06-20.
  $menus['menu-apl-2013-06-20'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'title' => 'APL Menu - June 20, 2013',
    'description' => 'The menu for the Austin Public Library',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('APL Menu - June 20, 2013');
  t('The menu for the Austin Public Library');


  return $menus;
}
