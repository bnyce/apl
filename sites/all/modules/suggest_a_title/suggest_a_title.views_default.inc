<?php
/**
 * @file
 * suggest_a_title.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function suggest_a_title_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'suggest_a_title_queue';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Suggest a Title - Queue';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Suggest a Title - Queue';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_format' => 'field_format',
    'field_language' => 'field_language',
    'field_author_performer_band' => 'field_author_performer_band',
    'field_publisher' => 'field_publisher',
    'field_publication_year' => 'field_publisher',
    'field_isbn_issn_upc' => 'field_isbn_issn_upc',
    'field_how_did_you_learn_about_th' => 'field_how_did_you_learn_about_th',
    'field_which_library_locations_do' => 'field_which_library_locations_do',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_format' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_language' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_performer_band' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publisher' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ', ',
      'empty_column' => 0,
    ),
    'field_publication_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_isbn_issn_upc' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_how_did_you_learn_about_th' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_which_library_locations_do' => array(
      'align' => '',
      'separator' => ', ',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[node:id]/edit">[node:title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Author/Performer/Band */
  $handler->display->display_options['fields']['field_author_performer_band']['id'] = 'field_author_performer_band';
  $handler->display->display_options['fields']['field_author_performer_band']['table'] = 'field_data_field_author_performer_band';
  $handler->display->display_options['fields']['field_author_performer_band']['field'] = 'field_author_performer_band';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_publication_year']['id'] = 'field_publication_year';
  $handler->display->display_options['fields']['field_publication_year']['table'] = 'field_data_field_publication_year';
  $handler->display->display_options['fields']['field_publication_year']['field'] = 'field_publication_year';
  /* Field: Content: ISBN/ISSN/UPC */
  $handler->display->display_options['fields']['field_isbn_issn_upc']['id'] = 'field_isbn_issn_upc';
  $handler->display->display_options['fields']['field_isbn_issn_upc']['table'] = 'field_data_field_isbn_issn_upc';
  $handler->display->display_options['fields']['field_isbn_issn_upc']['field'] = 'field_isbn_issn_upc';
  /* Field: Content: How did you learn about this item? */
  $handler->display->display_options['fields']['field_how_did_you_learn_about_th']['id'] = 'field_how_did_you_learn_about_th';
  $handler->display->display_options['fields']['field_how_did_you_learn_about_th']['table'] = 'field_data_field_how_did_you_learn_about_th';
  $handler->display->display_options['fields']['field_how_did_you_learn_about_th']['field'] = 'field_how_did_you_learn_about_th';
  /* Field: Content: Format */
  $handler->display->display_options['fields']['field_format']['id'] = 'field_format';
  $handler->display->display_options['fields']['field_format']['table'] = 'field_data_field_format';
  $handler->display->display_options['fields']['field_format']['field'] = 'field_format';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  /* Field: Content: Which library locations do you use most often? */
  $handler->display->display_options['fields']['field_which_library_locations_do']['id'] = 'field_which_library_locations_do';
  $handler->display->display_options['fields']['field_which_library_locations_do']['table'] = 'field_data_field_which_library_locations_do';
  $handler->display->display_options['fields']['field_which_library_locations_do']['field'] = 'field_which_library_locations_do';
  $handler->display->display_options['fields']['field_which_library_locations_do']['delta_offset'] = '0';
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'suggest_a_title' => 'suggest_a_title',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'suggest-a-title/queue/all';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'suggest_a_title' => 'suggest_a_title',
  );
  /* Filter criterion: Content: Most recent email sent (field_most_recent_email_sent) */
  $handler->display->display_options['filters']['field_most_recent_email_sent_value']['id'] = 'field_most_recent_email_sent_value';
  $handler->display->display_options['filters']['field_most_recent_email_sent_value']['table'] = 'field_data_field_most_recent_email_sent';
  $handler->display->display_options['filters']['field_most_recent_email_sent_value']['field'] = 'field_most_recent_email_sent_value';
  $handler->display->display_options['filters']['field_most_recent_email_sent_value']['operator'] = 'empty';
  $handler->display->display_options['path'] = 'suggest-a-title/queue';
  $export['suggest_a_title_queue'] = $view;

  return $export;
}
