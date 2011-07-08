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





/*function austintexas_search_item($item, $type) {
  $output = ' <dt class="title"><a href="'. check_url($item['link']) .'">'. check_plain($item['title']) .'</a></dt>';
  $info = array();
  if ($item['type']) {
    $info[] = check_plain($item['type']);
  }
  if ($item['user']) {
    $info[] = $item['user'];
  }
  if ($item['date']) {
    $info[] = format_date($item['date'], 'small');
  }
  if (is_array($item['extra'])) {
    $info = array_merge($info, $item['extra']);
  }
  $output .= ' <dd>'. ($item['snippet'] ? '<p>'. $item['snippet'] .'</p>' : '') .'<p class="search-info">'. implode(' - ', $info) .'</p></dd>';
  return $output;
}*/

function austintexas_search_item($item, $type) {
  $output = ' <dt class="title"><a href="'. check_url($item['link']) .'">'. check_plain($item['title']) .'</a></dt>';
  $output .= ' <dd>'. ($item['snippet'] ? '<p>'. $item['snippet'] .'</p>' : '');
  return $output;
}



?>