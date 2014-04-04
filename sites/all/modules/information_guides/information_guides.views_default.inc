<?php
/**
 * @file
 * information_guides.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function information_guides_views_default_views() {
  $export = array();

  $view = new view();
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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
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
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
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
  $handler->display->display_options['fields']['field_ig_subjects']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ig_subjects']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
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
  $handler->display->display_options['arguments']['field_ig_subjects_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ig_subjects_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ig_subjects_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_ig_subjects_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_ig_subjects_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_ig_subjects_tid']['validate_options']['vocabularies'] = array(
    'ig_subjects' => 'ig_subjects',
  );
  $handler->display->display_options['arguments']['field_ig_subjects_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
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
    'information_guide' => 'information_guide',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Guide Type (field_guide_type) */
  $handler->display->display_options['filters']['field_guide_type_value']['id'] = 'field_guide_type_value';
  $handler->display->display_options['filters']['field_guide_type_value']['table'] = 'field_data_field_guide_type';
  $handler->display->display_options['filters']['field_guide_type_value']['field'] = 'field_guide_type_value';
  $handler->display->display_options['filters']['field_guide_type_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_guide_type_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_guide_type_value']['group'] = 2;
  /* Filter criterion: Content: Guide Type (field_guide_type) */
  $handler->display->display_options['filters']['field_guide_type_value_1']['id'] = 'field_guide_type_value_1';
  $handler->display->display_options['filters']['field_guide_type_value_1']['table'] = 'field_data_field_guide_type';
  $handler->display->display_options['filters']['field_guide_type_value_1']['field'] = 'field_guide_type_value';
  $handler->display->display_options['filters']['field_guide_type_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_guide_type_value_1']['group'] = 2;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'information-guides-all';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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

  $view = new view();
  $view->name = 'new_information_guides';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'New Information Guides';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Tabs */
  $handler->display->display_options['fields']['field_tabs']['id'] = 'field_tabs';
  $handler->display->display_options['fields']['field_tabs']['table'] = 'field_data_field_tabs';
  $handler->display->display_options['fields']['field_tabs']['field'] = 'field_tabs';
  $handler->display->display_options['fields']['field_tabs']['label'] = '';
  $handler->display->display_options['fields']['field_tabs']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tabs']['alter']['text'] = '<a href="[field_tabs-second]">[field_tabs-first]</a>';
  $handler->display->display_options['fields']['field_tabs']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tabs']['click_sort_column'] = 'first';
  $handler->display->display_options['fields']['field_tabs']['settings'] = array(
    'style' => 'link',
    'first' => array(
      'hidden' => 0,
      'format' => '_none',
      'prefix' => '',
      'suffix' => ':&nbsp;',
    ),
    'second' => array(
      'hidden' => 0,
      'format' => '_none',
      'prefix' => '',
      'suffix' => '',
    ),
  );
  $handler->display->display_options['fields']['field_tabs']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tabs']['multi_type'] = 'ul';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
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
    'new_information_guides' => 'new_information_guides',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'panel',
      'context' => 'entity:node.original',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['new_information_guides'] = $view;

  $view = new view();
  $view->name = 'new_information_guides_taxonomy';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'New Information Guides - Taxonomy';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'ig_subjects' => 'ig_subjects',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Information Guide Subjects with Nodes */
  $handler = $view->new_display('panel_pane', 'Information Guide Subjects with Nodes', 'panel_pane_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Content using New Information Guide Subject */
  $handler->display->display_options['relationships']['reverse_field_new_information_guide_subj_node']['id'] = 'reverse_field_new_information_guide_subj_node';
  $handler->display->display_options['relationships']['reverse_field_new_information_guide_subj_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_new_information_guide_subj_node']['field'] = 'reverse_field_new_information_guide_subj_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_new_information_guide_subj_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'ig_subjects' => 'ig_subjects',
  );
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy term: Term ID',
    ),
  );
  $export['new_information_guides_taxonomy'] = $view;

  return $export;
}
