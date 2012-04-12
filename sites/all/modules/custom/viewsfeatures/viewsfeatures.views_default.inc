<?php
/**
 * @file
 * viewsfeatures.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function viewsfeatures_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'all_book_lists';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All Book Lists';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Books from our Booklists';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Isbn List */
  $handler->display->display_options['fields']['field_isbn_list']['id'] = 'field_isbn_list';
  $handler->display->display_options['fields']['field_isbn_list']['table'] = 'field_data_field_isbn_list';
  $handler->display->display_options['fields']['field_isbn_list']['field'] = 'field_isbn_list';
  $handler->display->display_options['fields']['field_isbn_list']['label'] = '';
  $handler->display->display_options['fields']['field_isbn_list']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_isbn_list']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_isbn_list']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_isbn_list']['click_sort_column'] = 'bl_isbn';
  $handler->display->display_options['fields']['field_isbn_list']['group_column'] = 'bl_isbn';
  $handler->display->display_options['fields']['field_isbn_list']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_isbn_list']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_isbn_list']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_isbn_list']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['separator'] = '';
  $handler->display->display_options['fields']['field_isbn_list']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Book List Category (field_bl_category) */
  $handler->display->display_options['arguments']['field_bl_category_tid']['id'] = 'field_bl_category_tid';
  $handler->display->display_options['arguments']['field_bl_category_tid']['table'] = 'field_data_field_bl_category';
  $handler->display->display_options['arguments']['field_bl_category_tid']['field'] = 'field_bl_category_tid';
  $handler->display->display_options['arguments']['field_bl_category_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_bl_category_tid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'book_list' => 'book_list',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'all-book-lists';

  /* Display: Random Book Block */
  $handler = $view->new_display('block', 'Random Book Block', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';

  /* Display: Random Book Pane */
  $handler = $view->new_display('panel_pane', 'Random Book Pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'APL Recommends';
  $handler->display->display_options['display_description'] = 'Displays a random book from a booklist in a content pane';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = 'More <a href="/apl-recommends">APL Recommendations</a>';
  $handler->display->display_options['footer']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';

  /* Display: Booklist Pane */
  $handler = $view->new_display('panel_pane', 'Booklist Pane', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Pass this pane taxonomy arguments and it will display the appropriate booklists';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = 'title';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 1;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Isbn List */
  $handler->display->display_options['fields']['field_isbn_list']['id'] = 'field_isbn_list';
  $handler->display->display_options['fields']['field_isbn_list']['table'] = 'field_data_field_isbn_list';
  $handler->display->display_options['fields']['field_isbn_list']['field'] = 'field_isbn_list';
  $handler->display->display_options['fields']['field_isbn_list']['label'] = '';
  $handler->display->display_options['fields']['field_isbn_list']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_isbn_list']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_isbn_list']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_isbn_list']['click_sort_column'] = 'bl_isbn';
  $handler->display->display_options['fields']['field_isbn_list']['group_column'] = 'bl_isbn';
  $handler->display->display_options['fields']['field_isbn_list']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_isbn_list']['delta_limit'] = '0';
  $handler->display->display_options['fields']['field_isbn_list']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_isbn_list']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['separator'] = '';
  $handler->display->display_options['fields']['field_isbn_list']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Book List Category (field_bl_category) */
  $handler->display->display_options['arguments']['field_bl_category_tid']['id'] = 'field_bl_category_tid';
  $handler->display->display_options['arguments']['field_bl_category_tid']['table'] = 'field_data_field_bl_category';
  $handler->display->display_options['arguments']['field_bl_category_tid']['field'] = 'field_bl_category_tid';
  $handler->display->display_options['arguments']['field_bl_category_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_bl_category_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_bl_category_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_bl_category_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_bl_category_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_bl_category_tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_bl_category_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_bl_category_tid']['validate_options']['vocabularies'] = array(
    'book_list_categories' => 'book_list_categories',
  );
  $handler->display->display_options['arguments']['field_bl_category_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_bl_category_tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['field_bl_category_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_bl_category_tid']['not'] = 0;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['title']['glossary'] = 0;
  $handler->display->display_options['arguments']['title']['limit'] = '0';
  $handler->display->display_options['arguments']['title']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['title']['break_phrase'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_bl_category_tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Book List Category (field_bl_category)',
    ),
    'title' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Title',
    ),
  );

  /* Display: Book List Titles */
  $handler = $view->new_display('panel_pane', 'Book List Titles', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Our Booklists';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Book List Category */
  $handler->display->display_options['fields']['field_bl_category']['id'] = 'field_bl_category';
  $handler->display->display_options['fields']['field_bl_category']['table'] = 'field_data_field_bl_category';
  $handler->display->display_options['fields']['field_bl_category']['field'] = 'field_bl_category';
  $handler->display->display_options['fields']['field_bl_category']['label'] = '';
  $handler->display->display_options['fields']['field_bl_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bl_category']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_bl_category']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_bl_category']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_bl_category']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_bl_category']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_bl_category']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_bl_category']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_bl_category']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_bl_category']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_bl_category']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_bl_category']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_bl_category']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_bl_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bl_category']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_bl_category']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_bl_category']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_bl_category']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_bl_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_bl_category']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'apl-recommends/[field_bl_category]/[title]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Book List Category (field_bl_category) */
  $handler->display->display_options['arguments']['field_bl_category_tid']['id'] = 'field_bl_category_tid';
  $handler->display->display_options['arguments']['field_bl_category_tid']['table'] = 'field_data_field_bl_category';
  $handler->display->display_options['arguments']['field_bl_category_tid']['field'] = 'field_bl_category_tid';
  $handler->display->display_options['arguments']['field_bl_category_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_bl_category_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_bl_category_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_bl_category_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_bl_category_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_bl_category_tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_bl_category_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_bl_category_tid']['validate_options']['vocabularies'] = array(
    'book_list_categories' => 'book_list_categories',
  );
  $handler->display->display_options['arguments']['field_bl_category_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_bl_category_tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['field_bl_category_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_bl_category_tid']['not'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_bl_category_tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Book List Category (field_bl_category)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Youth Book List Titles */
  $handler = $view->new_display('panel_pane', 'Youth Book List Titles', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Our Booklists';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Book List Category */
  $handler->display->display_options['fields']['field_bl_category']['id'] = 'field_bl_category';
  $handler->display->display_options['fields']['field_bl_category']['table'] = 'field_data_field_bl_category';
  $handler->display->display_options['fields']['field_bl_category']['field'] = 'field_bl_category';
  $handler->display->display_options['fields']['field_bl_category']['label'] = '';
  $handler->display->display_options['fields']['field_bl_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bl_category']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_bl_category']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_bl_category']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_bl_category']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_bl_category']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_bl_category']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_bl_category']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_bl_category']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_bl_category']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_bl_category']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_bl_category']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_bl_category']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_bl_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bl_category']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_bl_category']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_bl_category']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_bl_category']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_bl_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_bl_category']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'youth-recommends/[field_bl_category]/[title]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Book List Category (field_bl_category) */
  $handler->display->display_options['arguments']['field_bl_category_tid']['id'] = 'field_bl_category_tid';
  $handler->display->display_options['arguments']['field_bl_category_tid']['table'] = 'field_data_field_bl_category';
  $handler->display->display_options['arguments']['field_bl_category_tid']['field'] = 'field_bl_category_tid';
  $handler->display->display_options['arguments']['field_bl_category_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_bl_category_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_bl_category_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_bl_category_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_bl_category_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_bl_category_tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_bl_category_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_bl_category_tid']['validate_options']['vocabularies'] = array(
    'book_list_categories' => 'book_list_categories',
  );
  $handler->display->display_options['arguments']['field_bl_category_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_bl_category_tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['field_bl_category_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_bl_category_tid']['not'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_bl_category_tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Book List Category (field_bl_category)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Random Youth BP */
  $handler = $view->new_display('panel_pane', 'Random Youth BP', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Youth Recommends';
  $handler->display->display_options['display_description'] = 'Displays a random youth book from a youth booklist in a content pane';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = 'More <a href="/youth-recommends">Youth Recommendations</a>';
  $handler->display->display_options['footer']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'book_list' => 'book_list',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Book List Category (field_bl_category) */
  $handler->display->display_options['filters']['field_bl_category_tid']['id'] = 'field_bl_category_tid';
  $handler->display->display_options['filters']['field_bl_category_tid']['table'] = 'field_data_field_bl_category';
  $handler->display->display_options['filters']['field_bl_category_tid']['field'] = 'field_bl_category_tid';
  $handler->display->display_options['filters']['field_bl_category_tid']['value'] = array(
    127 => '127',
    167 => '167',
    135 => '135',
    136 => '136',
    134 => '134',
    139 => '139',
    133 => '133',
    137 => '137',
    138 => '138',
  );
  $handler->display->display_options['filters']['field_bl_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_bl_category_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_bl_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_bl_category_tid']['vocabulary'] = 'book_list_categories';
  $handler->display->display_options['filters']['field_bl_category_tid']['hierarchy'] = 1;

  /* Display: What's Hot */
  $handler = $view->new_display('panel_pane', 'What\'s Hot', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'What\'s Hot';
  $handler->display->display_options['display_description'] = 'Displays the What\'s Hot booklist in carousel in a content pane';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = 'More <a href="/apl-recommends">APL Recommendations</a>';
  $handler->display->display_options['footer']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Isbn List */
  $handler->display->display_options['fields']['field_isbn_list']['id'] = 'field_isbn_list';
  $handler->display->display_options['fields']['field_isbn_list']['table'] = 'field_data_field_isbn_list';
  $handler->display->display_options['fields']['field_isbn_list']['field'] = 'field_isbn_list';
  $handler->display->display_options['fields']['field_isbn_list']['label'] = '';
  $handler->display->display_options['fields']['field_isbn_list']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_isbn_list']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_isbn_list']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_isbn_list']['click_sort_column'] = 'bl_isbn';
  $handler->display->display_options['fields']['field_isbn_list']['type'] = 'apl_isbnfield_scrollbox';
  $handler->display->display_options['fields']['field_isbn_list']['group_column'] = 'bl_isbn';
  $handler->display->display_options['fields']['field_isbn_list']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_isbn_list']['delta_limit'] = '25';
  $handler->display->display_options['fields']['field_isbn_list']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_isbn_list']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['separator'] = '';
  $handler->display->display_options['fields']['field_isbn_list']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'book_list' => 'book_list',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Book List Category (field_bl_category) */
  $handler->display->display_options['filters']['field_bl_category_tid']['id'] = 'field_bl_category_tid';
  $handler->display->display_options['filters']['field_bl_category_tid']['table'] = 'field_data_field_bl_category';
  $handler->display->display_options['filters']['field_bl_category_tid']['field'] = 'field_bl_category_tid';
  $handler->display->display_options['filters']['field_bl_category_tid']['value'] = array(
    126 => '126',
    129 => '129',
    130 => '130',
    132 => '132',
    127 => '127',
    135 => '135',
    136 => '136',
    133 => '133',
    137 => '137',
    138 => '138',
    269 => '269',
  );
  $handler->display->display_options['filters']['field_bl_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_bl_category_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_bl_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_bl_category_tid']['vocabulary'] = 'book_list_categories';
  $handler->display->display_options['filters']['field_bl_category_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['value']['value'] = '1266';
  $handler->display->display_options['filters']['nid']['group'] = 1;

  /* Display: 3 Random Carousels */
  $handler = $view->new_display('panel_pane', '3 Random Carousels', 'panel_pane_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Best Fiction';
  $handler->display->display_options['display_description'] = 'Displays a random book from a booklist in a content pane';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Isbn List */
  $handler->display->display_options['fields']['field_isbn_list']['id'] = 'field_isbn_list';
  $handler->display->display_options['fields']['field_isbn_list']['table'] = 'field_data_field_isbn_list';
  $handler->display->display_options['fields']['field_isbn_list']['field'] = 'field_isbn_list';
  $handler->display->display_options['fields']['field_isbn_list']['label'] = '';
  $handler->display->display_options['fields']['field_isbn_list']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_isbn_list']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_isbn_list']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_isbn_list']['click_sort_column'] = 'bl_isbn';
  $handler->display->display_options['fields']['field_isbn_list']['type'] = 'apl_isbnfield_scrollbox';
  $handler->display->display_options['fields']['field_isbn_list']['group_column'] = 'bl_isbn';
  $handler->display->display_options['fields']['field_isbn_list']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_isbn_list']['delta_limit'] = '16';
  $handler->display->display_options['fields']['field_isbn_list']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_isbn_list']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['separator'] = '';
  $handler->display->display_options['fields']['field_isbn_list']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'book_list' => 'book_list',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    129 => '129',
    135 => '135',
    139 => '139',
    138 => '138',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'book_list_categories';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;

  /* Display: 3 Youth Carousels */
  $handler = $view->new_display('panel_pane', '3 Youth Carousels', 'panel_pane_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recommended Youth Books';
  $handler->display->display_options['display_description'] = 'Displays a 3 random youth booklist in carousel form a content pane';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Isbn List */
  $handler->display->display_options['fields']['field_isbn_list']['id'] = 'field_isbn_list';
  $handler->display->display_options['fields']['field_isbn_list']['table'] = 'field_data_field_isbn_list';
  $handler->display->display_options['fields']['field_isbn_list']['field'] = 'field_isbn_list';
  $handler->display->display_options['fields']['field_isbn_list']['label'] = '';
  $handler->display->display_options['fields']['field_isbn_list']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_isbn_list']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_isbn_list']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_isbn_list']['click_sort_column'] = 'bl_isbn';
  $handler->display->display_options['fields']['field_isbn_list']['type'] = 'apl_isbnfield_scrollbox';
  $handler->display->display_options['fields']['field_isbn_list']['group_column'] = 'bl_isbn';
  $handler->display->display_options['fields']['field_isbn_list']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_isbn_list']['delta_limit'] = '16';
  $handler->display->display_options['fields']['field_isbn_list']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_isbn_list']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_isbn_list']['separator'] = '';
  $handler->display->display_options['fields']['field_isbn_list']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'book_list' => 'book_list',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    127 => '127',
    135 => '135',
    136 => '136',
    134 => '134',
    139 => '139',
    133 => '133',
    137 => '137',
    138 => '138',
    269 => '269',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'book_list_categories';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  $export['all_book_lists'] = $view;

  $view = new view;
  $view->name = 'all_taxonomy_views';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'All Taxonomy Views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Taxonomy Views';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'databases/[name]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'all-taxonomy-views';

  /* Display: FAQ Content pane */
  $handler = $view->new_display('panel_pane', 'FAQ Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FAQ Topics';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'how-do-i/[name]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    10 => '10',
  );
  $handler->display->display_options['filters']['vid']['group'] = 1;

  /* Display: Database Content pane */
  $handler = $view->new_display('panel_pane', 'Database Content pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Database Subjects';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['filters']['vid']['group'] = 1;
  $handler->display->display_options['pane_title'] = 'Database Topics';
  $handler->display->display_options['link_to_view'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: IG Content pane */
  $handler = $view->new_display('panel_pane', 'IG Content pane', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Information Guide Subjects';
  $handler->display->display_options['display_description'] = 'Information Guide Content Pane';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'information-guides/[name]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    9 => '9',
  );
  $handler->display->display_options['filters']['vid']['group'] = 1;
  $handler->display->display_options['pane_title'] = 'Information Guide Subjects';
  $handler->display->display_options['pane_description'] = 'Information Guide Subjects';

  /* Display: Adult BL Categories */
  $handler = $view->new_display('panel_pane', 'Adult BL Categories', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All Book List Categories';
  $handler->display->display_options['display_description'] = 'Adult Book List Categories';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'information-guides/[name]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['vocabularies'] = array(
    'book_list_categories' => 'book_list_categories',
  );
  $handler->display->display_options['arguments']['name']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['name']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['name']['glossary'] = 0;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['name']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['name']['add_table'] = 0;
  $handler->display->display_options['arguments']['name']['require_value'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    12 => '12',
  );
  $handler->display->display_options['filters']['vid']['group'] = 1;
  $handler->display->display_options['pane_title'] = 'All Book List Categories';
  $handler->display->display_options['pane_description'] = 'All Book List Categories';

  /* Display: Location CP */
  $handler = $view->new_display('panel_pane', 'Location CP', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Library Locations';
  $handler->display->display_options['display_description'] = 'List of all library locations';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a alt="[name]" href="/locations/[name]">[name]</a>';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'http://library.austintexas.gov/locations/[name]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['alt'] = '[name]';
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    14 => '14',
  );
  $handler->display->display_options['filters']['vid']['group'] = 1;
  $export['all_taxonomy_views'] = $view;

  $view = new view;
  $view->name = 'database_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Database-view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Database-view';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = 'title';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Results Available';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No Results for !1';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 1;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['path']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['path']['alter']['external'] = 0;
  $handler->display->display_options['fields']['path']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['path']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['path']['absolute'] = 0;
  /* Field: Content: Link to Database */
  $handler->display->display_options['fields']['field_database_link']['id'] = 'field_database_link';
  $handler->display->display_options['fields']['field_database_link']['table'] = 'field_data_field_database_link';
  $handler->display->display_options['fields']['field_database_link']['field'] = 'field_database_link';
  $handler->display->display_options['fields']['field_database_link']['label'] = '';
  $handler->display->display_options['fields']['field_database_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_database_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_database_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_database_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_database_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_database_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_database_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_database_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_database_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_database_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_database_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_database_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_database_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_database_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_database_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_database_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_database_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_database_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_database_link']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href=\'[field_database_link]\'>[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Database Subjects */
  $handler->display->display_options['fields']['field_database_subjects']['id'] = 'field_database_subjects';
  $handler->display->display_options['fields']['field_database_subjects']['table'] = 'field_data_field_database_subjects';
  $handler->display->display_options['fields']['field_database_subjects']['field'] = 'field_database_subjects';
  $handler->display->display_options['fields']['field_database_subjects']['label'] = '';
  $handler->display->display_options['fields']['field_database_subjects']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_database_subjects']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_database_subjects']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_database_subjects']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_database_subjects']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_database_subjects']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_database_subjects']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_database_subjects']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_database_subjects']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_database_subjects']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_database_subjects']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_database_subjects']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_database_subjects']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_database_subjects']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_database_subjects']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_database_subjects']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_database_subjects']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_database_subjects']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_database_subjects']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_database_subjects']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_database_subjects']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_database_subjects']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_database_subjects']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_database_subjects']['field_api_classes'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<p><a href="[path]">more</a></p> <hr /><br />';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 1;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Database Subjects (field_database_subjects) */
  $handler->display->display_options['sorts']['field_database_subjects_tid']['id'] = 'field_database_subjects_tid';
  $handler->display->display_options['sorts']['field_database_subjects_tid']['table'] = 'field_data_field_database_subjects';
  $handler->display->display_options['sorts']['field_database_subjects_tid']['field'] = 'field_database_subjects_tid';
  /* Contextual filter: Content: Database Subjects (field_database_subjects) */
  $handler->display->display_options['arguments']['field_database_subjects_tid']['id'] = 'field_database_subjects_tid';
  $handler->display->display_options['arguments']['field_database_subjects_tid']['table'] = 'field_data_field_database_subjects';
  $handler->display->display_options['arguments']['field_database_subjects_tid']['field'] = 'field_database_subjects_tid';
  $handler->display->display_options['arguments']['field_database_subjects_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_database_subjects_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_database_subjects_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_database_subjects_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_database_subjects_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_database_subjects_tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_database_subjects_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_database_subjects_tid']['validate_options']['vocabularies'] = array(
    'database_subjects' => 'database_subjects',
  );
  $handler->display->display_options['arguments']['field_database_subjects_tid']['validate_options']['type'] = 'name';
  $handler->display->display_options['arguments']['field_database_subjects_tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['field_database_subjects_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_database_subjects_tid']['not'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'database' => 'database',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Database Subjects (field_database_subjects) */
  $handler->display->display_options['arguments']['field_database_subjects_tid']['id'] = 'field_database_subjects_tid';
  $handler->display->display_options['arguments']['field_database_subjects_tid']['table'] = 'field_data_field_database_subjects';
  $handler->display->display_options['arguments']['field_database_subjects_tid']['field'] = 'field_database_subjects_tid';
  $handler->display->display_options['arguments']['field_database_subjects_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_database_subjects_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_database_subjects_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_database_subjects_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_database_subjects_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_database_subjects_tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_database_subjects_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_database_subjects_tid']['validate_options']['vocabularies'] = array(
    'database_subjects' => 'database_subjects',
  );
  $handler->display->display_options['arguments']['field_database_subjects_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_database_subjects_tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['field_database_subjects_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_database_subjects_tid']['not'] = 0;
  $handler->display->display_options['path'] = 'database-view';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Databases';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Database Subjects (field_database_subjects) */
  $handler->display->display_options['arguments']['field_database_subjects_tid']['id'] = 'field_database_subjects_tid';
  $handler->display->display_options['arguments']['field_database_subjects_tid']['table'] = 'field_data_field_database_subjects';
  $handler->display->display_options['arguments']['field_database_subjects_tid']['field'] = 'field_database_subjects_tid';
  $handler->display->display_options['arguments']['field_database_subjects_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_database_subjects_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_database_subjects_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_database_subjects_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_database_subjects_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_database_subjects_tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_database_subjects_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_database_subjects_tid']['validate_options']['vocabularies'] = array(
    'database_subjects' => 'database_subjects',
  );
  $handler->display->display_options['arguments']['field_database_subjects_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_database_subjects_tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['field_database_subjects_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_database_subjects_tid']['not'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_database_subjects_tid' => array(
      'type' => 'panel',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Database Subjects (field_database_subjects)',
    ),
  );
  $export['database_view'] = $view;

  $view = new view;
  $view->name = 'events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = 'field_date';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_time' => 'field_time',
    'field_event_title' => 'field_event_title',
    'title' => 'title',
    'field_subtitle' => 'field_subtitle',
    'field_event_location' => 'field_event_location',
    'field_event_loc' => 'field_event_loc',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Link to Other Events';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/events">All Events</a> | <a href="/adult-events">All Adult Events</a> | <a href="/youth-events">All Youth Events</a>';
  $handler->display->display_options['header']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Event Shows Up';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = '<p>Can\'t find the event you are looking for?</p><p><a href="/ask">Ask a Librarian</a> to get the help you need!</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = 0;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'event_titles' => 'event_titles',
    'blog_topics' => 0,
    'database_subjects' => 0,
    'faq_topics' => 0,
    'ig_subjects' => 0,
    'intended_audience' => 0,
    'page_type' => 0,
    'tags' => 0,
    'press_release_types' => 0,
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['path']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['path']['alter']['external'] = 0;
  $handler->display->display_options['fields']['path']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['path']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['path']['absolute'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'just_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_date']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_date']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_time']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_time']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_time']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_time']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_time']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_time']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_subtitle']['alter']['text'] = '- [field_subtitle]';
  $handler->display->display_options['fields']['field_subtitle']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_subtitle']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_subtitle']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_subtitle']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_subtitle']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_subtitle']['field_api_classes'] = 0;
  /* Field: Content: Event Location */
  $handler->display->display_options['fields']['field_event_loc']['id'] = 'field_event_loc';
  $handler->display->display_options['fields']['field_event_loc']['table'] = 'field_data_field_event_loc';
  $handler->display->display_options['fields']['field_event_loc']['field'] = 'field_event_loc';
  $handler->display->display_options['fields']['field_event_loc']['label'] = 'at';
  $handler->display->display_options['fields']['field_event_loc']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['alter']['text'] = '<a alt="[field_event_loc]" href="/locations/[field_event_loc]">[field_event_loc]</a>';
  $handler->display->display_options['fields']['field_event_loc']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_event_loc']['field_api_classes'] = 0;
  /* Sort criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  /* Sort criterion: Content: Time -  start date (field_time) */
  $handler->display->display_options['sorts']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['sorts']['field_time_value']['field'] = 'field_time_value';
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'event_titles' => 'event_titles',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '5';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['set_breadcrumb'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['use_taxonomy_term_path'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Event Category (field_event_title) */
  $handler->display->display_options['filters']['field_event_title_tid']['id'] = 'field_event_title_tid';
  $handler->display->display_options['filters']['field_event_title_tid']['table'] = 'field_data_field_event_title';
  $handler->display->display_options['filters']['field_event_title_tid']['field'] = 'field_event_title_tid';
  $handler->display->display_options['filters']['field_event_title_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_title_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_title_tid']['expose']['operator_id'] = 'field_event_title_tid_op';
  $handler->display->display_options['filters']['field_event_title_tid']['expose']['label'] = 'Event Category';
  $handler->display->display_options['filters']['field_event_title_tid']['expose']['operator'] = 'field_event_title_tid_op';
  $handler->display->display_options['filters']['field_event_title_tid']['expose']['identifier'] = 'field_event_title_tid';
  $handler->display->display_options['filters']['field_event_title_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_event_title_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_event_title_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_title_tid']['vocabulary'] = 'event_titles';
  $handler->display->display_options['filters']['field_event_title_tid']['error_message'] = 1;
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-0:+1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Event Category (field_event_title) */
  $handler->display->display_options['relationships']['field_event_title_tid']['id'] = 'field_event_title_tid';
  $handler->display->display_options['relationships']['field_event_title_tid']['table'] = 'field_data_field_event_title';
  $handler->display->display_options['relationships']['field_event_title_tid']['field'] = 'field_event_title_tid';
  $handler->display->display_options['relationships']['field_event_title_tid']['required'] = 1;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Is between';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = 'now + 6 months';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-0:+1';
  /* Filter criterion: Content: Event Location (field_event_loc) */
  $handler->display->display_options['filters']['field_event_loc_tid']['id'] = 'field_event_loc_tid';
  $handler->display->display_options['filters']['field_event_loc_tid']['table'] = 'field_data_field_event_loc';
  $handler->display->display_options['filters']['field_event_loc_tid']['field'] = 'field_event_loc_tid';
  $handler->display->display_options['filters']['field_event_loc_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_loc_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['operator_id'] = 'field_event_loc_tid_op';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['label'] = 'Located at';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['operator'] = 'field_event_loc_tid_op';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['identifier'] = 'field_event_loc_tid';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_event_loc_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_event_loc_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_loc_tid']['vocabulary'] = 'library_location';
  $handler->display->display_options['filters']['field_event_loc_tid']['error_message'] = 1;
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    308 => '308',
    215 => '215',
    307 => '307',
    306 => '306',
    116 => '116',
    214 => '214',
    305 => '305',
    221 => '221',
    218 => '218',
    261 => '261',
    228 => '228',
    309 => '309',
    310 => '310',
    25 => '25',
    311 => '311',
    231 => '231',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Event Category';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['reduce'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'event_titles';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['error_message'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '10';
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator_id'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['label'] = 'Event Date';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['identifier'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_date_value_1']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value_1']['year_range'] = '-0:+1';
  $handler->display->display_options['path'] = 'programs';

  /* Display: What's Happening */
  $handler = $view->new_display('panel_pane', 'What\'s Happening', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Events';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'FULL CALENDAR';
  $handler->display->display_options['link_url'] = '/events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['path']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['path']['alter']['external'] = 0;
  $handler->display->display_options['fields']['path']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['path']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['path']['absolute'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'just_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_date']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_date']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_time']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_time']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_time']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_time']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_time']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_time']['field_api_classes'] = 0;
  /* Field: Content: Event Category */
  $handler->display->display_options['fields']['field_event_title']['id'] = 'field_event_title';
  $handler->display->display_options['fields']['field_event_title']['table'] = 'field_data_field_event_title';
  $handler->display->display_options['fields']['field_event_title']['field'] = 'field_event_title';
  $handler->display->display_options['fields']['field_event_title']['label'] = '';
  $handler->display->display_options['fields']['field_event_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_title']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_event_title']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_subtitle']['alter']['text'] = '- [field_subtitle]';
  $handler->display->display_options['fields']['field_subtitle']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_subtitle']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_subtitle']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_subtitle']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_subtitle']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_subtitle']['field_api_classes'] = 0;
  /* Field: Content: Event Location */
  $handler->display->display_options['fields']['field_event_loc']['id'] = 'field_event_loc';
  $handler->display->display_options['fields']['field_event_loc']['table'] = 'field_data_field_event_loc';
  $handler->display->display_options['fields']['field_event_loc']['field'] = 'field_event_loc';
  $handler->display->display_options['fields']['field_event_loc']['label'] = 'at';
  $handler->display->display_options['fields']['field_event_loc']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['alter']['text'] = '<a alt="[field_event_loc]" href="/locations/[field_event_loc]">[field_event_loc]</a>';
  $handler->display->display_options['fields']['field_event_loc']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_event_loc']['field_api_classes'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = 'now + 30 days';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-0:+1';
  /* Filter criterion: Content: Sticky */
  $handler->display->display_options['filters']['sticky']['id'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['table'] = 'node';
  $handler->display->display_options['filters']['sticky']['field'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['value'] = '1';
  $handler->display->display_options['filters']['sticky']['group'] = 1;
  $handler->display->display_options['link_to_view'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Youth Events */
  $handler = $view->new_display('page', 'Youth Events', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Youth Events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Event Category (field_event_title) */
  $handler->display->display_options['relationships']['field_event_title_tid']['id'] = 'field_event_title_tid';
  $handler->display->display_options['relationships']['field_event_title_tid']['table'] = 'field_data_field_event_title';
  $handler->display->display_options['relationships']['field_event_title_tid']['field'] = 'field_event_title_tid';
  $handler->display->display_options['relationships']['field_event_title_tid']['required'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['path']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['path']['alter']['external'] = 0;
  $handler->display->display_options['fields']['path']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['path']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['path']['absolute'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'just_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_date']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_date']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_time']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_time']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_time']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_time']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_time']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_time']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Event Location */
  $handler->display->display_options['fields']['field_event_loc']['id'] = 'field_event_loc';
  $handler->display->display_options['fields']['field_event_loc']['table'] = 'field_data_field_event_loc';
  $handler->display->display_options['fields']['field_event_loc']['field'] = 'field_event_loc';
  $handler->display->display_options['fields']['field_event_loc']['label'] = 'at';
  $handler->display->display_options['fields']['field_event_loc']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['alter']['text'] = '<a alt="[field_event_loc]" href="/locations/[field_event_loc]">[field_event_loc]</a>';
  $handler->display->display_options['fields']['field_event_loc']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_event_loc']['field_api_classes'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_1']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator_id'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['label'] = 'Is Between';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['identifier'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_date_value_1']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value_1']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_date_value_1']['default_to_date'] = 'now + 6 months';
  $handler->display->display_options['filters']['field_date_value_1']['year_range'] = '-0:+1';
  /* Filter criterion: Content: Event Category (field_event_title) */
  $handler->display->display_options['filters']['field_event_title_tid_1']['id'] = 'field_event_title_tid_1';
  $handler->display->display_options['filters']['field_event_title_tid_1']['table'] = 'field_data_field_event_title';
  $handler->display->display_options['filters']['field_event_title_tid_1']['field'] = 'field_event_title_tid';
  $handler->display->display_options['filters']['field_event_title_tid_1']['value'] = array(
    308 => '308',
    280 => '280',
    118 => '118',
    179 => '179',
    252 => '252',
    215 => '215',
    279 => '279',
    288 => '288',
    307 => '307',
    306 => '306',
    234 => '234',
    238 => '238',
    237 => '237',
    235 => '235',
    236 => '236',
    221 => '221',
    261 => '261',
    228 => '228',
    232 => '232',
    177 => '177',
    309 => '309',
    216 => '216',
    219 => '219',
    25 => '25',
    267 => '267',
    150 => '150',
    152 => '152',
    151 => '151',
    153 => '153',
    154 => '154',
    311 => '311',
    289 => '289',
    286 => '286',
    231 => '231',
    312 => '312',
    287 => '287',
  );
  $handler->display->display_options['filters']['field_event_title_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_event_title_tid_1']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_event_title_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_title_tid_1']['vocabulary'] = 'event_titles';
  $handler->display->display_options['filters']['field_event_title_tid_1']['hierarchy'] = 1;
  /* Filter criterion: Content: Event Location (field_event_loc) */
  $handler->display->display_options['filters']['field_event_loc_tid']['id'] = 'field_event_loc_tid';
  $handler->display->display_options['filters']['field_event_loc_tid']['table'] = 'field_data_field_event_loc';
  $handler->display->display_options['filters']['field_event_loc_tid']['field'] = 'field_event_loc_tid';
  $handler->display->display_options['filters']['field_event_loc_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_loc_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['operator_id'] = 'field_event_loc_tid_op';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['label'] = 'Located at';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['operator'] = 'field_event_loc_tid_op';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['identifier'] = 'field_event_loc_tid';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_event_loc_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_event_loc_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_loc_tid']['vocabulary'] = 'library_location';
  $handler->display->display_options['filters']['field_event_loc_tid']['error_message'] = 1;
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    308 => '308',
    215 => '215',
    307 => '307',
    306 => '306',
    221 => '221',
    261 => '261',
    228 => '228',
    309 => '309',
    310 => '310',
    25 => '25',
    311 => '311',
    231 => '231',
    312 => '312',
    287 => '287',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Event Category';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['reduce'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'event_titles';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['error_message'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '5';
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Event Date';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-0:+1';
  $handler->display->display_options['path'] = 'programs-youth';

  /* Display: Upcoming Youth */
  $handler = $view->new_display('panel_pane', 'Upcoming Youth', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Youth Events';
  $handler->display->display_options['display_description'] = 'Upcoming Youth Events';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'FULL YOUTH CALENDAR';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'youth-events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['path']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['path']['alter']['external'] = 0;
  $handler->display->display_options['fields']['path']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['path']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['path']['absolute'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'just_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_date']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_date']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_time']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_time']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_time']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_time']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_time']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_time']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_subtitle']['alter']['text'] = '- [field_subtitle]';
  $handler->display->display_options['fields']['field_subtitle']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_subtitle']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_subtitle']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_subtitle']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_subtitle']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_subtitle']['field_api_classes'] = 0;
  /* Field: Content: Event Location */
  $handler->display->display_options['fields']['field_event_loc']['id'] = 'field_event_loc';
  $handler->display->display_options['fields']['field_event_loc']['table'] = 'field_data_field_event_loc';
  $handler->display->display_options['fields']['field_event_loc']['field'] = 'field_event_loc';
  $handler->display->display_options['fields']['field_event_loc']['label'] = 'at';
  $handler->display->display_options['fields']['field_event_loc']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_loc']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['alter']['text'] = '<a alt="[field_event_loc]" href="/locations/[field_event_loc]">[field_event_loc]</a>';
  $handler->display->display_options['fields']['field_event_loc']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_event_loc']['field_api_classes'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = 'now + 30 days';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-0:+1';
  /* Filter criterion: Content: Event Category (field_event_title) */
  $handler->display->display_options['filters']['field_event_title_tid']['id'] = 'field_event_title_tid';
  $handler->display->display_options['filters']['field_event_title_tid']['table'] = 'field_data_field_event_title';
  $handler->display->display_options['filters']['field_event_title_tid']['field'] = 'field_event_title_tid';
  $handler->display->display_options['filters']['field_event_title_tid']['value'] = array(
    117 => '117',
    232 => '232',
    280 => '280',
    279 => '279',
    118 => '118',
    252 => '252',
    266 => '266',
    261 => '261',
    25 => '25',
    267 => '267',
    150 => '150',
    152 => '152',
    151 => '151',
    153 => '153',
    154 => '154',
    179 => '179',
    233 => '233',
    237 => '237',
    235 => '235',
    238 => '238',
    234 => '234',
    236 => '236',
  );
  $handler->display->display_options['filters']['field_event_title_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_title_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_event_title_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_title_tid']['vocabulary'] = 'event_titles';
  $handler->display->display_options['filters']['field_event_title_tid']['hierarchy'] = 1;

  /* Display: Adult Events */
  $handler = $view->new_display('page', 'Adult Events', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Adult Events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Event Category (field_event_title) */
  $handler->display->display_options['relationships']['field_event_title_tid']['id'] = 'field_event_title_tid';
  $handler->display->display_options['relationships']['field_event_title_tid']['table'] = 'field_data_field_event_title';
  $handler->display->display_options['relationships']['field_event_title_tid']['field'] = 'field_event_title_tid';
  $handler->display->display_options['relationships']['field_event_title_tid']['required'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['path']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['path']['alter']['external'] = 0;
  $handler->display->display_options['fields']['path']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['path']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['path']['absolute'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'just_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_date']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_date']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_time']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_time']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_time']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_time']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_time']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_time']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Event Location */
  $handler->display->display_options['fields']['field_event_loc']['id'] = 'field_event_loc';
  $handler->display->display_options['fields']['field_event_loc']['table'] = 'field_data_field_event_loc';
  $handler->display->display_options['fields']['field_event_loc']['field'] = 'field_event_loc';
  $handler->display->display_options['fields']['field_event_loc']['label'] = 'at';
  $handler->display->display_options['fields']['field_event_loc']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['alter']['text'] = '<a alt="[field_event_loc]" href="/locations/[field_event_loc]">[field_event_loc]</a>';
  $handler->display->display_options['fields']['field_event_loc']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_event_loc']['field_api_classes'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Event Category (field_event_title) */
  $handler->display->display_options['filters']['field_event_title_tid_1']['id'] = 'field_event_title_tid_1';
  $handler->display->display_options['filters']['field_event_title_tid_1']['table'] = 'field_data_field_event_title';
  $handler->display->display_options['filters']['field_event_title_tid_1']['field'] = 'field_event_title_tid';
  $handler->display->display_options['filters']['field_event_title_tid_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_event_title_tid_1']['value'] = array(
    308 => '308',
    280 => '280',
    118 => '118',
    179 => '179',
    252 => '252',
    316 => '316',
    279 => '279',
    288 => '288',
    234 => '234',
    238 => '238',
    235 => '235',
    236 => '236',
    261 => '261',
    232 => '232',
    266 => '266',
    25 => '25',
    267 => '267',
    150 => '150',
    152 => '152',
    151 => '151',
    153 => '153',
    154 => '154',
    311 => '311',
    289 => '289',
    286 => '286',
    287 => '287',
  );
  $handler->display->display_options['filters']['field_event_title_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_event_title_tid_1']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_event_title_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_title_tid_1']['vocabulary'] = 'event_titles';
  $handler->display->display_options['filters']['field_event_title_tid_1']['hierarchy'] = 1;
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_1']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator_id'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['label'] = 'Is Between';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['identifier'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_date_value_1']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value_1']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_date_value_1']['default_to_date'] = 'now + 6 months';
  $handler->display->display_options['filters']['field_date_value_1']['year_range'] = '-0:+1';
  /* Filter criterion: Content: Event Location (field_event_loc) */
  $handler->display->display_options['filters']['field_event_loc_tid']['id'] = 'field_event_loc_tid';
  $handler->display->display_options['filters']['field_event_loc_tid']['table'] = 'field_data_field_event_loc';
  $handler->display->display_options['filters']['field_event_loc_tid']['field'] = 'field_event_loc_tid';
  $handler->display->display_options['filters']['field_event_loc_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_loc_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['operator_id'] = 'field_event_loc_tid_op';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['label'] = 'Located at';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['operator'] = 'field_event_loc_tid_op';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['identifier'] = 'field_event_loc_tid';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_event_loc_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_event_loc_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_loc_tid']['vocabulary'] = 'library_location';
  $handler->display->display_options['filters']['field_event_loc_tid']['error_message'] = 1;
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    215 => '215',
    307 => '307',
    306 => '306',
    171 => '171',
    116 => '116',
    214 => '214',
    315 => '315',
    314 => '314',
    305 => '305',
    221 => '221',
    218 => '218',
    228 => '228',
    229 => '229',
    177 => '177',
    220 => '220',
    309 => '309',
    216 => '216',
    219 => '219',
    310 => '310',
    222 => '222',
    313 => '313',
    230 => '230',
    266 => '266',
    231 => '231',
    317 => '317',
    312 => '312',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Event Category';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['reduce'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'event_titles';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['error_message'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '5';
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Event Date';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-0:+1';
  $handler->display->display_options['path'] = 'programs-adult';

  /* Display: Location Event */
  $handler = $view->new_display('panel_pane', 'Location Event', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['display_description'] = 'Upcoming Events at a Location';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'FULL YOUTH CALENDAR';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['path']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['path']['alter']['external'] = 0;
  $handler->display->display_options['fields']['path']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['path']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['path']['absolute'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'just_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_date']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_date']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_time']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_time']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_time']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_time']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_time']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_time']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Event Location */
  $handler->display->display_options['fields']['field_event_loc']['id'] = 'field_event_loc';
  $handler->display->display_options['fields']['field_event_loc']['table'] = 'field_data_field_event_loc';
  $handler->display->display_options['fields']['field_event_loc']['field'] = 'field_event_loc';
  $handler->display->display_options['fields']['field_event_loc']['label'] = 'Location';
  $handler->display->display_options['fields']['field_event_loc']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['alter']['text'] = '<em>[field_event_loc] </em><br/><br/>';
  $handler->display->display_options['fields']['field_event_loc']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_event_loc']['element_wrapper_class'] = 'event-location';
  $handler->display->display_options['fields']['field_event_loc']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Event Location (field_event_loc) */
  $handler->display->display_options['arguments']['field_event_loc_tid']['id'] = 'field_event_loc_tid';
  $handler->display->display_options['arguments']['field_event_loc_tid']['table'] = 'field_data_field_event_loc';
  $handler->display->display_options['arguments']['field_event_loc_tid']['field'] = 'field_event_loc_tid';
  $handler->display->display_options['arguments']['field_event_loc_tid']['title_enable'] = 1;
  $handler->display->display_options['arguments']['field_event_loc_tid']['title'] = 'Upcoming Events at the %1';
  $handler->display->display_options['arguments']['field_event_loc_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_event_loc_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_event_loc_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_loc_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_loc_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_event_loc_tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_event_loc_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_event_loc_tid']['validate_options']['vocabularies'] = array(
    'library_location' => 'library_location',
  );
  $handler->display->display_options['arguments']['field_event_loc_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_event_loc_tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['field_event_loc_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_event_loc_tid']['not'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = 'now + 30 days';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-0:+1';
  $handler->display->display_options['argument_input'] = array(
    'field_event_loc_tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Event Location (field_event_loc)',
    ),
  );

  /* Display: Media Events */
  $handler = $view->new_display('page', 'Media Events', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events for Media List';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Event Category (field_event_title) */
  $handler->display->display_options['relationships']['field_event_title_tid']['id'] = 'field_event_title_tid';
  $handler->display->display_options['relationships']['field_event_title_tid']['table'] = 'field_data_field_event_title';
  $handler->display->display_options['relationships']['field_event_title_tid']['field'] = 'field_event_title_tid';
  $handler->display->display_options['relationships']['field_event_title_tid']['required'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['path']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['path']['alter']['external'] = 0;
  $handler->display->display_options['fields']['path']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['path']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['path']['absolute'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'just_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_date']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_date']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_time']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_time']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_time']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_time']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_time']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_time']['field_api_classes'] = 0;
  /* Field: Content: Event Category */
  $handler->display->display_options['fields']['field_event_title']['id'] = 'field_event_title';
  $handler->display->display_options['fields']['field_event_title']['table'] = 'field_data_field_event_title';
  $handler->display->display_options['fields']['field_event_title']['field'] = 'field_event_title';
  $handler->display->display_options['fields']['field_event_title']['label'] = '';
  $handler->display->display_options['fields']['field_event_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_title']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_event_title']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_subtitle']['alter']['text'] = '- [field_subtitle]';
  $handler->display->display_options['fields']['field_subtitle']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_subtitle']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_subtitle']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_subtitle']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_subtitle']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_subtitle']['field_api_classes'] = 0;
  /* Field: Content: Event Location */
  $handler->display->display_options['fields']['field_event_loc']['id'] = 'field_event_loc';
  $handler->display->display_options['fields']['field_event_loc']['table'] = 'field_data_field_event_loc';
  $handler->display->display_options['fields']['field_event_loc']['field'] = 'field_event_loc';
  $handler->display->display_options['fields']['field_event_loc']['label'] = 'at';
  $handler->display->display_options['fields']['field_event_loc']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['alter']['text'] = '<a alt="[field_event_loc]" href="/locations/[field_event_loc]">[field_event_loc]</a>';
  $handler->display->display_options['fields']['field_event_loc']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_event_loc']['field_api_classes'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Is between';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = 'now + 6 months';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-0:+1';
  /* Filter criterion: Content: Event Location (field_event_loc) */
  $handler->display->display_options['filters']['field_event_loc_tid']['id'] = 'field_event_loc_tid';
  $handler->display->display_options['filters']['field_event_loc_tid']['table'] = 'field_data_field_event_loc';
  $handler->display->display_options['filters']['field_event_loc_tid']['field'] = 'field_event_loc_tid';
  $handler->display->display_options['filters']['field_event_loc_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_loc_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['operator_id'] = 'field_event_loc_tid_op';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['label'] = 'Located at';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['operator'] = 'field_event_loc_tid_op';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['identifier'] = 'field_event_loc_tid';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_event_loc_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_event_loc_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_loc_tid']['vocabulary'] = 'library_location';
  $handler->display->display_options['filters']['field_event_loc_tid']['error_message'] = 1;
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Event Category';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'event_titles';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['error_message'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '10';
  $handler->display->display_options['path'] = 'events-media';

  /* Display: Pwise Events */
  $handler = $view->new_display('page', 'Pwise Events', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events for ParentWise List';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Event Category (field_event_title) */
  $handler->display->display_options['relationships']['field_event_title_tid']['id'] = 'field_event_title_tid';
  $handler->display->display_options['relationships']['field_event_title_tid']['table'] = 'field_data_field_event_title';
  $handler->display->display_options['relationships']['field_event_title_tid']['field'] = 'field_event_title_tid';
  $handler->display->display_options['relationships']['field_event_title_tid']['required'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['path']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['path']['alter']['external'] = 0;
  $handler->display->display_options['fields']['path']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['path']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['path']['absolute'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'just_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_date']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_date']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_time']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_time']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_time']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_time']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_time']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_time']['field_api_classes'] = 0;
  /* Field: Content: Event Category */
  $handler->display->display_options['fields']['field_event_title']['id'] = 'field_event_title';
  $handler->display->display_options['fields']['field_event_title']['table'] = 'field_data_field_event_title';
  $handler->display->display_options['fields']['field_event_title']['field'] = 'field_event_title';
  $handler->display->display_options['fields']['field_event_title']['label'] = '';
  $handler->display->display_options['fields']['field_event_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_title']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_event_title']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_subtitle']['alter']['text'] = '- [field_subtitle]';
  $handler->display->display_options['fields']['field_subtitle']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_subtitle']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_subtitle']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_subtitle']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_subtitle']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_subtitle']['field_api_classes'] = 0;
  /* Field: Content: Event Location */
  $handler->display->display_options['fields']['field_event_loc']['id'] = 'field_event_loc';
  $handler->display->display_options['fields']['field_event_loc']['table'] = 'field_data_field_event_loc';
  $handler->display->display_options['fields']['field_event_loc']['field'] = 'field_event_loc';
  $handler->display->display_options['fields']['field_event_loc']['label'] = 'at';
  $handler->display->display_options['fields']['field_event_loc']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['alter']['text'] = '<a alt="[field_event_loc]" href="/locations/[field_event_loc]">[field_event_loc]</a>';
  $handler->display->display_options['fields']['field_event_loc']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_event_loc']['field_api_classes'] = 0;
  /* Field: Taxonomy term: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['relationship'] = 'field_event_title_tid';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_address']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_address']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_address']['group_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['field_api_classes'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Is between';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = 'now + 6 months';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-0:+1';
  /* Filter criterion: Content: Event Location (field_event_loc) */
  $handler->display->display_options['filters']['field_event_loc_tid']['id'] = 'field_event_loc_tid';
  $handler->display->display_options['filters']['field_event_loc_tid']['table'] = 'field_data_field_event_loc';
  $handler->display->display_options['filters']['field_event_loc_tid']['field'] = 'field_event_loc_tid';
  $handler->display->display_options['filters']['field_event_loc_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_loc_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['operator_id'] = 'field_event_loc_tid_op';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['label'] = 'Located at';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['operator'] = 'field_event_loc_tid_op';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['identifier'] = 'field_event_loc_tid';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_event_loc_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_event_loc_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_loc_tid']['vocabulary'] = 'library_location';
  $handler->display->display_options['filters']['field_event_loc_tid']['error_message'] = 1;
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Event Category';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'event_titles';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['error_message'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '10';
  $handler->display->display_options['path'] = 'events-pwise';

  /* Display: Events CP */
  $handler = $view->new_display('panel_pane', 'Events CP', 'panel_pane_4');
  $handler->display->display_options['display_description'] = 'All Events in a Content Pane';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = 'now + 6 months';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-0:+1';
  /* Filter criterion: Content: Event Location (field_event_loc) */
  $handler->display->display_options['filters']['field_event_loc_tid']['id'] = 'field_event_loc_tid';
  $handler->display->display_options['filters']['field_event_loc_tid']['table'] = 'field_data_field_event_loc';
  $handler->display->display_options['filters']['field_event_loc_tid']['field'] = 'field_event_loc_tid';
  $handler->display->display_options['filters']['field_event_loc_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_loc_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['operator_id'] = 'field_event_loc_tid_op';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['label'] = 'Located At';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['operator'] = 'field_event_loc_tid_op';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['identifier'] = 'field_event_loc_tid';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_event_loc_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_event_loc_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_loc_tid']['vocabulary'] = 'library_location';
  $handler->display->display_options['filters']['field_event_loc_tid']['error_message'] = 1;
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    308 => '308',
    215 => '215',
    307 => '307',
    306 => '306',
    116 => '116',
    214 => '214',
    305 => '305',
    221 => '221',
    218 => '218',
    261 => '261',
    228 => '228',
    309 => '309',
    310 => '310',
    25 => '25',
    311 => '311',
    231 => '231',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Event Category';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['reduce'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'event_titles';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['error_message'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '5';
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator_id'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['identifier'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_date_value_1']['form_type'] = 'date_popup';
  $handler->display->display_options['argument_input'] = array(
    'term_node_tid_depth' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Youth Events CP */
  $handler = $view->new_display('panel_pane', 'Youth Events CP', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Youth Events';
  $handler->display->display_options['display_description'] = 'All Youth Events in a Content Pane';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = 'now + 6 months';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-0:+1';
  /* Filter criterion: Content: Event Location (field_event_loc) */
  $handler->display->display_options['filters']['field_event_loc_tid']['id'] = 'field_event_loc_tid';
  $handler->display->display_options['filters']['field_event_loc_tid']['table'] = 'field_data_field_event_loc';
  $handler->display->display_options['filters']['field_event_loc_tid']['field'] = 'field_event_loc_tid';
  $handler->display->display_options['filters']['field_event_loc_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_loc_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['operator_id'] = 'field_event_loc_tid_op';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['label'] = 'Located At';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['operator'] = 'field_event_loc_tid_op';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['identifier'] = 'field_event_loc_tid';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_event_loc_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_event_loc_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_loc_tid']['vocabulary'] = 'library_location';
  $handler->display->display_options['filters']['field_event_loc_tid']['error_message'] = 1;
  /* Filter criterion: Content: Event Category (field_event_title) */
  $handler->display->display_options['filters']['field_event_title_tid']['id'] = 'field_event_title_tid';
  $handler->display->display_options['filters']['field_event_title_tid']['table'] = 'field_data_field_event_title';
  $handler->display->display_options['filters']['field_event_title_tid']['field'] = 'field_event_title_tid';
  $handler->display->display_options['filters']['field_event_title_tid']['value'] = array(
    308 => '308',
    280 => '280',
    353 => '353',
    118 => '118',
    179 => '179',
    252 => '252',
    215 => '215',
    279 => '279',
    288 => '288',
    307 => '307',
    306 => '306',
    234 => '234',
    238 => '238',
    237 => '237',
    235 => '235',
    236 => '236',
    221 => '221',
    261 => '261',
    228 => '228',
    232 => '232',
    177 => '177',
    309 => '309',
    216 => '216',
    219 => '219',
    25 => '25',
    267 => '267',
    150 => '150',
    152 => '152',
    151 => '151',
    153 => '153',
    154 => '154',
    311 => '311',
    289 => '289',
    286 => '286',
    231 => '231',
    317 => '317',
    287 => '287',
  );
  $handler->display->display_options['filters']['field_event_title_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_title_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_event_title_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_title_tid']['vocabulary'] = 'event_titles';
  $handler->display->display_options['filters']['field_event_title_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    308 => '308',
    215 => '215',
    307 => '307',
    306 => '306',
    116 => '116',
    221 => '221',
    261 => '261',
    228 => '228',
    309 => '309',
    310 => '310',
    266 => '266',
    25 => '25',
    311 => '311',
    231 => '231',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Event Category';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['reduce'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'event_titles';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['error_message'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '5';
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator_id'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['identifier'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_date_value_1']['form_type'] = 'date_popup';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Adult Events CP */
  $handler = $view->new_display('panel_pane', 'Adult Events CP', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Adult Events';
  $handler->display->display_options['display_description'] = 'All Adult Events in a Content Pane';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = 'now + 6 months';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-0:+1';
  /* Filter criterion: Content: Event Location (field_event_loc) */
  $handler->display->display_options['filters']['field_event_loc_tid']['id'] = 'field_event_loc_tid';
  $handler->display->display_options['filters']['field_event_loc_tid']['table'] = 'field_data_field_event_loc';
  $handler->display->display_options['filters']['field_event_loc_tid']['field'] = 'field_event_loc_tid';
  $handler->display->display_options['filters']['field_event_loc_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_loc_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['operator_id'] = 'field_event_loc_tid_op';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['label'] = 'Located At';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['operator'] = 'field_event_loc_tid_op';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['identifier'] = 'field_event_loc_tid';
  $handler->display->display_options['filters']['field_event_loc_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_event_loc_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_event_loc_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_loc_tid']['vocabulary'] = 'library_location';
  $handler->display->display_options['filters']['field_event_loc_tid']['error_message'] = 1;
  /* Filter criterion: Content: Event Category (field_event_title) */
  $handler->display->display_options['filters']['field_event_title_tid']['id'] = 'field_event_title_tid';
  $handler->display->display_options['filters']['field_event_title_tid']['table'] = 'field_data_field_event_title';
  $handler->display->display_options['filters']['field_event_title_tid']['field'] = 'field_event_title_tid';
  $handler->display->display_options['filters']['field_event_title_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_event_title_tid']['value'] = array(
    308 => '308',
    280 => '280',
    118 => '118',
    179 => '179',
    252 => '252',
    316 => '316',
    279 => '279',
    288 => '288',
    234 => '234',
    238 => '238',
    237 => '237',
    235 => '235',
    236 => '236',
    221 => '221',
    261 => '261',
    232 => '232',
    266 => '266',
    25 => '25',
    267 => '267',
    150 => '150',
    152 => '152',
    151 => '151',
    153 => '153',
    154 => '154',
    311 => '311',
    289 => '289',
    286 => '286',
    287 => '287',
  );
  $handler->display->display_options['filters']['field_event_title_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_title_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_event_title_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_title_tid']['vocabulary'] = 'event_titles';
  $handler->display->display_options['filters']['field_event_title_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    215 => '215',
    307 => '307',
    306 => '306',
    116 => '116',
    214 => '214',
    305 => '305',
    221 => '221',
    218 => '218',
    228 => '228',
    309 => '309',
    310 => '310',
    231 => '231',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Event Category';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['reduce'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'event_titles';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['error_message'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '5';
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator_id'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['identifier'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_date_value_1']['form_type'] = 'date_popup';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Single Event CP */
  $handler = $view->new_display('panel_pane', 'Single Event CP', 'panel_pane_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'An Event in a Content Pane';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_subtitle']['alter']['text'] = '- [field_subtitle]';
  $handler->display->display_options['fields']['field_subtitle']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_subtitle']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_subtitle']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_subtitle']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_subtitle']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_subtitle']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_subtitle']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['description']['hide_alter_empty'] = 1;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_time']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_time']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_time']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_time']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_time']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_time']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_time']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_time']['field_api_classes'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'Dates';
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'weekday_month_day_year',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_date']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_date']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_date']['separator'] = '<br />';
  $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
  /* Field: Content: Event Category */
  $handler->display->display_options['fields']['field_event_title']['id'] = 'field_event_title';
  $handler->display->display_options['fields']['field_event_title']['table'] = 'field_data_field_event_title';
  $handler->display->display_options['fields']['field_event_title']['field'] = 'field_event_title';
  $handler->display->display_options['fields']['field_event_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_event_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_title']['field_api_classes'] = 0;
  /* Field: Content: Event Location */
  $handler->display->display_options['fields']['field_event_loc']['id'] = 'field_event_loc';
  $handler->display->display_options['fields']['field_event_loc']['table'] = 'field_data_field_event_loc';
  $handler->display->display_options['fields']['field_event_loc']['field'] = 'field_event_loc';
  $handler->display->display_options['fields']['field_event_loc']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['text'] = '<a alt="[field_event_loc]" href="/locations/[field_event_loc]">[field_event_loc]</a>';
  $handler->display->display_options['fields']['field_event_loc']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_loc']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_loc']['field_api_classes'] = 0;
  /* Field: Content: Event Graphic or Files */
  $handler->display->display_options['fields']['field_associated_media']['id'] = 'field_associated_media';
  $handler->display->display_options['fields']['field_associated_media']['table'] = 'field_data_field_associated_media';
  $handler->display->display_options['fields']['field_associated_media']['field'] = 'field_associated_media';
  $handler->display->display_options['fields']['field_associated_media']['label'] = 'Event Graphic:';
  $handler->display->display_options['fields']['field_associated_media']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_associated_media']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_associated_media']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_associated_media']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_associated_media']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_associated_media']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_associated_media']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_associated_media']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_associated_media']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_associated_media']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_associated_media']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_associated_media']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_associated_media']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_associated_media']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_associated_media']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_associated_media']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_associated_media']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_associated_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_associated_media']['type'] = 'media';
  $handler->display->display_options['fields']['field_associated_media']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_associated_media']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_associated_media']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_associated_media']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_associated_media']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_associated_media']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = 0;
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Date browser */
  $handler = $view->new_display('date_nav', 'Date browser', 'date_nav_1');
  $export['events'] = $view;

  $view = new view;
  $view->name = 'faq_views';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Faq Views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Frequently Asked Questions';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = 'field_faq_topics';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Toggler Script';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<script type="text/javascript">                 
