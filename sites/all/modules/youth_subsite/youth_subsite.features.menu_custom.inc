<?php
/**
 * @file
 * youth_subsite.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function youth_subsite_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-apl-2013-youth.
  $menus['menu-apl-2013-youth'] = array(
    'menu_name' => 'menu-apl-2013-youth',
    'title' => 'APL Menu - 2013 - Youth',
    'description' => 'The menu for the Austin Public Library',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('APL Menu - 2013 - Youth');
  t('The menu for the Austin Public Library');


  return $menus;
}
