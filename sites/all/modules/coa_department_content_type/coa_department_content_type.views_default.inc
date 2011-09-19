<?php
/**
 * @file
 * coa_department_content_type.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function coa_department_content_type_views_default_views() {
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<h2>Our Blog</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
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
    t('<h2>Our Blog</h2>'),
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
  $view->name = 'department_news_articles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Department News Articles';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = 0;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'forums' => 0,
    'business_portal' => 0,
    'calander_departments' => 0,
    'default' => 0,
    'department' => 0,
    'departmental' => 0,
    'development_taxonomy' => 0,
    'development' => 0,
    'environment_taxonomy' => 0,
    'government_taxonomy' => 0,
    'home_page_category' => 0,
    'portal' => 0,
    'tags' => 0,
    'spobrastoge' => 0,
  );
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
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
    'home_page_news' => 'home_page_news',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'department-news-articles';

  /* Display: Department News Article */
  $handler = $view->new_display('panel_pane', 'Department News Article', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID',
    ),
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Department News Article */
  $handler = $view->new_display('block', 'Department News Article', 'block_1');
  $translatables['department_news_articles'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term'),
    t('Nid'),
    t('All'),
    t('Page'),
    t('Department News Article'),
    t('View panes'),
  );
  $export['department_news_articles'] = $view;

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

  $view = new view;
  $view->name = 'dept_page_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Department Page Blocks';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_text'] = 'More Events';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['hide'] = 1;
  $handler->display->display_options['style_options']['path'] = 'field_news_link';
  $handler->display->display_options['style_options']['choose'] = '- I Need To -';
  $handler->display->display_options['style_options']['default_value'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid_1']['id'] = 'term_node_tid_1';
  $handler->display->display_options['relationships']['term_node_tid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid_1']['field'] = 'term_node_tid';
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
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_email']['field_api_classes'] = 0;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_phone']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_phone']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_phone']['field_api_classes'] = 0;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_body']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_news_link']['id'] = 'field_news_link';
  $handler->display->display_options['fields']['field_news_link']['table'] = 'field_data_field_news_link';
  $handler->display->display_options['fields']['field_news_link']['field'] = 'field_news_link';
  $handler->display->display_options['fields']['field_news_link']['label'] = '';
  $handler->display->display_options['fields']['field_news_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_news_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_news_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_news_link']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_news_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_news_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_news_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_news_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_news_link']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'Learn More';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['set_breadcrumb'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['use_taxonomy_term_path'] = 0;
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
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
    'article' => 'article',
    'home_page_news' => 'home_page_news',
    'page' => 'page',
  );

  /* Display: Contact Info */
  $handler = $view->new_display('panel_pane', 'Contact Info', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contact Info';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'dep-right-col';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_email' => 'field_email',
    'field_phone' => 'field_phone',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'department/[title]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 1;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['text'] = '<a href="mailto:[field_email]">[field_email]</a>';
  $handler->display->display_options['fields']['field_email']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_email']['field_api_classes'] = 0;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = 'Phone: [field_phone]';
  $handler->display->display_options['fields']['field_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_phone']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_phone']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_phone']['field_api_classes'] = 0;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_body']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_news_link']['id'] = 'field_news_link';
  $handler->display->display_options['fields']['field_news_link']['table'] = 'field_data_field_news_link';
  $handler->display->display_options['fields']['field_news_link']['field'] = 'field_news_link';
  $handler->display->display_options['fields']['field_news_link']['label'] = '';
  $handler->display->display_options['fields']['field_news_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_news_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_news_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_news_link']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_news_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_news_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_news_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_news_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_news_link']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'contact_information' => 'contact_information',
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
    'title' => array(
      'type' => 'context',
      'context' => 'entity:node.title',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Title',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '0';

  /* Display: Large Promos */
  $handler = $view->new_display('panel_pane', 'Large Promos', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'promo-tile style-1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_promo_link']['id'] = 'field_promo_link';
  $handler->display->display_options['fields']['field_promo_link']['table'] = 'field_data_field_promo_link';
  $handler->display->display_options['fields']['field_promo_link']['field'] = 'field_promo_link';
  $handler->display->display_options['fields']['field_promo_link']['label'] = '';
  $handler->display->display_options['fields']['field_promo_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_promo_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_promo_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_promo_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_promo_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_promo_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_promo_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_promo_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_promo_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_promo_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_promo_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_promo_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_promo_link']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_promo_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_promo_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_promo_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_promo_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_promo_link']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_promo_link]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['title']['alter']['external'] = 1;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Promotion Image */
  $handler->display->display_options['fields']['field_promo_image']['id'] = 'field_promo_image';
  $handler->display->display_options['fields']['field_promo_image']['table'] = 'field_data_field_promo_image';
  $handler->display->display_options['fields']['field_promo_image']['field'] = 'field_promo_image';
  $handler->display->display_options['fields']['field_promo_image']['label'] = '';
  $handler->display->display_options['fields']['field_promo_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_promo_image']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_promo_image']['alter']['path'] = '[field_promo_link]';
  $handler->display->display_options['fields']['field_promo_image']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['field_promo_image']['alter']['external'] = 1;
  $handler->display->display_options['fields']['field_promo_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_promo_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_promo_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_promo_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_promo_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_promo_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_promo_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_promo_image']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_promo_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_promo_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_promo_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_promo_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_promo_image']['type'] = 'media';
  $handler->display->display_options['fields']['field_promo_image']['settings'] = array(
    'file_view_mode' => 'media_original',
  );
  $handler->display->display_options['fields']['field_promo_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'Learn More';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['path'] = '[field_promo_link]';
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 0;
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
    'large_promo' => 'large_promo',
  );
  $handler->display->display_options['argument_input'] = array(
    'term_node_tid_depth' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth)',
    ),
    'term_node_tid_depth_modifier' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID depth modifier',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '0';

  /* Display: Promo without Icon */
  $handler = $view->new_display('panel_pane', 'Promo without Icon', 'panel_pane_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'promo-tile style-2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_news_link']['id'] = 'field_news_link';
  $handler->display->display_options['fields']['field_news_link']['table'] = 'field_data_field_news_link';
  $handler->display->display_options['fields']['field_news_link']['field'] = 'field_news_link';
  $handler->display->display_options['fields']['field_news_link']['label'] = '';
  $handler->display->display_options['fields']['field_news_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_news_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_news_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_news_link']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_news_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_news_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_news_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_news_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_news_link']['type'] = 'url';
  $handler->display->display_options['fields']['field_news_link']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_news_link] ';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['title']['alter']['external'] = 1;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_body']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'Learn More';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['path'] = '[field_news_link]';
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 0;
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
    'promotions' => 'promotions',
  );
  $handler->display->display_options['argument_input'] = array(
    'term_node_tid_depth' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth)',
    ),
    'term_node_tid_depth_modifier' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID depth modifier',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '0';

  /* Display: Banner Image */
  $handler = $view->new_display('panel_pane', 'Banner Image', 'panel_pane_4');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_cat_dept']['id'] = 'field_cat_dept';
  $handler->display->display_options['fields']['field_cat_dept']['table'] = 'field_data_field_cat_dept';
  $handler->display->display_options['fields']['field_cat_dept']['field'] = 'field_cat_dept';
  $handler->display->display_options['fields']['field_cat_dept']['label'] = '';
  $handler->display->display_options['fields']['field_cat_dept']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cat_dept']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cat_dept']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cat_dept']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cat_dept']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cat_dept']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cat_dept']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cat_dept']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cat_dept']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cat_dept']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cat_dept']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cat_dept']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cat_dept']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_cat_dept']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_cat_dept']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cat_dept']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cat_dept']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cat_dept']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_cat_dept']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_cat_dept']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_cat_dept']['field_api_classes'] = 0;
  /* Field: Content: Banner Image */
  $handler->display->display_options['fields']['field_dept_banner']['id'] = 'field_dept_banner';
  $handler->display->display_options['fields']['field_dept_banner']['table'] = 'field_data_field_dept_banner';
  $handler->display->display_options['fields']['field_dept_banner']['field'] = 'field_dept_banner';
  $handler->display->display_options['fields']['field_dept_banner']['label'] = '';
  $handler->display->display_options['fields']['field_dept_banner']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dept_banner']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dept_banner']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dept_banner']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dept_banner']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dept_banner']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dept_banner']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dept_banner']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dept_banner']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dept_banner']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dept_banner']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dept_banner']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_dept_banner']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dept_banner']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dept_banner']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dept_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_dept_banner']['type'] = 'media';
  $handler->display->display_options['fields']['field_dept_banner']['settings'] = array(
    'file_view_mode' => 'media_original',
  );
  $handler->display->display_options['fields']['field_dept_banner']['field_api_classes'] = 0;
  /* Field: Content: Tagline */
  $handler->display->display_options['fields']['field_dept_tagline']['id'] = 'field_dept_tagline';
  $handler->display->display_options['fields']['field_dept_tagline']['table'] = 'field_data_field_dept_tagline';
  $handler->display->display_options['fields']['field_dept_tagline']['field'] = 'field_dept_tagline';
  $handler->display->display_options['fields']['field_dept_tagline']['label'] = '';
  $handler->display->display_options['fields']['field_dept_tagline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dept_tagline']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dept_tagline']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dept_tagline']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dept_tagline']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dept_tagline']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dept_tagline']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dept_tagline']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dept_tagline']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dept_tagline']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dept_tagline']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dept_tagline']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dept_tagline']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_dept_tagline']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dept_tagline']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dept_tagline']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dept_tagline']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '-3';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['set_breadcrumb'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['use_taxonomy_term_path'] = 0;
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
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
    'department_banner_image' => 'department_banner_image',
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
    'parent' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy: Parent term',
    ),
    'term_node_tid_depth' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy: Term ID (with depth)',
    ),
    'term_node_tid_depth_modifier' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Taxonomy: Term ID depth modifier',
    ),
  );

  /* Display: Vertical Promos */
  $handler = $view->new_display('panel_pane', 'Vertical Promos', 'panel_pane_5');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'large-promo';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_promo_link']['id'] = 'field_promo_link';
  $handler->display->display_options['fields']['field_promo_link']['table'] = 'field_data_field_promo_link';
  $handler->display->display_options['fields']['field_promo_link']['field'] = 'field_promo_link';
  $handler->display->display_options['fields']['field_promo_link']['label'] = '';
  $handler->display->display_options['fields']['field_promo_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_promo_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_promo_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_promo_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_promo_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_promo_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_promo_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_promo_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_promo_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_promo_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_promo_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_promo_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_promo_link']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_promo_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_promo_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_promo_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_promo_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_promo_link']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Promotion Image */
  $handler->display->display_options['fields']['field_promo_image_vertical']['id'] = 'field_promo_image_vertical';
  $handler->display->display_options['fields']['field_promo_image_vertical']['table'] = 'field_data_field_promo_image_vertical';
  $handler->display->display_options['fields']['field_promo_image_vertical']['field'] = 'field_promo_image_vertical';
  $handler->display->display_options['fields']['field_promo_image_vertical']['label'] = '';
  $handler->display->display_options['fields']['field_promo_image_vertical']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_promo_image_vertical']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_promo_image_vertical']['alter']['path'] = '[field_promo_link] ';
  $handler->display->display_options['fields']['field_promo_image_vertical']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['field_promo_image_vertical']['alter']['external'] = 1;
  $handler->display->display_options['fields']['field_promo_image_vertical']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_promo_image_vertical']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_promo_image_vertical']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_promo_image_vertical']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_promo_image_vertical']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_promo_image_vertical']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_promo_image_vertical']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_promo_image_vertical']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_promo_image_vertical']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_promo_image_vertical']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_promo_image_vertical']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_promo_image_vertical']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_promo_image_vertical']['type'] = 'media';
  $handler->display->display_options['fields']['field_promo_image_vertical']['settings'] = array(
    'file_view_mode' => 'media_original',
  );
  $handler->display->display_options['fields']['field_promo_image_vertical']['field_api_classes'] = 0;
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
    'vertical_promo_tiles' => 'vertical_promo_tiles',
  );
  $handler->display->display_options['argument_input'] = array(
    'term_node_tid_depth' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth)',
    ),
    'term_node_tid_depth_modifier' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID depth modifier',
    ),
  );

  /* Display: Departments */
  $handler = $view->new_display('panel_pane', 'Departments', 'panel_pane_8');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'select-arrow';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['hide'] = 1;
  $handler->display->display_options['style_options']['path'] = 'field_news_link';
  $handler->display->display_options['style_options']['choose'] = '- Departments -';
  $handler->display->display_options['style_options']['default_value'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_news_link']['id'] = 'field_news_link';
  $handler->display->display_options['fields']['field_news_link']['table'] = 'field_data_field_news_link';
  $handler->display->display_options['fields']['field_news_link']['field'] = 'field_news_link';
  $handler->display->display_options['fields']['field_news_link']['label'] = '';
  $handler->display->display_options['fields']['field_news_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_news_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_news_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_news_link']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_news_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_news_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_news_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_news_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_news_link']['type'] = 'url';
  $handler->display->display_options['fields']['field_news_link']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_news_link]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['title']['alter']['external'] = 1;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'departments' => 'departments',
  );

  /* Display: News */
  $handler = $view->new_display('panel_pane', 'News', 'panel_pane_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent News';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'recent-news';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
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
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '77';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_news_link']['id'] = 'field_news_link';
  $handler->display->display_options['fields']['field_news_link']['table'] = 'field_data_field_news_link';
  $handler->display->display_options['fields']['field_news_link']['field'] = 'field_news_link';
  $handler->display->display_options['fields']['field_news_link']['label'] = '';
  $handler->display->display_options['fields']['field_news_link']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_news_link']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['field_news_link']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_news_link']['alter']['path'] = '[field_news_link] ';
  $handler->display->display_options['fields']['field_news_link']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['field_news_link']['alter']['external'] = 1;
  $handler->display->display_options['fields']['field_news_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_news_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_news_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_news_link']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_news_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_news_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_news_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_news_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_news_link']['type'] = 'url';
  $handler->display->display_options['fields']['field_news_link']['field_api_classes'] = 0;
  /* Field: Content: Short Description */
  $handler->display->display_options['fields']['field_news_desc']['id'] = 'field_news_desc';
  $handler->display->display_options['fields']['field_news_desc']['table'] = 'field_data_field_news_desc';
  $handler->display->display_options['fields']['field_news_desc']['field'] = 'field_news_desc';
  $handler->display->display_options['fields']['field_news_desc']['label'] = '';
  $handler->display->display_options['fields']['field_news_desc']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_news_desc']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_news_desc']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_news_desc']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_news_desc']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_news_desc']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_news_desc']['alter']['max_length'] = '185';
  $handler->display->display_options['fields']['field_news_desc']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_news_desc']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_news_desc']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_news_desc']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_news_desc']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_news_desc']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_news_desc']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_news_desc']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_news_desc']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_news_desc']['field_api_classes'] = 0;
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
    'home_page_news' => 'home_page_news',
  );
  $handler->display->display_options['argument_input'] = array(
    'term_node_tid_depth' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth)',
    ),
    'term_node_tid_depth_modifier' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID depth modifier',
    ),
  );

  /* Display: Factoid */
  $handler = $view->new_display('panel_pane', 'Factoid', 'panel_pane_12');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'factoid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Icon */
  $handler->display->display_options['fields']['field_icon']['id'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['table'] = 'field_data_field_icon';
  $handler->display->display_options['fields']['field_icon']['field'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['label'] = '';
  $handler->display->display_options['fields']['field_icon']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_icon']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_icon']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_icon']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_icon']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_icon']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_icon']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_icon']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_icon']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_icon']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_icon']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_icon']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_icon']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_icon']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_icon']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_icon']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Factoid';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Fact */
  $handler->display->display_options['fields']['field_factoid']['id'] = 'field_factoid';
  $handler->display->display_options['fields']['field_factoid']['table'] = 'field_data_field_factoid';
  $handler->display->display_options['fields']['field_factoid']['field'] = 'field_factoid';
  $handler->display->display_options['fields']['field_factoid']['label'] = '';
  $handler->display->display_options['fields']['field_factoid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_factoid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_factoid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_factoid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_factoid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_factoid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_factoid']['alter']['max_length'] = '138';
  $handler->display->display_options['fields']['field_factoid']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['field_factoid']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['field_factoid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_factoid']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_factoid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_factoid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_factoid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_factoid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_factoid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_factoid']['field_api_classes'] = 0;
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
    'factoid' => 'factoid',
  );
  $handler->display->display_options['argument_input'] = array(
    'term_node_tid_depth' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth)',
    ),
    'term_node_tid_depth_modifier' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID depth modifier',
    ),
  );

  /* Display: Top Content */
  $handler = $view->new_display('panel_pane', 'Top Content', 'panel_pane_13');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top Content';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = '.view-topic-items';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
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
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['argument_input'] = array(
    'term_node_tid_depth' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth)',
    ),
    'term_node_tid_depth_modifier' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID depth modifier',
    ),
  );

  /* Display: Related Content */
  $handler = $view->new_display('panel_pane', 'Related Content', 'panel_pane_14');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related Content';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'view-topic-items';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
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
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Sort criterion: Content revision: Updated date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  $handler->display->display_options['argument_input'] = array(
    'term_node_tid_depth' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth)',
    ),
    'term_node_tid_depth_modifier' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID depth modifier',
    ),
  );

  /* Display: Events */
  $handler = $view->new_display('panel_pane', 'Events', 'panel_pane_15');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_date']['type'] = 'date_short';
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_date']['field_api_classes'] = 0;
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
    'calender_events' => 'calender_events',
  );
  $handler->display->display_options['argument_input'] = array(
    'term_node_tid_depth' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth)',
    ),
    'term_node_tid_depth_modifier' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID depth modifier',
    ),
  );

  /* Display: List */
  $handler = $view->new_display('panel_pane', 'List', 'panel_pane_16');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = 'field_list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'body' => 'body',
    'field_prog_icon' => 'field_prog_icon',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid_1';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['name']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  /* Field: Content: Program Icon */
  $handler->display->display_options['fields']['field_prog_icon']['id'] = 'field_prog_icon';
  $handler->display->display_options['fields']['field_prog_icon']['table'] = 'field_data_field_prog_icon';
  $handler->display->display_options['fields']['field_prog_icon']['field'] = 'field_prog_icon';
  $handler->display->display_options['fields']['field_prog_icon']['label'] = '';
  $handler->display->display_options['fields']['field_prog_icon']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_prog_icon']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_prog_icon']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_prog_icon']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_prog_icon']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_prog_icon']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_prog_icon']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_prog_icon']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_prog_icon']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_prog_icon']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_prog_icon']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_prog_icon']['element_class'] = 'factoid views-field-field-icon';
  $handler->display->display_options['fields']['field_prog_icon']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_prog_icon']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_prog_icon']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_prog_icon']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_prog_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_prog_icon']['type'] = 'media';
  $handler->display->display_options['fields']['field_prog_icon']['settings'] = array(
    'file_view_mode' => 'media_original',
  );
  $handler->display->display_options['fields']['field_prog_icon']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_class'] = '.view-topic-sticky';
  $handler->display->display_options['fields']['body']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: List */
  $handler->display->display_options['fields']['field_list']['id'] = 'field_list';
  $handler->display->display_options['fields']['field_list']['table'] = 'field_data_field_list';
  $handler->display->display_options['fields']['field_list']['field'] = 'field_list';
  $handler->display->display_options['fields']['field_list']['label'] = '';
  $handler->display->display_options['fields']['field_list']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_list']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_list']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_list']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_list']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_list']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_list']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_list']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_list']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_list']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_list']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_list']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_list']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_list']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_list']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_list']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_list']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid_1';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['set_breadcrumb'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['use_taxonomy_term_path'] = 0;
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: List (field_list) */
  $handler->display->display_options['filters']['field_list_value']['id'] = 'field_list_value';
  $handler->display->display_options['filters']['field_list_value']['table'] = 'field_data_field_list';
  $handler->display->display_options['filters']['field_list_value']['field'] = 'field_list_value';
  $handler->display->display_options['filters']['field_list_value']['value'] = array(
    'programs' => 'programs',
    'services' => 'services',
    'divisions' => 'divisions',
  );
  $handler->display->display_options['argument_input'] = array(
    'term_node_tid_depth' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth)',
    ),
    'term_node_tid_depth_modifier' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID depth modifier',
    ),
  );

  /* Display: Online Services */
  $handler = $view->new_display('panel_pane', 'Online Services', 'panel_pane_17');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'select-arrow';
  $handler->display->display_options['display_description'] = 'Online services for Department pages';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['hide'] = 1;
  $handler->display->display_options['style_options']['path'] = 'field_news_link';
  $handler->display->display_options['style_options']['choose'] = '- Select a Service -';
  $handler->display->display_options['style_options']['default_value'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_news_link']['id'] = 'field_news_link';
  $handler->display->display_options['fields']['field_news_link']['table'] = 'field_data_field_news_link';
  $handler->display->display_options['fields']['field_news_link']['field'] = 'field_news_link';
  $handler->display->display_options['fields']['field_news_link']['label'] = '';
  $handler->display->display_options['fields']['field_news_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_news_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_news_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_news_link']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_news_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_news_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_news_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_news_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_news_link']['type'] = 'url';
  $handler->display->display_options['fields']['field_news_link']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_news_link] ';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['title']['alter']['external'] = 1;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '-3';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['set_breadcrumb'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['use_taxonomy_term_path'] = 0;
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
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
    'services' => 'services',
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
    'parent' => array(
      'type' => 'none',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy: Parent term',
    ),
    'term_node_tid_depth' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy: Term ID (with depth)',
    ),
    'term_node_tid_depth_modifier' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Taxonomy: Term ID depth modifier',
    ),
  );

  /* Display: I Need To */
  $handler = $view->new_display('panel_pane', 'I Need To', 'panel_pane_18');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'select-arrow';
  $handler->display->display_options['display_description'] = 'I need to for Department pages';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['hide'] = 1;
  $handler->display->display_options['style_options']['path'] = 'field_news_link';
  $handler->display->display_options['style_options']['choose'] = '- I Need To -';
  $handler->display->display_options['style_options']['default_value'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_news_link']['id'] = 'field_news_link';
  $handler->display->display_options['fields']['field_news_link']['table'] = 'field_data_field_news_link';
  $handler->display->display_options['fields']['field_news_link']['field'] = 'field_news_link';
  $handler->display->display_options['fields']['field_news_link']['label'] = '';
  $handler->display->display_options['fields']['field_news_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_news_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_news_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_news_link']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_news_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_news_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_news_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_news_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_news_link']['type'] = 'url';
  $handler->display->display_options['fields']['field_news_link']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_news_link] ';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['title']['alter']['external'] = 1;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '-3';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['set_breadcrumb'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['use_taxonomy_term_path'] = 0;
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
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
    'i_need_to' => 'i_need_to',
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
    'parent' => array(
      'type' => 'none',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy: Parent term',
    ),
    'term_node_tid_depth' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy: Term ID (with depth)',
    ),
    'term_node_tid_depth_modifier' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Taxonomy: Term ID depth modifier',
    ),
  );

  /* Display: Banner Image  Rotating */
  $handler = $view->new_display('panel_pane', 'Banner Image  Rotating', 'panel_pane_6');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_cat_dept']['id'] = 'field_cat_dept';
  $handler->display->display_options['fields']['field_cat_dept']['table'] = 'field_data_field_cat_dept';
  $handler->display->display_options['fields']['field_cat_dept']['field'] = 'field_cat_dept';
  $handler->display->display_options['fields']['field_cat_dept']['label'] = '';
  $handler->display->display_options['fields']['field_cat_dept']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cat_dept']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cat_dept']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cat_dept']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cat_dept']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cat_dept']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cat_dept']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cat_dept']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cat_dept']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cat_dept']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cat_dept']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cat_dept']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cat_dept']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_cat_dept']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_cat_dept']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cat_dept']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cat_dept']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cat_dept']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_cat_dept']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_cat_dept']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_cat_dept']['field_api_classes'] = 0;
  /* Field: Content: Banner Image */
  $handler->display->display_options['fields']['field_dept_banner']['id'] = 'field_dept_banner';
  $handler->display->display_options['fields']['field_dept_banner']['table'] = 'field_data_field_dept_banner';
  $handler->display->display_options['fields']['field_dept_banner']['field'] = 'field_dept_banner';
  $handler->display->display_options['fields']['field_dept_banner']['label'] = '';
  $handler->display->display_options['fields']['field_dept_banner']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dept_banner']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dept_banner']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dept_banner']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dept_banner']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dept_banner']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dept_banner']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dept_banner']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dept_banner']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dept_banner']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dept_banner']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dept_banner']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_dept_banner']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dept_banner']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dept_banner']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dept_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_dept_banner']['type'] = 'media';
  $handler->display->display_options['fields']['field_dept_banner']['settings'] = array(
    'file_view_mode' => 'media_original',
  );
  $handler->display->display_options['fields']['field_dept_banner']['field_api_classes'] = 0;
  /* Field: Content: Tagline */
  $handler->display->display_options['fields']['field_dept_tagline']['id'] = 'field_dept_tagline';
  $handler->display->display_options['fields']['field_dept_tagline']['table'] = 'field_data_field_dept_tagline';
  $handler->display->display_options['fields']['field_dept_tagline']['field'] = 'field_dept_tagline';
  $handler->display->display_options['fields']['field_dept_tagline']['label'] = '';
  $handler->display->display_options['fields']['field_dept_tagline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dept_tagline']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dept_tagline']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dept_tagline']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dept_tagline']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dept_tagline']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dept_tagline']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dept_tagline']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dept_tagline']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dept_tagline']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dept_tagline']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dept_tagline']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dept_tagline']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_dept_tagline']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dept_tagline']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dept_tagline']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dept_tagline']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '-3';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['set_breadcrumb'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['use_taxonomy_term_path'] = 0;
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
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
    'department_banner_image' => 'department_banner_image',
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
    'parent' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy: Parent term',
    ),
    'term_node_tid_depth' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy: Term ID (with depth)',
    ),
    'term_node_tid_depth_modifier' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Taxonomy: Term ID depth modifier',
    ),
  );
  $translatables['dept_page_blocks'] = array(
    t('Master'),
    t('More Events'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term'),
    t('Email'),
    t('Phone'),
    t('Title'),
    t('Learn More'),
    t('All'),
    t('Contact Info'),
    t('more'),
    t('department/[title]'),
    t('<a href="mailto:[field_email]">[field_email]</a>'),
    t('Phone: [field_phone]'),
    t('View panes'),
    t('Large Promos'),
    t('[field_promo_link]'),
    t('Promo without Icon'),
    t('[field_news_link] '),
    t('[field_news_link]'),
    t('Banner Image'),
    t('Vertical Promos'),
    t('[field_promo_link] '),
    t('Departments'),
    t('News'),
    t('Recent News'),
    t('[title]'),
    t('Factoid'),
    t('Top Content'),
    t('Related Content'),
    t('Events'),
    t('Upcoming Events'),
    t('List'),
    t('Online Services'),
    t('Online services for Department pages'),
    t('I Need To'),
    t('I need to for Department pages'),
    t('Banner Image  Rotating'),
  );
  $export['dept_page_blocks'] = $view;

  $view = new view;
  $view->name = 'portal_page_menu';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Portal Page Menus';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'item-list menu-block p-t-10';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = 'nothing';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Content using Government */
  $handler->display->display_options['relationships']['reverse_field_gov_tax_node']['id'] = 'reverse_field_gov_tax_node';
  $handler->display->display_options['relationships']['reverse_field_gov_tax_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_gov_tax_node']['field'] = 'reverse_field_gov_tax_node';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  /* Contextual filter: Taxonomy term: Parent term */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['relationship'] = 'parent';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['parent']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['parent']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['parent']['not'] = 0;

  /* Display: Portal Menu */
  $handler = $view->new_display('panel_pane', 'Portal Menu', 'panel_pane_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'parent' => array(
      'type' => 'panel',
      'context' => 'entity:taxonomy_term.parent',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy: Parent term',
    ),
  );
  $translatables['portal_page_menu'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field_gov_tax'),
    t('All'),
    t('Portal Menu'),
    t('View panes'),
  );
  $export['portal_page_menu'] = $view;

  return $export;
}
