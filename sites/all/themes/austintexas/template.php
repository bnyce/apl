<?php
function austintexas_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  if (!empty($breadcrumb)) {
    // Adding the title of the current page to the breadcrumb.
    $breadcrumb[] = drupal_get_title();

    //shift off the HOME crumb
    array_shift($breadcrumb);

    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

    $output .= '<div class="breadcrumb">' . implode(' » ', $breadcrumb) . '</div>';
    return $output;
  }
}

/**
 * 
 * Supports overriding page.tpl.php with templates page--content-type.tpl.php
 * @param unknown_type $vars
 */
function austintexas_preprocess_page(&$vars) {

  // Do we have a node?
  if (isset($vars['node'])) {

    // Ref suggestions cuz it's stupid long.
    $suggests = &$vars['theme_hook_suggestions'];

    // Get path arguments.
    $args = arg();
    // Remove first argument of "node".
    unset($args[0]);

    // Set type.
    $type = "page__{$vars['node']->type}";

    // Bring it all together.
    $suggests = array_merge(
      $suggests,
      array($type),
      theme_get_suggestions($args, $type)
    );

    // if the url is: 'http://domain.com/node/123/edit'
    // and node type is 'blog'..
    //
    // This will be the suggestions:
    //
    // - page__node
    // - page__node__%
    // - page__node__123
    // - page__node__edit
    // - page__blog
    // - page__blog__%
    // - page__blog__123
    // - page__blog__edit
    //
    // Which connects to these templates:
    //
    // - page--node.tpl.php
    // - page--node--%.tpl.php
    // - page--node--123.tpl.php
    // - page--node--edit.tpl.php
    // - page--blog.tpl.php          << this is what you want.
    // - page--blog--%.tpl.php
    // - page--blog--123.tpl.php
    // - page--blog--edit.tpl.php
    //
    // Latter items take precedence.
  }
}

/**
 * 
 * Create type specific css classes
 * @param unknown_type $hook
 * @param unknown_type $vars
 */
function _phptemplate_variables($hook, $vars = array()) {
  switch ($hook) {
    case 'page':
      $vars['body_class'] = '';

      // Set body class for formatting based on content type
      // if the node exists, i.e., if a node is the focus of the page.
      $vars['body_class'] = isset($vars['node']) ? 'type_' . $vars['node']->type .' ' : '';

      //Allows specific theming for taxonomy listings
      if (arg(0) == 'taxonomy') {
          $vars['body_class'] = 'taxonomy_list';
      }

      /*
       * The following lines replace the phptemplate_body_class found in Garland
       * These are only necessary if you are still using the sidebar classes in the Garland theme
       */
      $layout = '';
      //Is there a left sidebar?
      if ($vars['sidebar_left'] != '') {
          $layout = 'sidebar-left';
      }
      //Is there a right sidebar?
      if ($vars['sidebar_right'] != '') {
           $layout = ($layout == 'sidebar-left') ? 'sidebars' : 'sidebar-right';
      }
      //Put layout into body_class
      if ($layout != ''){
         $vars['body_class'] .= ' ' . $layout;
      }
      //End Garland-specific classes

      //Add additional class if this is the front page (for home page specific theming)
      if (drupal_is_front_page()) {
         $vars['body_class'] .= ' home';
      }

      break;
  }
  return $vars;
}


//function austintexas_preprocess_page(&$build) {
//function austintexas_preprocess_page(&$variables) {
  //return(
  //$tree = taxonomy_get_tree(11);
  //print_r(taxonomy_get_tree(11,239));
  //print_r(taxonomy_term_load(239));
  //print_r(taxonomy_term_save($term));
//}

/*
function austintexas_preprocess_page(&$page) {
  // returns the html markup of the government/departments menu
  print_r($page['page']['submenubar']['nice_menus_11']['#markup']);
}
*/

