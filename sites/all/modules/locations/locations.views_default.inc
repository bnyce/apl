<?php
/**
 * @file
 * locations.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function locations_views_default_views() {
  $export = array();

  $view = new view();
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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Library Schedule (field_library_schedule) */
  $handler->display->display_options['relationships']['field_library_schedule_tid']['id'] = 'field_library_schedule_tid';
  $handler->display->display_options['relationships']['field_library_schedule_tid']['table'] = 'field_data_field_library_schedule';
  $handler->display->display_options['relationships']['field_library_schedule_tid']['field'] = 'field_library_schedule_tid';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a alt="[name]" href="/locations/[name]">[name]</a>';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'locations/[name]';
  $handler->display->display_options['fields']['name']['alter']['alt'] = '[name] Individual Location Page';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['path'] = 'http://maps.google.com/?q=[field_address-thoroughfare], [field_address-locality], TX, [field_address-postal_code]';
  $handler->display->display_options['fields']['field_address']['alter']['alt'] = 'Google Map of [name]';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_address']['group_column'] = 'country';
  /* Field: Taxonomy term: Phone Number */
  $handler->display->display_options['fields']['field_phone_num']['id'] = 'field_phone_num';
  $handler->display->display_options['fields']['field_phone_num']['table'] = 'field_data_field_phone_num';
  $handler->display->display_options['fields']['field_phone_num']['field'] = 'field_phone_num';
  $handler->display->display_options['fields']['field_phone_num']['label'] = '';
  $handler->display->display_options['fields']['field_phone_num']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Library Image */
  $handler->display->display_options['fields']['field_lib_image']['id'] = 'field_lib_image';
  $handler->display->display_options['fields']['field_lib_image']['table'] = 'field_data_field_lib_image';
  $handler->display->display_options['fields']['field_lib_image']['field'] = 'field_lib_image';
  $handler->display->display_options['fields']['field_lib_image']['label'] = '';
  $handler->display->display_options['fields']['field_lib_image']['alter']['path'] = 'http://maps.google.com/?q=[field_address-thoroughfare], [field_address-locality], TX, [field_address-postal_code]';
  $handler->display->display_options['fields']['field_lib_image']['alter']['alt'] = 'Google Map of [name]';
  $handler->display->display_options['fields']['field_lib_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lib_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lib_image']['type'] = 'media';
  $handler->display->display_options['fields']['field_lib_image']['settings'] = array(
    'file_view_mode' => 'media_original',
  );
  $handler->display->display_options['fields']['field_lib_image']['group_column'] = 'fid';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_library_schedule_tid';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Holiday schedule';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'basic-page/holiday-schedule';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'holiday-schedule';
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Field: Taxonomy term: Geofield */
  $handler->display->display_options['fields']['field_geofield']['id'] = 'field_geofield';
  $handler->display->display_options['fields']['field_geofield']['table'] = 'field_data_field_geofield';
  $handler->display->display_options['fields']['field_geofield']['field'] = 'field_geofield';
  $handler->display->display_options['fields']['field_geofield']['label'] = '';
  $handler->display->display_options['fields']['field_geofield']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geofield']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geofield']['type'] = 'geofield_map_map';
  $handler->display->display_options['fields']['field_geofield']['settings'] = array(
    'geofield_map_width' => '100%',
    'geofield_map_height' => '175px',
    'geofield_map_zoom' => '16',
    'geofield_map_controltype' => 'small',
    'geofield_map_mtc' => 'menu',
    'geofield_map_pancontrol' => 0,
    'geofield_map_maptype' => 'map',
    'geofield_map_baselayers_map' => 1,
    'geofield_map_baselayers_satellite' => 1,
    'geofield_map_baselayers_hybrid' => 1,
    'geofield_map_baselayers_physical' => 1,
    'geofield_map_scale' => 0,
    'geofield_map_overview' => 0,
    'geofield_map_overview_opened' => 0,
    'geofield_map_scrollwheel' => 0,
    'geofield_map_draggable' => 1,
    'geofield_map_streetview_show' => 1,
  );
  /* Field: Taxonomy term: Library Image 2 */
  $handler->display->display_options['fields']['field_library_image']['id'] = 'field_library_image';
  $handler->display->display_options['fields']['field_library_image']['table'] = 'field_data_field_library_image';
  $handler->display->display_options['fields']['field_library_image']['field'] = 'field_library_image';
  $handler->display->display_options['fields']['field_library_image']['label'] = '';
  $handler->display->display_options['fields']['field_library_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['name']['title'] = '%1';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['vocabularies'] = array(
    'library_location' => 'library_location',
  );
  $handler->display->display_options['arguments']['name']['validate_options']['type'] = 'name';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'library_location' => 'library_location',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a alt="[name]" href="/locations/[name]">[name]</a>';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'locations/[name]';
  $handler->display->display_options['fields']['name']['alter']['alt'] = '[name] Individual Location Page';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['path'] = 'http://maps.google.com/?q=[field_address-thoroughfare], [field_address-locality], TX, [field_address-postal_code]';
  $handler->display->display_options['fields']['field_address']['alter']['alt'] = 'Google Map of [name]';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_address']['group_column'] = 'country';
  /* Field: Taxonomy term: Phone Number */
  $handler->display->display_options['fields']['field_phone_num']['id'] = 'field_phone_num';
  $handler->display->display_options['fields']['field_phone_num']['table'] = 'field_data_field_phone_num';
  $handler->display->display_options['fields']['field_phone_num']['field'] = 'field_phone_num';
  $handler->display->display_options['fields']['field_phone_num']['label'] = '';
  $handler->display->display_options['fields']['field_phone_num']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Geofield */
  $handler->display->display_options['fields']['field_geofield']['id'] = 'field_geofield';
  $handler->display->display_options['fields']['field_geofield']['table'] = 'field_data_field_geofield';
  $handler->display->display_options['fields']['field_geofield']['field'] = 'field_geofield';
  $handler->display->display_options['fields']['field_geofield']['label'] = '';
  $handler->display->display_options['fields']['field_geofield']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geofield']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geofield']['type'] = 'geofield_map_map';
  $handler->display->display_options['fields']['field_geofield']['settings'] = array(
    'geofield_map_width' => '100%',
    'geofield_map_height' => '175px',
    'geofield_map_zoom' => '16',
    'geofield_map_controltype' => 'small',
    'geofield_map_mtc' => 'menu',
    'geofield_map_pancontrol' => 0,
    'geofield_map_maptype' => 'map',
    'geofield_map_baselayers_map' => 1,
    'geofield_map_baselayers_satellite' => 1,
    'geofield_map_baselayers_hybrid' => 1,
    'geofield_map_baselayers_physical' => 1,
    'geofield_map_scale' => 0,
    'geofield_map_overview' => 0,
    'geofield_map_overview_opened' => 0,
    'geofield_map_scrollwheel' => 0,
    'geofield_map_draggable' => 1,
    'geofield_map_streetview_show' => 1,
  );
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_library_schedule_tid';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'all-locations';

  /* Display: All Locations CP */
  $handler = $view->new_display('panel_pane', 'All Locations CP', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All Locations';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Library Image 2 */
  $handler->display->display_options['fields']['field_library_image']['id'] = 'field_library_image';
  $handler->display->display_options['fields']['field_library_image']['table'] = 'field_data_field_library_image';
  $handler->display->display_options['fields']['field_library_image']['field'] = 'field_library_image';
  $handler->display->display_options['fields']['field_library_image']['label'] = '';
  $handler->display->display_options['fields']['field_library_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a alt="[name]" href="/locations/[name]">[name]</a>';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'locations/[name]';
  $handler->display->display_options['fields']['name']['alter']['alt'] = '[name] Individual Location Page';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['path'] = 'http://maps.google.com/?q=[field_address-thoroughfare], [field_address-locality], TX, [field_address-postal_code]';
  $handler->display->display_options['fields']['field_address']['alter']['alt'] = 'Google Map of [name]';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_address']['group_column'] = 'country';
  /* Field: Taxonomy term: Phone Number */
  $handler->display->display_options['fields']['field_phone_num']['id'] = 'field_phone_num';
  $handler->display->display_options['fields']['field_phone_num']['table'] = 'field_data_field_phone_num';
  $handler->display->display_options['fields']['field_phone_num']['field'] = 'field_phone_num';
  $handler->display->display_options['fields']['field_phone_num']['label'] = '';
  $handler->display->display_options['fields']['field_phone_num']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_library_schedule_tid';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Holiday schedule';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'basic-page/holiday-schedule';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'holiday-schedule';
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Field: Taxonomy term: Geofield */
  $handler->display->display_options['fields']['field_geofield']['id'] = 'field_geofield';
  $handler->display->display_options['fields']['field_geofield']['table'] = 'field_data_field_geofield';
  $handler->display->display_options['fields']['field_geofield']['field'] = 'field_geofield';
  $handler->display->display_options['fields']['field_geofield']['label'] = '';
  $handler->display->display_options['fields']['field_geofield']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geofield']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geofield']['type'] = 'geofield_map_map';
  $handler->display->display_options['fields']['field_geofield']['settings'] = array(
    'geofield_map_width' => '100%',
    'geofield_map_height' => '175px',
    'geofield_map_zoom' => '16',
    'geofield_map_controltype' => 'small',
    'geofield_map_mtc' => 'menu',
    'geofield_map_pancontrol' => 0,
    'geofield_map_maptype' => 'map',
    'geofield_map_baselayers_map' => 1,
    'geofield_map_baselayers_satellite' => 1,
    'geofield_map_baselayers_hybrid' => 1,
    'geofield_map_baselayers_physical' => 1,
    'geofield_map_scale' => 0,
    'geofield_map_overview' => 0,
    'geofield_map_overview_opened' => 0,
    'geofield_map_scrollwheel' => 0,
    'geofield_map_draggable' => 1,
    'geofield_map_streetview_show' => 1,
  );
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
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Library Image 2 */
  $handler->display->display_options['fields']['field_library_image']['id'] = 'field_library_image';
  $handler->display->display_options['fields']['field_library_image']['table'] = 'field_data_field_library_image';
  $handler->display->display_options['fields']['field_library_image']['field'] = 'field_library_image';
  $handler->display->display_options['fields']['field_library_image']['label'] = '';
  $handler->display->display_options['fields']['field_library_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['path'] = 'http://maps.google.com/?q=[field_address-thoroughfare], [field_address-locality], TX, [field_address-postal_code]';
  $handler->display->display_options['fields']['field_address']['alter']['alt'] = 'Google Map of [name]';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_address']['group_column'] = 'country';
  /* Field: Taxonomy term: Phone Number */
  $handler->display->display_options['fields']['field_phone_num']['id'] = 'field_phone_num';
  $handler->display->display_options['fields']['field_phone_num']['table'] = 'field_data_field_phone_num';
  $handler->display->display_options['fields']['field_phone_num']['field'] = 'field_phone_num';
  $handler->display->display_options['fields']['field_phone_num']['label'] = '';
  $handler->display->display_options['fields']['field_phone_num']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_library_schedule_tid';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Holiday schedule';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'basic-page/holiday-schedule';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'holiday-schedule';
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Field: Taxonomy term: Geofield */
  $handler->display->display_options['fields']['field_geofield']['id'] = 'field_geofield';
  $handler->display->display_options['fields']['field_geofield']['table'] = 'field_data_field_geofield';
  $handler->display->display_options['fields']['field_geofield']['field'] = 'field_geofield';
  $handler->display->display_options['fields']['field_geofield']['label'] = '';
  $handler->display->display_options['fields']['field_geofield']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geofield']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geofield']['type'] = 'geofield_map_map';
  $handler->display->display_options['fields']['field_geofield']['settings'] = array(
    'geofield_map_width' => '100%',
    'geofield_map_height' => '175px',
    'geofield_map_zoom' => '16',
    'geofield_map_controltype' => 'small',
    'geofield_map_mtc' => 'menu',
    'geofield_map_pancontrol' => 0,
    'geofield_map_maptype' => 'map',
    'geofield_map_baselayers_map' => 1,
    'geofield_map_baselayers_satellite' => 1,
    'geofield_map_baselayers_hybrid' => 1,
    'geofield_map_baselayers_physical' => 1,
    'geofield_map_scale' => 0,
    'geofield_map_overview' => 0,
    'geofield_map_overview_opened' => 0,
    'geofield_map_scrollwheel' => 0,
    'geofield_map_draggable' => 1,
    'geofield_map_streetview_show' => 1,
  );
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
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a alt="[name]" href="/locations/[name]">[name]</a>';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'locations/[name]';
  $handler->display->display_options['fields']['name']['alter']['alt'] = '[name] Individual Location Page';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['path'] = 'http://maps.google.com/?q=[field_address-thoroughfare], [field_address-locality], TX, [field_address-postal_code]';
  $handler->display->display_options['fields']['field_address']['alter']['alt'] = 'Google Map of [name]';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_address']['group_column'] = 'country';
  /* Field: Taxonomy term: Phone Number */
  $handler->display->display_options['fields']['field_phone_num']['id'] = 'field_phone_num';
  $handler->display->display_options['fields']['field_phone_num']['table'] = 'field_data_field_phone_num';
  $handler->display->display_options['fields']['field_phone_num']['field'] = 'field_phone_num';
  $handler->display->display_options['fields']['field_phone_num']['label'] = '';
  $handler->display->display_options['fields']['field_phone_num']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Holiday schedule';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'basic-page/holiday-schedule';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'holiday-schedule';
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Field: Taxonomy term: Geofield */
  $handler->display->display_options['fields']['field_geofield']['id'] = 'field_geofield';
  $handler->display->display_options['fields']['field_geofield']['table'] = 'field_data_field_geofield';
  $handler->display->display_options['fields']['field_geofield']['field'] = 'field_geofield';
  $handler->display->display_options['fields']['field_geofield']['label'] = '';
  $handler->display->display_options['fields']['field_geofield']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geofield']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geofield']['type'] = 'geofield_map_map';
  $handler->display->display_options['fields']['field_geofield']['settings'] = array(
    'geofield_map_width' => '100%',
    'geofield_map_height' => '175px',
    'geofield_map_zoom' => '16',
    'geofield_map_controltype' => 'small',
    'geofield_map_mtc' => 'menu',
    'geofield_map_pancontrol' => 0,
    'geofield_map_maptype' => 'map',
    'geofield_map_baselayers_map' => 1,
    'geofield_map_baselayers_satellite' => 1,
    'geofield_map_baselayers_hybrid' => 1,
    'geofield_map_baselayers_physical' => 1,
    'geofield_map_scale' => 0,
    'geofield_map_overview' => 0,
    'geofield_map_overview_opened' => 0,
    'geofield_map_scrollwheel' => 0,
    'geofield_map_draggable' => 1,
    'geofield_map_streetview_show' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['name']['title'] = '%1';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['vocabularies'] = array(
    'library_location' => 'library_location',
  );
  $handler->display->display_options['arguments']['name']['validate_options']['type'] = 'name';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
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

  return $export;
}
