<?php
/**
 * @file
 * image_rotator.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function image_rotator_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'imag';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Image Rotator';
  $view->core = 7;
  $view->api_version = '3.0';
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
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_1920_x_1080_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_1920_x_1080_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'none';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '10000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '4000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['sync'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Field: Content: 1920 x 1080 Image */
  $handler->display->display_options['fields']['field_1920_x_1080_image']['id'] = 'field_1920_x_1080_image';
  $handler->display->display_options['fields']['field_1920_x_1080_image']['table'] = 'field_data_field_1920_x_1080_image';
  $handler->display->display_options['fields']['field_1920_x_1080_image']['field'] = 'field_1920_x_1080_image';
  $handler->display->display_options['fields']['field_1920_x_1080_image']['label'] = '';
  $handler->display->display_options['fields']['field_1920_x_1080_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_1920_x_1080_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_1920_x_1080_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_1920_x_1080_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_1920_x_1080_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_1920_x_1080_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_1920_x_1080_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_1920_x_1080_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_1920_x_1080_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_1920_x_1080_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_1920_x_1080_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_1920_x_1080_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_1920_x_1080_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_1920_x_1080_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_1920_x_1080_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_1920_x_1080_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_1920_x_1080_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_1920_x_1080_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_1920_x_1080_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_1920_x_1080_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_1920_x_1080_image']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image_rotator' => 'image_rotator',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Rotator */
  $handler = $view->new_display('page', 'Rotator', 'page');
  $handler->display->display_options['display_description'] = 'This is the general rotator page. Branch specific views use overridden settings...';
  $handler->display->display_options['path'] = 'rotator';
  $export['imag'] = $view;

  return $export;
}
