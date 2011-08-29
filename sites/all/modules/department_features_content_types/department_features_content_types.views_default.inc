<?php
/**
 * @file
 * department_features_content_types.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function department_features_content_types_views_default_views() {
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
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<iframe width="420" height="345" src="http://www.youtube.com/embed/!1" frameborder="0" allowfullscreen></iframe>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2 class="pane-title">Video</h2>';
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
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Features (field_dept_feature_views:arguments) */
  $handler->display->display_options['arguments']['field_dept_feature_views_arguments']['id'] = 'field_dept_feature_views_arguments';
  $handler->display->display_options['arguments']['field_dept_feature_views_arguments']['table'] = 'field_data_field_dept_feature_views';
  $handler->display->display_options['arguments']['field_dept_feature_views_arguments']['field'] = 'field_dept_feature_views_arguments';
  $handler->display->display_options['arguments']['field_dept_feature_views_arguments']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_dept_feature_views_arguments']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: YouTube */
  $handler = $view->new_display('panel_pane', 'YouTube', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'YouTube';
  $handler->display->display_options['display_description'] = 'Video feature for department pages.';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<iframe width="400" height="320" src="http://www.youtube.com/embed/!1" frameborder="0" allowfullscreen></iframe>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Features (field_dept_feature_views:arguments) */
  $handler->display->display_options['arguments']['field_dept_feature_views_arguments']['id'] = 'field_dept_feature_views_arguments';
  $handler->display->display_options['arguments']['field_dept_feature_views_arguments']['table'] = 'field_data_field_dept_feature_views';
  $handler->display->display_options['arguments']['field_dept_feature_views_arguments']['field'] = 'field_dept_feature_views_arguments';
  $handler->display->display_options['arguments']['field_dept_feature_views_arguments']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_dept_feature_views_arguments']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_dept_feature_views_arguments']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_dept_feature_views_arguments']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_dept_feature_views_arguments']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_dept_feature_views_arguments']['glossary'] = 0;
  $handler->display->display_options['arguments']['field_dept_feature_views_arguments']['limit'] = '0';
  $handler->display->display_options['arguments']['field_dept_feature_views_arguments']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['field_dept_feature_views_arguments']['break_phrase'] = 0;
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
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Video';
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
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'blog' => 'blog',
  );
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
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = 'taxonomy_forums';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Video';
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
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Forums */
  $handler->display->display_options['fields']['taxonomy_forums']['id'] = 'taxonomy_forums';
  $handler->display->display_options['fields']['taxonomy_forums']['table'] = 'field_data_taxonomy_forums';
  $handler->display->display_options['fields']['taxonomy_forums']['field'] = 'taxonomy_forums';
  $handler->display->display_options['fields']['taxonomy_forums']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_forums']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_forums']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['taxonomy_forums']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['taxonomy_forums']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['taxonomy_forums']['alter']['external'] = 0;
  $handler->display->display_options['fields']['taxonomy_forums']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['taxonomy_forums']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['taxonomy_forums']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['taxonomy_forums']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['taxonomy_forums']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['taxonomy_forums']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['taxonomy_forums']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['taxonomy_forums']['alter']['html'] = 0;
  $handler->display->display_options['fields']['taxonomy_forums']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_forums']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['taxonomy_forums']['hide_empty'] = 0;
  $handler->display->display_options['fields']['taxonomy_forums']['empty_zero'] = 0;
  $handler->display->display_options['fields']['taxonomy_forums']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['taxonomy_forums']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'forum' => 'forum',
  );
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

  /* Display: Fliker */
  $handler = $view->new_display('panel_pane', 'Fliker', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Fliker';
  $handler->display->display_options['display_description'] = 'Photo Gallery feature for department pages.';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<p><object width="400" height="320"> <param name="flashvars" value="!1"></param> <param name="movie" value="http://www.flickr.com/apps/slideshow/show.swf?v=104087"></param> <param name="allowFullScreen" value="true"></param><embed type="application/x-shockwave-flash" src="http://www.flickr.com/apps/slideshow/show.swf?v=104087" allowFullScreen="true" flashvars="!1" width="400" height="320"></embed></object></p>
';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2 class="pane-title">Photo Gallery</h2>';
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
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
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

  /* Display: Swagit */
  $handler = $view->new_display('panel_pane', 'Swagit', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Swagit';
  $handler->display->display_options['display_description'] = 'Video feature for department pages.';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<p><object width="400" height="320"><param name="movie" value="http://austintx.swagit.com/e/!1"></param><param name="allowFullScreen" value="true"></param><param name="allowscriptaccess" value="always"></param><embed src="http://austintx.swagit.com/e/!1" type="application/x-shockwave-flash" allowscriptaccess="always" allowfullscreen="true" width="400" height="320"></embed></object></p>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 1;
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
    t('<iframe width="420" height="345" src="http://www.youtube.com/embed/!1" frameborder="0" allowfullscreen></iframe>'),
    t('<h2 class="pane-title">Video</h2>'),
    t('All'),
    t('YouTube'),
    t('Video feature for department pages.'),
    t('<iframe width="400" height="320" src="http://www.youtube.com/embed/!1" frameborder="0" allowfullscreen></iframe>'),
    t('View panes'),
    t('Blog'),
    t('Blog feature for department pages.'),
    t('Video'),
    t('Forum'),
    t('Forum feature for department pages.'),
    t('Fliker'),
    t('Photo Gallery feature for department pages.'),
    t('<p><object width="400" height="320"> <param name="flashvars" value="!1"></param> <param name="movie" value="http://www.flickr.com/apps/slideshow/show.swf?v=104087"></param> <param name="allowFullScreen" value="true"></param><embed type="application/x-shockwave-flash" src="http://www.flickr.com/apps/slideshow/show.swf?v=104087" allowFullScreen="true" flashvars="!1" width="400" height="320"></embed></object></p>
'),
    t('<h2 class="pane-title">Photo Gallery</h2>'),
    t('Swagit'),
    t('<p><object width="400" height="320"><param name="movie" value="http://austintx.swagit.com/e/!1"></param><param name="allowFullScreen" value="true"></param><param name="allowscriptaccess" value="always"></param><embed src="http://austintx.swagit.com/e/!1" type="application/x-shockwave-flash" allowscriptaccess="always" allowfullscreen="true" width="400" height="320"></embed></object></p>'),
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
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
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
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Message */
  $handler->display->display_options['fields']['field_dept_message']['id'] = 'field_dept_message';
  $handler->display->display_options['fields']['field_dept_message']['table'] = 'field_data_field_dept_message';
  $handler->display->display_options['fields']['field_dept_message']['field'] = 'field_dept_message';
  $handler->display->display_options['fields']['field_dept_message']['label'] = '';
  $handler->display->display_options['fields']['field_dept_message']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dept_message']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dept_message']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dept_message']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dept_message']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dept_message']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_dept_message']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dept_message']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dept_message']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dept_message']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dept_message']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dept_message']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dept_message']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dept_message']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dept_message']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dept_message']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dept_message']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_dept_message']['field_api_classes'] = 0;
  /* Field: Content: Features */
  $handler->display->display_options['fields']['field_dept_feature_views']['id'] = 'field_dept_feature_views';
  $handler->display->display_options['fields']['field_dept_feature_views']['table'] = 'field_data_field_dept_feature_views';
  $handler->display->display_options['fields']['field_dept_feature_views']['field'] = 'field_dept_feature_views';
  $handler->display->display_options['fields']['field_dept_feature_views']['label'] = '';
  $handler->display->display_options['fields']['field_dept_feature_views']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dept_feature_views']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dept_feature_views']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dept_feature_views']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dept_feature_views']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dept_feature_views']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_dept_feature_views']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dept_feature_views']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dept_feature_views']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dept_feature_views']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dept_feature_views']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dept_feature_views']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dept_feature_views']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dept_feature_views']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dept_feature_views']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dept_feature_views']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dept_feature_views']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_dept_feature_views']['click_sort_column'] = 'view_id';
  $handler->display->display_options['fields']['field_dept_feature_views']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_dept_feature_views']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_dept_feature_views']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_dept_feature_views']['separator'] = '';
  $handler->display->display_options['fields']['field_dept_feature_views']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
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
    t('All'),
    t('Department Sub Pages'),
    t('Department Home, Programs, Services, and Division Pages'),
    t('View panes'),
  );
  $export['dept_home_page'] = $view;

  return $export;
}
