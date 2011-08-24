<?php
/**
 * @file
 * coa_department_page_and_feature_views.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function coa_department_page_and_feature_views_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'department_features';
  $view->description = 'All of the department features views ( ex: Photo, Video, Fourm, Blog).';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Department Features';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Department Features';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Taxonomy: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Video */
  $handler = $view->new_display('panel_pane', 'Video', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Video';
  $handler->display->display_options['display_description'] = 'Video feature for department pages.';
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy: Term ID',
    ),
  );

  /* Display: Blog */
  $handler = $view->new_display('panel_pane', 'Blog', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Blog';
  $handler->display->display_options['display_description'] = 'Blog feature for department pages.';
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy: Term ID',
    ),
  );

  /* Display: Forum */
  $handler = $view->new_display('panel_pane', 'Forum', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Forum';
  $handler->display->display_options['display_description'] = 'Forum feature for department pages.';
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy: Term ID',
    ),
  );

  /* Display: Photo Gallery */
  $handler = $view->new_display('panel_pane', 'Photo Gallery', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Photo Gallery';
  $handler->display->display_options['display_description'] = 'Photo Gallery feature for department pages.';
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy: Term ID',
    ),
  );
  $translatables['department_features'] = array(
    t('Master'),
    t('Department Features'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('All'),
    t('Video'),
    t('Video feature for department pages.'),
    t('View panes'),
    t('Blog'),
    t('Blog feature for department pages.'),
    t('Forum'),
    t('Forum feature for department pages.'),
    t('Photo Gallery'),
    t('Photo Gallery feature for department pages.'),
  );
  $export['department_features'] = $view;

  $view = new view;
  $view->name = 'dept_home_page';
  $view->description = 'Main content section views for all the department pages.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Department Pages';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
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
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Message */
  $handler->display->display_options['fields']['field_dept_message']['id'] = 'field_dept_message';
  $handler->display->display_options['fields']['field_dept_message']['table'] = 'field_data_field_dept_message';
  $handler->display->display_options['fields']['field_dept_message']['field'] = 'field_dept_message';
  $handler->display->display_options['fields']['field_dept_message']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dept_message']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dept_message']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dept_message']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dept_message']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dept_message']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dept_message']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dept_message']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dept_message']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dept_message']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dept_message']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dept_message']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_dept_message']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dept_message']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dept_message']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dept_message']['field_api_classes'] = 0;
  /* Field: Content: Features */
  $handler->display->display_options['fields']['field_dept_feature_views']['id'] = 'field_dept_feature_views';
  $handler->display->display_options['fields']['field_dept_feature_views']['table'] = 'field_data_field_dept_feature_views';
  $handler->display->display_options['fields']['field_dept_feature_views']['field'] = 'field_dept_feature_views';
  $handler->display->display_options['fields']['field_dept_feature_views']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dept_feature_views']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dept_feature_views']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dept_feature_views']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dept_feature_views']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dept_feature_views']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dept_feature_views']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dept_feature_views']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dept_feature_views']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dept_feature_views']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dept_feature_views']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dept_feature_views']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_dept_feature_views']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dept_feature_views']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dept_feature_views']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dept_feature_views']['click_sort_column'] = 'view_id';
  $handler->display->display_options['fields']['field_dept_feature_views']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_dept_feature_views']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_dept_feature_views']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_dept_feature_views']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Taxonomy: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
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
    'department' => 'department',
  );

  /* Display: Department Sub Pages */
  $handler = $view->new_display('panel_pane', 'Department Sub Pages', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Department Home, Programs, Services, and Division Pages';
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy: Term ID',
    ),
  );
  $translatables['dept_home_page'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Message'),
    t('Features'),
    t('All'),
    t('Department Sub Pages'),
    t('Department Home, Programs, Services, and Division Pages'),
    t('View panes'),
  );
  $export['dept_home_page'] = $view;

  return $export;
}
