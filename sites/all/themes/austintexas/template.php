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

//function austintexas_preprocess_page(&$build) {
//function austintexas_preprocess_page(&$variables) {
  //return(
  //$tree = taxonomy_get_tree(11);
  //print_r(taxonomy_get_tree(11,239));
  //print_r(taxonomy_term_load(239));
  //print_r(taxonomy_term_save($term));
}
/*
function austintexas_preprocess_page(&$page) {
  // returns the html markup of the government/departments menu
  print_r($page['page']['submenubar']['nice_menus_11']['#markup']);
}
*/
?>