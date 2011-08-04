<?php
/**
 * @file
 * coa_department_pages_listing.features.menu_custom.inc
 */

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function coa_department_pages_listing_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-government-taxonomy
  $menus['menu-government-taxonomy'] = array(
    'menu_name' => 'menu-government-taxonomy',
    'title' => 'Government Taxonomy',
    'description' => 'Government Menu Taxonomy',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Government Menu Taxonomy');
  t('Government Taxonomy');


  return $menus;
}