//toggler - by dreamlettes.net                 
function tgClasses(c) {                 
var ael,a=new Array(),j=0;                 
if(document.all)ael=document.all;                 
else if(document.getElementsByTagName && !document.all)ael=document.getElementsByTagName("*");                 
for(i=0;i<ael.length;i++) {                 
if(ael[i].className==c) { a[j]=ael[i]; j++; }                 
} return a;                 
}                 
 
function toggler() {                 
var h=tgClasses(\'handler\');                 
var t=tgClasses(\'toggle\');                 
var td=tgClasses(\'toggledown\');                 
var sall=tgClasses(\'showall\')                 
var hall=tgClasses(\'hideall\')                 
for (var i = 0; i < sall.length; i++) sall[i].onclick = function() {showall()};                  
for (var i = 0; i < hall.length; i++) hall[i].onclick = function() {hideall()};                  
for (var i = 0; i < h.length; i++) { h[i].someProperty = i; h[i].onclick = function() {toggle(this)}; }                 
for (var i = 0; i < t.length; i++) t[i].style.display = \'none\';
for (var i = 0; i < td.length; i++) { td[i].style.display = \'\';  td[i].className =\'toggle\'; };
} 
 
function toggle(el) {                 
var i= el.someProperty;                 
var t=tgClasses(\'toggle\')[i];                 
if (t.style.display == \'none\') {t.style.display = \'\'; el.className = \'handler_down\';}                 
else {t.style.display = \'none\'; el.className = \'handler\'}                 
}                  
 
function showall() {                 
var h=tgClasses(\'handler\');                 
for (var i = 0; i < h.length; i++)  h[i].className = \'handler_down\';                 
var t=tgClasses(\'toggle\');                 
for (var i = 0; i < t.length; i++)  t[i].style.display = \'\';                 
}                 
 
function hideall() {                 
var h=tgClasses(\'handler_down\');                 
for (var i = 0; i < h.length; i++)  h[i].className = \'handler\';                 
var t=tgClasses(\'toggle\');                 
for (var i = 0; i < t.length; i++)  t[i].style.display = \'none\';                 
}	                 
 
window.onload=toggler; 
                
//endtoggler               
</script>    
';
  $handler->display->display_options['header']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Field: Content: FAQ Topics */
  $handler->display->display_options['fields']['field_faq_topics']['id'] = 'field_faq_topics';
  $handler->display->display_options['fields']['field_faq_topics']['table'] = 'field_data_field_faq_topics';
  $handler->display->display_options['fields']['field_faq_topics']['field'] = 'field_faq_topics';
  $handler->display->display_options['fields']['field_faq_topics']['label'] = '';
  $handler->display->display_options['fields']['field_faq_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_faq_topics']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_faq_topics']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_faq_topics']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_faq_topics']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_faq_topics']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_faq_topics']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<dt class="handler">[title]</dt>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<dd class="toggle" style="display:none;">[body]</dd>';
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Sort criterion: Content: FAQ Topics (field_faq_topics) */
  $handler->display->display_options['sorts']['field_faq_topics_tid']['id'] = 'field_faq_topics_tid';
  $handler->display->display_options['sorts']['field_faq_topics_tid']['table'] = 'field_data_field_faq_topics';
  $handler->display->display_options['sorts']['field_faq_topics_tid']['field'] = 'field_faq_topics_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: FAQ Topics (field_faq_topics) */
  $handler->display->display_options['arguments']['field_faq_topics_tid']['id'] = 'field_faq_topics_tid';
  $handler->display->display_options['arguments']['field_faq_topics_tid']['table'] = 'field_data_field_faq_topics';
  $handler->display->display_options['arguments']['field_faq_topics_tid']['field'] = 'field_faq_topics_tid';
  $handler->display->display_options['arguments']['field_faq_topics_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_faq_topics_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_faq_topics_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_faq_topics_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_faq_topics_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_faq_topics_tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_faq_topics_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_faq_topics_tid']['validate_options']['vocabularies'] = array(
    'faq_topics' => 'faq_topics',
  );
  $handler->display->display_options['arguments']['field_faq_topics_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_faq_topics_tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['field_faq_topics_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_faq_topics_tid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faq' => 'faq',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'library-faq';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: FAQ Topics */
  $handler->display->display_options['fields']['field_faq_topics']['id'] = 'field_faq_topics';
  $handler->display->display_options['fields']['field_faq_topics']['table'] = 'field_data_field_faq_topics';
  $handler->display->display_options['fields']['field_faq_topics']['field'] = 'field_faq_topics';
  $handler->display->display_options['fields']['field_faq_topics']['label'] = '';
  $handler->display->display_options['fields']['field_faq_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_faq_topics']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_faq_topics']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_faq_topics']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_faq_topics']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['delta_limit'] = '';
  $handler->display->display_options['fields']['field_faq_topics']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_faq_topics']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<dt class="handler">[title]</dt>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<dd class="toggle" style="display:none;">[body]</dd>';
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'faq' => 'faq',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '50',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'faq_topics';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['operator'] = 'not';
  $handler->display->display_options['filters']['tid_1']['value'] = array(
    0 => '49',
    1 => '52',
    2 => '55',
  );
  $handler->display->display_options['filters']['tid_1']['group'] = 1;
  $handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'faq_topics';
  $handler->display->display_options['argument_input'] = array(
    'field_faq_topics_tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: FAQ Topics (field_faq_topics)',
    ),
  );

  /* Display: CF FAQ CP */
  $handler = $view->new_display('panel_pane', 'CF FAQ CP', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Conextual Filter Content Pane for FAQ';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: FAQ Topics */
  $handler->display->display_options['fields']['field_faq_topics']['id'] = 'field_faq_topics';
  $handler->display->display_options['fields']['field_faq_topics']['table'] = 'field_data_field_faq_topics';
  $handler->display->display_options['fields']['field_faq_topics']['field'] = 'field_faq_topics';
  $handler->display->display_options['fields']['field_faq_topics']['label'] = '';
  $handler->display->display_options['fields']['field_faq_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_faq_topics']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_faq_topics']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_faq_topics']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_faq_topics']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['delta_limit'] = '';
  $handler->display->display_options['fields']['field_faq_topics']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_faq_topics']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_faq_topics']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<dt class="handler">[title]</dt>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<dd class="toggle" style="display:none;">[body]</dd>';
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_faq_topics_tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: FAQ Topics (field_faq_topics)',
    ),
  );
  $export['faq_views'] = $view;

  $view = new view;
  $view->name = 'highlighted_images';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Highlighted Images';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Link Path */
  $handler->display->display_options['fields']['field_link_path']['id'] = 'field_link_path';
  $handler->display->display_options['fields']['field_link_path']['table'] = 'field_data_field_link_path';
  $handler->display->display_options['fields']['field_link_path']['field'] = 'field_link_path';
  $handler->display->display_options['fields']['field_link_path']['label'] = '';
  $handler->display->display_options['fields']['field_link_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_path']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_link_path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_link_path']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_link_path']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_link_path']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_link_path']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_link_path']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_link_path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_link_path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_link_path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_link_path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_link_path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_link_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_path']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_link_path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_link_path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_link_path']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_link_path']['field_api_classes'] = 0;
  /* Field: Content: Highlighted Image */
  $handler->display->display_options['fields']['field_highlighted_image']['id'] = 'field_highlighted_image';
  $handler->display->display_options['fields']['field_highlighted_image']['table'] = 'field_data_field_highlighted_image';
  $handler->display->display_options['fields']['field_highlighted_image']['field'] = 'field_highlighted_image';
  $handler->display->display_options['fields']['field_highlighted_image']['label'] = '';
  $handler->display->display_options['fields']['field_highlighted_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_highlighted_image']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_highlighted_image']['alter']['path'] = '[field_link_path]';
  $handler->display->display_options['fields']['field_highlighted_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_highlighted_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_highlighted_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_highlighted_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_highlighted_image']['alter']['alt'] = '[title] - [body]';
  $handler->display->display_options['fields']['field_highlighted_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_highlighted_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_highlighted_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_highlighted_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_highlighted_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_highlighted_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_highlighted_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlighted_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_highlighted_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_highlighted_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_highlighted_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_highlighted_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlighted_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_highlighted_image']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlighted_image']['field_api_classes'] = 0;
  /* Field: Content: Image Size */
  $handler->display->display_options['fields']['field_image_size']['id'] = 'field_image_size';
  $handler->display->display_options['fields']['field_image_size']['table'] = 'field_data_field_image_size';
  $handler->display->display_options['fields']['field_image_size']['field'] = 'field_image_size';
  $handler->display->display_options['fields']['field_image_size']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_size']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image_size']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image_size']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image_size']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image_size']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image_size']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image_size']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image_size']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image_size']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image_size']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image_size']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image_size']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image_size']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_image_size']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image_size']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image_size']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image_size']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_image_size']['field_api_classes'] = 0;
  /* Field: Content: Promoted to front page */
  $handler->display->display_options['fields']['promote']['id'] = 'promote';
  $handler->display->display_options['fields']['promote']['table'] = 'node';
  $handler->display->display_options['fields']['promote']['field'] = 'promote';
  $handler->display->display_options['fields']['promote']['exclude'] = TRUE;
  $handler->display->display_options['fields']['promote']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['promote']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['promote']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['promote']['alter']['external'] = 0;
  $handler->display->display_options['fields']['promote']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['promote']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['promote']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['promote']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['promote']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['promote']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['promote']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['promote']['alter']['html'] = 0;
  $handler->display->display_options['fields']['promote']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['promote']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['promote']['hide_empty'] = 0;
  $handler->display->display_options['fields']['promote']['empty_zero'] = 0;
  $handler->display->display_options['fields']['promote']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['promote']['not'] = 0;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Sort criterion: Content: Image Size (field_image_size) */
  $handler->display->display_options['sorts']['field_image_size_value']['id'] = 'field_image_size_value';
  $handler->display->display_options['sorts']['field_image_size_value']['table'] = 'field_data_field_image_size';
  $handler->display->display_options['sorts']['field_image_size_value']['field'] = 'field_image_size_value';
  /* Sort criterion: Content: Promoted to front page */
  $handler->display->display_options['sorts']['promote']['id'] = 'promote';
  $handler->display->display_options['sorts']['promote']['table'] = 'node';
  $handler->display->display_options['sorts']['promote']['field'] = 'promote';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'highighted_images' => 'highighted_images',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = '0';
  /* Filter criterion: Content: Image Size (field_image_size) */
  $handler->display->display_options['filters']['field_image_size_value']['id'] = 'field_image_size_value';
  $handler->display->display_options['filters']['field_image_size_value']['table'] = 'field_data_field_image_size';
  $handler->display->display_options['filters']['field_image_size_value']['field'] = 'field_image_size_value';
  $handler->display->display_options['filters']['field_image_size_value']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_image_size_value']['group'] = '0';

  /* Display: LG Content pane */
  $handler = $view->new_display('panel_pane', 'LG Content pane', 'panel_pane_1');

  /* Display: SM Content pane */
  $handler = $view->new_display('panel_pane', 'SM Content pane', 'panel_pane_2');
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'highighted_images' => 'highighted_images',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 1;
  /* Filter criterion: Content: Image Size (field_image_size) */
  $handler->display->display_options['filters']['field_image_size_value']['id'] = 'field_image_size_value';
  $handler->display->display_options['filters']['field_image_size_value']['table'] = 'field_data_field_image_size';
  $handler->display->display_options['filters']['field_image_size_value']['field'] = 'field_image_size_value';
  $handler->display->display_options['filters']['field_image_size_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_image_size_value']['group'] = 1;

  /* Display: SM CP - ALL */
  $handler = $view->new_display('panel_pane', 'SM CP - ALL', 'panel_pane_3');
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'highighted_images' => 'highighted_images',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 1;
  /* Filter criterion: Content: Image Size (field_image_size) */
  $handler->display->display_options['filters']['field_image_size_value']['id'] = 'field_image_size_value';
  $handler->display->display_options['filters']['field_image_size_value']['table'] = 'field_data_field_image_size';
  $handler->display->display_options['filters']['field_image_size_value']['field'] = 'field_image_size_value';
  $handler->display->display_options['filters']['field_image_size_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_image_size_value']['group'] = 1;
  /* Filter criterion: Content: Image Audience (field_image_audience) */
  $handler->display->display_options['filters']['field_image_audience_value']['id'] = 'field_image_audience_value';
  $handler->display->display_options['filters']['field_image_audience_value']['table'] = 'field_data_field_image_audience';
  $handler->display->display_options['filters']['field_image_audience_value']['field'] = 'field_image_audience_value';
  $handler->display->display_options['filters']['field_image_audience_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_image_audience_value']['group'] = 1;

  /* Display: SM CP - ADULT */
  $handler = $view->new_display('panel_pane', 'SM CP - ADULT', 'panel_pane_4');
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'highighted_images' => 'highighted_images',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 1;
  /* Filter criterion: Content: Image Size (field_image_size) */
  $handler->display->display_options['filters']['field_image_size_value']['id'] = 'field_image_size_value';
  $handler->display->display_options['filters']['field_image_size_value']['table'] = 'field_data_field_image_size';
  $handler->display->display_options['filters']['field_image_size_value']['field'] = 'field_image_size_value';
  $handler->display->display_options['filters']['field_image_size_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_image_size_value']['group'] = 1;
  /* Filter criterion: Content: Image Audience (field_image_audience) */
  $handler->display->display_options['filters']['field_image_audience_value']['id'] = 'field_image_audience_value';
  $handler->display->display_options['filters']['field_image_audience_value']['table'] = 'field_data_field_image_audience';
  $handler->display->display_options['filters']['field_image_audience_value']['field'] = 'field_image_audience_value';
  $handler->display->display_options['filters']['field_image_audience_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_image_audience_value']['group'] = 1;

  /* Display: SM CP - YOUTH */
  $handler = $view->new_display('panel_pane', 'SM CP - YOUTH', 'panel_pane_5');
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'highighted_images' => 'highighted_images',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 1;
  /* Filter criterion: Content: Image Size (field_image_size) */
  $handler->display->display_options['filters']['field_image_size_value']['id'] = 'field_image_size_value';
  $handler->display->display_options['filters']['field_image_size_value']['table'] = 'field_data_field_image_size';
  $handler->display->display_options['filters']['field_image_size_value']['field'] = 'field_image_size_value';
  $handler->display->display_options['filters']['field_image_size_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_image_size_value']['group'] = 1;
  /* Filter criterion: Content: Image Audience (field_image_audience) */
  $handler->display->display_options['filters']['field_image_audience_value']['id'] = 'field_image_audience_value';
  $handler->display->display_options['filters']['field_image_audience_value']['table'] = 'field_data_field_image_audience';
  $handler->display->display_options['filters']['field_image_audience_value']['field'] = 'field_image_audience_value';
  $handler->display->display_options['filters']['field_image_audience_value']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_image_audience_value']['group'] = 1;

  /* Display: Ads - xtra info */
  $handler = $view->new_display('page', 'Ads - xtra info', 'page_1');
  $handler->display->display_options['display_description'] = 'Displays ads + info re: promoted, size';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'body',
    'field_link_path' => 'field_link_path',
    'field_highlighted_image' => 'field_highlighted_image',
    'promote' => 'promote',
    'status' => 'status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_link_path' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_highlighted_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'promote' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['path']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['path']['alter']['external'] = 0;
  $handler->display->display_options['fields']['path']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['path']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['path']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['path']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['path']['absolute'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Highlighted Image */
  $handler->display->display_options['fields']['field_highlighted_image']['id'] = 'field_highlighted_image';
  $handler->display->display_options['fields']['field_highlighted_image']['table'] = 'field_data_field_highlighted_image';
  $handler->display->display_options['fields']['field_highlighted_image']['field'] = 'field_highlighted_image';
  $handler->display->display_options['fields']['field_highlighted_image']['label'] = '';
  $handler->display->display_options['fields']['field_highlighted_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_highlighted_image']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_highlighted_image']['alter']['path'] = 'http://library.austintexas.gov[path]';
  $handler->display->display_options['fields']['field_highlighted_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_highlighted_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_highlighted_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_highlighted_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_highlighted_image']['alter']['alt'] = '[title] - [body]';
  $handler->display->display_options['fields']['field_highlighted_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_highlighted_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_highlighted_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_highlighted_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_highlighted_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_highlighted_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_highlighted_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlighted_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_highlighted_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_highlighted_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_highlighted_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_highlighted_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlighted_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_highlighted_image']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlighted_image']['field_api_classes'] = 0;
  /* Field: Content: Promoted to front page */
  $handler->display->display_options['fields']['promote']['id'] = 'promote';
  $handler->display->display_options['fields']['promote']['table'] = 'node';
  $handler->display->display_options['fields']['promote']['field'] = 'promote';
  $handler->display->display_options['fields']['promote']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['promote']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['promote']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['promote']['alter']['external'] = 0;
  $handler->display->display_options['fields']['promote']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['promote']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['promote']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['promote']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['promote']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['promote']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['promote']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['promote']['alter']['html'] = 0;
  $handler->display->display_options['fields']['promote']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['promote']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['promote']['hide_empty'] = 0;
  $handler->display->display_options['fields']['promote']['empty_zero'] = 0;
  $handler->display->display_options['fields']['promote']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['promote']['type'] = 'promoted-notpromoted';
  $handler->display->display_options['fields']['promote']['not'] = 0;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['status']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['status']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Promoted to front page */
  $handler->display->display_options['sorts']['promote']['id'] = 'promote';
  $handler->display->display_options['sorts']['promote']['table'] = 'node';
  $handler->display->display_options['sorts']['promote']['field'] = 'promote';
  $handler->display->display_options['sorts']['promote']['order'] = 'DESC';
  /* Sort criterion: Content: Image Size (field_image_size) */
  $handler->display->display_options['sorts']['field_image_size_value']['id'] = 'field_image_size_value';
  $handler->display->display_options['sorts']['field_image_size_value']['table'] = 'field_data_field_image_size';
  $handler->display->display_options['sorts']['field_image_size_value']['field'] = 'field_image_size_value';
  /* Sort criterion: Content: Published */
  $handler->display->display_options['sorts']['status']['id'] = 'status';
  $handler->display->display_options['sorts']['status']['table'] = 'node';
  $handler->display->display_options['sorts']['status']['field'] = 'status';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'highighted_images' => 'highighted_images',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/content/ads-xtra-info';
  $export['highlighted_images'] = $view;

  $view = new view;
  $view->name = 'information_guides_all';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Information Guides All';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Information Guides';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = 'field_ig_subjects';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = 1;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'ig_subjects' => 'ig_subjects',
    'book_list_categories' => 0,
    'blog_topics' => 0,
    'event_titles' => 0,
    'database_subjects' => 0,
    'faq_topics' => 0,
    'intended_audience' => 0,
    'page_type' => 0,
    'press_release_types' => 0,
    'tags' => 0,
    'library_location' => 0,
    'library_hours' => 0,
  );
  /* Field: Content: Information Guide Subject */
  $handler->display->display_options['fields']['field_ig_subjects']['id'] = 'field_ig_subjects';
  $handler->display->display_options['fields']['field_ig_subjects']['table'] = 'field_data_field_ig_subjects';
  $handler->display->display_options['fields']['field_ig_subjects']['field'] = 'field_ig_subjects';
  $handler->display->display_options['fields']['field_ig_subjects']['label'] = '';
  $handler->display->display_options['fields']['field_ig_subjects']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ig_subjects']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ig_subjects']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ig_subjects']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ig_subjects']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ig_subjects']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ig_subjects']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ig_subjects']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ig_subjects']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ig_subjects']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ig_subjects']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ig_subjects']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ig_subjects']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ig_subjects']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ig_subjects']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ig_subjects']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ig_subjects']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ig_subjects']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ig_subjects']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ig_subjects']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name_1']['id'] = 'name_1';
  $handler->display->display_options['sorts']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name_1']['field'] = 'name';
  $handler->display->display_options['sorts']['name_1']['relationship'] = 'term_node_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Information Guide Subject (field_ig_subjects) */
  $handler->display->display_options['arguments']['field_ig_subjects_tid']['id'] = 'field_ig_subjects_tid';
  $handler->display->display_options['arguments']['field_ig_subjects_tid']['table'] = 'field_data_field_ig_subjects';
  $handler->display->display_options['arguments']['field_ig_subjects_tid']['field'] = 'field_ig_subjects_tid';
  $handler->display->display_options['arguments']['field_ig_subjects_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_ig_subjects_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_ig_subjects_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ig_subjects_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ig_subjects_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_ig_subjects_tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_ig_subjects_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_ig_subjects_tid']['validate_options']['vocabularies'] = array(
    'ig_subjects' => 'ig_subjects',
  );
  $handler->display->display_options['arguments']['field_ig_subjects_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_ig_subjects_tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['field_ig_subjects_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_ig_subjects_tid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'information_guide' => 'information_guide',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'information-guides-all';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'field_ig_subjects_tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Information Guide Subject (field_ig_subjects)',
    ),
  );
  $export['information_guides_all'] = $view;

  $view = new view;
  $view->name = 'location_based_blogs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All Blog Views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Master - Don\'t Use Blog';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['row_class'] = 'apl-blog-entry-wrapper';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'more (goes to apl blogs page)';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<p><a href="/apl-blogs">apl blogs home</a></p>';
  $handler->display->display_options['footer']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No Blogs Found';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Relationship: Content: Blog Topics (field_blog_topics) */
  $handler->display->display_options['relationships']['field_blog_topics_tid']['id'] = 'field_blog_topics_tid';
  $handler->display->display_options['relationships']['field_blog_topics_tid']['table'] = 'field_data_field_blog_topics';
  $handler->display->display_options['relationships']['field_blog_topics_tid']['field'] = 'field_blog_topics_tid';
  $handler->display->display_options['relationships']['field_blog_topics_tid']['required'] = 0;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '650',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'blog/[name]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['alt'] = '[name]\'s Blog';
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_blog_topics_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['glossary'] = 0;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['name']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['name']['add_table'] = 0;
  $handler->display->display_options['arguments']['name']['require_value'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'blog' => 'blog',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Blog Topics (field_blog_topics) */
  $handler->display->display_options['filters']['field_blog_topics_tid']['id'] = 'field_blog_topics_tid';
  $handler->display->display_options['filters']['field_blog_topics_tid']['table'] = 'field_data_field_blog_topics';
  $handler->display->display_options['filters']['field_blog_topics_tid']['field'] = 'field_blog_topics_tid';
  $handler->display->display_options['filters']['field_blog_topics_tid']['value'] = array(
    90 => '90',
  );
  $handler->display->display_options['filters']['field_blog_topics_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_blog_topics_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_blog_topics_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_blog_topics_tid']['vocabulary'] = 'blog_topics';

  /* Display: Master - Don't Use */
  $handler = $view->new_display('panel_pane', 'Master - Don\'t Use', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'context',
      'context' => 'entity:node.title',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy term: Name',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Database Blog Content pane */
  $handler = $view->new_display('panel_pane', 'Database Blog Content pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Database Blog';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '650',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'blog' => 'blog',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Blog Topics (field_blog_topics) */
  $handler->display->display_options['filters']['field_blog_topics_tid']['id'] = 'field_blog_topics_tid';
  $handler->display->display_options['filters']['field_blog_topics_tid']['table'] = 'field_data_field_blog_topics';
  $handler->display->display_options['filters']['field_blog_topics_tid']['field'] = 'field_blog_topics_tid';
  $handler->display->display_options['filters']['field_blog_topics_tid']['value'] = array(
    90 => '90',
  );
  $handler->display->display_options['filters']['field_blog_topics_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_blog_topics_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_blog_topics_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_blog_topics_tid']['vocabulary'] = 'blog_topics';
  /* Filter criterion: Content: Author uid */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'node';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => '16',
    1 => '38',
  );
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['pane_title'] = 'Database Blog';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'just_date';
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'by';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'blog/[uid]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['alt'] = '[name]\'s Blog';
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '650',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'blog' => 'blog',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'all-blogs';

  /* Display: Media Blogs */
  $handler = $view->new_display('panel_pane', 'Media Blogs', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'APL Recommends Blog';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'just_date';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['path'] = '/blog/[uid]';
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'by';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'blog/[uid]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'blog' => 'blog',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Blog Topics (field_blog_topics) */
  $handler->display->display_options['filters']['field_blog_topics_tid']['id'] = 'field_blog_topics_tid';
  $handler->display->display_options['filters']['field_blog_topics_tid']['table'] = 'field_data_field_blog_topics';
  $handler->display->display_options['filters']['field_blog_topics_tid']['field'] = 'field_blog_topics_tid';
  $handler->display->display_options['filters']['field_blog_topics_tid']['value'] = array(
    4 => '4',
    5 => '5',
    6 => '6',
    1 => '1',
  );
  $handler->display->display_options['filters']['field_blog_topics_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_blog_topics_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_blog_topics_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_blog_topics_tid']['vocabulary'] = 'blog_topics';

  /* Display: All Books Blog */
  $handler = $view->new_display('panel_pane', 'All Books Blog', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Books Blog';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'just_date';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['path'] = '/blog/[uid]';
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'by';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'blog/[uid]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'blog' => 'blog',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Blog Topics (field_blog_topics) */
  $handler->display->display_options['filters']['field_blog_topics_tid']['id'] = 'field_blog_topics_tid';
  $handler->display->display_options['filters']['field_blog_topics_tid']['table'] = 'field_data_field_blog_topics';
  $handler->display->display_options['filters']['field_blog_topics_tid']['field'] = 'field_blog_topics_tid';
  $handler->display->display_options['filters']['field_blog_topics_tid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['field_blog_topics_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_blog_topics_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_blog_topics_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_blog_topics_tid']['vocabulary'] = 'blog_topics';

  /* Display: All Movies Blog */
  $handler = $view->new_display('panel_pane', 'All Movies Blog', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Movies Blog';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'just_date';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['path'] = '/blog/[uid]';
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'by';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'blog/[uid]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'blog' => 'blog',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Blog Topics (field_blog_topics) */
  $handler->display->display_options['filters']['field_blog_topics_tid']['id'] = 'field_blog_topics_tid';
  $handler->display->display_options['filters']['field_blog_topics_tid']['table'] = 'field_data_field_blog_topics';
  $handler->display->display_options['filters']['field_blog_topics_tid']['field'] = 'field_blog_topics_tid';
  $handler->display->display_options['filters']['field_blog_topics_tid']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['filters']['field_blog_topics_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_blog_topics_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_blog_topics_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_blog_topics_tid']['vocabulary'] = 'blog_topics';

  /* Display: All Music Blog */
  $handler = $view->new_display('panel_pane', 'All Music Blog', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Music Blog';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'just_date';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['path'] = '/blog/[uid]';
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'by';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'blog/[uid]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'blog' => 'blog',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Blog Topics (field_blog_topics) */
  $handler->display->display_options['filters']['field_blog_topics_tid']['id'] = 'field_blog_topics_tid';
  $handler->display->display_options['filters']['field_blog_topics_tid']['table'] = 'field_data_field_blog_topics';
  $handler->display->display_options['filters']['field_blog_topics_tid']['field'] = 'field_blog_topics_tid';
  $handler->display->display_options['filters']['field_blog_topics_tid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['field_blog_topics_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_blog_topics_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_blog_topics_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_blog_topics_tid']['vocabulary'] = 'blog_topics';

  /* Display: All Youth Blog */
  $handler = $view->new_display('panel_pane', 'All Youth Blog', 'panel_pane_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Youth Services Blog';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'F j';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['path'] = '/blog/[uid]';
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'by';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'blog/[uid]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'READ MORE';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'blog' => 'blog',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Blog Topics (field_blog_topics) */
  $handler->display->display_options['filters']['field_blog_topics_tid']['id'] = 'field_blog_topics_tid';
  $handler->display->display_options['filters']['field_blog_topics_tid']['table'] = 'field_data_field_blog_topics';
  $handler->display->display_options['filters']['field_blog_topics_tid']['field'] = 'field_blog_topics_tid';
  $handler->display->display_options['filters']['field_blog_topics_tid']['value'] = array(
    174 => '174',
    8 => '8',
    9 => '9',
    7 => '7',
  );
  $handler->display->display_options['filters']['field_blog_topics_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_blog_topics_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_blog_topics_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_blog_topics_tid']['vocabulary'] = 'blog_topics';

  /* Display: Recent Blog Posts */
  $handler = $view->new_display('panel_pane', 'Recent Blog Posts', 'panel_pane_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent Blog Posts';
  $handler->display->display_options['display_description'] = 'A list of Recent Blog Posts';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['row_class'] = 'recent_blog_posts';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'uid' => 'uid',
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'blog' => 'blog',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '<=';
  $handler->display->display_options['filters']['created']['value']['value'] = 'now';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['created']['group'] = 1;

  /* Display: 3 Recent Blog Snippets */
  $handler = $view->new_display('panel_pane', '3 Recent Blog Snippets', 'panel_pane_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Blog Posts';
  $handler->display->display_options['display_description'] = '3 Recent Blog Post snippets';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['row_class'] = 'apl-blog-entry-wrapper';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'uid' => 'uid',
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '35';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['path'] = '/blog/[uid]';
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'by';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'blog/[uid]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: MORE */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'MORE';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'MORE';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'blog' => 'blog',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Sticky */
  $handler->display->display_options['filters']['sticky']['id'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['table'] = 'node';
  $handler->display->display_options['filters']['sticky']['field'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['value'] = '1';
  $handler->display->display_options['filters']['sticky']['group'] = 1;

  /* Display: Location Blogs */
  $handler = $view->new_display('panel_pane', 'Location Blogs', 'panel_pane_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Location Blog';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Blog Topics (field_blog_topics) */
  $handler->display->display_options['relationships']['field_blog_topics_tid']['id'] = 'field_blog_topics_tid';
  $handler->display->display_options['relationships']['field_blog_topics_tid']['table'] = 'field_data_field_blog_topics';
  $handler->display->display_options['relationships']['field_blog_topics_tid']['field'] = 'field_blog_topics_tid';
  $handler->display->display_options['relationships']['field_blog_topics_tid']['required'] = 0;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
  /* Relationship: Content: Blog Location (field_blog_location) */
  $handler->display->display_options['relationships']['field_blog_location_tid']['id'] = 'field_blog_location_tid';
  $handler->display->display_options['relationships']['field_blog_location_tid']['table'] = 'field_data_field_blog_location';
  $handler->display->display_options['relationships']['field_blog_location_tid']['field'] = 'field_blog_location_tid';
  $handler->display->display_options['relationships']['field_blog_location_tid']['required'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'just_date';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['path'] = '/blog/[uid]';
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'by';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'blog/[uid]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_blog_location_tid';
  $handler->display->display_options['arguments']['name']['title_enable'] = 1;
  $handler->display->display_options['arguments']['name']['title'] = '%1 Blog';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['vocabularies'] = array(
    'library_location' => 'library_location',
  );
  $handler->display->display_options['arguments']['name']['validate_options']['type'] = 'name';
  $handler->display->display_options['arguments']['name']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['name']['glossary'] = 0;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['name']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['name']['add_table'] = 0;
  $handler->display->display_options['arguments']['name']['require_value'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'blog' => 'blog',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Blog Location (field_blog_location) */
  $handler->display->display_options['filters']['field_blog_location_tid']['id'] = 'field_blog_location_tid';
  $handler->display->display_options['filters']['field_blog_location_tid']['table'] = 'field_data_field_blog_location';
  $handler->display->display_options['filters']['field_blog_location_tid']['field'] = 'field_blog_location_tid';
  $handler->display->display_options['filters']['field_blog_location_tid']['value'] = array(
    182 => '182',
    183 => '183',
    194 => '194',
    186 => '186',
    195 => '195',
    196 => '196',
    197 => '197',
    198 => '198',
    199 => '199',
    200 => '200',
    201 => '201',
    202 => '202',
    203 => '203',
    204 => '204',
    205 => '205',
    206 => '206',
    207 => '207',
    208 => '208',
    209 => '209',
    210 => '210',
    185 => '185',
    184 => '184',
    211 => '211',
  );
  $handler->display->display_options['filters']['field_blog_location_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_blog_location_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_blog_location_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_blog_location_tid']['vocabulary'] = 'library_location';
  $handler->display->display_options['filters']['field_blog_location_tid']['hierarchy'] = 1;
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy term: Name',
    ),
  );

  /* Display: APL Blog */
  $handler = $view->new_display('panel_pane', 'APL Blog', 'panel_pane_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'APL Blog';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'just_date';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['path'] = '/blog/[uid]';
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'by';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'blog/[uid]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'blog' => 'blog',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Author uid */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'node';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => '14',
    1 => '12',
    2 => '24',
  );
  $handler->display->display_options['filters']['uid']['group'] = 1;
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '<';
  $handler->display->display_options['filters']['created']['value']['value'] = '+3 minutes';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['created']['group'] = 1;

  /* Display: Youth Recommends Blog */
  $handler = $view->new_display('panel_pane', 'Youth Recommends Blog', 'panel_pane_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Youth Recommends Blog';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'just_date';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['path'] = '/blog/[uid]';
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'by';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'blog/[uid]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'blog' => 'blog',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Blog Topics (field_blog_topics) */
  $handler->display->display_options['filters']['field_blog_topics_tid']['id'] = 'field_blog_topics_tid';
  $handler->display->display_options['filters']['field_blog_topics_tid']['table'] = 'field_data_field_blog_topics';
  $handler->display->display_options['filters']['field_blog_topics_tid']['field'] = 'field_blog_topics_tid';
  $handler->display->display_options['filters']['field_blog_topics_tid']['value'] = array(
    174 => '174',
  );
  $handler->display->display_options['filters']['field_blog_topics_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_blog_topics_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_blog_topics_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_blog_topics_tid']['vocabulary'] = 'blog_topics';

  /* Display: Yomicon */
  $handler = $view->new_display('panel_pane', 'Yomicon', 'panel_pane_14');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Yomicon Blog';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '650',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 1;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'blog/[uid]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['alt'] = '[name]\'s Blog';
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'blog' => 'blog',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '278',
  );
  $handler->display->display_options['filters']['field_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_tags_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';

  /* Display: All Blogs */
  $handler = $view->new_display('panel_pane', 'All Blogs', 'panel_pane_13');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All Blog Posts';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'just_date';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['path'] = '/blog/[uid]';
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'by';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'blog/[uid]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'blog' => 'blog',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '<';
  $handler->display->display_options['filters']['created']['value']['value'] = '+3 minutes';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['created']['group'] = 1;

  /* Display: YS Blog */
  $handler = $view->new_display('panel_pane', 'YS Blog', 'panel_pane_15');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Youth Services Blog';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'F j';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['path'] = '/blog/[uid]';
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'by';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'blog/[uid]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'READ MORE';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'blog' => 'blog',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Blog Topics (field_blog_topics) */
  $handler->display->display_options['filters']['field_blog_topics_tid']['id'] = 'field_blog_topics_tid';
  $handler->display->display_options['filters']['field_blog_topics_tid']['table'] = 'field_data_field_blog_topics';
  $handler->display->display_options['filters']['field_blog_topics_tid']['field'] = 'field_blog_topics_tid';
  $handler->display->display_options['filters']['field_blog_topics_tid']['value'] = array(
    174 => '174',
    8 => '8',
    9 => '9',
    7 => '7',
  );
  $handler->display->display_options['filters']['field_blog_topics_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_blog_topics_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_blog_topics_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_blog_topics_tid']['vocabulary'] = 'blog_topics';
  /* Filter criterion: Content: Author uid */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'node';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => '27',
    1 => '40',
    2 => '26',
  );
  $handler->display->display_options['filters']['uid']['group'] = 1;

  /* Display: All Event Blog */
  $handler = $view->new_display('panel_pane', 'All Event Blog', 'panel_pane_16');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events Blog';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'just_date';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['path'] = '/blog/[uid]';
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'by';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'blog/[uid]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'blog' => 'blog',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Blog Topics (field_blog_topics) */
  $handler->display->display_options['filters']['field_blog_topics_tid']['id'] = 'field_blog_topics_tid';
  $handler->display->display_options['filters']['field_blog_topics_tid']['table'] = 'field_data_field_blog_topics';
  $handler->display->display_options['filters']['field_blog_topics_tid']['field'] = 'field_blog_topics_tid';
  $handler->display->display_options['filters']['field_blog_topics_tid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_blog_topics_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_blog_topics_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_blog_topics_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_blog_topics_tid']['vocabulary'] = 'blog_topics';
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '<';
  $handler->display->display_options['filters']['created']['value']['value'] = 'now';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['created']['group'] = 1;

  /* Display: Carver Job */
  $handler = $view->new_display('panel_pane', 'Carver Job', 'panel_pane_17');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Carver Job Center Blog';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '650',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'blog/[name]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['alt'] = '[name]\'s Blog';
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'blog' => 'blog',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '351',
  );
  $handler->display->display_options['filters']['field_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_tags_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  $export['location_based_blogs'] = $view;

  $view = new view;
  $view->name = 'new_location_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Location Views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Event Location';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Relationship: Taxonomy term: Library Schedule (field_library_schedule) */
  $handler->display->display_options['relationships']['field_library_schedule_tid']['id'] = 'field_library_schedule_tid';
  $handler->display->display_options['relationships']['field_library_schedule_tid']['table'] = 'field_data_field_library_schedule';
  $handler->display->display_options['relationships']['field_library_schedule_tid']['field'] = 'field_library_schedule_tid';
  $handler->display->display_options['relationships']['field_library_schedule_tid']['required'] = 0;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a alt="[name]" href="/locations/[name]">[name]</a>';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'locations/[name]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['alt'] = '[name] Individual Location Page';
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  /* Field: Taxonomy term: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_address']['alter']['path'] = 'http://maps.google.com/?q=[field_address-thoroughfare], [field_address-locality], TX, [field_address-postal_code]';
  $handler->display->display_options['fields']['field_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['alt'] = 'Google Map of [name]';
  $handler->display->display_options['fields']['field_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_address']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_address']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_address']['group_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['field_api_classes'] = 0;
  /* Field: Taxonomy term: Phone Number */
  $handler->display->display_options['fields']['field_phone_num']['id'] = 'field_phone_num';
  $handler->display->display_options['fields']['field_phone_num']['table'] = 'field_data_field_phone_num';
  $handler->display->display_options['fields']['field_phone_num']['field'] = 'field_phone_num';
  $handler->display->display_options['fields']['field_phone_num']['label'] = '';
  $handler->display->display_options['fields']['field_phone_num']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone_num']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone_num']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone_num']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone_num']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_phone_num']['field_api_classes'] = 0;
  /* Field: Taxonomy term: Library Image */
  $handler->display->display_options['fields']['field_lib_image']['id'] = 'field_lib_image';
  $handler->display->display_options['fields']['field_lib_image']['table'] = 'field_data_field_lib_image';
  $handler->display->display_options['fields']['field_lib_image']['field'] = 'field_lib_image';
  $handler->display->display_options['fields']['field_lib_image']['label'] = '';
  $handler->display->display_options['fields']['field_lib_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lib_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lib_image']['alter']['path'] = 'http://maps.google.com/?q=&daddr=[field_address-thoroughfare], [field_address-locality], TX, [field_address-postal_code]';
  $handler->display->display_options['fields']['field_lib_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lib_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lib_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lib_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lib_image']['alter']['alt'] = 'Google Map of [name]';
  $handler->display->display_options['fields']['field_lib_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lib_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lib_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lib_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lib_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lib_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lib_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lib_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lib_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lib_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lib_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_lib_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lib_image']['type'] = 'media';
  $handler->display->display_options['fields']['field_lib_image']['settings'] = array(
    'file_view_mode' => 'media_original',
  );
  $handler->display->display_options['fields']['field_lib_image']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_lib_image']['field_api_classes'] = 0;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_library_schedule_tid';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['description']['hide_alter_empty'] = 1;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['title_enable'] = 1;
  $handler->display->display_options['arguments']['name']['title'] = '%1';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['vocabularies'] = array(
    'library_location' => 'library_location',
  );
  $handler->display->display_options['arguments']['name']['validate_options']['type'] = 'name';
  $handler->display->display_options['arguments']['name']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['name']['glossary'] = 0;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['name']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['name']['add_table'] = 0;
  $handler->display->display_options['arguments']['name']['require_value'] = 0;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'library_location' => 'library_location',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'all-locations';

  /* Display: All Locations CP */
  $handler = $view->new_display('panel_pane', 'All Locations CP', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All Locations';
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy term: Name',
    ),
  );

  /* Display: Single Locations CP */
  $handler = $view->new_display('panel_pane', 'Single Locations CP', 'panel_pane_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a alt="[name]" href="/locations/[name]">[name]</a>';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  /* Field: Taxonomy term: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_address']['alter']['path'] = 'http://maps.google.com/?q=[field_address-thoroughfare], [field_address-locality], TX, [field_address-postal_code]';
  $handler->display->display_options['fields']['field_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['alt'] = 'Google map of [name]';
  $handler->display->display_options['fields']['field_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_address']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_address']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_address']['group_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['field_api_classes'] = 0;
  /* Field: Taxonomy term: Phone Number */
  $handler->display->display_options['fields']['field_phone_num']['id'] = 'field_phone_num';
  $handler->display->display_options['fields']['field_phone_num']['table'] = 'field_data_field_phone_num';
  $handler->display->display_options['fields']['field_phone_num']['field'] = 'field_phone_num';
  $handler->display->display_options['fields']['field_phone_num']['label'] = '';
  $handler->display->display_options['fields']['field_phone_num']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone_num']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone_num']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone_num']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone_num']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_phone_num']['field_api_classes'] = 0;
  /* Field: Taxonomy term: Library Image */
  $handler->display->display_options['fields']['field_lib_image']['id'] = 'field_lib_image';
  $handler->display->display_options['fields']['field_lib_image']['table'] = 'field_data_field_lib_image';
  $handler->display->display_options['fields']['field_lib_image']['field'] = 'field_lib_image';
  $handler->display->display_options['fields']['field_lib_image']['label'] = '';
  $handler->display->display_options['fields']['field_lib_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lib_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lib_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lib_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lib_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lib_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lib_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lib_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lib_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lib_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lib_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lib_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lib_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lib_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lib_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lib_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lib_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_lib_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lib_image']['type'] = 'media';
  $handler->display->display_options['fields']['field_lib_image']['settings'] = array(
    'file_view_mode' => 'media_original',
  );
  $handler->display->display_options['fields']['field_lib_image']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_lib_image']['field_api_classes'] = 0;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description_1']['id'] = 'description_1';
  $handler->display->display_options['fields']['description_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description_1']['field'] = 'description';
  $handler->display->display_options['fields']['description_1']['relationship'] = 'field_library_schedule_tid';
  $handler->display->display_options['fields']['description_1']['label'] = '';
  $handler->display->display_options['fields']['description_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['description_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['description_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['description_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['description_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['description_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['description_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['description_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['description_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['description_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['description_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['description_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['description_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['description_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['description_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['description_1']['hide_alter_empty'] = 1;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['description']['hide_alter_empty'] = 1;
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy term: Name',
    ),
  );

  /* Display: Event Location CP */
  $handler = $view->new_display('panel_pane', 'Event Location CP', 'panel_pane_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a alt="[name]" href="/locations/[name]">[name]</a>';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  /* Field: Taxonomy term: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_address']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_address']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_address']['group_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['field_api_classes'] = 0;
  /* Field: Taxonomy term: Phone Number */
  $handler->display->display_options['fields']['field_phone_num']['id'] = 'field_phone_num';
  $handler->display->display_options['fields']['field_phone_num']['table'] = 'field_data_field_phone_num';
  $handler->display->display_options['fields']['field_phone_num']['field'] = 'field_phone_num';
  $handler->display->display_options['fields']['field_phone_num']['label'] = '';
  $handler->display->display_options['fields']['field_phone_num']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone_num']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone_num']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone_num']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone_num']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone_num']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_phone_num']['field_api_classes'] = 0;
  /* Field: Taxonomy term: Library Map */
  $handler->display->display_options['fields']['field_lib_map']['id'] = 'field_lib_map';
  $handler->display->display_options['fields']['field_lib_map']['table'] = 'field_data_field_lib_map';
  $handler->display->display_options['fields']['field_lib_map']['field'] = 'field_lib_map';
  $handler->display->display_options['fields']['field_lib_map']['label'] = '';
  $handler->display->display_options['fields']['field_lib_map']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lib_map']['alter']['text'] = '<a href="/locations/[name]"><img src="/sites/default/files/null/[field_lib_map]" title="[name] Map"></a>';
  $handler->display->display_options['fields']['field_lib_map']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lib_map']['alter']['path'] = 'http://www.google.com/maps?f=d&hl=en&q=[field_address]';
  $handler->display->display_options['fields']['field_lib_map']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['field_lib_map']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lib_map']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lib_map']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lib_map']['alter']['alt'] = 'Directions for [name]';
  $handler->display->display_options['fields']['field_lib_map']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lib_map']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lib_map']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lib_map']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lib_map']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lib_map']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lib_map']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lib_map']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lib_map']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lib_map']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lib_map']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_lib_map']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lib_map']['type'] = 'media';
  $handler->display->display_options['fields']['field_lib_map']['settings'] = array(
    'file_view_mode' => 'media_original',
  );
  $handler->display->display_options['fields']['field_lib_map']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_lib_map']['field_api_classes'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[<a alt="holiday schedule for all locations" href="/basic-page/holiday-schedule">holiday schedule</a>]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['name']['title'] = '%1';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['vocabularies'] = array(
    'library_location' => 'library_location',
  );
  $handler->display->display_options['arguments']['name']['validate_options']['type'] = 'name';
  $handler->display->display_options['arguments']['name']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['name']['glossary'] = 0;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['name']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['name']['add_table'] = 0;
  $handler->display->display_options['arguments']['name']['require_value'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'context',
      'context' => 'entity:node.field_event_loc',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy term: Name',
    ),
  );
  $export['new_location_view'] = $view;

  $view = new view;
  $view->name = 'news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Press Release Archive';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'created' => 'created',
    'title' => 'title',
    'body' => 'body',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['path']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['path']['alter']['external'] = 0;
  $handler->display->display_options['fields']['path']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['path']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['path']['absolute'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<a href="[path]" alt="[title]">[body-summary]</a>';
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['path'] = 'http://library.austintexas.gov[path]';
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 1;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'For Cloning';

  /* Display: News CP */
  $handler = $view->new_display('panel_pane', 'News CP', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 1;
  /* Filter criterion: Content: Press Release Types (field_pr_types) */
  $handler->display->display_options['filters']['field_pr_types_tid']['id'] = 'field_pr_types_tid';
  $handler->display->display_options['filters']['field_pr_types_tid']['table'] = 'field_data_field_pr_types';
  $handler->display->display_options['filters']['field_pr_types_tid']['field'] = 'field_pr_types_tid';
  $handler->display->display_options['filters']['field_pr_types_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_pr_types_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pr_types_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_pr_types_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pr_types_tid']['vocabulary'] = 'press_release_types';

  /* Display: Services CP */
  $handler = $view->new_display('panel_pane', 'Services CP', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Services';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 1;
  /* Filter criterion: Content: Press Release Types (field_pr_types) */
  $handler->display->display_options['filters']['field_pr_types_tid']['id'] = 'field_pr_types_tid';
  $handler->display->display_options['filters']['field_pr_types_tid']['table'] = 'field_data_field_pr_types';
  $handler->display->display_options['filters']['field_pr_types_tid']['field'] = 'field_pr_types_tid';
  $handler->display->display_options['filters']['field_pr_types_tid']['value'] = array(
    101 => '101',
  );
  $handler->display->display_options['filters']['field_pr_types_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pr_types_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_pr_types_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pr_types_tid']['vocabulary'] = 'press_release_types';

  /* Display: Events CP */
  $handler = $view->new_display('panel_pane', 'Events CP', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Youth & Family Events';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 1;
  /* Filter criterion: Content: Press Release Types (field_pr_types) */
  $handler->display->display_options['filters']['field_pr_types_tid']['id'] = 'field_pr_types_tid';
  $handler->display->display_options['filters']['field_pr_types_tid']['table'] = 'field_data_field_pr_types';
  $handler->display->display_options['filters']['field_pr_types_tid']['field'] = 'field_pr_types_tid';
  $handler->display->display_options['filters']['field_pr_types_tid']['value'] = array(
    98 => '98',
    97 => '97',
  );
  $handler->display->display_options['filters']['field_pr_types_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pr_types_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_pr_types_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pr_types_tid']['vocabulary'] = 'press_release_types';

  /* Display: Exhibits CP */
  $handler = $view->new_display('panel_pane', 'Exhibits CP', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Exhibits';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 1;
  /* Filter criterion: Content: Press Release Types (field_pr_types) */
  $handler->display->display_options['filters']['field_pr_types_tid']['id'] = 'field_pr_types_tid';
  $handler->display->display_options['filters']['field_pr_types_tid']['table'] = 'field_data_field_pr_types';
  $handler->display->display_options['filters']['field_pr_types_tid']['field'] = 'field_pr_types_tid';
  $handler->display->display_options['filters']['field_pr_types_tid']['value'] = array(
    99 => '99',
  );
  $handler->display->display_options['filters']['field_pr_types_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pr_types_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_pr_types_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pr_types_tid']['vocabulary'] = 'press_release_types';

  /* Display: Urgent CP */
  $handler = $view->new_display('panel_pane', 'Urgent CP', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'just a space';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = '&nbsp;';
  $handler->display->display_options['empty']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 1;
  /* Filter criterion: Content: Press Release Types (field_pr_types) */
  $handler->display->display_options['filters']['field_pr_types_tid']['id'] = 'field_pr_types_tid';
  $handler->display->display_options['filters']['field_pr_types_tid']['table'] = 'field_data_field_pr_types';
  $handler->display->display_options['filters']['field_pr_types_tid']['field'] = 'field_pr_types_tid';
  $handler->display->display_options['filters']['field_pr_types_tid']['value'] = array(
    100 => '100',
  );
  $handler->display->display_options['filters']['field_pr_types_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pr_types_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_pr_types_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pr_types_tid']['vocabulary'] = 'press_release_types';

  /* Display: PR Archive */
  $handler = $view->new_display('page', 'PR Archive', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Press Release Archive';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['pager_position'] = 'both';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = 'created_1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'created' => 'created',
    'title' => 'title',
    'body' => 'body',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Group Field (Year) */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['ui_name'] = 'Group Field (Year)';
  $handler->display->display_options['fields']['created_1']['label'] = '';
  $handler->display->display_options['fields']['created_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'just_year_yyyy_';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['path']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['path']['alter']['external'] = 0;
  $handler->display->display_options['fields']['path']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['path']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['path']['absolute'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'just_date';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'press-release-archive';

  /* Display: All News CP */
  $handler = $view->new_display('panel_pane', 'All News CP', 'panel_pane_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'more news';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 1;
  /* Filter criterion: Content: Press Release Types (field_pr_types) */
  $handler->display->display_options['filters']['field_pr_types_tid']['id'] = 'field_pr_types_tid';
  $handler->display->display_options['filters']['field_pr_types_tid']['table'] = 'field_data_field_pr_types';
  $handler->display->display_options['filters']['field_pr_types_tid']['field'] = 'field_pr_types_tid';
  $handler->display->display_options['filters']['field_pr_types_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_pr_types_tid']['value'] = array(
    100 => '100',
  );
  $handler->display->display_options['filters']['field_pr_types_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pr_types_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_pr_types_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pr_types_tid']['vocabulary'] = 'press_release_types';
  $export['news'] = $view;

  return $export;
}
