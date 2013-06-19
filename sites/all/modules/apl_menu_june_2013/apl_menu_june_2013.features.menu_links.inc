<?php
/**
 * @file
 * apl_menu_june_2013.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function apl_menu_june_2013_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-apl-2013-06-20:apl-blogs/youth
  $menu_links['menu-apl-2013-06-20:apl-blogs/youth'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'apl-blogs/youth',
    'router_path' => 'apl-blogs',
    'link_title' => 'Youth Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'youth',
  );
  // Exported menu link: menu-apl-2013-06-20:apl-recommends
  $menu_links['menu-apl-2013-06-20:apl-recommends'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'apl-recommends',
    'router_path' => 'apl-recommends',
    'link_title' => 'APL Recommends',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/545',
  );
  // Exported menu link: menu-apl-2013-06-20:ask
  $menu_links['menu-apl-2013-06-20:ask'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'ask',
    'router_path' => 'ask',
    'link_title' => 'Ask a Librarian',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/545',
  );
  // Exported menu link: menu-apl-2013-06-20:contact
  $menu_links['menu-apl-2013-06-20:contact'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'parent_path' => 'node/120',
  );
  // Exported menu link: menu-apl-2013-06-20:databases
  $menu_links['menu-apl-2013-06-20:databases'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'databases',
    'router_path' => 'databases',
    'link_title' => 'Databases',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/549',
  );
  // Exported menu link: menu-apl-2013-06-20:how-do-i
  $menu_links['menu-apl-2013-06-20:how-do-i'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'how-do-i',
    'router_path' => 'how-do-i',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'node/120',
  );
  // Exported menu link: menu-apl-2013-06-20:http://library.austintexas.gov/ahc/austin-files-0
  $menu_links['menu-apl-2013-06-20:http://library.austintexas.gov/ahc/austin-files-0'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'http://library.austintexas.gov/ahc/austin-files-0',
    'router_path' => '',
    'link_title' => 'Austin Files',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'node/1507',
  );
  // Exported menu link: menu-apl-2013-06-20:http://www.austinhistorycenter.com
  $menu_links['menu-apl-2013-06-20:http://www.austinhistorycenter.com'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'http://www.austinhistorycenter.com',
    'router_path' => '',
    'link_title' => 'Austin History Center',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -45,
  );
  // Exported menu link: menu-apl-2013-06-20:http://www.recycledreads.org
  $menu_links['menu-apl-2013-06-20:http://www.recycledreads.org'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'http://www.recycledreads.org',
    'router_path' => '',
    'link_title' => 'Recycled Reads Bookstore',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -38,
    'parent_path' => 'node/29138',
  );
  // Exported menu link: menu-apl-2013-06-20:https://www.austinlibrary.com:8443/login?URL=http://yl9ar3tq5l.cs.serialssolutions.com/
  $menu_links['menu-apl-2013-06-20:https://www.austinlibrary.com:8443/login?URL=http://yl9ar3tq5l.cs.serialssolutions.com/'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'https://www.austinlibrary.com:8443/login?URL=http://yl9ar3tq5l.cs.serialssolutions.com/',
    'router_path' => '',
    'link_title' => 'Research Catalog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'parent_path' => 'node/29127',
  );
  // Exported menu link: menu-apl-2013-06-20:libraryservices
  $menu_links['menu-apl-2013-06-20:libraryservices'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'libraryservices',
    'router_path' => 'libraryservices',
    'link_title' => 'Services',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: menu-apl-2013-06-20:locations
  $menu_links['menu-apl-2013-06-20:locations'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'locations',
    'router_path' => 'locations',
    'link_title' => 'Locations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-apl-2013-06-20:locations/Carver Branch
  $menu_links['menu-apl-2013-06-20:locations/Carver Branch'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'locations/Carver Branch',
    'router_path' => 'locations',
    'link_title' => 'Carver Branch',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'node/29138',
  );
  // Exported menu link: menu-apl-2013-06-20:locations/Cepeda Branch
  $menu_links['menu-apl-2013-06-20:locations/Cepeda Branch'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'locations/Cepeda Branch',
    'router_path' => 'locations',
    'link_title' => 'Cepeda Branch',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'node/29138',
  );
  // Exported menu link: menu-apl-2013-06-20:locations/Faulk Central Library
  $menu_links['menu-apl-2013-06-20:locations/Faulk Central Library'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'locations/Faulk Central Library',
    'router_path' => 'locations',
    'link_title' => 'Faulk Central Library',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'node/29138',
  );
  // Exported menu link: menu-apl-2013-06-20:locations/Hampton Branch at Oak Hill
  $menu_links['menu-apl-2013-06-20:locations/Hampton Branch at Oak Hill'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'locations/Hampton Branch at Oak Hill',
    'router_path' => 'locations',
    'link_title' => 'Hampton Branch at Oak Hill',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'parent_path' => 'node/29138',
  );
  // Exported menu link: menu-apl-2013-06-20:locations/Howson Branch
  $menu_links['menu-apl-2013-06-20:locations/Howson Branch'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'locations/Howson Branch',
    'router_path' => 'locations',
    'link_title' => 'Howson Branch',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'parent_path' => 'node/29138',
  );
  // Exported menu link: menu-apl-2013-06-20:locations/Little Walnut Creek Branch
  $menu_links['menu-apl-2013-06-20:locations/Little Walnut Creek Branch'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'locations/Little Walnut Creek Branch',
    'router_path' => 'locations',
    'link_title' => 'Little Walnut Creek Branch',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'parent_path' => 'node/29138',
  );
  // Exported menu link: menu-apl-2013-06-20:locations/Manchaca Road Branch
  $menu_links['menu-apl-2013-06-20:locations/Manchaca Road Branch'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'locations/Manchaca Road Branch',
    'router_path' => 'locations',
    'link_title' => 'Manchaca Road Branch',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'parent_path' => 'node/29138',
  );
  // Exported menu link: menu-apl-2013-06-20:locations/Milwood Branch
  $menu_links['menu-apl-2013-06-20:locations/Milwood Branch'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'locations/Milwood Branch',
    'router_path' => 'locations',
    'link_title' => 'Milwood Branch',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'parent_path' => 'node/29138',
  );
  // Exported menu link: menu-apl-2013-06-20:locations/North Village Branch
  $menu_links['menu-apl-2013-06-20:locations/North Village Branch'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'locations/North Village Branch',
    'router_path' => 'locations',
    'link_title' => 'North Village Branch',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'parent_path' => 'node/29138',
  );
  // Exported menu link: menu-apl-2013-06-20:locations/Old Quarry Branch
  $menu_links['menu-apl-2013-06-20:locations/Old Quarry Branch'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'locations/Old Quarry Branch',
    'router_path' => 'locations',
    'link_title' => 'Old Quarry Branch',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'parent_path' => 'node/29138',
  );
  // Exported menu link: menu-apl-2013-06-20:locations/Pleasant Hill Branch
  $menu_links['menu-apl-2013-06-20:locations/Pleasant Hill Branch'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'locations/Pleasant Hill Branch',
    'router_path' => 'locations',
    'link_title' => 'Pleasant Hill Branch',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'parent_path' => 'node/29138',
  );
  // Exported menu link: menu-apl-2013-06-20:locations/Ruiz Branch
  $menu_links['menu-apl-2013-06-20:locations/Ruiz Branch'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'locations/Ruiz Branch',
    'router_path' => 'locations',
    'link_title' => 'Ruiz Branch',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -37,
    'parent_path' => 'node/29138',
  );
  // Exported menu link: menu-apl-2013-06-20:locations/Southeast Branch
  $menu_links['menu-apl-2013-06-20:locations/Southeast Branch'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'locations/Southeast Branch',
    'router_path' => 'locations',
    'link_title' => 'Southeast Branch',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -35,
    'parent_path' => 'node/29138',
  );
  // Exported menu link: menu-apl-2013-06-20:locations/Spicewood Springs Branch
  $menu_links['menu-apl-2013-06-20:locations/Spicewood Springs Branch'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'locations/Spicewood Springs Branch',
    'router_path' => 'locations',
    'link_title' => 'Spicewood Springs Branch',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -34,
    'parent_path' => 'node/29138',
  );
  // Exported menu link: menu-apl-2013-06-20:locations/St. John Branch
  $menu_links['menu-apl-2013-06-20:locations/St. John Branch'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'locations/St. John Branch',
    'router_path' => 'locations',
    'link_title' => 'St. John Branch',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -36,
    'parent_path' => 'node/29138',
  );
  // Exported menu link: menu-apl-2013-06-20:locations/Terrazas Branch
  $menu_links['menu-apl-2013-06-20:locations/Terrazas Branch'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'locations/Terrazas Branch',
    'router_path' => 'locations',
    'link_title' => 'Terrazas Branch',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -33,
    'parent_path' => 'node/29138',
  );
  // Exported menu link: menu-apl-2013-06-20:locations/Twin Oaks Branch
  $menu_links['menu-apl-2013-06-20:locations/Twin Oaks Branch'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'locations/Twin Oaks Branch',
    'router_path' => 'locations',
    'link_title' => 'Twin Oaks Branch',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -32,
    'parent_path' => 'node/29138',
  );
  // Exported menu link: menu-apl-2013-06-20:locations/University Hills Branch
  $menu_links['menu-apl-2013-06-20:locations/University Hills Branch'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'locations/University Hills Branch',
    'router_path' => 'locations',
    'link_title' => 'University Hills Branch',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -31,
    'parent_path' => 'node/29138',
  );
  // Exported menu link: menu-apl-2013-06-20:locations/Willie Mae Kirk Branch
  $menu_links['menu-apl-2013-06-20:locations/Willie Mae Kirk Branch'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'locations/Willie Mae Kirk Branch',
    'router_path' => 'locations',
    'link_title' => 'Willie Mae Kirk Branch',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -30,
    'parent_path' => 'node/29138',
  );
  // Exported menu link: menu-apl-2013-06-20:locations/Windsor Park Branch
  $menu_links['menu-apl-2013-06-20:locations/Windsor Park Branch'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'locations/Windsor Park Branch',
    'router_path' => 'locations',
    'link_title' => 'Windsor Park Branch',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -29,
    'parent_path' => 'node/29138',
  );
  // Exported menu link: menu-apl-2013-06-20:locations/Yarborough Branch
  $menu_links['menu-apl-2013-06-20:locations/Yarborough Branch'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'locations/Yarborough Branch',
    'router_path' => 'locations',
    'link_title' => 'Yarborough Branch',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -28,
    'parent_path' => 'node/29138',
  );
  // Exported menu link: menu-apl-2013-06-20:new-information-guides
  $menu_links['menu-apl-2013-06-20:new-information-guides'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'new-information-guides',
    'router_path' => 'new-information-guides',
    'link_title' => 'Information Guides',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
  );
  // Exported menu link: menu-apl-2013-06-20:node/108
  $menu_links['menu-apl-2013-06-20:node/108'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/108',
    'router_path' => 'node/%',
    'link_title' => 'Interlibrary Loan',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/544',
  );
  // Exported menu link: menu-apl-2013-06-20:node/112
  $menu_links['menu-apl-2013-06-20:node/112'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/112',
    'router_path' => 'node/%',
    'link_title' => 'Texshare Cards',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/544',
  );
  // Exported menu link: menu-apl-2013-06-20:node/120
  $menu_links['menu-apl-2013-06-20:node/120'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/120',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
  );
  // Exported menu link: menu-apl-2013-06-20:node/1321
  $menu_links['menu-apl-2013-06-20:node/1321'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/1321',
    'router_path' => 'node/%',
    'link_title' => 'Quick Information',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/549',
  );
  // Exported menu link: menu-apl-2013-06-20:node/1473
  $menu_links['menu-apl-2013-06-20:node/1473'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/1473',
    'router_path' => 'node/%',
    'link_title' => 'About Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'http://www.austinhistorycenter.com',
  );
  // Exported menu link: menu-apl-2013-06-20:node/1484
  $menu_links['menu-apl-2013-06-20:node/1484'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/1484',
    'router_path' => 'node/%',
    'link_title' => 'Photographs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'parent_path' => 'http://www.austinhistorycenter.com',
  );
  // Exported menu link: menu-apl-2013-06-20:node/1487
  $menu_links['menu-apl-2013-06-20:node/1487'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/1487',
    'router_path' => 'node/%',
    'link_title' => 'Online Photo Collections',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'node/1484',
  );
  // Exported menu link: menu-apl-2013-06-20:node/1500
  $menu_links['menu-apl-2013-06-20:node/1500'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/1500',
    'router_path' => 'node/%',
    'link_title' => 'African American Community Archivist',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'node/17874',
  );
  // Exported menu link: menu-apl-2013-06-20:node/1501
  $menu_links['menu-apl-2013-06-20:node/1501'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/1501',
    'router_path' => 'node/%',
    'link_title' => 'AHC History',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'node/1473',
  );
  // Exported menu link: menu-apl-2013-06-20:node/1502
  $menu_links['menu-apl-2013-06-20:node/1502'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/1502',
    'router_path' => 'node/%',
    'link_title' => 'Architectural Archives',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'node/1507',
  );
  // Exported menu link: menu-apl-2013-06-20:node/1503
  $menu_links['menu-apl-2013-06-20:node/1503'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/1503',
    'router_path' => 'node/%',
    'link_title' => 'Archives and Manuscripts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'node/1507',
  );
  // Exported menu link: menu-apl-2013-06-20:node/1504
  $menu_links['menu-apl-2013-06-20:node/1504'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/1504',
    'router_path' => 'node/%',
    'link_title' => 'Asian American Community Archivist',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'node/17874',
  );
  // Exported menu link: menu-apl-2013-06-20:node/1505
  $menu_links['menu-apl-2013-06-20:node/1505'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/1505',
    'router_path' => 'node/%',
    'link_title' => 'Video',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'parent_path' => 'node/1507',
  );
  // Exported menu link: menu-apl-2013-06-20:node/1506
  $menu_links['menu-apl-2013-06-20:node/1506'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/1506',
    'router_path' => 'node/%',
    'link_title' => 'Books/City Reports',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'node/1507',
  );
  // Exported menu link: menu-apl-2013-06-20:node/1507
  $menu_links['menu-apl-2013-06-20:node/1507'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/1507',
    'router_path' => 'node/%',
    'link_title' => 'Collections',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'http://www.austinhistorycenter.com',
  );
  // Exported menu link: menu-apl-2013-06-20:node/1508
  $menu_links['menu-apl-2013-06-20:node/1508'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/1508',
    'router_path' => 'node/%',
    'link_title' => 'Online Reference Tools',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'parent_path' => 'node/1581',
  );
  // Exported menu link: menu-apl-2013-06-20:node/1509
  $menu_links['menu-apl-2013-06-20:node/1509'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/1509',
    'router_path' => 'node/%',
    'link_title' => 'Donate Items',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'node/1567',
  );
  // Exported menu link: menu-apl-2013-06-20:node/1510
  $menu_links['menu-apl-2013-06-20:node/1510'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/1510',
    'router_path' => 'node/%',
    'link_title' => 'Driving Directions and Parking',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'parent_path' => 'node/1583',
  );
  // Exported menu link: menu-apl-2013-06-20:node/1511
  $menu_links['menu-apl-2013-06-20:node/1511'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/1511',
    'router_path' => 'node/%',
    'link_title' => 'Exhibits',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -44,
    'parent_path' => 'http://www.austinhistorycenter.com',
  );
  // Exported menu link: menu-apl-2013-06-20:node/1567
  $menu_links['menu-apl-2013-06-20:node/1567'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/1567',
    'router_path' => 'node/%',
    'link_title' => 'Get Involved',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -42,
    'parent_path' => 'http://www.austinhistorycenter.com',
  );
  // Exported menu link: menu-apl-2013-06-20:node/1569
  $menu_links['menu-apl-2013-06-20:node/1569'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/1569',
    'router_path' => 'node/%',
    'link_title' => 'Community Archivists Program',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'node/17874',
  );
  // Exported menu link: menu-apl-2013-06-20:node/1571
  $menu_links['menu-apl-2013-06-20:node/1571'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/1571',
    'router_path' => 'node/%',
    'link_title' => 'Maps',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'parent_path' => 'node/1507',
  );
  // Exported menu link: menu-apl-2013-06-20:node/1572
  $menu_links['menu-apl-2013-06-20:node/1572'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/1572',
    'router_path' => 'node/%',
    'link_title' => 'Meeting Room',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'parent_path' => 'node/1473',
  );
  // Exported menu link: menu-apl-2013-06-20:node/1573
  $menu_links['menu-apl-2013-06-20:node/1573'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/1573',
    'router_path' => 'node/%',
    'link_title' => 'Mexican American Community Archivist',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'node/17874',
  );
  // Exported menu link: menu-apl-2013-06-20:node/1574
  $menu_links['menu-apl-2013-06-20:node/1574'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/1574',
    'router_path' => 'node/%',
    'link_title' => 'Oral History/Audio ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'parent_path' => 'node/1507',
  );
  // Exported menu link: menu-apl-2013-06-20:node/1579
  $menu_links['menu-apl-2013-06-20:node/1579'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/1579',
    'router_path' => 'node/%',
    'link_title' => 'Reference Services',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'node/1581',
  );
  // Exported menu link: menu-apl-2013-06-20:node/1580
  $menu_links['menu-apl-2013-06-20:node/1580'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/1580',
    'router_path' => 'node/%',
    'link_title' => 'Ordering Photos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'node/1484',
  );
  // Exported menu link: menu-apl-2013-06-20:node/1581
  $menu_links['menu-apl-2013-06-20:node/1581'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/1581',
    'router_path' => 'node/%',
    'link_title' => 'Research',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'http://www.austinhistorycenter.com',
  );
  // Exported menu link: menu-apl-2013-06-20:node/1582
  $menu_links['menu-apl-2013-06-20:node/1582'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/1582',
    'router_path' => 'node/%',
    'link_title' => 'Staff Directory',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'node/1473',
  );
  // Exported menu link: menu-apl-2013-06-20:node/1583
  $menu_links['menu-apl-2013-06-20:node/1583'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/1583',
    'router_path' => 'node/%',
    'link_title' => 'Visit Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'node/1473',
  );
  // Exported menu link: menu-apl-2013-06-20:node/1584
  $menu_links['menu-apl-2013-06-20:node/1584'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/1584',
    'router_path' => 'node/%',
    'link_title' => 'Volunteer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'node/1567',
  );
  // Exported menu link: menu-apl-2013-06-20:node/1585
  $menu_links['menu-apl-2013-06-20:node/1585'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/1585',
    'router_path' => 'node/%',
    'link_title' => 'Online Exhibits',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'node/1511',
  );
  // Exported menu link: menu-apl-2013-06-20:node/1587
  $menu_links['menu-apl-2013-06-20:node/1587'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/1587',
    'router_path' => 'node/%',
    'link_title' => 'What to Expect',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/1583',
  );
  // Exported menu link: menu-apl-2013-06-20:node/17859
  $menu_links['menu-apl-2013-06-20:node/17859'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/17859',
    'router_path' => 'node/%',
    'link_title' => 'Public Transportation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'parent_path' => 'node/1583',
  );
  // Exported menu link: menu-apl-2013-06-20:node/17867
  $menu_links['menu-apl-2013-06-20:node/17867'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/17867',
    'router_path' => 'node/%',
    'link_title' => 'Periodicals',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'parent_path' => 'node/1507',
  );
  // Exported menu link: menu-apl-2013-06-20:node/17870
  $menu_links['menu-apl-2013-06-20:node/17870'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/17870',
    'router_path' => 'node/%',
    'link_title' => 'Austin History ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'node/1581',
  );
  // Exported menu link: menu-apl-2013-06-20:node/17871
  $menu_links['menu-apl-2013-06-20:node/17871'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/17871',
    'router_path' => 'node/%',
    'link_title' => 'Photographic Collections',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'node/1484',
  );
  // Exported menu link: menu-apl-2013-06-20:node/17874
  $menu_links['menu-apl-2013-06-20:node/17874'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/17874',
    'router_path' => 'node/%',
    'link_title' => 'Outreach',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -45,
    'parent_path' => 'http://www.austinhistorycenter.com',
  );
  // Exported menu link: menu-apl-2013-06-20:node/17875
  $menu_links['menu-apl-2013-06-20:node/17875'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/17875',
    'router_path' => 'node/%',
    'link_title' => 'Speakers Bureau',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'parent_path' => 'node/17874',
  );
  // Exported menu link: menu-apl-2013-06-20:node/17946
  $menu_links['menu-apl-2013-06-20:node/17946'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/17946',
    'router_path' => 'node/%',
    'link_title' => 'Current Exhibits',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'node/1511',
  );
  // Exported menu link: menu-apl-2013-06-20:node/17947
  $menu_links['menu-apl-2013-06-20:node/17947'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/17947',
    'router_path' => 'node/%',
    'link_title' => 'Exhibit Videos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'node/1511',
  );
  // Exported menu link: menu-apl-2013-06-20:node/17948
  $menu_links['menu-apl-2013-06-20:node/17948'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/17948',
    'router_path' => 'node/%',
    'link_title' => 'Everything Austin',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'node/1581',
  );
  // Exported menu link: menu-apl-2013-06-20:node/17949
  $menu_links['menu-apl-2013-06-20:node/17949'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/17949',
    'router_path' => 'node/%',
    'link_title' => 'Support the AHC',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/1567',
  );
  // Exported menu link: menu-apl-2013-06-20:node/18235
  $menu_links['menu-apl-2013-06-20:node/18235'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/18235',
    'router_path' => 'node/%',
    'link_title' => 'History of Our Building ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/1501',
  );
  // Exported menu link: menu-apl-2013-06-20:node/24628
  $menu_links['menu-apl-2013-06-20:node/24628'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/24628',
    'router_path' => 'node/%',
    'link_title' => 'Catalog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/544',
  );
  // Exported menu link: menu-apl-2013-06-20:node/24631
  $menu_links['menu-apl-2013-06-20:node/24631'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/24631',
    'router_path' => 'node/%',
    'link_title' => 'Library Card',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/544',
  );
  // Exported menu link: menu-apl-2013-06-20:node/24632
  $menu_links['menu-apl-2013-06-20:node/24632'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/24632',
    'router_path' => 'node/%',
    'link_title' => 'My APL / My Account',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/544',
  );
  // Exported menu link: menu-apl-2013-06-20:node/24633
  $menu_links['menu-apl-2013-06-20:node/24633'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/24633',
    'router_path' => 'node/%',
    'link_title' => 'Personal Picks',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/545',
  );
  // Exported menu link: menu-apl-2013-06-20:node/24635
  $menu_links['menu-apl-2013-06-20:node/24635'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/24635',
    'router_path' => 'node/%',
    'link_title' => 'Austin History Center',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/549',
  );
  // Exported menu link: menu-apl-2013-06-20:node/24637
  $menu_links['menu-apl-2013-06-20:node/24637'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/24637',
    'router_path' => 'node/%',
    'link_title' => 'Digital Collections',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/549',
  );
  // Exported menu link: menu-apl-2013-06-20:node/24638
  $menu_links['menu-apl-2013-06-20:node/24638'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/24638',
    'router_path' => 'node/%',
    'link_title' => 'Find Newspapers & Magazines',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/549',
  );
  // Exported menu link: menu-apl-2013-06-20:node/24641
  $menu_links['menu-apl-2013-06-20:node/24641'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/24641',
    'router_path' => 'node/%',
    'link_title' => 'Book Store',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/546',
  );
  // Exported menu link: menu-apl-2013-06-20:node/24643
  $menu_links['menu-apl-2013-06-20:node/24643'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/24643',
    'router_path' => 'node/%',
    'link_title' => 'Meeting Rooms',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/546',
  );
  // Exported menu link: menu-apl-2013-06-20:node/24645
  $menu_links['menu-apl-2013-06-20:node/24645'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/24645',
    'router_path' => 'node/%',
    'link_title' => 'Tax Help',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/546',
  );
  // Exported menu link: menu-apl-2013-06-20:node/24646
  $menu_links['menu-apl-2013-06-20:node/24646'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/24646',
    'router_path' => 'node/%',
    'link_title' => 'Tours',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/546',
  );
  // Exported menu link: menu-apl-2013-06-20:node/24650
  $menu_links['menu-apl-2013-06-20:node/24650'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/24650',
    'router_path' => 'node/%',
    'link_title' => 'Tutoring (VICTORY)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/546',
  );
  // Exported menu link: menu-apl-2013-06-20:node/24651
  $menu_links['menu-apl-2013-06-20:node/24651'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/24651',
    'router_path' => 'node/%',
    'link_title' => 'Volunteering',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/546',
  );
  // Exported menu link: menu-apl-2013-06-20:node/24652
  $menu_links['menu-apl-2013-06-20:node/24652'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/24652',
    'router_path' => 'node/%',
    'link_title' => 'Assistive Technology',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/547',
  );
  // Exported menu link: menu-apl-2013-06-20:node/24653
  $menu_links['menu-apl-2013-06-20:node/24653'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/24653',
    'router_path' => 'node/%',
    'link_title' => 'Classes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/548',
  );
  // Exported menu link: menu-apl-2013-06-20:node/24654
  $menu_links['menu-apl-2013-06-20:node/24654'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/24654',
    'router_path' => 'node/%',
    'link_title' => 'Computer Classes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/547',
  );
  // Exported menu link: menu-apl-2013-06-20:node/24655
  $menu_links['menu-apl-2013-06-20:node/24655'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/24655',
    'router_path' => 'node/%',
    'link_title' => 'Copying, Printing, & Scanning ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/547',
  );
  // Exported menu link: menu-apl-2013-06-20:node/24656
  $menu_links['menu-apl-2013-06-20:node/24656'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/24656',
    'router_path' => 'node/%',
    'link_title' => 'Laptop Checkout',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/547',
  );
  // Exported menu link: menu-apl-2013-06-20:node/24657
  $menu_links['menu-apl-2013-06-20:node/24657'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/24657',
    'router_path' => 'node/%',
    'link_title' => 'Public Computers & Internet ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/547',
  );
  // Exported menu link: menu-apl-2013-06-20:node/24661
  $menu_links['menu-apl-2013-06-20:node/24661'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/24661',
    'router_path' => 'node/%',
    'link_title' => 'Wifi',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/547',
  );
  // Exported menu link: menu-apl-2013-06-20:node/24662
  $menu_links['menu-apl-2013-06-20:node/24662'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/24662',
    'router_path' => 'node/%',
    'link_title' => 'Book Clubs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/548',
  );
  // Exported menu link: menu-apl-2013-06-20:node/24664
  $menu_links['menu-apl-2013-06-20:node/24664'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/24664',
    'router_path' => 'node/%',
    'link_title' => 'Language Conversation Groups',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/548',
  );
  // Exported menu link: menu-apl-2013-06-20:node/24665
  $menu_links['menu-apl-2013-06-20:node/24665'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/24665',
    'router_path' => 'node/%',
    'link_title' => 'Storytimes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/548',
  );
  // Exported menu link: menu-apl-2013-06-20:node/24666
  $menu_links['menu-apl-2013-06-20:node/24666'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/24666',
    'router_path' => 'node/%',
    'link_title' => 'Summer Reading',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/548',
  );
  // Exported menu link: menu-apl-2013-06-20:node/25403
  $menu_links['menu-apl-2013-06-20:node/25403'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/25403',
    'router_path' => 'node/%',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'node/1473',
  );
  // Exported menu link: menu-apl-2013-06-20:node/266
  $menu_links['menu-apl-2013-06-20:node/266'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/266',
    'router_path' => 'node/%',
    'link_title' => 'Holiday Schedule',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'locations',
  );
  // Exported menu link: menu-apl-2013-06-20:node/2710
  $menu_links['menu-apl-2013-06-20:node/2710'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/2710',
    'router_path' => 'node/%',
    'link_title' => 'Timeline of AHC History',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'parent_path' => 'node/1501',
  );
  // Exported menu link: menu-apl-2013-06-20:node/29114
  $menu_links['menu-apl-2013-06-20:node/29114'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/29114',
    'router_path' => 'node/%',
    'link_title' => 'Holds',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'node/29156',
  );
  // Exported menu link: menu-apl-2013-06-20:node/29115
  $menu_links['menu-apl-2013-06-20:node/29115'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/29115',
    'router_path' => 'node/%',
    'link_title' => 'Fines',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'node/29156',
  );
  // Exported menu link: menu-apl-2013-06-20:node/29116
  $menu_links['menu-apl-2013-06-20:node/29116'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/29116',
    'router_path' => 'node/%',
    'link_title' => 'My Shelves',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'parent_path' => 'node/29156',
  );
  // Exported menu link: menu-apl-2013-06-20:node/29117
  $menu_links['menu-apl-2013-06-20:node/29117'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/29117',
    'router_path' => 'node/%',
    'link_title' => 'My Lists',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'parent_path' => 'node/29156',
  );
  // Exported menu link: menu-apl-2013-06-20:node/29118
  $menu_links['menu-apl-2013-06-20:node/29118'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/29118',
    'router_path' => 'node/%',
    'link_title' => 'I\'m Following',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'parent_path' => 'node/29156',
  );
  // Exported menu link: menu-apl-2013-06-20:node/29119
  $menu_links['menu-apl-2013-06-20:node/29119'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/29119',
    'router_path' => 'node/%',
    'link_title' => 'Completed',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/29116',
  );
  // Exported menu link: menu-apl-2013-06-20:node/29120
  $menu_links['menu-apl-2013-06-20:node/29120'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/29120',
    'router_path' => 'node/%',
    'link_title' => 'For Later',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/29116',
  );
  // Exported menu link: menu-apl-2013-06-20:node/29121
  $menu_links['menu-apl-2013-06-20:node/29121'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/29121',
    'router_path' => 'node/%',
    'link_title' => 'In Progress',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/29116',
  );
  // Exported menu link: menu-apl-2013-06-20:node/29122
  $menu_links['menu-apl-2013-06-20:node/29122'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/29122',
    'router_path' => 'node/%',
    'link_title' => 'Recently Shared',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'parent_path' => 'node/29156',
  );
  // Exported menu link: menu-apl-2013-06-20:node/29123
  $menu_links['menu-apl-2013-06-20:node/29123'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/29123',
    'router_path' => 'node/%',
    'link_title' => 'Ignored Users',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'parent_path' => 'node/29156',
  );
  // Exported menu link: menu-apl-2013-06-20:node/29124
  $menu_links['menu-apl-2013-06-20:node/29124'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/29124',
    'router_path' => 'node/%',
    'link_title' => 'Inbox',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'parent_path' => 'node/29156',
  );
  // Exported menu link: menu-apl-2013-06-20:node/29125
  $menu_links['menu-apl-2013-06-20:node/29125'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/29125',
    'router_path' => 'node/%',
    'link_title' => 'Downloadables Account',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'parent_path' => 'node/29156',
  );
  // Exported menu link: menu-apl-2013-06-20:node/29126
  $menu_links['menu-apl-2013-06-20:node/29126'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/29126',
    'router_path' => 'node/%',
    'link_title' => 'My Account - Classic',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'parent_path' => 'node/29156',
  );
  // Exported menu link: menu-apl-2013-06-20:node/29127
  $menu_links['menu-apl-2013-06-20:node/29127'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/29127',
    'router_path' => 'node/%',
    'link_title' => 'Explore',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-apl-2013-06-20:node/29128
  $menu_links['menu-apl-2013-06-20:node/29128'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/29128',
    'router_path' => 'node/%',
    'link_title' => 'Recent Activity',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'node/29127',
  );
  // Exported menu link: menu-apl-2013-06-20:node/29129
  $menu_links['menu-apl-2013-06-20:node/29129'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/29129',
    'router_path' => 'node/%',
    'link_title' => 'New Titles',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'node/29127',
  );
  // Exported menu link: menu-apl-2013-06-20:node/29130
  $menu_links['menu-apl-2013-06-20:node/29130'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/29130',
    'router_path' => 'node/%',
    'link_title' => 'Awards',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'node/29127',
  );
  // Exported menu link: menu-apl-2013-06-20:node/29131
  $menu_links['menu-apl-2013-06-20:node/29131'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/29131',
    'router_path' => 'node/%',
    'link_title' => 'Best Sellers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'node/29127',
  );
  // Exported menu link: menu-apl-2013-06-20:node/29132
  $menu_links['menu-apl-2013-06-20:node/29132'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/29132',
    'router_path' => 'node/%',
    'link_title' => 'Staff Picks',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'parent_path' => 'node/29127',
  );
  // Exported menu link: menu-apl-2013-06-20:node/29134
  $menu_links['menu-apl-2013-06-20:node/29134'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/29134',
    'router_path' => 'node/%',
    'link_title' => 'Classic Catalog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'parent_path' => 'node/29127',
  );
  // Exported menu link: menu-apl-2013-06-20:node/29135
  $menu_links['menu-apl-2013-06-20:node/29135'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/29135',
    'router_path' => 'node/%',
    'link_title' => 'Downloadables Catalog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'parent_path' => 'node/29127',
  );
  // Exported menu link: menu-apl-2013-06-20:node/29138
  $menu_links['menu-apl-2013-06-20:node/29138'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/29138',
    'router_path' => 'node/%',
    'link_title' => 'Interactive Map of all locations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'locations',
  );
  // Exported menu link: menu-apl-2013-06-20:node/29139
  $menu_links['menu-apl-2013-06-20:node/29139'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/29139',
    'router_path' => 'node/%',
    'link_title' => 'Download Map',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'locations',
  );
  // Exported menu link: menu-apl-2013-06-20:node/29140
  $menu_links['menu-apl-2013-06-20:node/29140'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/29140',
    'router_path' => 'node/%',
    'link_title' => 'Who\'s Open Today?',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'locations',
  );
  // Exported menu link: menu-apl-2013-06-20:node/29141
  $menu_links['menu-apl-2013-06-20:node/29141'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/29141',
    'router_path' => 'node/%',
    'link_title' => 'APL Friends Foundation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'node/120',
  );
  // Exported menu link: menu-apl-2013-06-20:node/29143
  $menu_links['menu-apl-2013-06-20:node/29143'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/29143',
    'router_path' => 'node/%',
    'link_title' => 'APL Director\'s Report',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'parent_path' => 'node/120',
  );
  // Exported menu link: menu-apl-2013-06-20:node/29146
  $menu_links['menu-apl-2013-06-20:node/29146'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/29146',
    'router_path' => 'node/%',
    'link_title' => 'Customer Satisfaction Survey',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/120',
  );
  // Exported menu link: menu-apl-2013-06-20:node/29150
  $menu_links['menu-apl-2013-06-20:node/29150'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/29150',
    'router_path' => 'node/%',
    'link_title' => 'Recycled Reads',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
  );
  // Exported menu link: menu-apl-2013-06-20:node/29156
  $menu_links['menu-apl-2013-06-20:node/29156'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/29156',
    'router_path' => 'node/%',
    'link_title' => 'My APL',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
  );
  // Exported menu link: menu-apl-2013-06-20:node/29157
  $menu_links['menu-apl-2013-06-20:node/29157'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/29157',
    'router_path' => 'node/%',
    'link_title' => 'Checked Out',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'node/29156',
  );
  // Exported menu link: menu-apl-2013-06-20:node/2990
  $menu_links['menu-apl-2013-06-20:node/2990'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/2990',
    'router_path' => 'node/%',
    'link_title' => 'Preserving Your History',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'parent_path' => 'node/1581',
  );
  // Exported menu link: menu-apl-2013-06-20:node/349
  $menu_links['menu-apl-2013-06-20:node/349'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/349',
    'router_path' => 'node/%',
    'link_title' => 'WorldCat',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'parent_path' => 'node/29127',
  );
  // Exported menu link: menu-apl-2013-06-20:node/5763
  $menu_links['menu-apl-2013-06-20:node/5763'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/5763',
    'router_path' => 'node/%',
    'link_title' => 'Subject Guides',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'node/1581',
  );
  // Exported menu link: menu-apl-2013-06-20:node/5934
  $menu_links['menu-apl-2013-06-20:node/5934'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/5934',
    'router_path' => 'node/%',
    'link_title' => 'News & Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'parent_path' => 'http://www.austinhistorycenter.com',
  );
  // Exported menu link: menu-apl-2013-06-20:node/624
  $menu_links['menu-apl-2013-06-20:node/624'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/624',
    'router_path' => 'node/%',
    'link_title' => 'Second Chance Books',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/546',
  );
  // Exported menu link: menu-apl-2013-06-20:node/626
  $menu_links['menu-apl-2013-06-20:node/626'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/626',
    'router_path' => 'node/%',
    'link_title' => 'Find out more - A New Central Library for Austin',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'parent_path' => 'locations',
  );
  // Exported menu link: menu-apl-2013-06-20:node/628
  $menu_links['menu-apl-2013-06-20:node/628'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/628',
    'router_path' => 'node/%',
    'link_title' => 'Información en Español',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'node/120',
  );
  // Exported menu link: menu-apl-2013-06-20:node/add/suggest-a-title
  $menu_links['menu-apl-2013-06-20:node/add/suggest-a-title'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'node/add/suggest-a-title',
    'router_path' => 'node/add/suggest-a-title',
    'link_title' => 'Suggest a Title',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'parent_path' => 'node/29127',
  );
  // Exported menu link: menu-apl-2013-06-20:programs
  $menu_links['menu-apl-2013-06-20:programs'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'programs',
    'router_path' => 'programs',
    'link_title' => 'Calendar of Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/548',
  );
  // Exported menu link: menu-apl-2013-06-20:taxonomy/term/536
  $menu_links['menu-apl-2013-06-20:taxonomy/term/536'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'taxonomy/term/536',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Business',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'libraryservices',
  );
  // Exported menu link: menu-apl-2013-06-20:taxonomy/term/537
  $menu_links['menu-apl-2013-06-20:taxonomy/term/537'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'taxonomy/term/537',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Children',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'libraryservices',
  );
  // Exported menu link: menu-apl-2013-06-20:taxonomy/term/538
  $menu_links['menu-apl-2013-06-20:taxonomy/term/538'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'taxonomy/term/538',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Español',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'libraryservices',
  );
  // Exported menu link: menu-apl-2013-06-20:taxonomy/term/539
  $menu_links['menu-apl-2013-06-20:taxonomy/term/539'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'taxonomy/term/539',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Job Seekers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'libraryservices',
  );
  // Exported menu link: menu-apl-2013-06-20:taxonomy/term/540
  $menu_links['menu-apl-2013-06-20:taxonomy/term/540'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'taxonomy/term/540',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'New Immigrants',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'libraryservices',
  );
  // Exported menu link: menu-apl-2013-06-20:taxonomy/term/541
  $menu_links['menu-apl-2013-06-20:taxonomy/term/541'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'taxonomy/term/541',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Parents & Educators',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'libraryservices',
  );
  // Exported menu link: menu-apl-2013-06-20:taxonomy/term/542
  $menu_links['menu-apl-2013-06-20:taxonomy/term/542'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'taxonomy/term/542',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Students',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'libraryservices',
  );
  // Exported menu link: menu-apl-2013-06-20:taxonomy/term/543
  $menu_links['menu-apl-2013-06-20:taxonomy/term/543'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'taxonomy/term/543',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Teens',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'libraryservices',
  );
  // Exported menu link: menu-apl-2013-06-20:taxonomy/term/544
  $menu_links['menu-apl-2013-06-20:taxonomy/term/544'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'taxonomy/term/544',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Check Out Materials',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'libraryservices',
  );
  // Exported menu link: menu-apl-2013-06-20:taxonomy/term/545
  $menu_links['menu-apl-2013-06-20:taxonomy/term/545'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'taxonomy/term/545',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Ask & Discover',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'libraryservices',
  );
  // Exported menu link: menu-apl-2013-06-20:taxonomy/term/546
  $menu_links['menu-apl-2013-06-20:taxonomy/term/546'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'taxonomy/term/546',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Community Services',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -45,
    'parent_path' => 'libraryservices',
  );
  // Exported menu link: menu-apl-2013-06-20:taxonomy/term/547
  $menu_links['menu-apl-2013-06-20:taxonomy/term/547'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'taxonomy/term/547',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Computers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'parent_path' => 'libraryservices',
  );
  // Exported menu link: menu-apl-2013-06-20:taxonomy/term/548
  $menu_links['menu-apl-2013-06-20:taxonomy/term/548'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'taxonomy/term/548',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Programs & Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'libraryservices',
  );
  // Exported menu link: menu-apl-2013-06-20:taxonomy/term/549
  $menu_links['menu-apl-2013-06-20:taxonomy/term/549'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'taxonomy/term/549',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Research',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'libraryservices',
  );
  // Exported menu link: menu-apl-2013-06-20:virtual
  $menu_links['menu-apl-2013-06-20:virtual'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'virtual',
    'router_path' => 'virtual',
    'link_title' => 'Virtual Library',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'taxonomy/term/544',
  );
  // Exported menu link: menu-apl-2013-06-20:youth
  $menu_links['menu-apl-2013-06-20:youth'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'youth',
    'router_path' => 'youth',
    'link_title' => 'Youth',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -43,
  );
  // Exported menu link: menu-apl-2013-06-20:youth-events
  $menu_links['menu-apl-2013-06-20:youth-events'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'youth-events',
    'router_path' => 'youth-events',
    'link_title' => 'Events for Youth',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'youth',
  );
  // Exported menu link: menu-apl-2013-06-20:youth-recommends
  $menu_links['menu-apl-2013-06-20:youth-recommends'] = array(
    'menu_name' => 'menu-apl-2013-06-20',
    'link_path' => 'youth-recommends',
    'router_path' => 'youth-recommends',
    'link_title' => 'Recommended for Youth',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'youth',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('AHC History');
  t('APL Director\'s Report');
  t('APL Friends Foundation');
  t('APL Recommends');
  t('About');
  t('About Us');
  t('African American Community Archivist');
  t('Architectural Archives');
  t('Archives and Manuscripts');
  t('Asian American Community Archivist');
  t('Ask & Discover');
  t('Ask a Librarian');
  t('Assistive Technology');
  t('Austin Files');
  t('Austin History ');
  t('Austin History Center');
  t('Awards');
  t('Best Sellers');
  t('Book Clubs');
  t('Book Store');
  t('Books/City Reports');
  t('Business');
  t('Calendar of Events');
  t('Carver Branch');
  t('Catalog');
  t('Cepeda Branch');
  t('Check Out Materials');
  t('Checked Out');
  t('Children');
  t('Classes');
  t('Classic Catalog');
  t('Collections');
  t('Community Archivists Program');
  t('Community Services');
  t('Completed');
  t('Computer Classes');
  t('Computers');
  t('Contact Us');
  t('Copying, Printing, & Scanning ');
  t('Current Exhibits');
  t('Customer Satisfaction Survey');
  t('Databases');
  t('Digital Collections');
  t('Donate Items');
  t('Download Map');
  t('Downloadables Account');
  t('Downloadables Catalog');
  t('Driving Directions and Parking');
  t('Español');
  t('Events for Youth');
  t('Everything Austin');
  t('Exhibit Videos');
  t('Exhibits');
  t('Explore');
  t('FAQ');
  t('Faulk Central Library');
  t('Find Newspapers & Magazines');
  t('Find out more - A New Central Library for Austin');
  t('Fines');
  t('For Later');
  t('Get Involved');
  t('Hampton Branch at Oak Hill');
  t('History of Our Building ');
  t('Holds');
  t('Holiday Schedule');
  t('Howson Branch');
  t('I\'m Following');
  t('Ignored Users');
  t('In Progress');
  t('Inbox');
  t('Información en Español');
  t('Information Guides');
  t('Interactive Map of all locations');
  t('Interlibrary Loan');
  t('Job Seekers');
  t('Language Conversation Groups');
  t('Laptop Checkout');
  t('Library Card');
  t('Little Walnut Creek Branch');
  t('Locations');
  t('Manchaca Road Branch');
  t('Maps');
  t('Meeting Room');
  t('Meeting Rooms');
  t('Mexican American Community Archivist');
  t('Milwood Branch');
  t('My APL');
  t('My APL / My Account');
  t('My Account - Classic');
  t('My Lists');
  t('My Shelves');
  t('New Immigrants');
  t('New Titles');
  t('News & Events');
  t('North Village Branch');
  t('Old Quarry Branch');
  t('Online Exhibits');
  t('Online Photo Collections');
  t('Online Reference Tools');
  t('Oral History/Audio ');
  t('Ordering Photos');
  t('Outreach');
  t('Parents & Educators');
  t('Periodicals');
  t('Personal Picks');
  t('Photographic Collections');
  t('Photographs');
  t('Pleasant Hill Branch');
  t('Preserving Your History');
  t('Programs & Events');
  t('Public Computers & Internet ');
  t('Public Transportation');
  t('Quick Information');
  t('Recent Activity');
  t('Recently Shared');
  t('Recommended for Youth');
  t('Recycled Reads');
  t('Recycled Reads Bookstore');
  t('Reference Services');
  t('Research');
  t('Research Catalog');
  t('Ruiz Branch');
  t('Second Chance Books');
  t('Services');
  t('Southeast Branch');
  t('Speakers Bureau');
  t('Spicewood Springs Branch');
  t('St. John Branch');
  t('Staff Directory');
  t('Staff Picks');
  t('Storytimes');
  t('Students');
  t('Subject Guides');
  t('Suggest a Title');
  t('Summer Reading');
  t('Support the AHC');
  t('Tax Help');
  t('Teens');
  t('Terrazas Branch');
  t('Texshare Cards');
  t('Timeline of AHC History');
  t('Tours');
  t('Tutoring (VICTORY)');
  t('Twin Oaks Branch');
  t('University Hills Branch');
  t('Video');
  t('Virtual Library');
  t('Visit Us');
  t('Volunteer');
  t('Volunteering');
  t('What to Expect');
  t('Who\'s Open Today?');
  t('Wifi');
  t('Willie Mae Kirk Branch');
  t('Windsor Park Branch');
  t('WorldCat');
  t('Yarborough Branch');
  t('Youth');
  t('Youth Blog');


  return $menu_links;
}
