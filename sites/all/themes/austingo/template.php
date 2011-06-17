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


function austintexas_webform_mail_headers($variables) {
  $headers = array(
    'Content-Type' => 'text/html; charset=UTF-8; format=flowed; delsp=yes',
    'X-Mailer' => 'Drupal Webform (PHP/'. phpversion() .')',
  );
  return $headers;
}

?>