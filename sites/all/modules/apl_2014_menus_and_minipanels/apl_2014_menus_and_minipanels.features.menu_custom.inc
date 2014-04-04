<?php
/**
 * @file
 * apl_2014_menus_and_minipanels.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function apl_2014_menus_and_minipanels_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-apl-footer-2014.
  $menus['menu-apl-footer-2014'] = array(
    'menu_name' => 'menu-apl-footer-2014',
    'title' => 'APL Footer 2014',
    'description' => '',
  );
  // Exported menu: menu-apl-menu-2014.
  $menus['menu-apl-menu-2014'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'title' => 'APL Menu 2014',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('APL Footer 2014');
  t('APL Menu 2014');


  return $menus;
}
