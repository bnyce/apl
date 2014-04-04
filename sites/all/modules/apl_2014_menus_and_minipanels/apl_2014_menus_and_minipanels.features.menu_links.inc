<?php
/**
 * @file
 * apl_2014_menus_and_minipanels.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function apl_2014_menus_and_minipanels_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-apl-footer-2014_connect-with-us:http://library.austintexas.gov/?connect-with-us
  $menu_links['menu-apl-footer-2014_connect-with-us:http://library.austintexas.gov/?connect-with-us'] = array(
    'menu_name' => 'menu-apl-footer-2014',
    'link_path' => 'http://library.austintexas.gov/?connect-with-us',
    'router_path' => '',
    'link_title' => 'Connect with Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-footer-2014_connect-with-us:http://library.austintexas.gov/?connect-with-us',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-apl-footer-2014_contact-us:http://austin.tx.libanswers.com/
  $menu_links['menu-apl-footer-2014_contact-us:http://austin.tx.libanswers.com/'] = array(
    'menu_name' => 'menu-apl-footer-2014',
    'link_path' => 'http://austin.tx.libanswers.com/',
    'router_path' => '',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-footer-2014_contact-us:http://austin.tx.libanswers.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-footer-2014_more-than-books:http://library.austintexas.gov/?more-than-books',
  );
  // Exported menu link: menu-apl-footer-2014_facebook:http://library.austintexas.gov/?facebook
  $menu_links['menu-apl-footer-2014_facebook:http://library.austintexas.gov/?facebook'] = array(
    'menu_name' => 'menu-apl-footer-2014',
    'link_path' => 'http://library.austintexas.gov/?facebook',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-footer-2014_facebook:http://library.austintexas.gov/?facebook',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-footer-2014_connect-with-us:http://library.austintexas.gov/?connect-with-us',
  );
  // Exported menu link: menu-apl-footer-2014_google:http://library.austintexas.gov/?google-plus
  $menu_links['menu-apl-footer-2014_google:http://library.austintexas.gov/?google-plus'] = array(
    'menu_name' => 'menu-apl-footer-2014',
    'link_path' => 'http://library.austintexas.gov/?google-plus',
    'router_path' => '',
    'link_title' => 'Google+',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-footer-2014_google:http://library.austintexas.gov/?google-plus',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-footer-2014_connect-with-us:http://library.austintexas.gov/?connect-with-us',
  );
  // Exported menu link: menu-apl-footer-2014_how-are-we-doing:http://library.austintexas.gov/?customer-satisfaction-survey
  $menu_links['menu-apl-footer-2014_how-are-we-doing:http://library.austintexas.gov/?customer-satisfaction-survey'] = array(
    'menu_name' => 'menu-apl-footer-2014',
    'link_path' => 'http://library.austintexas.gov/?customer-satisfaction-survey',
    'router_path' => '',
    'link_title' => 'How are we doing?',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-footer-2014_how-are-we-doing:http://library.austintexas.gov/?customer-satisfaction-survey',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-footer-2014_more-than-books:http://library.austintexas.gov/?more-than-books',
  );
  // Exported menu link: menu-apl-footer-2014_more-than-books:http://library.austintexas.gov/?more-than-books
  $menu_links['menu-apl-footer-2014_more-than-books:http://library.austintexas.gov/?more-than-books'] = array(
    'menu_name' => 'menu-apl-footer-2014',
    'link_path' => 'http://library.austintexas.gov/?more-than-books',
    'router_path' => '',
    'link_title' => 'more than books',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-footer-2014_more-than-books:http://library.austintexas.gov/?more-than-books',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-apl-footer-2014_new-central-library:http://library.austintexas.gov/newcentral
  $menu_links['menu-apl-footer-2014_new-central-library:http://library.austintexas.gov/newcentral'] = array(
    'menu_name' => 'menu-apl-footer-2014',
    'link_path' => 'http://library.austintexas.gov/newcentral',
    'router_path' => '',
    'link_title' => 'New Central Library',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-footer-2014_new-central-library:http://library.austintexas.gov/newcentral',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-footer-2014_more-than-books:http://library.austintexas.gov/?more-than-books',
  );
  // Exported menu link: menu-apl-footer-2014_privacy-policy:http://library.austintexas.gov/basic-page/privacy-policy
  $menu_links['menu-apl-footer-2014_privacy-policy:http://library.austintexas.gov/basic-page/privacy-policy'] = array(
    'menu_name' => 'menu-apl-footer-2014',
    'link_path' => 'http://library.austintexas.gov/basic-page/privacy-policy',
    'router_path' => '',
    'link_title' => 'Privacy Policy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-footer-2014_privacy-policy:http://library.austintexas.gov/basic-page/privacy-policy',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-footer-2014_more-than-books:http://library.austintexas.gov/?more-than-books',
  );
  // Exported menu link: menu-apl-footer-2014_support-apl:http://library.austintexas.gov/support-library
  $menu_links['menu-apl-footer-2014_support-apl:http://library.austintexas.gov/support-library'] = array(
    'menu_name' => 'menu-apl-footer-2014',
    'link_path' => 'http://library.austintexas.gov/support-library',
    'router_path' => '',
    'link_title' => 'Support APL',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-footer-2014_support-apl:http://library.austintexas.gov/support-library',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-footer-2014_more-than-books:http://library.austintexas.gov/?more-than-books',
  );
  // Exported menu link: menu-apl-footer-2014_twitter:http://library.austintexas.gov/?twitter
  $menu_links['menu-apl-footer-2014_twitter:http://library.austintexas.gov/?twitter'] = array(
    'menu_name' => 'menu-apl-footer-2014',
    'link_path' => 'http://library.austintexas.gov/?twitter',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-footer-2014_twitter:http://library.austintexas.gov/?twitter',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-footer-2014_connect-with-us:http://library.austintexas.gov/?connect-with-us',
  );
  // Exported menu link: menu-apl-footer-2014_volunteer-at-the-library:http://library.austintexas.gov/volunteer
  $menu_links['menu-apl-footer-2014_volunteer-at-the-library:http://library.austintexas.gov/volunteer'] = array(
    'menu_name' => 'menu-apl-footer-2014',
    'link_path' => 'http://library.austintexas.gov/volunteer',
    'router_path' => '',
    'link_title' => 'Volunteer at the Library',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-footer-2014_volunteer-at-the-library:http://library.austintexas.gov/volunteer',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-footer-2014_more-than-books:http://library.austintexas.gov/?more-than-books',
  );
  // Exported menu link: menu-apl-footer-2014_work-for-the-library:https://www.austincityjobs.org/postings/search?query=&query_posted_at=&query_organizational_tier_3_id=40
  $menu_links['menu-apl-footer-2014_work-for-the-library:https://www.austincityjobs.org/postings/search?query=&query_posted_at=&query_organizational_tier_3_id=40'] = array(
    'menu_name' => 'menu-apl-footer-2014',
    'link_path' => 'https://www.austincityjobs.org/postings/search?query=&query_posted_at=&query_organizational_tier_3_id=40',
    'router_path' => '',
    'link_title' => 'Work for the Library',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-footer-2014_work-for-the-library:https://www.austincityjobs.org/postings/search?query=&query_posted_at=&query_organizational_tier_3_id=40',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-footer-2014_more-than-books:http://library.austintexas.gov/?more-than-books',
  );
  // Exported menu link: menu-apl-menu-2014_about-us:http://library.austintexas.gov/?about-us
  $menu_links['menu-apl-menu-2014_about-us:http://library.austintexas.gov/?about-us'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/?about-us',
    'router_path' => '',
    'link_title' => 'About Us',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_about-us:http://library.austintexas.gov/?about-us',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_using-the-library:libraryservices',
  );
  // Exported menu link: menu-apl-menu-2014_about-us:http://library.austintexas.gov/ahc/about-us
  $menu_links['menu-apl-menu-2014_about-us:http://library.austintexas.gov/ahc/about-us'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/ahc/about-us',
    'router_path' => '',
    'link_title' => 'About Us',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_about-us:http://library.austintexas.gov/ahc/about-us',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_austin-history-center---row-one-column-one:http://library.austintexas.gov/?ahc-1-1',
  );
  // Exported menu link: menu-apl-menu-2014_accounts:http://library.austintexas.gov/?accounts
  $menu_links['menu-apl-menu-2014_accounts:http://library.austintexas.gov/?accounts'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/?accounts',
    'router_path' => '',
    'link_title' => 'Accounts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_accounts:http://library.austintexas.gov/?accounts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_my-apl:node/29156',
  );
  // Exported menu link: menu-apl-menu-2014_apl-blog:http://library.austintexas.gov/apl-blogs
  $menu_links['menu-apl-menu-2014_apl-blog:http://library.austintexas.gov/apl-blogs'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/apl-blogs',
    'router_path' => '',
    'link_title' => 'APL Blog',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_apl-blog:http://library.austintexas.gov/apl-blogs',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_recommendations:http://library.austintexas.gov/?recommendations',
  );
  // Exported menu link: menu-apl-menu-2014_architectural-archives:http://library.austintexas.gov/ahc/architectural-archives
  $menu_links['menu-apl-menu-2014_architectural-archives:http://library.austintexas.gov/ahc/architectural-archives'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/ahc/architectural-archives',
    'router_path' => '',
    'link_title' => 'Architectural Archives',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_architectural-archives:http://library.austintexas.gov/ahc/architectural-archives',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_collections---ahc:http://library.austintexas.gov/ahc/collections',
  );
  // Exported menu link: menu-apl-menu-2014_archives--manuscripts:http://library.austintexas.gov/ahc/archives-and-manuscripts
  $menu_links['menu-apl-menu-2014_archives--manuscripts:http://library.austintexas.gov/ahc/archives-and-manuscripts'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/ahc/archives-and-manuscripts',
    'router_path' => '',
    'link_title' => 'Archives & Manuscripts',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_archives--manuscripts:http://library.austintexas.gov/ahc/archives-and-manuscripts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_collections---ahc:http://library.austintexas.gov/ahc/collections',
  );
  // Exported menu link: menu-apl-menu-2014_arts--crafts:http://library.austintexas.gov/events?field_event_loc_tid=All&term_node_tid_depth=215&field_date_value_1%5Bvalue%5D%5Bdate%5D=
  $menu_links['menu-apl-menu-2014_arts--crafts:http://library.austintexas.gov/events?field_event_loc_tid=All&term_node_tid_depth=215&field_date_value_1%5Bvalue%5D%5Bdate%5D='] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/events?field_event_loc_tid=All&term_node_tid_depth=215&field_date_value_1%5Bvalue%5D%5Bdate%5D=',
    'router_path' => '',
    'link_title' => 'Arts & Crafts',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_arts--crafts:http://library.austintexas.gov/events?field_event_loc_tid=All&term_node_tid_depth=215&field_date_value_1%5Bvalue%5D%5Bdate%5D=',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_events---column-one:http://library.austintexas.gov/?events-column-one',
  );
  // Exported menu link: menu-apl-menu-2014_ask-a-librarian:http://austin.tx.libanswers.com/index.php
  $menu_links['menu-apl-menu-2014_ask-a-librarian:http://austin.tx.libanswers.com/index.php'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://austin.tx.libanswers.com/index.php',
    'router_path' => '',
    'link_title' => 'Ask a Librarian',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_ask-a-librarian:http://austin.tx.libanswers.com/index.php',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_services:http://library.austintexas.gov/?services',
  );
  // Exported menu link: menu-apl-menu-2014_ask-a-librarian:http://library.austintexas.gov/ask
  $menu_links['menu-apl-menu-2014_ask-a-librarian:http://library.austintexas.gov/ask'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/ask',
    'router_path' => '',
    'link_title' => 'Ask a Librarian',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_ask-a-librarian:http://library.austintexas.gov/ask',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_research---column-one:http://library.austintexas.gov/?research-column-one',
  );
  // Exported menu link: menu-apl-menu-2014_ask-us---column-one:http://library.austintexas.gov/?ask-us-column-one
  $menu_links['menu-apl-menu-2014_ask-us---column-one:http://library.austintexas.gov/?ask-us-column-one'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/?ask-us-column-one',
    'router_path' => '',
    'link_title' => 'Ask Us - column one',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_ask-us---column-one:http://library.austintexas.gov/?ask-us-column-one',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_ask-us:ask',
  );
  // Exported menu link: menu-apl-menu-2014_ask-us:ask
  $menu_links['menu-apl-menu-2014_ask-us:ask'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'ask',
    'router_path' => 'ask',
    'link_title' => 'Ask Us',
    'options' => array(
      'minipanel' => 'ask_us',
      'menu_minipanels_hover' => array(
        'position' => array(
          'target' => 'false',
          'target_custom' => '',
          'type' => 'absolute',
          'container' => '',
          'corner' => array(
            'target' => 'bottomLeft',
            'tooltip' => 'topMiddle',
          ),
          'adjust' => array(
            'x' => 0,
            'y' => 0,
          ),
        ),
        'show' => array(
          'delay' => 0,
          'when' => array(
            'event' => 'mouseover',
          ),
          'effect' => array(
            'type' => 'false',
            'length' => 0,
          ),
        ),
        'hide' => array(
          'delay' => 0,
          'effect' => array(
            'type' => 'false',
            'length' => 0,
          ),
        ),
        'style' => array(
          'tip' => 'none',
          'name' => 'light',
          'width' => array(
            'min' => 620,
            'max' => 620,
          ),
          'border' => array(
            'width' => 0,
            'color' => '#d3d3d3',
            'radius' => 0,
          ),
        ),
        'mlid' => 4396,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_ask-us:ask',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-apl-menu-2014_audiobooks-on-cd:http://austin.bibliocommons.com/search?custom_query=formatcode%3A%28BOOK_CD%20%29&suppress=true&custom_edit=false&sort%5bfield%5d=NEWLY_ACQUIRED&sort%5btype%5d=BIB_FIELDS&sort%5bdirection%5d=descending
  $menu_links['menu-apl-menu-2014_audiobooks-on-cd:http://austin.bibliocommons.com/search?custom_query=formatcode%3A%28BOOK_CD%20%29&suppress=true&custom_edit=false&sort%5bfield%5d=NEWLY_ACQUIRED&sort%5btype%5d=BIB_FIELDS&sort%5bdirection%5d=descending'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://austin.bibliocommons.com/search?custom_query=formatcode%3A%28BOOK_CD%20%29&suppress=true&custom_edit=false&sort%5bfield%5d=NEWLY_ACQUIRED&sort%5btype%5d=BIB_FIELDS&sort%5bdirection%5d=descending',
    'router_path' => '',
    'link_title' => 'Audiobooks on CD',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_audiobooks-on-cd:http://austin.bibliocommons.com/search?custom_query=formatcode%3A%28BOOK_CD%20%29&suppress=true&custom_edit=false&sort%5bfield%5d=NEWLY_ACQUIRED&sort%5btype%5d=BIB_FIELDS&sort%5bdirection%5d=descending',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_collections---apl:http://library.austintexas.gov/?collections',
  );
  // Exported menu link: menu-apl-menu-2014_austin-files:http://library.austintexas.gov/ahc/austin-files-0
  $menu_links['menu-apl-menu-2014_austin-files:http://library.austintexas.gov/ahc/austin-files-0'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/ahc/austin-files-0',
    'router_path' => '',
    'link_title' => 'Austin Files',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_austin-files:http://library.austintexas.gov/ahc/austin-files-0',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_collections---ahc:http://library.austintexas.gov/ahc/collections',
  );
  // Exported menu link: menu-apl-menu-2014_austin-history-center---row-one-column-one:http://library.austintexas.gov/?ahc-1-1
  $menu_links['menu-apl-menu-2014_austin-history-center---row-one-column-one:http://library.austintexas.gov/?ahc-1-1'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/?ahc-1-1',
    'router_path' => '',
    'link_title' => 'Austin History Center - row one, column one',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_austin-history-center---row-one-column-one:http://library.austintexas.gov/?ahc-1-1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_austin-history-center:ahc/front',
  );
  // Exported menu link: menu-apl-menu-2014_austin-history-center:ahc/front
  $menu_links['menu-apl-menu-2014_austin-history-center:ahc/front'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'ahc/front',
    'router_path' => 'ahc/front',
    'link_title' => 'Austin History Center',
    'options' => array(
      'minipanel' => 'austin_history_center_all',
      'menu_minipanels_hover' => array(
        'position' => array(
          'target' => 'false',
          'target_custom' => '',
          'type' => 'absolute',
          'container' => '',
          'corner' => array(
            'target' => 'bottomRight',
            'tooltip' => 'topRight',
          ),
          'adjust' => array(
            'x' => 0,
            'y' => 0,
          ),
        ),
        'show' => array(
          'delay' => 0,
          'when' => array(
            'event' => 'mouseover',
          ),
          'effect' => array(
            'type' => 'false',
            'length' => 0,
          ),
        ),
        'hide' => array(
          'delay' => 0,
          'effect' => array(
            'type' => 'false',
            'length' => 0,
          ),
        ),
        'style' => array(
          'tip' => 'none',
          'name' => 'light',
          'width' => array(
            'min' => 600,
            'max' => 600,
          ),
          'border' => array(
            'width' => 0,
            'color' => '#d3d3d3',
            'radius' => 0,
          ),
        ),
        'mlid' => 4398,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_austin-history-center:ahc/front',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: menu-apl-menu-2014_austin-history-center:http://library.austintexas.gov/ahc
  $menu_links['menu-apl-menu-2014_austin-history-center:http://library.austintexas.gov/ahc'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/ahc',
    'router_path' => '',
    'link_title' => 'Austin History Center',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_austin-history-center:http://library.austintexas.gov/ahc',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_research---column-one:http://library.austintexas.gov/?research-column-one',
  );
  // Exported menu link: menu-apl-menu-2014_austin-history-center:http://library.austintexas.gov/locations/Austin History Center
  $menu_links['menu-apl-menu-2014_austin-history-center:http://library.austintexas.gov/locations/Austin History Center'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/locations/Austin History Center',
    'router_path' => '',
    'link_title' => 'Austin History Center',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_austin-history-center:http://library.austintexas.gov/locations/Austin History Center',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_locations---column-two:http://library.austintexas.gov/?locations-column-two',
  );
  // Exported menu link: menu-apl-menu-2014_austin-history:http://library.austintexas.gov/ahc/austin-history
  $menu_links['menu-apl-menu-2014_austin-history:http://library.austintexas.gov/ahc/austin-history'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/ahc/austin-history',
    'router_path' => '',
    'link_title' => 'Austin History',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_austin-history:http://library.austintexas.gov/ahc/austin-history',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_research:http://library.austintexas.gov/ahc/research',
  );
  // Exported menu link: menu-apl-menu-2014_award-winners:http://library.austintexas.gov/awards
  $menu_links['menu-apl-menu-2014_award-winners:http://library.austintexas.gov/awards'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/awards',
    'router_path' => '',
    'link_title' => 'Award Winners',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_award-winners:http://library.austintexas.gov/awards',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_new--notable:http://library.austintexas.gov/?new-and-notable',
  );
  // Exported menu link: menu-apl-menu-2014_best-fiction:http://library.austintexas.gov/apl-recommends/Fiction/Best Fiction 2013
  $menu_links['menu-apl-menu-2014_best-fiction:http://library.austintexas.gov/apl-recommends/Fiction/Best Fiction 2013'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/apl-recommends/Fiction/Best Fiction 2013',
    'router_path' => '',
    'link_title' => 'Best Fiction',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_best-fiction:http://library.austintexas.gov/apl-recommends/Fiction/Best Fiction 2013',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_recommendations:http://library.austintexas.gov/?recommendations',
  );
  // Exported menu link: menu-apl-menu-2014_best-nonfiction:http://library.austintexas.gov/apl-recommends/Non-Fiction/Best Nonfiction 2013
  $menu_links['menu-apl-menu-2014_best-nonfiction:http://library.austintexas.gov/apl-recommends/Non-Fiction/Best Nonfiction 2013'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/apl-recommends/Non-Fiction/Best Nonfiction 2013',
    'router_path' => '',
    'link_title' => 'Best Nonfiction',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_best-nonfiction:http://library.austintexas.gov/apl-recommends/Non-Fiction/Best Nonfiction 2013',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_recommendations:http://library.austintexas.gov/?recommendations',
  );
  // Exported menu link: menu-apl-menu-2014_best-sellers:http://library.austintexas.gov/bestsellers
  $menu_links['menu-apl-menu-2014_best-sellers:http://library.austintexas.gov/bestsellers'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/bestsellers',
    'router_path' => '',
    'link_title' => 'Best Sellers',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_best-sellers:http://library.austintexas.gov/bestsellers',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_new--notable:http://library.austintexas.gov/?new-and-notable',
  );
  // Exported menu link: menu-apl-menu-2014_book-clubs:http://library.austintexas.gov/events?field_event_loc_tid=All&term_node_tid_depth=306&field_date_value_1%5Bvalue%5D%5Bdate%5D=
  $menu_links['menu-apl-menu-2014_book-clubs:http://library.austintexas.gov/events?field_event_loc_tid=All&term_node_tid_depth=306&field_date_value_1%5Bvalue%5D%5Bdate%5D='] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/events?field_event_loc_tid=All&term_node_tid_depth=306&field_date_value_1%5Bvalue%5D%5Bdate%5D=',
    'router_path' => '',
    'link_title' => 'Book Clubs',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_book-clubs:http://library.austintexas.gov/events?field_event_loc_tid=All&term_node_tid_depth=306&field_date_value_1%5Bvalue%5D%5Bdate%5D=',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_events---column-one:http://library.austintexas.gov/?events-column-one',
  );
  // Exported menu link: menu-apl-menu-2014_book-donations:http://austin.tx.libanswers.com/a.php?qid=128244
  $menu_links['menu-apl-menu-2014_book-donations:http://austin.tx.libanswers.com/a.php?qid=128244'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://austin.tx.libanswers.com/a.php?qid=128244',
    'router_path' => '',
    'link_title' => 'Book Donations',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_book-donations:http://austin.tx.libanswers.com/a.php?qid=128244',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_support-us:http://library.austintexas.gov/?support-us',
  );
  // Exported menu link: menu-apl-menu-2014_books--city-reports:http://library.austintexas.gov/ahc/bookscity-reports
  $menu_links['menu-apl-menu-2014_books--city-reports:http://library.austintexas.gov/ahc/bookscity-reports'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/ahc/bookscity-reports',
    'router_path' => '',
    'link_title' => 'Books & City Reports',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_books--city-reports:http://library.austintexas.gov/ahc/bookscity-reports',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_collections---ahc:http://library.austintexas.gov/ahc/collections',
  );
  // Exported menu link: menu-apl-menu-2014_books:http://austin.bibliocommons.com/search?custom_query=formatcode%3A%28BK%20%29&suppress=true&custom_edit=false&sort%5bfield%5d=NEWLY_ACQUIRED&sort%5btype%5d=BIB_FIELDS&sort%5bdirection%5d=descending
  $menu_links['menu-apl-menu-2014_books:http://austin.bibliocommons.com/search?custom_query=formatcode%3A%28BK%20%29&suppress=true&custom_edit=false&sort%5bfield%5d=NEWLY_ACQUIRED&sort%5btype%5d=BIB_FIELDS&sort%5bdirection%5d=descending'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://austin.bibliocommons.com/search?custom_query=formatcode%3A%28BK%20%29&suppress=true&custom_edit=false&sort%5bfield%5d=NEWLY_ACQUIRED&sort%5btype%5d=BIB_FIELDS&sort%5bdirection%5d=descending',
    'router_path' => '',
    'link_title' => 'Books',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_books:http://austin.bibliocommons.com/search?custom_query=formatcode%3A%28BK%20%29&suppress=true&custom_edit=false&sort%5bfield%5d=NEWLY_ACQUIRED&sort%5btype%5d=BIB_FIELDS&sort%5bdirection%5d=descending',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_collections---apl:http://library.austintexas.gov/?collections',
  );
  // Exported menu link: menu-apl-menu-2014_bookstore:http://www.recycledreads.org/
  $menu_links['menu-apl-menu-2014_bookstore:http://www.recycledreads.org/'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://www.recycledreads.org/',
    'router_path' => '',
    'link_title' => 'Bookstore',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_bookstore:http://www.recycledreads.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_services:http://library.austintexas.gov/?services',
  );
  // Exported menu link: menu-apl-menu-2014_business--nonprofits:http://library.austintexas.gov/information-guide-subjects/business
  $menu_links['menu-apl-menu-2014_business--nonprofits:http://library.austintexas.gov/information-guide-subjects/business'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/information-guide-subjects/business',
    'router_path' => '',
    'link_title' => 'Business & Nonprofits',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_business--nonprofits:http://library.austintexas.gov/information-guide-subjects/business',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_all-information-guides:http://library.austintexas.gov/information-guides',
  );
  // Exported menu link: menu-apl-menu-2014_business:http://library.austintexas.gov/library-service-audience/business
  $menu_links['menu-apl-menu-2014_business:http://library.austintexas.gov/library-service-audience/business'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/library-service-audience/business',
    'router_path' => '',
    'link_title' => 'Business',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_business:http://library.austintexas.gov/library-service-audience/business',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_for-you:http://library.austintexas.gov/?for-you',
  );
  // Exported menu link: menu-apl-menu-2014_calendar:http://library.austintexas.gov/events
  $menu_links['menu-apl-menu-2014_calendar:http://library.austintexas.gov/events'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/events',
    'router_path' => '',
    'link_title' => 'Calendar',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_calendar:http://library.austintexas.gov/events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_events---column-one:http://library.austintexas.gov/?events-column-one',
  );
  // Exported menu link: menu-apl-menu-2014_carver-branch:http://library.austintexas.gov/locations/Carver Branch
  $menu_links['menu-apl-menu-2014_carver-branch:http://library.austintexas.gov/locations/Carver Branch'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/locations/Carver Branch',
    'router_path' => '',
    'link_title' => 'Carver Branch',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_carver-branch:http://library.austintexas.gov/locations/Carver Branch',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_locations---column-two:http://library.austintexas.gov/?locations-column-two',
  );
  // Exported menu link: menu-apl-menu-2014_catalog-account:http://library.austintexas.gov/myapl
  $menu_links['menu-apl-menu-2014_catalog-account:http://library.austintexas.gov/myapl'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/myapl',
    'router_path' => '',
    'link_title' => 'Catalog Account',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_catalog-account:http://library.austintexas.gov/myapl',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_accounts:http://library.austintexas.gov/?accounts',
  );
  // Exported menu link: menu-apl-menu-2014_catalog:http://library.austintexas.gov/catalog
  $menu_links['menu-apl-menu-2014_catalog:http://library.austintexas.gov/catalog'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/catalog',
    'router_path' => '',
    'link_title' => 'Catalog',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_catalog:http://library.austintexas.gov/catalog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_collections---apl:http://library.austintexas.gov/?collections',
  );
  // Exported menu link: menu-apl-menu-2014_cepeda-branch:http://library.austintexas.gov/locations/Cepeda Branch
  $menu_links['menu-apl-menu-2014_cepeda-branch:http://library.austintexas.gov/locations/Cepeda Branch'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/locations/Cepeda Branch',
    'router_path' => '',
    'link_title' => 'Cepeda Branch',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_cepeda-branch:http://library.austintexas.gov/locations/Cepeda Branch',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_locations---column-two:http://library.austintexas.gov/?locations-column-two',
  );
  // Exported menu link: menu-apl-menu-2014_check-out:http://library.austintexas.gov/checkedout
  $menu_links['menu-apl-menu-2014_check-out:http://library.austintexas.gov/checkedout'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/checkedout',
    'router_path' => '',
    'link_title' => 'Check Out',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_check-out:http://library.austintexas.gov/checkedout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_my-borrowing:http://library.austintexas.gov/?my-borrowing',
  );
  // Exported menu link: menu-apl-menu-2014_children:http://alis.dev/lynda20130801/library-service-audience/children
  $menu_links['menu-apl-menu-2014_children:http://alis.dev/lynda20130801/library-service-audience/children'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://alis.dev/lynda20130801/library-service-audience/children',
    'router_path' => '',
    'link_title' => 'Children',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_children:http://alis.dev/lynda20130801/library-service-audience/children',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_for-you:http://library.austintexas.gov/?for-you',
  );
  // Exported menu link: menu-apl-menu-2014_classic-catalog:http://library.austintexas.gov/classiccatalog
  $menu_links['menu-apl-menu-2014_classic-catalog:http://library.austintexas.gov/classiccatalog'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/classiccatalog',
    'router_path' => '',
    'link_title' => 'Classic Catalog',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_classic-catalog:http://library.austintexas.gov/classiccatalog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_collections---apl:http://library.austintexas.gov/?collections',
  );
  // Exported menu link: menu-apl-menu-2014_completed:http://austin.bibliocommons.com/collection/show/my/library/completed
  $menu_links['menu-apl-menu-2014_completed:http://austin.bibliocommons.com/collection/show/my/library/completed'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://austin.bibliocommons.com/collection/show/my/library/completed',
    'router_path' => '',
    'link_title' => 'Completed',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_completed:http://austin.bibliocommons.com/collection/show/my/library/completed',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_my-shelves:http://austin.bibliocommons.com/collection/show/my/library/completed',
  );
  // Exported menu link: menu-apl-menu-2014_computer-classes:http://library.austintexas.gov/events?field_event_loc_tid=All&term_node_tid_depth=116&field_date_value_1%5Bvalue%5D%5Bdate%5D=
  $menu_links['menu-apl-menu-2014_computer-classes:http://library.austintexas.gov/events?field_event_loc_tid=All&term_node_tid_depth=116&field_date_value_1%5Bvalue%5D%5Bdate%5D='] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/events?field_event_loc_tid=All&term_node_tid_depth=116&field_date_value_1%5Bvalue%5D%5Bdate%5D=',
    'router_path' => '',
    'link_title' => 'Computer Classes',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_computer-classes:http://library.austintexas.gov/events?field_event_loc_tid=All&term_node_tid_depth=116&field_date_value_1%5Bvalue%5D%5Bdate%5D=',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_events---column-one:http://library.austintexas.gov/?events-column-one',
  );
  // Exported menu link: menu-apl-menu-2014_computers--wifi:http://library.austintexas.gov/library-service-category/computers
  $menu_links['menu-apl-menu-2014_computers--wifi:http://library.austintexas.gov/library-service-category/computers'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/library-service-category/computers',
    'router_path' => '',
    'link_title' => 'Computers & WiFi',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_computers--wifi:http://library.austintexas.gov/library-service-category/computers',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_services:http://library.austintexas.gov/?services',
  );
  // Exported menu link: menu-apl-menu-2014_connected-youth:http://library.austintexas.gov/youth?connected
  $menu_links['menu-apl-menu-2014_connected-youth:http://library.austintexas.gov/youth?connected'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/youth?connected',
    'router_path' => '',
    'link_title' => 'Connected Youth',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_connected-youth:http://library.austintexas.gov/youth?connected',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_youth-services:youth',
  );
  // Exported menu link: menu-apl-menu-2014_consumer:http://library.austintexas.gov/information-guide-subjects/consumer
  $menu_links['menu-apl-menu-2014_consumer:http://library.austintexas.gov/information-guide-subjects/consumer'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/information-guide-subjects/consumer',
    'router_path' => '',
    'link_title' => 'Consumer',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_consumer:http://library.austintexas.gov/information-guide-subjects/consumer',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_all-information-guides:http://library.austintexas.gov/information-guides',
  );
  // Exported menu link: menu-apl-menu-2014_creative-arts:http://library.austintexas.gov/information-guide-subjects/creative-arts
  $menu_links['menu-apl-menu-2014_creative-arts:http://library.austintexas.gov/information-guide-subjects/creative-arts'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/information-guide-subjects/creative-arts',
    'router_path' => '',
    'link_title' => 'Creative Arts',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_creative-arts:http://library.austintexas.gov/information-guide-subjects/creative-arts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_all-information-guides:http://library.austintexas.gov/information-guides',
  );
  // Exported menu link: menu-apl-menu-2014_databases:http://library.austintexas.gov/databases
  $menu_links['menu-apl-menu-2014_databases:http://library.austintexas.gov/databases'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/databases',
    'router_path' => '',
    'link_title' => 'Databases',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_databases:http://library.austintexas.gov/databases',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_research---column-one:http://library.austintexas.gov/?research-column-one',
  );
  // Exported menu link: menu-apl-menu-2014_directors-report:http://library.austintexas.gov/basic-page/directors-report
  $menu_links['menu-apl-menu-2014_directors-report:http://library.austintexas.gov/basic-page/directors-report'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/basic-page/directors-report',
    'router_path' => '',
    'link_title' => 'Director\'s Report',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_directors-report:http://library.austintexas.gov/basic-page/directors-report',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_about-us:http://library.austintexas.gov/?about-us',
  );
  // Exported menu link: menu-apl-menu-2014_download-ebooks:http://austin.tx.libanswers.com/a.php?qid=130046
  $menu_links['menu-apl-menu-2014_download-ebooks:http://austin.tx.libanswers.com/a.php?qid=130046'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://austin.tx.libanswers.com/a.php?qid=130046',
    'router_path' => '',
    'link_title' => 'Download eBooks',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_download-ebooks:http://austin.tx.libanswers.com/a.php?qid=130046',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_how-to:http://library.austintexas.gov/?how-to',
  );
  // Exported menu link: menu-apl-menu-2014_download-pdf-map:http://library.austintexas.gov/downloadmap
  $menu_links['menu-apl-menu-2014_download-pdf-map:http://library.austintexas.gov/downloadmap'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/downloadmap',
    'router_path' => '',
    'link_title' => 'Download PDF Map',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_download-pdf-map:http://library.austintexas.gov/downloadmap',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_general-information:http://library.austintexas.gov/?general-information',
  );
  // Exported menu link: menu-apl-menu-2014_ebooks--eaudiobooks:http://austin.tx.libanswers.com/a.php?qid=130046
  $menu_links['menu-apl-menu-2014_ebooks--eaudiobooks:http://austin.tx.libanswers.com/a.php?qid=130046'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://austin.tx.libanswers.com/a.php?qid=130046',
    'router_path' => '',
    'link_title' => 'eBooks & eAudiobooks',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_ebooks--eaudiobooks:http://austin.tx.libanswers.com/a.php?qid=130046',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_collections---apl:http://library.austintexas.gov/?collections',
  );
  // Exported menu link: menu-apl-menu-2014_ebooks:http://library.austintexas.gov/apl-recommends/downloadables
  $menu_links['menu-apl-menu-2014_ebooks:http://library.austintexas.gov/apl-recommends/downloadables'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/apl-recommends/downloadables',
    'router_path' => '',
    'link_title' => 'eBooks',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_ebooks:http://library.austintexas.gov/apl-recommends/downloadables',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_recommendations:http://library.austintexas.gov/?recommendations',
  );
  // Exported menu link: menu-apl-menu-2014_education--training:http://library.austintexas.gov/information-guide-subjects/education-training
  $menu_links['menu-apl-menu-2014_education--training:http://library.austintexas.gov/information-guide-subjects/education-training'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/information-guide-subjects/education-training',
    'router_path' => '',
    'link_title' => 'Education & Training',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_education--training:http://library.austintexas.gov/information-guide-subjects/education-training',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_all-information-guides:http://library.austintexas.gov/information-guides',
  );
  // Exported menu link: menu-apl-menu-2014_ejournal-finder:http://yl9ar3tq5l.search.serialssolutions.com/
  $menu_links['menu-apl-menu-2014_ejournal-finder:http://yl9ar3tq5l.search.serialssolutions.com/'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://yl9ar3tq5l.search.serialssolutions.com/',
    'router_path' => '',
    'link_title' => 'eJournal Finder',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_ejournal-finder:http://yl9ar3tq5l.search.serialssolutions.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_research---column-one:http://library.austintexas.gov/?research-column-one',
  );
  // Exported menu link: menu-apl-menu-2014_email-or-chat:http://austin.tx.libanswers.com/index.php
  $menu_links['menu-apl-menu-2014_email-or-chat:http://austin.tx.libanswers.com/index.php'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://austin.tx.libanswers.com/index.php',
    'router_path' => '',
    'link_title' => 'Email or Chat',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_email-or-chat:http://austin.tx.libanswers.com/index.php',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_ask-us---column-one:http://library.austintexas.gov/?ask-us-column-one',
  );
  // Exported menu link: menu-apl-menu-2014_espaol:http://alis.dev/lynda20130801/library-service-audience/espa%C3%B1ol
  $menu_links['menu-apl-menu-2014_espaol:http://alis.dev/lynda20130801/library-service-audience/espa%C3%B1ol'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://alis.dev/lynda20130801/library-service-audience/espa%C3%B1ol',
    'router_path' => '',
    'link_title' => 'Español',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_espaol:http://alis.dev/lynda20130801/library-service-audience/espa%C3%B1ol',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_for-you:http://library.austintexas.gov/?for-you',
  );
  // Exported menu link: menu-apl-menu-2014_events---column-one:http://library.austintexas.gov/?events-column-one
  $menu_links['menu-apl-menu-2014_events---column-one:http://library.austintexas.gov/?events-column-one'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/?events-column-one',
    'router_path' => '',
    'link_title' => 'Events - column one',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_events---column-one:http://library.austintexas.gov/?events-column-one',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_events:programs',
  );
  // Exported menu link: menu-apl-menu-2014_events-for-youth:http://library.austintexas.gov/youth?events
  $menu_links['menu-apl-menu-2014_events-for-youth:http://library.austintexas.gov/youth?events'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/youth?events',
    'router_path' => '',
    'link_title' => 'Events for Youth',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_events-for-youth:http://library.austintexas.gov/youth?events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_youth-services:youth',
  );
  // Exported menu link: menu-apl-menu-2014_events:programs
  $menu_links['menu-apl-menu-2014_events:programs'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'programs',
    'router_path' => 'programs',
    'link_title' => 'Events',
    'options' => array(
      'minipanel' => 'events',
      'menu_minipanels_hover' => array(
        'position' => array(
          'target' => 'false',
          'target_custom' => '',
          'type' => 'absolute',
          'container' => '',
          'corner' => array(
            'target' => 'bottomLeft',
            'tooltip' => 'topLeft',
          ),
          'adjust' => array(
            'x' => 0,
            'y' => 0,
          ),
        ),
        'show' => array(
          'delay' => 0,
          'when' => array(
            'event' => 'mouseover',
          ),
          'effect' => array(
            'type' => 'false',
            'length' => 0,
          ),
        ),
        'hide' => array(
          'delay' => 0,
          'effect' => array(
            'type' => 'false',
            'length' => 0,
          ),
        ),
        'style' => array(
          'tip' => 'none',
          'name' => 'light',
          'width' => array(
            'min' => 200,
            'max' => 200,
          ),
          'border' => array(
            'width' => 0,
            'color' => '#d3d3d3',
            'radius' => 0,
          ),
        ),
        'mlid' => 4393,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_events:programs',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-apl-menu-2014_everything-austin:http://library.austintexas.gov/ahc/everything-austin
  $menu_links['menu-apl-menu-2014_everything-austin:http://library.austintexas.gov/ahc/everything-austin'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/ahc/everything-austin',
    'router_path' => '',
    'link_title' => 'Everything Austin',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_everything-austin:http://library.austintexas.gov/ahc/everything-austin',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_research:http://library.austintexas.gov/ahc/research',
  );
  // Exported menu link: menu-apl-menu-2014_exhibits:http://library.austintexas.gov/ahc/exhibits
  $menu_links['menu-apl-menu-2014_exhibits:http://library.austintexas.gov/ahc/exhibits'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/ahc/exhibits',
    'router_path' => '',
    'link_title' => 'Exhibits',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_exhibits:http://library.austintexas.gov/ahc/exhibits',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_austin-history-center---row-one-column-one:http://library.austintexas.gov/?ahc-1-1',
  );
  // Exported menu link: menu-apl-menu-2014_explore:node/29127
  $menu_links['menu-apl-menu-2014_explore:node/29127'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'node/29127',
    'router_path' => 'node/%',
    'link_title' => 'Explore',
    'options' => array(
      'minipanel' => 'explore',
      'menu_minipanels_hover' => array(
        'position' => array(
          'target' => 'false',
          'target_custom' => '',
          'type' => 'absolute',
          'container' => '',
          'corner' => array(
            'target' => 'bottomLeft',
            'tooltip' => 'topLeft',
          ),
          'adjust' => array(
            'x' => 0,
            'y' => 0,
          ),
        ),
        'show' => array(
          'delay' => 0,
          'when' => array(
            'event' => 'mouseover',
          ),
          'effect' => array(
            'type' => 'false',
            'length' => 0,
          ),
        ),
        'hide' => array(
          'delay' => 0,
          'effect' => array(
            'type' => 'false',
            'length' => 0,
          ),
        ),
        'style' => array(
          'tip' => 'none',
          'name' => 'light',
          'width' => array(
            'min' => 600,
            'max' => 600,
          ),
          'border' => array(
            'width' => 0,
            'color' => '#d3d3d3',
            'radius' => 0,
          ),
        ),
        'mlid' => 4391,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_explore:node/29127',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-apl-menu-2014_facts--policies:http://library.austintexas.gov/basic-page/about-library#facts
  $menu_links['menu-apl-menu-2014_facts--policies:http://library.austintexas.gov/basic-page/about-library#facts'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/basic-page/about-library#facts',
    'router_path' => '',
    'link_title' => 'Facts & Policies',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_facts--policies:http://library.austintexas.gov/basic-page/about-library#facts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_about-us:http://library.austintexas.gov/?about-us',
  );
  // Exported menu link: menu-apl-menu-2014_faqs:http://austin.tx.libanswers.com/browse.php?iid=105&o=totalhits_desc
  $menu_links['menu-apl-menu-2014_faqs:http://austin.tx.libanswers.com/browse.php?iid=105&o=totalhits_desc'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://austin.tx.libanswers.com/browse.php?iid=105&o=totalhits_desc',
    'router_path' => '',
    'link_title' => 'FAQs',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_faqs:http://austin.tx.libanswers.com/browse.php?iid=105&o=totalhits_desc',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_ask-us---column-one:http://library.austintexas.gov/?ask-us-column-one',
  );
  // Exported menu link: menu-apl-menu-2014_faulk-central-library:http://library.austintexas.gov/locations/Faulk Central Library
  $menu_links['menu-apl-menu-2014_faulk-central-library:http://library.austintexas.gov/locations/Faulk Central Library'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/locations/Faulk Central Library',
    'router_path' => '',
    'link_title' => 'Faulk Central Library',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_faulk-central-library:http://library.austintexas.gov/locations/Faulk Central Library',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_locations---column-two:http://library.austintexas.gov/?locations-column-two',
  );
  // Exported menu link: menu-apl-menu-2014_find-a-book-club:http://library.austintexas.gov/new-information-guides/how-find-book-club-0
  $menu_links['menu-apl-menu-2014_find-a-book-club:http://library.austintexas.gov/new-information-guides/how-find-book-club-0'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/new-information-guides/how-find-book-club-0',
    'router_path' => '',
    'link_title' => 'Find a Book Club',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_find-a-book-club:http://library.austintexas.gov/new-information-guides/how-find-book-club-0',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_how-to:http://library.austintexas.gov/?how-to',
  );
  // Exported menu link: menu-apl-menu-2014_fines:http://library.austintexas.gov/fines
  $menu_links['menu-apl-menu-2014_fines:http://library.austintexas.gov/fines'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/fines',
    'router_path' => '',
    'link_title' => 'Fines',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_fines:http://library.austintexas.gov/fines',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_my-borrowing:http://library.austintexas.gov/?my-borrowing',
  );
  // Exported menu link: menu-apl-menu-2014_for-later:http://austin.bibliocommons.com/collection/show/my/library/for_later
  $menu_links['menu-apl-menu-2014_for-later:http://austin.bibliocommons.com/collection/show/my/library/for_later'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://austin.bibliocommons.com/collection/show/my/library/for_later',
    'router_path' => '',
    'link_title' => 'For Later',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_for-later:http://austin.bibliocommons.com/collection/show/my/library/for_later',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_my-shelves:http://austin.bibliocommons.com/collection/show/my/library/completed',
  );
  // Exported menu link: menu-apl-menu-2014_for-you:http://library.austintexas.gov/?for-you
  $menu_links['menu-apl-menu-2014_for-you:http://library.austintexas.gov/?for-you'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/?for-you',
    'router_path' => '',
    'link_title' => 'For You',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_for-you:http://library.austintexas.gov/?for-you',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_using-the-library:libraryservices',
  );
  // Exported menu link: menu-apl-menu-2014_friends-foundation:http://www.austinlibrary.org/
  $menu_links['menu-apl-menu-2014_friends-foundation:http://www.austinlibrary.org/'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://www.austinlibrary.org/',
    'router_path' => '',
    'link_title' => 'Friends Foundation',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_friends-foundation:http://www.austinlibrary.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_about-us:http://library.austintexas.gov/?about-us',
  );
  // Exported menu link: menu-apl-menu-2014_geneaology--people-search:http://library.austintexas.gov/information-guide-subjects/genealogy-and-people-search
  $menu_links['menu-apl-menu-2014_geneaology--people-search:http://library.austintexas.gov/information-guide-subjects/genealogy-and-people-search'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/information-guide-subjects/genealogy-and-people-search',
    'router_path' => '',
    'link_title' => 'Geneaology & People Search',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_geneaology--people-search:http://library.austintexas.gov/information-guide-subjects/genealogy-and-people-search',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_all-information-guides:http://library.austintexas.gov/information-guides',
  );
  // Exported menu link: menu-apl-menu-2014_general-information:http://library.austintexas.gov/?general-information
  $menu_links['menu-apl-menu-2014_general-information:http://library.austintexas.gov/?general-information'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/?general-information',
    'router_path' => '',
    'link_title' => 'General Information',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_general-information:http://library.austintexas.gov/?general-information',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_locations:locations',
  );
  // Exported menu link: menu-apl-menu-2014_general-research:http://library.austintexas.gov/information-guide-subjects/general-research
  $menu_links['menu-apl-menu-2014_general-research:http://library.austintexas.gov/information-guide-subjects/general-research'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/information-guide-subjects/general-research',
    'router_path' => '',
    'link_title' => 'General Research',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_general-research:http://library.austintexas.gov/information-guide-subjects/general-research',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_all-information-guides:http://library.austintexas.gov/information-guides',
  );
  // Exported menu link: menu-apl-menu-2014_get-a-library-card:http://austin.tx.libanswers.com/a.php?qid=127546
  $menu_links['menu-apl-menu-2014_get-a-library-card:http://austin.tx.libanswers.com/a.php?qid=127546'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://austin.tx.libanswers.com/a.php?qid=127546',
    'router_path' => '',
    'link_title' => 'Get a Library Card',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_get-a-library-card:http://austin.tx.libanswers.com/a.php?qid=127546',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_how-to:http://library.austintexas.gov/?how-to',
  );
  // Exported menu link: menu-apl-menu-2014_get-involved:http://library.austintexas.gov/ahc/get-involved
  $menu_links['menu-apl-menu-2014_get-involved:http://library.austintexas.gov/ahc/get-involved'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/ahc/get-involved',
    'router_path' => '',
    'link_title' => 'Get Involved',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_get-involved:http://library.austintexas.gov/ahc/get-involved',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_austin-history-center---row-one-column-one:http://library.austintexas.gov/?ahc-1-1',
  );
  // Exported menu link: menu-apl-menu-2014_gift-donations--dedications:http://library.austintexas.gov/support-library#novel
  $menu_links['menu-apl-menu-2014_gift-donations--dedications:http://library.austintexas.gov/support-library#novel'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/support-library#novel',
    'router_path' => '',
    'link_title' => 'Gift Donations & Dedications',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_gift-donations--dedications:http://library.austintexas.gov/support-library#novel',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_support-us:http://library.austintexas.gov/?support-us',
  );
  // Exported menu link: menu-apl-menu-2014_gold-cards:http://library.austintexas.gov/support-library#gold card
  $menu_links['menu-apl-menu-2014_gold-cards:http://library.austintexas.gov/support-library#gold card'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/support-library#gold card',
    'router_path' => '',
    'link_title' => 'Gold Cards',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_gold-cards:http://library.austintexas.gov/support-library#gold card',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_support-us:http://library.austintexas.gov/?support-us',
  );
  // Exported menu link: menu-apl-menu-2014_government:http://library.austintexas.gov/information-guide-subjects/government
  $menu_links['menu-apl-menu-2014_government:http://library.austintexas.gov/information-guide-subjects/government'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/information-guide-subjects/government',
    'router_path' => '',
    'link_title' => 'Government',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_government:http://library.austintexas.gov/information-guide-subjects/government',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_research---column-three:http://library.austintexas.gov/?research-column-three',
  );
  // Exported menu link: menu-apl-menu-2014_grants-awards--donors:http://library.austintexas.gov/basic-page/recent-grants-awards-and-donors
  $menu_links['menu-apl-menu-2014_grants-awards--donors:http://library.austintexas.gov/basic-page/recent-grants-awards-and-donors'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/basic-page/recent-grants-awards-and-donors',
    'router_path' => '',
    'link_title' => 'Grants, Awards & Donors',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_grants-awards--donors:http://library.austintexas.gov/basic-page/recent-grants-awards-and-donors',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_support-us:http://library.austintexas.gov/?support-us',
  );
  // Exported menu link: menu-apl-menu-2014_graphic-novels:http://library.austintexas.gov/apl-recommends/Fiction/Graphic Novels for Adults - Best of 2013
  $menu_links['menu-apl-menu-2014_graphic-novels:http://library.austintexas.gov/apl-recommends/Fiction/Graphic Novels for Adults - Best of 2013'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/apl-recommends/Fiction/Graphic Novels for Adults - Best of 2013',
    'router_path' => '',
    'link_title' => 'Graphic Novels',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_graphic-novels:http://library.austintexas.gov/apl-recommends/Fiction/Graphic Novels for Adults - Best of 2013',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_recommendations:http://library.austintexas.gov/?recommendations',
  );
  // Exported menu link: menu-apl-menu-2014_hampton-branch-at-oak-hill:http://library.austintexas.gov/locations/Hampton Branch at Oak Hill
  $menu_links['menu-apl-menu-2014_hampton-branch-at-oak-hill:http://library.austintexas.gov/locations/Hampton Branch at Oak Hill'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/locations/Hampton Branch at Oak Hill',
    'router_path' => '',
    'link_title' => 'Hampton Branch at Oak Hill',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_hampton-branch-at-oak-hill:http://library.austintexas.gov/locations/Hampton Branch at Oak Hill',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_locations---column-two:http://library.austintexas.gov/?locations-column-two',
  );
  // Exported menu link: menu-apl-menu-2014_health-resources:http://library.austintexas.gov/health
  $menu_links['menu-apl-menu-2014_health-resources:http://library.austintexas.gov/health'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/health',
    'router_path' => '',
    'link_title' => 'Health Resources',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_health-resources:http://library.austintexas.gov/health',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_new--notable:http://library.austintexas.gov/?new-and-notable',
  );
  // Exported menu link: menu-apl-menu-2014_health:http://library.austintexas.gov/information-guide-subjects/health
  $menu_links['menu-apl-menu-2014_health:http://library.austintexas.gov/information-guide-subjects/health'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/information-guide-subjects/health',
    'router_path' => '',
    'link_title' => 'Health',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_health:http://library.austintexas.gov/information-guide-subjects/health',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_research---column-three:http://library.austintexas.gov/?research-column-three',
  );
  // Exported menu link: menu-apl-menu-2014_holds:http://library.austintexas.gov/holds
  $menu_links['menu-apl-menu-2014_holds:http://library.austintexas.gov/holds'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/holds',
    'router_path' => '',
    'link_title' => 'Holds',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_holds:http://library.austintexas.gov/holds',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_my-borrowing:http://library.austintexas.gov/?my-borrowing',
  );
  // Exported menu link: menu-apl-menu-2014_holiday-schedule:http://library.austintexas.gov/holidays
  $menu_links['menu-apl-menu-2014_holiday-schedule:http://library.austintexas.gov/holidays'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/holidays',
    'router_path' => '',
    'link_title' => 'Holiday Schedule',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_holiday-schedule:http://library.austintexas.gov/holidays',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_general-information:http://library.austintexas.gov/?general-information',
  );
  // Exported menu link: menu-apl-menu-2014_homework-help:http://library.austintexas.gov/databases/Homework Help
  $menu_links['menu-apl-menu-2014_homework-help:http://library.austintexas.gov/databases/Homework Help'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/databases/Homework Help',
    'router_path' => '',
    'link_title' => 'Homework Help',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_homework-help:http://library.austintexas.gov/databases/Homework Help',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_research---column-one:http://library.austintexas.gov/?research-column-one',
  );
  // Exported menu link: menu-apl-menu-2014_how-are-we-doing:http://austin.countingopinions.com/
  $menu_links['menu-apl-menu-2014_how-are-we-doing:http://austin.countingopinions.com/'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://austin.countingopinions.com/',
    'router_path' => '',
    'link_title' => 'How are we doing?',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_how-are-we-doing:http://austin.countingopinions.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_ask-us---column-one:http://library.austintexas.gov/?ask-us-column-one',
  );
  // Exported menu link: menu-apl-menu-2014_how-to:http://library.austintexas.gov/?how-to
  $menu_links['menu-apl-menu-2014_how-to:http://library.austintexas.gov/?how-to'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/?how-to',
    'router_path' => '',
    'link_title' => 'How To',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_how-to:http://library.austintexas.gov/?how-to',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_using-the-library:libraryservices',
  );
  // Exported menu link: menu-apl-menu-2014_how-to:http://library.austintexas.gov/information-guide-subjects/how
  $menu_links['menu-apl-menu-2014_how-to:http://library.austintexas.gov/information-guide-subjects/how'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/information-guide-subjects/how',
    'router_path' => '',
    'link_title' => 'How To',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_how-to:http://library.austintexas.gov/information-guide-subjects/how',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_research---column-three:http://library.austintexas.gov/?research-column-three',
  );
  // Exported menu link: menu-apl-menu-2014_howson-branch:http://library.austintexas.gov/locations/Howson Branch
  $menu_links['menu-apl-menu-2014_howson-branch:http://library.austintexas.gov/locations/Howson Branch'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/locations/Howson Branch',
    'router_path' => '',
    'link_title' => 'Howson Branch',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_howson-branch:http://library.austintexas.gov/locations/Howson Branch',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_locations---column-two:http://library.austintexas.gov/?locations-column-two',
  );
  // Exported menu link: menu-apl-menu-2014_ignored-users:http://austin.bibliocommons.com/ignoredusers
  $menu_links['menu-apl-menu-2014_ignored-users:http://austin.bibliocommons.com/ignoredusers'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://austin.bibliocommons.com/ignoredusers',
    'router_path' => '',
    'link_title' => 'Ignored Users',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_ignored-users:http://austin.bibliocommons.com/ignoredusers',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_my-community:http://library.austintexas.gov/?my-community',
  );
  // Exported menu link: menu-apl-menu-2014_im-following:http://austin.bibliocommons.com/trustedsources
  $menu_links['menu-apl-menu-2014_im-following:http://austin.bibliocommons.com/trustedsources'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://austin.bibliocommons.com/trustedsources',
    'router_path' => '',
    'link_title' => 'I\'m Following',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_im-following:http://austin.bibliocommons.com/trustedsources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_my-community:http://library.austintexas.gov/?my-community',
  );
  // Exported menu link: menu-apl-menu-2014_in-progress:http://austin.bibliocommons.com/collection/show/my/library/in_progress
  $menu_links['menu-apl-menu-2014_in-progress:http://austin.bibliocommons.com/collection/show/my/library/in_progress'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://austin.bibliocommons.com/collection/show/my/library/in_progress',
    'router_path' => '',
    'link_title' => 'In Progress',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_in-progress:http://austin.bibliocommons.com/collection/show/my/library/in_progress',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_my-shelves:http://austin.bibliocommons.com/collection/show/my/library/completed',
  );
  // Exported menu link: menu-apl-menu-2014_inbox:http://austin.bibliocommons.com/messages
  $menu_links['menu-apl-menu-2014_inbox:http://austin.bibliocommons.com/messages'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://austin.bibliocommons.com/messages',
    'router_path' => '',
    'link_title' => 'Inbox',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_inbox:http://austin.bibliocommons.com/messages',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_my-community:http://library.austintexas.gov/?my-community',
  );
  // Exported menu link: menu-apl-menu-2014_interlibrary-loan:http://library.austintexas.gov/basic-page/interlibrary-loan
  $menu_links['menu-apl-menu-2014_interlibrary-loan:http://library.austintexas.gov/basic-page/interlibrary-loan'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/basic-page/interlibrary-loan',
    'router_path' => '',
    'link_title' => 'Interlibrary Loan',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_interlibrary-loan:http://library.austintexas.gov/basic-page/interlibrary-loan',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_services:http://library.austintexas.gov/?services',
  );
  // Exported menu link: menu-apl-menu-2014_job-seekers:http://alis.dev/lynda20130801/library-service-audience/job-seekers
  $menu_links['menu-apl-menu-2014_job-seekers:http://alis.dev/lynda20130801/library-service-audience/job-seekers'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://alis.dev/lynda20130801/library-service-audience/job-seekers',
    'router_path' => '',
    'link_title' => 'Job Seekers',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_job-seekers:http://alis.dev/lynda20130801/library-service-audience/job-seekers',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_for-you:http://library.austintexas.gov/?for-you',
  );
  // Exported menu link: menu-apl-menu-2014_jobs:http://library.austintexas.gov/information-guide-subjects/jobs
  $menu_links['menu-apl-menu-2014_jobs:http://library.austintexas.gov/information-guide-subjects/jobs'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/information-guide-subjects/jobs',
    'router_path' => '',
    'link_title' => 'Jobs',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_jobs:http://library.austintexas.gov/information-guide-subjects/jobs',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_research---column-three:http://library.austintexas.gov/?research-column-three',
  );
  // Exported menu link: menu-apl-menu-2014_language-practice:http://library.austintexas.gov/events?field_event_loc_tid=All&term_node_tid_depth=218&field_date_value_1%5Bvalue%5D%5Bdate%5D=
  $menu_links['menu-apl-menu-2014_language-practice:http://library.austintexas.gov/events?field_event_loc_tid=All&term_node_tid_depth=218&field_date_value_1%5Bvalue%5D%5Bdate%5D='] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/events?field_event_loc_tid=All&term_node_tid_depth=218&field_date_value_1%5Bvalue%5D%5Bdate%5D=',
    'router_path' => '',
    'link_title' => 'Language Practice',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_language-practice:http://library.austintexas.gov/events?field_event_loc_tid=All&term_node_tid_depth=218&field_date_value_1%5Bvalue%5D%5Bdate%5D=',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_events---column-one:http://library.austintexas.gov/?events-column-one',
  );
  // Exported menu link: menu-apl-menu-2014_large-print:http://austin.bibliocommons.com/search?custom_query=formatcode%3A(LPRINT%20)&suppress=true&custom_edit=false
  $menu_links['menu-apl-menu-2014_large-print:http://austin.bibliocommons.com/search?custom_query=formatcode%3A(LPRINT%20)&suppress=true&custom_edit=false'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://austin.bibliocommons.com/search?custom_query=formatcode%3A(LPRINT%20)&suppress=true&custom_edit=false',
    'router_path' => '',
    'link_title' => 'Large Print',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_large-print:http://austin.bibliocommons.com/search?custom_query=formatcode%3A(LPRINT%20)&suppress=true&custom_edit=false',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_collections---apl:http://library.austintexas.gov/?collections',
  );
  // Exported menu link: menu-apl-menu-2014_legal:http://library.austintexas.gov/information-guide-subjects/legal
  $menu_links['menu-apl-menu-2014_legal:http://library.austintexas.gov/information-guide-subjects/legal'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/information-guide-subjects/legal',
    'router_path' => '',
    'link_title' => 'Legal',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_legal:http://library.austintexas.gov/information-guide-subjects/legal',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_research---column-three:http://library.austintexas.gov/?research-column-three',
  );
  // Exported menu link: menu-apl-menu-2014_librarian-lists:http://austin.bibliocommons.com/lists/show/128108121_austinpladultlibrarians
  $menu_links['menu-apl-menu-2014_librarian-lists:http://austin.bibliocommons.com/lists/show/128108121_austinpladultlibrarians'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://austin.bibliocommons.com/lists/show/128108121_austinpladultlibrarians',
    'router_path' => '',
    'link_title' => 'Librarian Lists',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_librarian-lists:http://austin.bibliocommons.com/lists/show/128108121_austinpladultlibrarians',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_recommendations:http://library.austintexas.gov/?recommendations',
  );
  // Exported menu link: menu-apl-menu-2014_library-commission:http://www.austintexas.gov/librarycommission
  $menu_links['menu-apl-menu-2014_library-commission:http://www.austintexas.gov/librarycommission'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://www.austintexas.gov/librarycommission',
    'router_path' => '',
    'link_title' => 'Library Commission',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_library-commission:http://www.austintexas.gov/librarycommission',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_about-us:http://library.austintexas.gov/?about-us',
  );
  // Exported menu link: menu-apl-menu-2014_literature-live:http://library.austintexas.gov/youth?literature-live
  $menu_links['menu-apl-menu-2014_literature-live:http://library.austintexas.gov/youth?literature-live'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/youth?literature-live',
    'router_path' => '',
    'link_title' => 'Literature Live!',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_literature-live:http://library.austintexas.gov/youth?literature-live',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_youth-services:youth',
  );
  // Exported menu link: menu-apl-menu-2014_literature:http://library.austintexas.gov/information-guide-subjects/literature
  $menu_links['menu-apl-menu-2014_literature:http://library.austintexas.gov/information-guide-subjects/literature'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/information-guide-subjects/literature',
    'router_path' => '',
    'link_title' => 'Literature',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_literature:http://library.austintexas.gov/information-guide-subjects/literature',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_research---column-three:http://library.austintexas.gov/?research-column-three',
  );
  // Exported menu link: menu-apl-menu-2014_little-walnut-creek-branch:http://library.austintexas.gov/locations/Little Walnut Creek Branch
  $menu_links['menu-apl-menu-2014_little-walnut-creek-branch:http://library.austintexas.gov/locations/Little Walnut Creek Branch'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/locations/Little Walnut Creek Branch',
    'router_path' => '',
    'link_title' => 'Little Walnut Creek Branch',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_little-walnut-creek-branch:http://library.austintexas.gov/locations/Little Walnut Creek Branch',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_locations---column-two:http://library.austintexas.gov/?locations-column-two',
  );
  // Exported menu link: menu-apl-menu-2014_locations---column-three:http://library.austintexas.gov/?locations-column-three
  $menu_links['menu-apl-menu-2014_locations---column-three:http://library.austintexas.gov/?locations-column-three'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/?locations-column-three',
    'router_path' => '',
    'link_title' => 'Locations - column three',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_locations---column-three:http://library.austintexas.gov/?locations-column-three',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_locations:locations',
  );
  // Exported menu link: menu-apl-menu-2014_locations---column-two:http://library.austintexas.gov/?locations-column-two
  $menu_links['menu-apl-menu-2014_locations---column-two:http://library.austintexas.gov/?locations-column-two'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/?locations-column-two',
    'router_path' => '',
    'link_title' => 'Locations - column two',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_locations---column-two:http://library.austintexas.gov/?locations-column-two',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_locations:locations',
  );
  // Exported menu link: menu-apl-menu-2014_locations:locations
  $menu_links['menu-apl-menu-2014_locations:locations'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'locations',
    'router_path' => 'locations',
    'link_title' => 'Locations',
    'options' => array(
      'minipanel' => 'locations',
      'menu_minipanels_hover' => array(
        'position' => array(
          'target' => 'false',
          'target_custom' => '',
          'type' => 'absolute',
          'container' => '',
          'corner' => array(
            'target' => 'bottomLeft',
            'tooltip' => 'topLeft',
          ),
          'adjust' => array(
            'x' => 0,
            'y' => 0,
          ),
        ),
        'show' => array(
          'delay' => 0,
          'when' => array(
            'event' => 'mouseover',
          ),
          'effect' => array(
            'type' => 'false',
            'length' => 0,
          ),
        ),
        'hide' => array(
          'delay' => 0,
          'effect' => array(
            'type' => 'false',
            'length' => 0,
          ),
        ),
        'style' => array(
          'tip' => 'none',
          'name' => 'light',
          'width' => array(
            'min' => 600,
            'max' => 600,
          ),
          'border' => array(
            'width' => 0,
            'color' => '#d3d3d3',
            'radius' => 0,
          ),
        ),
        'mlid' => 4394,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_locations:locations',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-apl-menu-2014_manchaca-road-branch:http://library.austintexas.gov/locations/Manchaca Road Branch
  $menu_links['menu-apl-menu-2014_manchaca-road-branch:http://library.austintexas.gov/locations/Manchaca Road Branch'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/locations/Manchaca Road Branch',
    'router_path' => '',
    'link_title' => 'Manchaca Road Branch',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_manchaca-road-branch:http://library.austintexas.gov/locations/Manchaca Road Branch',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_locations---column-two:http://library.austintexas.gov/?locations-column-two',
  );
  // Exported menu link: menu-apl-menu-2014_map-of-all-locations:http://library.austintexas.gov/map
  $menu_links['menu-apl-menu-2014_map-of-all-locations:http://library.austintexas.gov/map'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/map',
    'router_path' => '',
    'link_title' => 'Map of all Locations',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_map-of-all-locations:http://library.austintexas.gov/map',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_general-information:http://library.austintexas.gov/?general-information',
  );
  // Exported menu link: menu-apl-menu-2014_maps:http://library.austintexas.gov/ahc/maps
  $menu_links['menu-apl-menu-2014_maps:http://library.austintexas.gov/ahc/maps'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/ahc/maps',
    'router_path' => '',
    'link_title' => 'Maps',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_maps:http://library.austintexas.gov/ahc/maps',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_collections---ahc:http://library.austintexas.gov/ahc/collections',
  );
  // Exported menu link: menu-apl-menu-2014_meeting-rooms:http://library.austintexas.gov/basic-page/meeting-rooms
  $menu_links['menu-apl-menu-2014_meeting-rooms:http://library.austintexas.gov/basic-page/meeting-rooms'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/basic-page/meeting-rooms',
    'router_path' => '',
    'link_title' => 'Meeting Rooms',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_meeting-rooms:http://library.austintexas.gov/basic-page/meeting-rooms',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_services:http://library.austintexas.gov/?services',
  );
  // Exported menu link: menu-apl-menu-2014_milwood-branch:http://library.austintexas.gov/locations/Milwood Branch
  $menu_links['menu-apl-menu-2014_milwood-branch:http://library.austintexas.gov/locations/Milwood Branch'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/locations/Milwood Branch',
    'router_path' => '',
    'link_title' => 'Milwood Branch',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_milwood-branch:http://library.austintexas.gov/locations/Milwood Branch',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_locations---column-two:http://library.austintexas.gov/?locations-column-two',
  );
  // Exported menu link: menu-apl-menu-2014_more-faqs:http://austin.tx.libanswers.com/browse.php?iid=105&o=totalhits_desc
  $menu_links['menu-apl-menu-2014_more-faqs:http://austin.tx.libanswers.com/browse.php?iid=105&o=totalhits_desc'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://austin.tx.libanswers.com/browse.php?iid=105&o=totalhits_desc',
    'router_path' => '',
    'link_title' => 'More FAQs',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_more-faqs:http://austin.tx.libanswers.com/browse.php?iid=105&o=totalhits_desc',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_how-to:http://library.austintexas.gov/?how-to',
  );
  // Exported menu link: menu-apl-menu-2014_more-recommendations:http://library.austintexas.gov/apl-recommends
  $menu_links['menu-apl-menu-2014_more-recommendations:http://library.austintexas.gov/apl-recommends'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/apl-recommends',
    'router_path' => '',
    'link_title' => 'More Recommendations',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_more-recommendations:http://library.austintexas.gov/apl-recommends',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_recommendations:http://library.austintexas.gov/?recommendations',
  );
  // Exported menu link: menu-apl-menu-2014_movies:http://austin.bibliocommons.com/search?custom_query=formatcode%3A%28VIDEO_DOWNLOAD%20OR%20DVD%20OR%20VIDEO_ONLINE%20OR%20VC%20%29&suppress=true&custom_edit=false&sort%5bfield%5d=NEWLY_ACQUIRED&sort%5btype%5d=BIB_FIELDS&sort%5bdirection%5d=descending
  $menu_links['menu-apl-menu-2014_movies:http://austin.bibliocommons.com/search?custom_query=formatcode%3A%28VIDEO_DOWNLOAD%20OR%20DVD%20OR%20VIDEO_ONLINE%20OR%20VC%20%29&suppress=true&custom_edit=false&sort%5bfield%5d=NEWLY_ACQUIRED&sort%5btype%5d=BIB_FIELDS&sort%5bdirection%5d=descending'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://austin.bibliocommons.com/search?custom_query=formatcode%3A%28VIDEO_DOWNLOAD%20OR%20DVD%20OR%20VIDEO_ONLINE%20OR%20VC%20%29&suppress=true&custom_edit=false&sort%5bfield%5d=NEWLY_ACQUIRED&sort%5btype%5d=BIB_FIELDS&sort%5bdirection%5d=descending',
    'router_path' => '',
    'link_title' => 'Movies',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_movies:http://austin.bibliocommons.com/search?custom_query=formatcode%3A%28VIDEO_DOWNLOAD%20OR%20DVD%20OR%20VIDEO_ONLINE%20OR%20VC%20%29&suppress=true&custom_edit=false&sort%5bfield%5d=NEWLY_ACQUIRED&sort%5btype%5d=BIB_FIELDS&sort%5bdirection%5d=descending',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_collections---apl:http://library.austintexas.gov/?collections',
  );
  // Exported menu link: menu-apl-menu-2014_music:http://austin.bibliocommons.com/search?custom_query=formatcode%3A%28MUSIC_CS%20OR%20MUSIC_CD%20OR%20MUSIC_MP3_CD%20%29&suppress=true&custom_edit=false&sort%5bfield%5d=NEWLY_ACQUIRED&sort%5btype%5d=BIB_FIELDS&sort%5bdirection%5d=descending
  $menu_links['menu-apl-menu-2014_music:http://austin.bibliocommons.com/search?custom_query=formatcode%3A%28MUSIC_CS%20OR%20MUSIC_CD%20OR%20MUSIC_MP3_CD%20%29&suppress=true&custom_edit=false&sort%5bfield%5d=NEWLY_ACQUIRED&sort%5btype%5d=BIB_FIELDS&sort%5bdirection%5d=descending'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://austin.bibliocommons.com/search?custom_query=formatcode%3A%28MUSIC_CS%20OR%20MUSIC_CD%20OR%20MUSIC_MP3_CD%20%29&suppress=true&custom_edit=false&sort%5bfield%5d=NEWLY_ACQUIRED&sort%5btype%5d=BIB_FIELDS&sort%5bdirection%5d=descending',
    'router_path' => '',
    'link_title' => 'Music',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_music:http://austin.bibliocommons.com/search?custom_query=formatcode%3A%28MUSIC_CS%20OR%20MUSIC_CD%20OR%20MUSIC_MP3_CD%20%29&suppress=true&custom_edit=false&sort%5bfield%5d=NEWLY_ACQUIRED&sort%5btype%5d=BIB_FIELDS&sort%5bdirection%5d=descending',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_collections---apl:http://library.austintexas.gov/?collections',
  );
  // Exported menu link: menu-apl-menu-2014_my-account---classic:http://library.austintexas.gov/myaccountclassic
  $menu_links['menu-apl-menu-2014_my-account---classic:http://library.austintexas.gov/myaccountclassic'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/myaccountclassic',
    'router_path' => '',
    'link_title' => 'My Account - Classic',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_my-account---classic:http://library.austintexas.gov/myaccountclassic',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_accounts:http://library.austintexas.gov/?accounts',
  );
  // Exported menu link: menu-apl-menu-2014_my-apl:node/29156
  $menu_links['menu-apl-menu-2014_my-apl:node/29156'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'node/29156',
    'router_path' => 'node/%',
    'link_title' => 'My APL',
    'options' => array(
      'minipanel' => 'my_apl',
      'menu_minipanels_hover' => array(
        'position' => array(
          'target' => 'false',
          'target_custom' => '',
          'type' => 'absolute',
          'container' => '',
          'corner' => array(
            'target' => 'bottomLeft',
            'tooltip' => 'topLeft',
          ),
          'adjust' => array(
            'x' => 0,
            'y' => 0,
          ),
        ),
        'show' => array(
          'delay' => 0,
          'when' => array(
            'event' => 'mouseover',
          ),
          'effect' => array(
            'type' => 'false',
            'length' => 0,
          ),
        ),
        'hide' => array(
          'delay' => 0,
          'effect' => array(
            'type' => 'false',
            'length' => 0,
          ),
        ),
        'style' => array(
          'tip' => 'none',
          'name' => 'light',
          'width' => array(
            'min' => 600,
            'max' => 980,
          ),
          'border' => array(
            'width' => 0,
            'color' => '#d3d3d3',
            'radius' => 0,
          ),
        ),
        'mlid' => 4390,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_my-apl:node/29156',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-apl-menu-2014_my-borrowing:http://library.austintexas.gov/?my-borrowing
  $menu_links['menu-apl-menu-2014_my-borrowing:http://library.austintexas.gov/?my-borrowing'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/?my-borrowing',
    'router_path' => '',
    'link_title' => 'My Borrowing',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_my-borrowing:http://library.austintexas.gov/?my-borrowing',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_my-apl:node/29156',
  );
  // Exported menu link: menu-apl-menu-2014_my-collections:http://library.austintexas.gov/?my-collections
  $menu_links['menu-apl-menu-2014_my-collections:http://library.austintexas.gov/?my-collections'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/?my-collections',
    'router_path' => '',
    'link_title' => 'My Collections',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_my-collections:http://library.austintexas.gov/?my-collections',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_my-apl:node/29156',
  );
  // Exported menu link: menu-apl-menu-2014_my-community:http://library.austintexas.gov/?my-community
  $menu_links['menu-apl-menu-2014_my-community:http://library.austintexas.gov/?my-community'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/?my-community',
    'router_path' => '',
    'link_title' => 'My Community',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_my-community:http://library.austintexas.gov/?my-community',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_my-apl:node/29156',
  );
  // Exported menu link: menu-apl-menu-2014_my-lists:http://austin.bibliocommons.com/lists/show/mine
  $menu_links['menu-apl-menu-2014_my-lists:http://austin.bibliocommons.com/lists/show/mine'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://austin.bibliocommons.com/lists/show/mine',
    'router_path' => '',
    'link_title' => 'My Lists',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_my-lists:http://austin.bibliocommons.com/lists/show/mine',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_my-collections:http://library.austintexas.gov/?my-collections',
  );
  // Exported menu link: menu-apl-menu-2014_my-shelves:http://austin.bibliocommons.com/collection/show/my/library/completed
  $menu_links['menu-apl-menu-2014_my-shelves:http://austin.bibliocommons.com/collection/show/my/library/completed'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://austin.bibliocommons.com/collection/show/my/library/completed',
    'router_path' => '',
    'link_title' => 'My Shelves',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_my-shelves:http://austin.bibliocommons.com/collection/show/my/library/completed',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_my-collections:http://library.austintexas.gov/?my-collections',
  );
  // Exported menu link: menu-apl-menu-2014_mystery--suspense:http://library.austintexas.gov/apl-recommends/Fiction/Mystery and Suspense
  $menu_links['menu-apl-menu-2014_mystery--suspense:http://library.austintexas.gov/apl-recommends/Fiction/Mystery and Suspense'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/apl-recommends/Fiction/Mystery and Suspense',
    'router_path' => '',
    'link_title' => 'Mystery & Suspense',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_mystery--suspense:http://library.austintexas.gov/apl-recommends/Fiction/Mystery and Suspense',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_recommendations:http://library.austintexas.gov/?recommendations',
  );
  // Exported menu link: menu-apl-menu-2014_new--notable:http://library.austintexas.gov/?new-and-notable
  $menu_links['menu-apl-menu-2014_new--notable:http://library.austintexas.gov/?new-and-notable'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/?new-and-notable',
    'router_path' => '',
    'link_title' => 'New & Notable',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_new--notable:http://library.austintexas.gov/?new-and-notable',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_explore:node/29127',
  );
  // Exported menu link: menu-apl-menu-2014_new-central-library:http://library.austintexas.gov/newcentral
  $menu_links['menu-apl-menu-2014_new-central-library:http://library.austintexas.gov/newcentral'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/newcentral',
    'router_path' => '',
    'link_title' => 'New Central Library',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_new-central-library:http://library.austintexas.gov/newcentral',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_general-information:http://library.austintexas.gov/?general-information',
  );
  // Exported menu link: menu-apl-menu-2014_new-immigrants-center:http://www.austinlibrary.com/newip/
  $menu_links['menu-apl-menu-2014_new-immigrants-center:http://www.austinlibrary.com/newip/'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://www.austinlibrary.com/newip/',
    'router_path' => '',
    'link_title' => 'New Immigrants Center',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_new-immigrants-center:http://www.austinlibrary.com/newip/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_services:http://library.austintexas.gov/?services',
  );
  // Exported menu link: menu-apl-menu-2014_new-immigrants:http://alis.dev/lynda20130801/library-service-audience/new-immigrants
  $menu_links['menu-apl-menu-2014_new-immigrants:http://alis.dev/lynda20130801/library-service-audience/new-immigrants'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://alis.dev/lynda20130801/library-service-audience/new-immigrants',
    'router_path' => '',
    'link_title' => 'New Immigrants',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_new-immigrants:http://alis.dev/lynda20130801/library-service-audience/new-immigrants',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_for-you:http://library.austintexas.gov/?for-you',
  );
  // Exported menu link: menu-apl-menu-2014_new-titles:http://library.austintexas.gov/newtitles
  $menu_links['menu-apl-menu-2014_new-titles:http://library.austintexas.gov/newtitles'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/newtitles',
    'router_path' => '',
    'link_title' => 'New Titles',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_new-titles:http://library.austintexas.gov/newtitles',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_new--notable:http://library.austintexas.gov/?new-and-notable',
  );
  // Exported menu link: menu-apl-menu-2014_news--events:http://library.austintexas.gov/ahc/news-events
  $menu_links['menu-apl-menu-2014_news--events:http://library.austintexas.gov/ahc/news-events'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/ahc/news-events',
    'router_path' => '',
    'link_title' => 'News & Events',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_news--events:http://library.austintexas.gov/ahc/news-events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_austin-history-center---row-one-column-one:http://library.austintexas.gov/?ahc-1-1',
  );
  // Exported menu link: menu-apl-menu-2014_newspapers--magazines:http://library.austintexas.gov/new-information-guides/newspapers-magazines-and-journals
  $menu_links['menu-apl-menu-2014_newspapers--magazines:http://library.austintexas.gov/new-information-guides/newspapers-magazines-and-journals'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/new-information-guides/newspapers-magazines-and-journals',
    'router_path' => '',
    'link_title' => 'Newspapers & Magazines',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_newspapers--magazines:http://library.austintexas.gov/new-information-guides/newspapers-magazines-and-journals',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_collections---apl:http://library.austintexas.gov/?collections',
  );
  // Exported menu link: menu-apl-menu-2014_north-village-branch:http://library.austintexas.gov/locations/North Village Branch
  $menu_links['menu-apl-menu-2014_north-village-branch:http://library.austintexas.gov/locations/North Village Branch'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/locations/North Village Branch',
    'router_path' => '',
    'link_title' => 'North Village Branch',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_north-village-branch:http://library.austintexas.gov/locations/North Village Branch',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_locations---column-two:http://library.austintexas.gov/?locations-column-two',
  );
  // Exported menu link: menu-apl-menu-2014_old-quarry-branch:http://library.austintexas.gov/locations/Old Quarry Branch
  $menu_links['menu-apl-menu-2014_old-quarry-branch:http://library.austintexas.gov/locations/Old Quarry Branch'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/locations/Old Quarry Branch',
    'router_path' => '',
    'link_title' => 'Old Quarry Branch',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_old-quarry-branch:http://library.austintexas.gov/locations/Old Quarry Branch',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_locations---column-two:http://library.austintexas.gov/?locations-column-two',
  );
  // Exported menu link: menu-apl-menu-2014_online-photo-collections:http://library.austintexas.gov/ahc/online-photo-collections
  $menu_links['menu-apl-menu-2014_online-photo-collections:http://library.austintexas.gov/ahc/online-photo-collections'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/ahc/online-photo-collections',
    'router_path' => '',
    'link_title' => 'Online Photo Collections',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_online-photo-collections:http://library.austintexas.gov/ahc/online-photo-collections',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_photographs:http://library.austintexas.gov/ahc/photographs',
  );
  // Exported menu link: menu-apl-menu-2014_online-reference-tools:http://library.austintexas.gov/ahc/online-reference-tools
  $menu_links['menu-apl-menu-2014_online-reference-tools:http://library.austintexas.gov/ahc/online-reference-tools'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/ahc/online-reference-tools',
    'router_path' => '',
    'link_title' => 'Online Reference Tools',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_online-reference-tools:http://library.austintexas.gov/ahc/online-reference-tools',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_research:http://library.austintexas.gov/ahc/research',
  );
  // Exported menu link: menu-apl-menu-2014_oral-historyaudio:http://library.austintexas.gov/ahc/oral-historyaudio
  $menu_links['menu-apl-menu-2014_oral-historyaudio:http://library.austintexas.gov/ahc/oral-historyaudio'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/ahc/oral-historyaudio',
    'router_path' => '',
    'link_title' => 'Oral History/Audio',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_oral-historyaudio:http://library.austintexas.gov/ahc/oral-historyaudio',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_collections---ahc:http://library.austintexas.gov/ahc/collections',
  );
  // Exported menu link: menu-apl-menu-2014_ordering-photos:http://library.austintexas.gov/ahc/ordering-photos
  $menu_links['menu-apl-menu-2014_ordering-photos:http://library.austintexas.gov/ahc/ordering-photos'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/ahc/ordering-photos',
    'router_path' => '',
    'link_title' => 'Ordering Photos',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_ordering-photos:http://library.austintexas.gov/ahc/ordering-photos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_photographs:http://library.austintexas.gov/ahc/photographs',
  );
  // Exported menu link: menu-apl-menu-2014_outreach:http://library.austintexas.gov/ahc/outreach
  $menu_links['menu-apl-menu-2014_outreach:http://library.austintexas.gov/ahc/outreach'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/ahc/outreach',
    'router_path' => '',
    'link_title' => 'Outreach',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_outreach:http://library.austintexas.gov/ahc/outreach',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_austin-history-center---row-one-column-one:http://library.austintexas.gov/?ahc-1-1',
  );
  // Exported menu link: menu-apl-menu-2014_overdrive-account:http://library.austintexas.gov/downloadablesaccount
  $menu_links['menu-apl-menu-2014_overdrive-account:http://library.austintexas.gov/downloadablesaccount'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/downloadablesaccount',
    'router_path' => '',
    'link_title' => 'OverDrive Account',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_overdrive-account:http://library.austintexas.gov/downloadablesaccount',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_accounts:http://library.austintexas.gov/?accounts',
  );
  // Exported menu link: menu-apl-menu-2014_overdrive-catalog:http://austinlibrary.lib.overdrive.com/
  $menu_links['menu-apl-menu-2014_overdrive-catalog:http://austinlibrary.lib.overdrive.com/'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://austinlibrary.lib.overdrive.com/',
    'router_path' => '',
    'link_title' => 'OverDrive Catalog',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_overdrive-catalog:http://austinlibrary.lib.overdrive.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_collections---apl:http://library.austintexas.gov/?collections',
  );
  // Exported menu link: menu-apl-menu-2014_parents--educators:http://alis.dev/lynda20130801/library-service-audience/parents-educators
  $menu_links['menu-apl-menu-2014_parents--educators:http://alis.dev/lynda20130801/library-service-audience/parents-educators'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://alis.dev/lynda20130801/library-service-audience/parents-educators',
    'router_path' => '',
    'link_title' => 'Parents & Educators',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_parents--educators:http://alis.dev/lynda20130801/library-service-audience/parents-educators',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_for-you:http://library.austintexas.gov/?for-you',
  );
  // Exported menu link: menu-apl-menu-2014_pay-fines:http://austin.tx.libanswers.com/answer.php?qid=127563
  $menu_links['menu-apl-menu-2014_pay-fines:http://austin.tx.libanswers.com/answer.php?qid=127563'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://austin.tx.libanswers.com/answer.php?qid=127563',
    'router_path' => '',
    'link_title' => 'Pay Fines',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_pay-fines:http://austin.tx.libanswers.com/answer.php?qid=127563',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_how-to:http://library.austintexas.gov/?how-to',
  );
  // Exported menu link: menu-apl-menu-2014_periodicals:http://library.austintexas.gov/ahc/periodicals
  $menu_links['menu-apl-menu-2014_periodicals:http://library.austintexas.gov/ahc/periodicals'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/ahc/periodicals',
    'router_path' => '',
    'link_title' => 'Periodicals',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_periodicals:http://library.austintexas.gov/ahc/periodicals',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_collections---ahc:http://library.austintexas.gov/ahc/collections',
  );
  // Exported menu link: menu-apl-menu-2014_personal-picks:http://library.austintexas.gov/personalpicks
  $menu_links['menu-apl-menu-2014_personal-picks:http://library.austintexas.gov/personalpicks'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/personalpicks',
    'router_path' => '',
    'link_title' => 'Personal Picks',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_personal-picks:http://library.austintexas.gov/personalpicks',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_recommendations:http://library.austintexas.gov/?recommendations',
  );
  // Exported menu link: menu-apl-menu-2014_personal-picks:http://www.austinlibrary.com/personalpicks/
  $menu_links['menu-apl-menu-2014_personal-picks:http://www.austinlibrary.com/personalpicks/'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://www.austinlibrary.com/personalpicks/',
    'router_path' => '',
    'link_title' => 'Personal Picks',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_personal-picks:http://www.austinlibrary.com/personalpicks/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_ask-us---column-one:http://library.austintexas.gov/?ask-us-column-one',
  );
  // Exported menu link: menu-apl-menu-2014_photographic-collections:http://library.austintexas.gov/ahc/photograph-collections
  $menu_links['menu-apl-menu-2014_photographic-collections:http://library.austintexas.gov/ahc/photograph-collections'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/ahc/photograph-collections',
    'router_path' => '',
    'link_title' => 'Photographic Collections',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_photographic-collections:http://library.austintexas.gov/ahc/photograph-collections',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_photographs:http://library.austintexas.gov/ahc/photographs',
  );
  // Exported menu link: menu-apl-menu-2014_photographs:http://library.austintexas.gov/ahc/photographs
  $menu_links['menu-apl-menu-2014_photographs:http://library.austintexas.gov/ahc/photographs'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/ahc/photographs',
    'router_path' => '',
    'link_title' => 'Photographs',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_photographs:http://library.austintexas.gov/ahc/photographs',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_collections---ahc:http://library.austintexas.gov/ahc/collections',
  );
  // Exported menu link: menu-apl-menu-2014_place-a-hold:http://austin.tx.libanswers.com/a.php?qid=11160
  $menu_links['menu-apl-menu-2014_place-a-hold:http://austin.tx.libanswers.com/a.php?qid=11160'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://austin.tx.libanswers.com/a.php?qid=11160',
    'router_path' => '',
    'link_title' => 'Place a Hold',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_place-a-hold:http://austin.tx.libanswers.com/a.php?qid=11160',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_how-to:http://library.austintexas.gov/?how-to',
  );
  // Exported menu link: menu-apl-menu-2014_pleasant-hill-branch:http://library.austintexas.gov/locations/Pleasant Hill Branch
  $menu_links['menu-apl-menu-2014_pleasant-hill-branch:http://library.austintexas.gov/locations/Pleasant Hill Branch'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/locations/Pleasant Hill Branch',
    'router_path' => '',
    'link_title' => 'Pleasant Hill Branch',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_pleasant-hill-branch:http://library.austintexas.gov/locations/Pleasant Hill Branch',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_locations---column-two:http://library.austintexas.gov/?locations-column-two',
  );
  // Exported menu link: menu-apl-menu-2014_preserving-your-history:http://library.austintexas.gov/ahc/preserving-your-history
  $menu_links['menu-apl-menu-2014_preserving-your-history:http://library.austintexas.gov/ahc/preserving-your-history'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/ahc/preserving-your-history',
    'router_path' => '',
    'link_title' => 'Preserving Your History',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_preserving-your-history:http://library.austintexas.gov/ahc/preserving-your-history',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_research:http://library.austintexas.gov/ahc/research',
  );
  // Exported menu link: menu-apl-menu-2014_quick-information:http://library.austintexas.gov/basic-page/quick-information
  $menu_links['menu-apl-menu-2014_quick-information:http://library.austintexas.gov/basic-page/quick-information'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/basic-page/quick-information',
    'router_path' => '',
    'link_title' => 'Quick Information',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_quick-information:http://library.austintexas.gov/basic-page/quick-information',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_research---column-one:http://library.austintexas.gov/?research-column-one',
  );
  // Exported menu link: menu-apl-menu-2014_recent-activity:http://library.austintexas.gov/recentactivity
  $menu_links['menu-apl-menu-2014_recent-activity:http://library.austintexas.gov/recentactivity'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/recentactivity',
    'router_path' => '',
    'link_title' => 'Recent Activity',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_recent-activity:http://library.austintexas.gov/recentactivity',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_new--notable:http://library.austintexas.gov/?new-and-notable',
  );
  // Exported menu link: menu-apl-menu-2014_recently-shared:http://austin.bibliocommons.com/recently_shared
  $menu_links['menu-apl-menu-2014_recently-shared:http://austin.bibliocommons.com/recently_shared'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://austin.bibliocommons.com/recently_shared',
    'router_path' => '',
    'link_title' => 'Recently Shared',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_recently-shared:http://austin.bibliocommons.com/recently_shared',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_my-community:http://library.austintexas.gov/?my-community',
  );
  // Exported menu link: menu-apl-menu-2014_recommendations:http://library.austintexas.gov/?recommendations
  $menu_links['menu-apl-menu-2014_recommendations:http://library.austintexas.gov/?recommendations'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/?recommendations',
    'router_path' => '',
    'link_title' => 'Recommendations',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_recommendations:http://library.austintexas.gov/?recommendations',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_explore:node/29127',
  );
  // Exported menu link: menu-apl-menu-2014_recommended-for-youth:http://library.austintexas.gov/youth?recommended
  $menu_links['menu-apl-menu-2014_recommended-for-youth:http://library.austintexas.gov/youth?recommended'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/youth?recommended',
    'router_path' => '',
    'link_title' => 'Recommended for Youth',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_recommended-for-youth:http://library.austintexas.gov/youth?recommended',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_youth-services:youth',
  );
  // Exported menu link: menu-apl-menu-2014_recycled-reads-bookstore:http://www.recycledreads.org/
  $menu_links['menu-apl-menu-2014_recycled-reads-bookstore:http://www.recycledreads.org/'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://www.recycledreads.org/',
    'router_path' => '',
    'link_title' => 'Recycled Reads Bookstore',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_recycled-reads-bookstore:http://www.recycledreads.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_locations---column-three:http://library.austintexas.gov/?locations-column-three',
  );
  // Exported menu link: menu-apl-menu-2014_recycled-reads:node/29150
  $menu_links['menu-apl-menu-2014_recycled-reads:node/29150'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'node/29150',
    'router_path' => 'node/%',
    'link_title' => 'Recycled Reads',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_recycled-reads:node/29150',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-apl-menu-2014_reference-services:http://library.austintexas.gov/ahc/reference-services
  $menu_links['menu-apl-menu-2014_reference-services:http://library.austintexas.gov/ahc/reference-services'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/ahc/reference-services',
    'router_path' => '',
    'link_title' => 'Reference Services',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_reference-services:http://library.austintexas.gov/ahc/reference-services',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_research:http://library.austintexas.gov/ahc/research',
  );
  // Exported menu link: menu-apl-menu-2014_renew-an-item:http://austin.tx.libanswers.com/a.php?qid=130900
  $menu_links['menu-apl-menu-2014_renew-an-item:http://austin.tx.libanswers.com/a.php?qid=130900'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://austin.tx.libanswers.com/a.php?qid=130900',
    'router_path' => '',
    'link_title' => 'Renew an Item',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_renew-an-item:http://austin.tx.libanswers.com/a.php?qid=130900',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_how-to:http://library.austintexas.gov/?how-to',
  );
  // Exported menu link: menu-apl-menu-2014_research---column-one:http://library.austintexas.gov/?research-column-one
  $menu_links['menu-apl-menu-2014_research---column-one:http://library.austintexas.gov/?research-column-one'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/?research-column-one',
    'router_path' => '',
    'link_title' => 'Research - column one',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_research---column-one:http://library.austintexas.gov/?research-column-one',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_research:taxonomy/term/549',
  );
  // Exported menu link: menu-apl-menu-2014_research---column-three:http://library.austintexas.gov/?research-column-three
  $menu_links['menu-apl-menu-2014_research---column-three:http://library.austintexas.gov/?research-column-three'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/?research-column-three',
    'router_path' => '',
    'link_title' => 'Research - column three',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_research---column-three:http://library.austintexas.gov/?research-column-three',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_research:taxonomy/term/549',
  );
  // Exported menu link: menu-apl-menu-2014_research---column-two:http://library.austintexas.gov/?research-column-two
  $menu_links['menu-apl-menu-2014_research---column-two:http://library.austintexas.gov/?research-column-two'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/?research-column-two',
    'router_path' => '',
    'link_title' => 'Research - column two',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_research---column-two:http://library.austintexas.gov/?research-column-two',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_research:taxonomy/term/549',
  );
  // Exported menu link: menu-apl-menu-2014_research-catalog:https://www.austinlibrary.com:8443/login?URL=http://yl9ar3tq5l.cs.serialssolutions.com/
  $menu_links['menu-apl-menu-2014_research-catalog:https://www.austinlibrary.com:8443/login?URL=http://yl9ar3tq5l.cs.serialssolutions.com/'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'https://www.austinlibrary.com:8443/login?URL=http://yl9ar3tq5l.cs.serialssolutions.com/',
    'router_path' => '',
    'link_title' => 'Research Catalog',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_research-catalog:https://www.austinlibrary.com:8443/login?URL=http://yl9ar3tq5l.cs.serialssolutions.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_research---column-one:http://library.austintexas.gov/?research-column-one',
  );
  // Exported menu link: menu-apl-menu-2014_research:http://library.austintexas.gov/ahc/research
  $menu_links['menu-apl-menu-2014_research:http://library.austintexas.gov/ahc/research'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/ahc/research',
    'router_path' => '',
    'link_title' => 'Research',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_research:http://library.austintexas.gov/ahc/research',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_austin-history-center:ahc/front',
  );
  // Exported menu link: menu-apl-menu-2014_research:taxonomy/term/549
  $menu_links['menu-apl-menu-2014_research:taxonomy/term/549'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'taxonomy/term/549',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Research',
    'options' => array(
      'minipanel' => 'research',
      'menu_minipanels_hover' => array(
        'position' => array(
          'target' => 'false',
          'target_custom' => '',
          'type' => 'absolute',
          'container' => '',
          'corner' => array(
            'target' => 'bottomLeft',
            'tooltip' => 'topLeft',
          ),
          'adjust' => array(
            'x' => 0,
            'y' => 0,
          ),
        ),
        'show' => array(
          'delay' => 0,
          'when' => array(
            'event' => 'mouseover',
          ),
          'effect' => array(
            'type' => 'false',
            'length' => 0,
          ),
        ),
        'hide' => array(
          'delay' => 0,
          'effect' => array(
            'type' => 'false',
            'length' => 0,
          ),
        ),
        'style' => array(
          'tip' => 'none',
          'name' => 'light',
          'width' => array(
            'min' => 600,
            'max' => 600,
          ),
          'border' => array(
            'width' => 0,
            'color' => '#d3d3d3',
            'radius' => 0,
          ),
        ),
        'mlid' => 4395,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_research:taxonomy/term/549',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-apl-menu-2014_reset-a-pinpassword:http://austin.tx.libanswers.com/a.php?qid=128883
  $menu_links['menu-apl-menu-2014_reset-a-pinpassword:http://austin.tx.libanswers.com/a.php?qid=128883'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://austin.tx.libanswers.com/a.php?qid=128883',
    'router_path' => '',
    'link_title' => 'Reset a PIN/Password',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_reset-a-pinpassword:http://austin.tx.libanswers.com/a.php?qid=128883',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_how-to:http://library.austintexas.gov/?how-to',
  );
  // Exported menu link: menu-apl-menu-2014_romance:http://library.austintexas.gov/apl-recommends/Fiction/Romance
  $menu_links['menu-apl-menu-2014_romance:http://library.austintexas.gov/apl-recommends/Fiction/Romance'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/apl-recommends/Fiction/Romance',
    'router_path' => '',
    'link_title' => 'Romance',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_romance:http://library.austintexas.gov/apl-recommends/Fiction/Romance',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_recommendations:http://library.austintexas.gov/?recommendations',
  );
  // Exported menu link: menu-apl-menu-2014_ruiz-branch:http://library.austintexas.gov/locations/Ruiz Branch
  $menu_links['menu-apl-menu-2014_ruiz-branch:http://library.austintexas.gov/locations/Ruiz Branch'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/locations/Ruiz Branch',
    'router_path' => '',
    'link_title' => 'Ruiz Branch',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_ruiz-branch:http://library.austintexas.gov/locations/Ruiz Branch',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_locations---column-three:http://library.austintexas.gov/?locations-column-three',
  );
  // Exported menu link: menu-apl-menu-2014_science-fiction--fantasy:http://library.austintexas.gov/apl-recommends/Fiction/Science Fiction %26 Fantasy
  $menu_links['menu-apl-menu-2014_science-fiction--fantasy:http://library.austintexas.gov/apl-recommends/Fiction/Science Fiction %26 Fantasy'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/apl-recommends/Fiction/Science Fiction %26 Fantasy',
    'router_path' => '',
    'link_title' => 'Science Fiction & Fantasy',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_science-fiction--fantasy:http://library.austintexas.gov/apl-recommends/Fiction/Science Fiction %26 Fantasy',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_recommendations:http://library.austintexas.gov/?recommendations',
  );
  // Exported menu link: menu-apl-menu-2014_services:http://library.austintexas.gov/?services
  $menu_links['menu-apl-menu-2014_services:http://library.austintexas.gov/?services'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/?services',
    'router_path' => '',
    'link_title' => 'Services',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_services:http://library.austintexas.gov/?services',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_using-the-library:libraryservices',
  );
  // Exported menu link: menu-apl-menu-2014_southeast-austin-community-branch:http://library.austintexas.gov/locations/Southeast Austin Community Branch
  $menu_links['menu-apl-menu-2014_southeast-austin-community-branch:http://library.austintexas.gov/locations/Southeast Austin Community Branch'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/locations/Southeast Austin Community Branch',
    'router_path' => '',
    'link_title' => 'Southeast Austin Community Branch',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_southeast-austin-community-branch:http://library.austintexas.gov/locations/Southeast Austin Community Branch',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_locations---column-three:http://library.austintexas.gov/?locations-column-three',
  );
  // Exported menu link: menu-apl-menu-2014_spicewood-springs-branch:http://library.austintexas.gov/locations/Spicewood Springs Branch
  $menu_links['menu-apl-menu-2014_spicewood-springs-branch:http://library.austintexas.gov/locations/Spicewood Springs Branch'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/locations/Spicewood Springs Branch',
    'router_path' => '',
    'link_title' => 'Spicewood Springs Branch',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_spicewood-springs-branch:http://library.austintexas.gov/locations/Spicewood Springs Branch',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_locations---column-three:http://library.austintexas.gov/?locations-column-three',
  );
  // Exported menu link: menu-apl-menu-2014_st-john-branch:http://library.austintexas.gov/locations/St. John Branch
  $menu_links['menu-apl-menu-2014_st-john-branch:http://library.austintexas.gov/locations/St. John Branch'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/locations/St. John Branch',
    'router_path' => '',
    'link_title' => 'St. John Branch',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_st-john-branch:http://library.austintexas.gov/locations/St. John Branch',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_locations---column-three:http://library.austintexas.gov/?locations-column-three',
  );
  // Exported menu link: menu-apl-menu-2014_storytime-connection:http://library.austintexas.gov/youth?storytime
  $menu_links['menu-apl-menu-2014_storytime-connection:http://library.austintexas.gov/youth?storytime'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/youth?storytime',
    'router_path' => '',
    'link_title' => 'Storytime Connection',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_storytime-connection:http://library.austintexas.gov/youth?storytime',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_youth-services:youth',
  );
  // Exported menu link: menu-apl-menu-2014_students:http://alis.dev/lynda20130801/library-service-audience/students
  $menu_links['menu-apl-menu-2014_students:http://alis.dev/lynda20130801/library-service-audience/students'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://alis.dev/lynda20130801/library-service-audience/students',
    'router_path' => '',
    'link_title' => 'Students',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_students:http://alis.dev/lynda20130801/library-service-audience/students',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_for-you:http://library.austintexas.gov/?for-you',
  );
  // Exported menu link: menu-apl-menu-2014_subject-guides:http://library.austintexas.gov/ahc/subject-guides
  $menu_links['menu-apl-menu-2014_subject-guides:http://library.austintexas.gov/ahc/subject-guides'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/ahc/subject-guides',
    'router_path' => '',
    'link_title' => 'Subject Guides',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_subject-guides:http://library.austintexas.gov/ahc/subject-guides',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_research:http://library.austintexas.gov/ahc/research',
  );
  // Exported menu link: menu-apl-menu-2014_suggest-a-title:http://library.austintexas.gov/suggest-a-title
  $menu_links['menu-apl-menu-2014_suggest-a-title:http://library.austintexas.gov/suggest-a-title'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/suggest-a-title',
    'router_path' => '',
    'link_title' => 'Suggest a Title',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_suggest-a-title:http://library.austintexas.gov/suggest-a-title',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_ask-us---column-one:http://library.austintexas.gov/?ask-us-column-one',
  );
  // Exported menu link: menu-apl-menu-2014_summer-reading-program:http://library.austintexas.gov/youth?srp
  $menu_links['menu-apl-menu-2014_summer-reading-program:http://library.austintexas.gov/youth?srp'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/youth?srp',
    'router_path' => '',
    'link_title' => 'Summer Reading Program',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_summer-reading-program:http://library.austintexas.gov/youth?srp',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_youth-services:youth',
  );
  // Exported menu link: menu-apl-menu-2014_summer-reading:http://library.austintexas.gov/events?field_event_loc_tid=All&term_node_tid_depth=405&field_date_value_1%5Bvalue%5D%5Bdate%5D=
  $menu_links['menu-apl-menu-2014_summer-reading:http://library.austintexas.gov/events?field_event_loc_tid=All&term_node_tid_depth=405&field_date_value_1%5Bvalue%5D%5Bdate%5D='] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/events?field_event_loc_tid=All&term_node_tid_depth=405&field_date_value_1%5Bvalue%5D%5Bdate%5D=',
    'router_path' => '',
    'link_title' => 'Summer Reading',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_summer-reading:http://library.austintexas.gov/events?field_event_loc_tid=All&term_node_tid_depth=405&field_date_value_1%5Bvalue%5D%5Bdate%5D=',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_events---column-one:http://library.austintexas.gov/?events-column-one',
  );
  // Exported menu link: menu-apl-menu-2014_support-us:http://library.austintexas.gov/?support-us
  $menu_links['menu-apl-menu-2014_support-us:http://library.austintexas.gov/?support-us'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/?support-us',
    'router_path' => '',
    'link_title' => 'Support Us',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_support-us:http://library.austintexas.gov/?support-us',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_using-the-library:libraryservices',
  );
  // Exported menu link: menu-apl-menu-2014_tax-help:http://library.austintexas.gov/services/tax-help
  $menu_links['menu-apl-menu-2014_tax-help:http://library.austintexas.gov/services/tax-help'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/services/tax-help',
    'router_path' => '',
    'link_title' => 'Tax Help',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_tax-help:http://library.austintexas.gov/services/tax-help',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_services:http://library.austintexas.gov/?services',
  );
  // Exported menu link: menu-apl-menu-2014_teen-studio:http://library.austintexas.gov/youth?teen-studio
  $menu_links['menu-apl-menu-2014_teen-studio:http://library.austintexas.gov/youth?teen-studio'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/youth?teen-studio',
    'router_path' => '',
    'link_title' => 'Teen Studio',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_teen-studio:http://library.austintexas.gov/youth?teen-studio',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_youth-services:youth',
  );
  // Exported menu link: menu-apl-menu-2014_teens:http://library.austintexas.gov/?teens
  $menu_links['menu-apl-menu-2014_teens:http://library.austintexas.gov/?teens'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/?teens',
    'router_path' => '',
    'link_title' => 'Teens',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_teens:http://library.austintexas.gov/?teens',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_for-you:http://library.austintexas.gov/?for-you',
  );
  // Exported menu link: menu-apl-menu-2014_terrazas-branch:http://library.austintexas.gov/locations/Terrazas Branch
  $menu_links['menu-apl-menu-2014_terrazas-branch:http://library.austintexas.gov/locations/Terrazas Branch'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/locations/Terrazas Branch',
    'router_path' => '',
    'link_title' => 'Terrazas Branch',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_terrazas-branch:http://library.austintexas.gov/locations/Terrazas Branch',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_locations---column-three:http://library.austintexas.gov/?locations-column-three',
  );
  // Exported menu link: menu-apl-menu-2014_texshare-cards:http://library.austintexas.gov/basic-page/texshare-card-program
  $menu_links['menu-apl-menu-2014_texshare-cards:http://library.austintexas.gov/basic-page/texshare-card-program'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/basic-page/texshare-card-program',
    'router_path' => '',
    'link_title' => 'TexShare Cards',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_texshare-cards:http://library.austintexas.gov/basic-page/texshare-card-program',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_services:http://library.austintexas.gov/?services',
  );
  // Exported menu link: menu-apl-menu-2014_tours:http://library.austintexas.gov/services/tours
  $menu_links['menu-apl-menu-2014_tours:http://library.austintexas.gov/services/tours'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/services/tours',
    'router_path' => '',
    'link_title' => 'Tours',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_tours:http://library.austintexas.gov/services/tours',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_services:http://library.austintexas.gov/?services',
  );
  // Exported menu link: menu-apl-menu-2014_twin-oaks-branch:http://library.austintexas.gov/locations/Twin Oaks Branch
  $menu_links['menu-apl-menu-2014_twin-oaks-branch:http://library.austintexas.gov/locations/Twin Oaks Branch'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/locations/Twin Oaks Branch',
    'router_path' => '',
    'link_title' => 'Twin Oaks Branch',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_twin-oaks-branch:http://library.austintexas.gov/locations/Twin Oaks Branch',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_locations---column-three:http://library.austintexas.gov/?locations-column-three',
  );
  // Exported menu link: menu-apl-menu-2014_university-hills-branch:http://library.austintexas.gov/locations/University Hills Branch
  $menu_links['menu-apl-menu-2014_university-hills-branch:http://library.austintexas.gov/locations/University Hills Branch'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/locations/University Hills Branch',
    'router_path' => '',
    'link_title' => 'University Hills Branch',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_university-hills-branch:http://library.austintexas.gov/locations/University Hills Branch',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_locations---column-three:http://library.austintexas.gov/?locations-column-three',
  );
  // Exported menu link: menu-apl-menu-2014_use-the-catalog:http://library.austintexas.gov/new-information-guides/how-use-catalog
  $menu_links['menu-apl-menu-2014_use-the-catalog:http://library.austintexas.gov/new-information-guides/how-use-catalog'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/new-information-guides/how-use-catalog',
    'router_path' => '',
    'link_title' => 'Use the Catalog',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_use-the-catalog:http://library.austintexas.gov/new-information-guides/how-use-catalog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_how-to:http://library.austintexas.gov/?how-to',
  );
  // Exported menu link: menu-apl-menu-2014_using-the-library:libraryservices
  $menu_links['menu-apl-menu-2014_using-the-library:libraryservices'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'libraryservices',
    'router_path' => 'libraryservices',
    'link_title' => 'Using the Library',
    'options' => array(
      'minipanel' => 'using_the_library',
      'menu_minipanels_hover' => array(
        'position' => array(
          'target' => 'false',
          'target_custom' => '',
          'type' => 'absolute',
          'container' => '',
          'corner' => array(
            'target' => 'bottomLeft',
            'tooltip' => 'topLeft',
          ),
          'adjust' => array(
            'x' => 0,
            'y' => 0,
          ),
        ),
        'show' => array(
          'delay' => 0,
          'when' => array(
            'event' => 'mouseover',
          ),
          'effect' => array(
            'type' => 'false',
            'length' => 0,
          ),
        ),
        'hide' => array(
          'delay' => 0,
          'effect' => array(
            'type' => 'false',
            'length' => 0,
          ),
        ),
        'style' => array(
          'tip' => 'none',
          'name' => 'light',
          'width' => array(
            'min' => 600,
            'max' => 600,
          ),
          'border' => array(
            'width' => 0,
            'color' => '#d3d3d3',
            'radius' => 0,
          ),
        ),
        'mlid' => 4392,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_using-the-library:libraryservices',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-apl-menu-2014_video:http://library.austintexas.gov/ahc/video
  $menu_links['menu-apl-menu-2014_video:http://library.austintexas.gov/ahc/video'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/ahc/video',
    'router_path' => '',
    'link_title' => 'Video',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_video:http://library.austintexas.gov/ahc/video',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_collections---ahc:http://library.austintexas.gov/ahc/collections',
  );
  // Exported menu link: menu-apl-menu-2014_virtual-library:http://library.austintexas.gov/virtual
  $menu_links['menu-apl-menu-2014_virtual-library:http://library.austintexas.gov/virtual'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/virtual',
    'router_path' => '',
    'link_title' => 'Virtual Library',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_virtual-library:http://library.austintexas.gov/virtual',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_new--notable:http://library.austintexas.gov/?new-and-notable',
  );
  // Exported menu link: menu-apl-menu-2014_visit-us:http://library.austintexas.gov/ahc/visit-us
  $menu_links['menu-apl-menu-2014_visit-us:http://library.austintexas.gov/ahc/visit-us'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/ahc/visit-us',
    'router_path' => '',
    'link_title' => 'Visit Us',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_visit-us:http://library.austintexas.gov/ahc/visit-us',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_austin-history-center:ahc/front',
  );
  // Exported menu link: menu-apl-menu-2014_volunteer-at-the-library:http://library.austintexas.gov/new-information-guides/how-volunteer-austin-public-library
  $menu_links['menu-apl-menu-2014_volunteer-at-the-library:http://library.austintexas.gov/new-information-guides/how-volunteer-austin-public-library'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/new-information-guides/how-volunteer-austin-public-library',
    'router_path' => '',
    'link_title' => 'Volunteer at the Library',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_volunteer-at-the-library:http://library.austintexas.gov/new-information-guides/how-volunteer-austin-public-library',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_support-us:http://library.austintexas.gov/?support-us',
  );
  // Exported menu link: menu-apl-menu-2014_whos-open-today:http://library.austintexas.gov/open
  $menu_links['menu-apl-menu-2014_whos-open-today:http://library.austintexas.gov/open'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/open',
    'router_path' => '',
    'link_title' => 'Who\'s Open Today',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_whos-open-today:http://library.austintexas.gov/open',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_general-information:http://library.austintexas.gov/?general-information',
  );
  // Exported menu link: menu-apl-menu-2014_willie-mae-kirk-branch:http://library.austintexas.gov/locations/Willie Mae Kirk Branch
  $menu_links['menu-apl-menu-2014_willie-mae-kirk-branch:http://library.austintexas.gov/locations/Willie Mae Kirk Branch'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/locations/Willie Mae Kirk Branch',
    'router_path' => '',
    'link_title' => 'Willie Mae Kirk Branch',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_willie-mae-kirk-branch:http://library.austintexas.gov/locations/Willie Mae Kirk Branch',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_locations---column-three:http://library.austintexas.gov/?locations-column-three',
  );
  // Exported menu link: menu-apl-menu-2014_windsor-park-branch:http://library.austintexas.gov/locations/Windsor Park Branch
  $menu_links['menu-apl-menu-2014_windsor-park-branch:http://library.austintexas.gov/locations/Windsor Park Branch'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/locations/Windsor Park Branch',
    'router_path' => '',
    'link_title' => 'Windsor Park Branch',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_windsor-park-branch:http://library.austintexas.gov/locations/Windsor Park Branch',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_locations---column-three:http://library.austintexas.gov/?locations-column-three',
  );
  // Exported menu link: menu-apl-menu-2014_work-at-the-library:https://www.austincityjobs.org/postings/search?query=&query_posted_at=&query_organizational_tier_3_id=40
  $menu_links['menu-apl-menu-2014_work-at-the-library:https://www.austincityjobs.org/postings/search?query=&query_posted_at=&query_organizational_tier_3_id=40'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'https://www.austincityjobs.org/postings/search?query=&query_posted_at=&query_organizational_tier_3_id=40',
    'router_path' => '',
    'link_title' => 'Work at the Library',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_work-at-the-library:https://www.austincityjobs.org/postings/search?query=&query_posted_at=&query_organizational_tier_3_id=40',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_about-us:http://library.austintexas.gov/?about-us',
  );
  // Exported menu link: menu-apl-menu-2014_world:http://library.austintexas.gov/apl-recommends/world
  $menu_links['menu-apl-menu-2014_world:http://library.austintexas.gov/apl-recommends/world'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/apl-recommends/world',
    'router_path' => '',
    'link_title' => 'World',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_world:http://library.austintexas.gov/apl-recommends/world',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_recommendations:http://library.austintexas.gov/?recommendations',
  );
  // Exported menu link: menu-apl-menu-2014_yarborough-branch:http://library.austintexas.gov/locations/Yarborough Branch
  $menu_links['menu-apl-menu-2014_yarborough-branch:http://library.austintexas.gov/locations/Yarborough Branch'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/locations/Yarborough Branch',
    'router_path' => '',
    'link_title' => 'Yarborough Branch',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_yarborough-branch:http://library.austintexas.gov/locations/Yarborough Branch',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_locations---column-three:http://library.austintexas.gov/?locations-column-three',
  );
  // Exported menu link: menu-apl-menu-2014_youth-blog:http://library.austintexas.gov/youth?youth-blog
  $menu_links['menu-apl-menu-2014_youth-blog:http://library.austintexas.gov/youth?youth-blog'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/youth?youth-blog',
    'router_path' => '',
    'link_title' => 'Youth Blog',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_youth-blog:http://library.austintexas.gov/youth?youth-blog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_youth-services:youth',
  );
  // Exported menu link: menu-apl-menu-2014_youth-events:http://library.austintexas.gov/youth-events
  $menu_links['menu-apl-menu-2014_youth-events:http://library.austintexas.gov/youth-events'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/youth-events',
    'router_path' => '',
    'link_title' => 'Youth Events',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_youth-events:http://library.austintexas.gov/youth-events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_events---column-one:http://library.austintexas.gov/?events-column-one',
  );
  // Exported menu link: menu-apl-menu-2014_youth-services-home:http://library.austintexas.gov/youth?home
  $menu_links['menu-apl-menu-2014_youth-services-home:http://library.austintexas.gov/youth?home'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'http://library.austintexas.gov/youth?home',
    'router_path' => '',
    'link_title' => 'Youth Services Home',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_youth-services-home:http://library.austintexas.gov/youth?home',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-apl-menu-2014_youth-services:youth',
  );
  // Exported menu link: menu-apl-menu-2014_youth-services:youth
  $menu_links['menu-apl-menu-2014_youth-services:youth'] = array(
    'menu_name' => 'menu-apl-menu-2014',
    'link_path' => 'youth',
    'router_path' => 'youth',
    'link_title' => 'Youth Services',
    'options' => array(
      'minipanel' => 'youth',
      'menu_minipanels_hover' => array(
        'position' => array(
          'target' => 'false',
          'target_custom' => '',
          'type' => 'absolute',
          'container' => '',
          'corner' => array(
            'target' => 'bottomLeft',
            'tooltip' => 'topLeft',
          ),
          'adjust' => array(
            'x' => 0,
            'y' => 0,
          ),
        ),
        'show' => array(
          'delay' => 0,
          'when' => array(
            'event' => 'mouseover',
          ),
          'effect' => array(
            'type' => 'false',
            'length' => 0,
          ),
        ),
        'hide' => array(
          'delay' => 0,
          'effect' => array(
            'type' => 'false',
            'length' => 0,
          ),
        ),
        'style' => array(
          'tip' => 'none',
          'name' => 'light',
          'width' => array(
            'min' => 200,
            'max' => 200,
          ),
          'border' => array(
            'width' => 0,
            'color' => '#d3d3d3',
            'radius' => 0,
          ),
        ),
        'mlid' => 4397,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-apl-menu-2014_youth-services:youth',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('APL Blog');
  t('About Us');
  t('Accounts');
  t('Architectural Archives');
  t('Archives & Manuscripts');
  t('Arts & Crafts');
  t('Ask Us');
  t('Ask Us - column one');
  t('Ask a Librarian');
  t('Audiobooks on CD');
  t('Austin Files');
  t('Austin History');
  t('Austin History Center');
  t('Austin History Center - row one, column one');
  t('Award Winners');
  t('Best Fiction');
  t('Best Nonfiction');
  t('Best Sellers');
  t('Book Clubs');
  t('Book Donations');
  t('Books');
  t('Books & City Reports');
  t('Bookstore');
  t('Business');
  t('Business & Nonprofits');
  t('Calendar');
  t('Carver Branch');
  t('Catalog');
  t('Catalog Account');
  t('Cepeda Branch');
  t('Check Out');
  t('Children');
  t('Classic Catalog');
  t('Completed');
  t('Computer Classes');
  t('Computers & WiFi');
  t('Connect with Us');
  t('Connected Youth');
  t('Consumer');
  t('Contact Us');
  t('Creative Arts');
  t('Databases');
  t('Director\'s Report');
  t('Download PDF Map');
  t('Download eBooks');
  t('Education & Training');
  t('Email or Chat');
  t('Español');
  t('Events');
  t('Events - column one');
  t('Events for Youth');
  t('Everything Austin');
  t('Exhibits');
  t('Explore');
  t('FAQs');
  t('Facebook');
  t('Facts & Policies');
  t('Faulk Central Library');
  t('Find a Book Club');
  t('Fines');
  t('For Later');
  t('For You');
  t('Friends Foundation');
  t('Geneaology & People Search');
  t('General Information');
  t('General Research');
  t('Get Involved');
  t('Get a Library Card');
  t('Gift Donations & Dedications');
  t('Gold Cards');
  t('Google+');
  t('Government');
  t('Grants, Awards & Donors');
  t('Graphic Novels');
  t('Hampton Branch at Oak Hill');
  t('Health');
  t('Health Resources');
  t('Holds');
  t('Holiday Schedule');
  t('Homework Help');
  t('How To');
  t('How are we doing?');
  t('Howson Branch');
  t('I\'m Following');
  t('Ignored Users');
  t('In Progress');
  t('Inbox');
  t('Interlibrary Loan');
  t('Job Seekers');
  t('Jobs');
  t('Language Practice');
  t('Large Print');
  t('Legal');
  t('Librarian Lists');
  t('Library Commission');
  t('Literature');
  t('Literature Live!');
  t('Little Walnut Creek Branch');
  t('Locations');
  t('Locations - column three');
  t('Locations - column two');
  t('Manchaca Road Branch');
  t('Map of all Locations');
  t('Maps');
  t('Meeting Rooms');
  t('Milwood Branch');
  t('More FAQs');
  t('More Recommendations');
  t('Movies');
  t('Music');
  t('My APL');
  t('My Account - Classic');
  t('My Borrowing');
  t('My Collections');
  t('My Community');
  t('My Lists');
  t('My Shelves');
  t('Mystery & Suspense');
  t('New & Notable');
  t('New Central Library');
  t('New Immigrants');
  t('New Immigrants Center');
  t('New Titles');
  t('News & Events');
  t('Newspapers & Magazines');
  t('North Village Branch');
  t('Old Quarry Branch');
  t('Online Photo Collections');
  t('Online Reference Tools');
  t('Oral History/Audio');
  t('Ordering Photos');
  t('Outreach');
  t('OverDrive Account');
  t('OverDrive Catalog');
  t('Parents & Educators');
  t('Pay Fines');
  t('Periodicals');
  t('Personal Picks');
  t('Photographic Collections');
  t('Photographs');
  t('Place a Hold');
  t('Pleasant Hill Branch');
  t('Preserving Your History');
  t('Privacy Policy');
  t('Quick Information');
  t('Recent Activity');
  t('Recently Shared');
  t('Recommendations');
  t('Recommended for Youth');
  t('Recycled Reads');
  t('Recycled Reads Bookstore');
  t('Reference Services');
  t('Renew an Item');
  t('Research');
  t('Research - column one');
  t('Research - column three');
  t('Research - column two');
  t('Research Catalog');
  t('Reset a PIN/Password');
  t('Romance');
  t('Ruiz Branch');
  t('Science Fiction & Fantasy');
  t('Services');
  t('Southeast Austin Community Branch');
  t('Spicewood Springs Branch');
  t('St. John Branch');
  t('Storytime Connection');
  t('Students');
  t('Subject Guides');
  t('Suggest a Title');
  t('Summer Reading');
  t('Summer Reading Program');
  t('Support APL');
  t('Support Us');
  t('Tax Help');
  t('Teen Studio');
  t('Teens');
  t('Terrazas Branch');
  t('TexShare Cards');
  t('Tours');
  t('Twin Oaks Branch');
  t('Twitter');
  t('University Hills Branch');
  t('Use the Catalog');
  t('Using the Library');
  t('Video');
  t('Virtual Library');
  t('Visit Us');
  t('Volunteer at the Library');
  t('Who\'s Open Today');
  t('Willie Mae Kirk Branch');
  t('Windsor Park Branch');
  t('Work at the Library');
  t('Work for the Library');
  t('World');
  t('Yarborough Branch');
  t('Youth Blog');
  t('Youth Events');
  t('Youth Services');
  t('Youth Services Home');
  t('eBooks');
  t('eBooks & eAudiobooks');
  t('eJournal Finder');
  t('more than books');


  return $menu_links;
}
