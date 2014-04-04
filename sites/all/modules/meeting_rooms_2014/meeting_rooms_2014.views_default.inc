<?php
/**
 * @file
 * meeting_rooms_2014.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function meeting_rooms_2014_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'apl_rooms_2014';
  $view->description = '';
  $view->tag = 'meeting rooms 2014';
  $view->base_table = 'node';
  $view->human_name = 'Meeting Rooms 2014';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<style>
ul#locations_nav {

}
ul#locations_nav li {
display: inline;
}
ul#locations_nav li:after {
content: " |";
}
ul#locations_nav li.last:after {
content: "";
}
</style>

<ul id="locations_nav">
<li><a href="/rooms/ahc">Austin History Center</a></li>
<li><a href="/rooms/acb">Carver Branch</a></li>
<li><a href="/rooms/acp">Cepeda Branch</a></li>
<li><a href="/rooms/aok">Hampton Branch at Oak Hill</a></li>
<li><a href="/rooms/aho">Howson Branch</a></li>
<li><a href="/rooms/alw">Little Walnut Creek Branch</a></li>
<li><a href="/rooms/amr">Manchaca Road Branch</a></li>
<li><a href="/rooms/ami">Milwood Branch</a></li>
<li><a href="/rooms/anv">North Village Branch Branch</a></li>
<li><a href="/rooms/aoq">Old Quarry Branch</a></li>
<li><a href="/rooms/aph">Pleasant Hill Branch</a></li>
<li><a href="/rooms/arz">Ruiz Branch</a></li>
<li><a href="/rooms/ase">Southeast Branch</a></li>
<li><a href="/rooms/asr">Spicewood Springs Branch</a></li>
<li><a href="/rooms/atb">Terrazas Branch</a></li>
<li><a href="/rooms/ato">Twin Oaks Branch</a></li>
<li><a href="/rooms/auh">University Hills Branch</a></li>
<li><a href="/rooms/awk">Willie Mae Kirk Branch</a></li>
<li><a href="/rooms/awp">Windsor Park Branch</a></li>
<li class="last"><a href="/rooms/ayb">Yarborough Branch</a></li>
</ul>';
  $handler->display->display_options['footer']['area']['format'] = 'truly_unfiltered_html';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Group */
  $handler->display->display_options['fields']['field_group3']['id'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['table'] = 'field_data_field_group3';
  $handler->display->display_options['fields']['field_group3']['field'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['label'] = '';
  $handler->display->display_options['fields']['field_group3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_group3']['alter']['path'] = 'http://library.austintexas.gov[path]';
  $handler->display->display_options['fields']['field_group3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group3']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_mr_date_and_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['delta_offset'] = '0';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
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
    'room_reservation' => 'room_reservation',
  );
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Denied' => 'Denied',
  );

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'room';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'rooms' => 'rooms',
    'book_list_categories' => 0,
    'merci_equipment_group' => 0,
    'blog_topics' => 0,
    'event_titles' => 0,
    'database_subjects' => 0,
    'faq_topics' => 0,
    'ig_subjects' => 0,
    'intended_audience' => 0,
    'page_type' => 0,
    'press_release_types' => 0,
    'tags' => 0,
    'library_location' => 0,
    'library_service_audience' => 0,
    'library_service_category' => 0,
    'recycled_reads_category' => 0,
    'recycled_reads_craft_material' => 0,
    'recycled_reads_event_type' => 0,
    'recycled_reads_tag' => 0,
    'templates' => 0,
    'youth_category' => 0,
    'library_hours' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );
  $handler->display->display_options['path'] = 'meeting-rooms2/month';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-mr-date-and-time/week';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Day */
  $handler = $view->new_display('page', 'Day', 'page_3');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );
  $handler->display->display_options['path'] = 'rooms/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'year';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_mr_date_and_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-mr-date-and-time/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'block_2');
  $handler->display->display_options['display_description'] = 'Upcoming events block';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );

  /* Display: All */
  $handler = $view->new_display('page', 'All', 'page_4');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'room';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'rooms' => 'rooms',
    'book_list_categories' => 0,
    'merci_equipment_group' => 0,
    'blog_topics' => 0,
    'event_titles' => 0,
    'database_subjects' => 0,
    'faq_topics' => 0,
    'ig_subjects' => 0,
    'intended_audience' => 0,
    'page_type' => 0,
    'press_release_types' => 0,
    'tags' => 0,
    'library_location' => 0,
    'library_service_audience' => 0,
    'library_service_category' => 0,
    'recycled_reads_category' => 0,
    'recycled_reads_craft_material' => 0,
    'recycled_reads_event_type' => 0,
    'recycled_reads_tag' => 0,
    'templates' => 0,
    'youth_category' => 0,
    'library_hours' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_mr_date_and_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['delta_offset'] = '0';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );
  $handler->display->display_options['path'] = 'meeting-rooms/all';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: AHC */
  $handler = $view->new_display('page', 'AHC', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Austin History Center Rooms Calendar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
ul#months_nav {
position: absolute;
right: 0;
top: 0;
}
ul#months_nav li {
display: inline;
}
ul#months_nav li:after {
content: " |";
}
ul#months_nav li.last:after {
content: "";
}
</style>
<ul id="months_nav">
<li>2014</li>
<li><a href="/rooms/ahc/2014-01">Jan</a></li>
<li><a href="/rooms/ahc/2014-02">Feb</a></li>
<li><a href="/rooms/ahc/2014-03">Mar</a></li>
<li><a href="/rooms/ahc/2014-04">Apr</a></li>
<li><a href="/rooms/ahc/2014-05">May</a></li>
<li><a href="/rooms/ahc/2014-06">Jun</a></li>
<li><a href="/rooms/ahc/2014-07">Jul</a></li>
<li><a href="/rooms/ahc/2014-08">Aug</a></li>
<li><a href="/rooms/ahc/2014-09">Sep</a></li>
<li><a href="/rooms/ahc/2014-10">Oct</a></li>
<li><a href="/rooms/ahc/2014-11">Nov</a></li>
<li class="last"><a href="/rooms/ahc/2014-12">Dec</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'room';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'rooms' => 'rooms',
    'book_list_categories' => 0,
    'merci_equipment_group' => 0,
    'blog_topics' => 0,
    'event_titles' => 0,
    'database_subjects' => 0,
    'faq_topics' => 0,
    'ig_subjects' => 0,
    'intended_audience' => 0,
    'page_type' => 0,
    'press_release_types' => 0,
    'tags' => 0,
    'library_location' => 0,
    'library_service_audience' => 0,
    'library_service_category' => 0,
    'recycled_reads_category' => 0,
    'recycled_reads_craft_material' => 0,
    'recycled_reads_event_type' => 0,
    'recycled_reads_tag' => 0,
    'templates' => 0,
    'youth_category' => 0,
    'library_hours' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '780',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'rooms';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Denied' => 'Denied',
  );
  $handler->display->display_options['path'] = 'rooms/ahc';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: ACB */
  $handler = $view->new_display('page', 'ACB', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Carver Branch Rooms Calendar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
ul#months_nav {
position: absolute;
right: 0;
top: 0;
}
ul#months_nav li {
display: inline;
}
ul#months_nav li:after {
content: " |";
}
ul#months_nav li.last:after {
content: "";
}
</style>
<ul id="months_nav">
<li>2014</li>
<li><a href="/rooms/acb/2014-01">Jan</a></li>
<li><a href="/rooms/acb/2014-02">Feb</a></li>
<li><a href="/rooms/acb/2014-03">Mar</a></li>
<li><a href="/rooms/acb/2014-04">Apr</a></li>
<li><a href="/rooms/acb/2014-05">May</a></li>
<li><a href="/rooms/acb/2014-06">Jun</a></li>
<li><a href="/rooms/acb/2014-07">Jul</a></li>
<li><a href="/rooms/acb/2014-08">Aug</a></li>
<li><a href="/rooms/acb/2014-09">Sep</a></li>
<li><a href="/rooms/acb/2014-10">Oct</a></li>
<li><a href="/rooms/acb/2014-11">Nov</a></li>
<li class="last"><a href="/rooms/acb/2014-12">Dec</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'room';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'rooms' => 'rooms',
    'book_list_categories' => 0,
    'merci_equipment_group' => 0,
    'blog_topics' => 0,
    'event_titles' => 0,
    'database_subjects' => 0,
    'faq_topics' => 0,
    'ig_subjects' => 0,
    'intended_audience' => 0,
    'page_type' => 0,
    'press_release_types' => 0,
    'tags' => 0,
    'library_location' => 0,
    'library_service_audience' => 0,
    'library_service_category' => 0,
    'recycled_reads_category' => 0,
    'recycled_reads_craft_material' => 0,
    'recycled_reads_event_type' => 0,
    'recycled_reads_tag' => 0,
    'templates' => 0,
    'youth_category' => 0,
    'library_hours' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Group */
  $handler->display->display_options['fields']['field_group3']['id'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['table'] = 'field_data_field_group3';
  $handler->display->display_options['fields']['field_group3']['field'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['label'] = '';
  $handler->display->display_options['fields']['field_group3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_group3']['alter']['path'] = 'http://library.austintexas.gov[path]';
  $handler->display->display_options['fields']['field_group3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group3']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_mr_date_and_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['delta_offset'] = '0';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '781',
    1 => '848',
    2 => '782',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'rooms';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Denied' => 'Denied',
  );
  $handler->display->display_options['path'] = 'rooms/acb';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: ACP */
  $handler = $view->new_display('page', 'ACP', 'page_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Cepeda Branch Rooms Calendar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
ul#months_nav {
position: absolute;
right: 0;
top: 0;
}
ul#months_nav li {
display: inline;
}
ul#months_nav li:after {
content: " |";
}
ul#months_nav li.last:after {
content: "";
}
</style>
<ul id="months_nav">
<li>2014</li>
<li><a href="/rooms/acp/2014-01">Jan</a></li>
<li><a href="/rooms/acp/2014-02">Feb</a></li>
<li><a href="/rooms/acp/2014-03">Mar</a></li>
<li><a href="/rooms/acp/2014-04">Apr</a></li>
<li><a href="/rooms/acp/2014-05">May</a></li>
<li><a href="/rooms/acp/2014-06">Jun</a></li>
<li><a href="/rooms/acp/2014-07">Jul</a></li>
<li><a href="/rooms/acp/2014-08">Aug</a></li>
<li><a href="/rooms/acp/2014-09">Sep</a></li>
<li><a href="/rooms/acp/2014-10">Oct</a></li>
<li><a href="/rooms/acp/2014-11">Nov</a></li>
<li class="last"><a href="/rooms/acp/2014-12">Dec</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'room';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'rooms' => 'rooms',
    'book_list_categories' => 0,
    'merci_equipment_group' => 0,
    'blog_topics' => 0,
    'event_titles' => 0,
    'database_subjects' => 0,
    'faq_topics' => 0,
    'ig_subjects' => 0,
    'intended_audience' => 0,
    'page_type' => 0,
    'press_release_types' => 0,
    'tags' => 0,
    'library_location' => 0,
    'library_service_audience' => 0,
    'library_service_category' => 0,
    'recycled_reads_category' => 0,
    'recycled_reads_craft_material' => 0,
    'recycled_reads_event_type' => 0,
    'recycled_reads_tag' => 0,
    'templates' => 0,
    'youth_category' => 0,
    'library_hours' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Group */
  $handler->display->display_options['fields']['field_group3']['id'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['table'] = 'field_data_field_group3';
  $handler->display->display_options['fields']['field_group3']['field'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['label'] = '';
  $handler->display->display_options['fields']['field_group3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_group3']['alter']['path'] = 'http://library.austintexas.gov[path]';
  $handler->display->display_options['fields']['field_group3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group3']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_mr_date_and_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['delta_offset'] = '0';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '783',
    1 => '850',
    2 => '849',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'rooms';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Denied' => 'Denied',
  );
  $handler->display->display_options['path'] = 'rooms/acp';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: AOK */
  $handler = $view->new_display('page', 'AOK', 'page_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Hampton Branch at Oak Hill Rooms Calendar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
ul#months_nav {
position: absolute;
right: 0;
top: 0;
}
ul#months_nav li {
display: inline;
}
ul#months_nav li:after {
content: " |";
}
ul#months_nav li.last:after {
content: "";
}
</style>
<ul id="months_nav">
<li>2014</li>
<li><a href="/rooms/aok/2014-01">Jan</a></li>
<li><a href="/rooms/aok/2014-02">Feb</a></li>
<li><a href="/rooms/aok/2014-03">Mar</a></li>
<li><a href="/rooms/aok/2014-04">Apr</a></li>
<li><a href="/rooms/aok/2014-05">May</a></li>
<li><a href="/rooms/aok/2014-06">Jun</a></li>
<li><a href="/rooms/aok/2014-07">Jul</a></li>
<li><a href="/rooms/aok/2014-08">Aug</a></li>
<li><a href="/rooms/aok/2014-09">Sep</a></li>
<li><a href="/rooms/aok/2014-10">Oct</a></li>
<li><a href="/rooms/aok/2014-11">Nov</a></li>
<li class="last"><a href="/rooms/aok/2014-12">Dec</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'room';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'rooms' => 'rooms',
    'book_list_categories' => 0,
    'merci_equipment_group' => 0,
    'blog_topics' => 0,
    'event_titles' => 0,
    'database_subjects' => 0,
    'faq_topics' => 0,
    'ig_subjects' => 0,
    'intended_audience' => 0,
    'page_type' => 0,
    'press_release_types' => 0,
    'tags' => 0,
    'library_location' => 0,
    'library_service_audience' => 0,
    'library_service_category' => 0,
    'recycled_reads_category' => 0,
    'recycled_reads_craft_material' => 0,
    'recycled_reads_event_type' => 0,
    'recycled_reads_tag' => 0,
    'templates' => 0,
    'youth_category' => 0,
    'library_hours' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Group */
  $handler->display->display_options['fields']['field_group3']['id'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['table'] = 'field_data_field_group3';
  $handler->display->display_options['fields']['field_group3']['field'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['label'] = '';
  $handler->display->display_options['fields']['field_group3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_group3']['alter']['path'] = 'http://library.austintexas.gov[path]';
  $handler->display->display_options['fields']['field_group3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group3']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_mr_date_and_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['delta_offset'] = '0';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '784',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'rooms';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Denied' => 'Denied',
  );
  $handler->display->display_options['path'] = 'rooms/aok';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: AHO */
  $handler = $view->new_display('page', 'AHO', 'page_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Howson Branch Rooms Calendar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
ul#months_nav {
position: absolute;
right: 0;
top: 0;
}
ul#months_nav li {
display: inline;
}
ul#months_nav li:after {
content: " |";
}
ul#months_nav li.last:after {
content: "";
}
</style>
<ul id="months_nav">
<li>2014</li>
<li><a href="/rooms/aho/2014-01">Jan</a></li>
<li><a href="/rooms/aho/2014-02">Feb</a></li>
<li><a href="/rooms/aho/2014-03">Mar</a></li>
<li><a href="/rooms/aho/2014-04">Apr</a></li>
<li><a href="/rooms/aho/2014-05">May</a></li>
<li><a href="/rooms/aho/2014-06">Jun</a></li>
<li><a href="/rooms/aho/2014-07">Jul</a></li>
<li><a href="/rooms/aho/2014-08">Aug</a></li>
<li><a href="/rooms/aho/2014-09">Sep</a></li>
<li><a href="/rooms/aho/2014-10">Oct</a></li>
<li><a href="/rooms/aho/2014-11">Nov</a></li>
<li class="last"><a href="/rooms/aho/2014-12">Dec</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'room';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'rooms' => 'rooms',
    'book_list_categories' => 0,
    'merci_equipment_group' => 0,
    'blog_topics' => 0,
    'event_titles' => 0,
    'database_subjects' => 0,
    'faq_topics' => 0,
    'ig_subjects' => 0,
    'intended_audience' => 0,
    'page_type' => 0,
    'press_release_types' => 0,
    'tags' => 0,
    'library_location' => 0,
    'library_service_audience' => 0,
    'library_service_category' => 0,
    'recycled_reads_category' => 0,
    'recycled_reads_craft_material' => 0,
    'recycled_reads_event_type' => 0,
    'recycled_reads_tag' => 0,
    'templates' => 0,
    'youth_category' => 0,
    'library_hours' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Group */
  $handler->display->display_options['fields']['field_group3']['id'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['table'] = 'field_data_field_group3';
  $handler->display->display_options['fields']['field_group3']['field'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['label'] = '';
  $handler->display->display_options['fields']['field_group3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_group3']['alter']['path'] = 'http://library.austintexas.gov[path]';
  $handler->display->display_options['fields']['field_group3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group3']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_mr_date_and_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['delta_offset'] = '0';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '785',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'rooms';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Denied' => 'Denied',
  );
  $handler->display->display_options['path'] = 'rooms/aho';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: ALW */
  $handler = $view->new_display('page', 'ALW', 'page_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Little Walnut Creek Branch Rooms Calendar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
ul#months_nav {
position: absolute;
right: 0;
top: 0;
}
ul#months_nav li {
display: inline;
}
ul#months_nav li:after {
content: " |";
}
ul#months_nav li.last:after {
content: "";
}
</style>
<ul id="months_nav">
<li>2014</li>
<li><a href="/rooms/alw/2014-01">Jan</a></li>
<li><a href="/rooms/alw/2014-02">Feb</a></li>
<li><a href="/rooms/alw/2014-03">Mar</a></li>
<li><a href="/rooms/alw/2014-04">Apr</a></li>
<li><a href="/rooms/alw/2014-05">May</a></li>
<li><a href="/rooms/alw/2014-06">Jun</a></li>
<li><a href="/rooms/alw/2014-07">Jul</a></li>
<li><a href="/rooms/alw/2014-08">Aug</a></li>
<li><a href="/rooms/alw/2014-09">Sep</a></li>
<li><a href="/rooms/alw/2014-10">Oct</a></li>
<li><a href="/rooms/alw/2014-11">Nov</a></li>
<li class="last"><a href="/rooms/alw/2014-12">Dec</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'room';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'rooms' => 'rooms',
    'book_list_categories' => 0,
    'merci_equipment_group' => 0,
    'blog_topics' => 0,
    'event_titles' => 0,
    'database_subjects' => 0,
    'faq_topics' => 0,
    'ig_subjects' => 0,
    'intended_audience' => 0,
    'page_type' => 0,
    'press_release_types' => 0,
    'tags' => 0,
    'library_location' => 0,
    'library_service_audience' => 0,
    'library_service_category' => 0,
    'recycled_reads_category' => 0,
    'recycled_reads_craft_material' => 0,
    'recycled_reads_event_type' => 0,
    'recycled_reads_tag' => 0,
    'templates' => 0,
    'youth_category' => 0,
    'library_hours' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Group */
  $handler->display->display_options['fields']['field_group3']['id'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['table'] = 'field_data_field_group3';
  $handler->display->display_options['fields']['field_group3']['field'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['label'] = '';
  $handler->display->display_options['fields']['field_group3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_group3']['alter']['path'] = 'http://library.austintexas.gov[path]';
  $handler->display->display_options['fields']['field_group3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group3']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_mr_date_and_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['delta_offset'] = '0';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '786',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'rooms';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Denied' => 'Denied',
  );
  $handler->display->display_options['path'] = 'rooms/alw';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: AMR */
  $handler = $view->new_display('page', 'AMR', 'page_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Manchaca Road Branch Rooms Calendar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
ul#months_nav {
position: absolute;
right: 0;
top: 0;
}
ul#months_nav li {
display: inline;
}
ul#months_nav li:after {
content: " |";
}
ul#months_nav li.last:after {
content: "";
}
</style>
<ul id="months_nav">
<li>2014</li>
<li><a href="/rooms/amr/2014-01">Jan</a></li>
<li><a href="/rooms/amr/2014-02">Feb</a></li>
<li><a href="/rooms/amr/2014-03">Mar</a></li>
<li><a href="/rooms/amr/2014-04">Apr</a></li>
<li><a href="/rooms/amr/2014-05">May</a></li>
<li><a href="/rooms/amr/2014-06">Jun</a></li>
<li><a href="/rooms/amr/2014-07">Jul</a></li>
<li><a href="/rooms/amr/2014-08">Aug</a></li>
<li><a href="/rooms/amr/2014-09">Sep</a></li>
<li><a href="/rooms/amr/2014-10">Oct</a></li>
<li><a href="/rooms/amr/2014-11">Nov</a></li>
<li class="last"><a href="/rooms/amr/2014-12">Dec</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'room';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'rooms' => 'rooms',
    'book_list_categories' => 0,
    'merci_equipment_group' => 0,
    'blog_topics' => 0,
    'event_titles' => 0,
    'database_subjects' => 0,
    'faq_topics' => 0,
    'ig_subjects' => 0,
    'intended_audience' => 0,
    'page_type' => 0,
    'press_release_types' => 0,
    'tags' => 0,
    'library_location' => 0,
    'library_service_audience' => 0,
    'library_service_category' => 0,
    'recycled_reads_category' => 0,
    'recycled_reads_craft_material' => 0,
    'recycled_reads_event_type' => 0,
    'recycled_reads_tag' => 0,
    'templates' => 0,
    'youth_category' => 0,
    'library_hours' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Group */
  $handler->display->display_options['fields']['field_group3']['id'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['table'] = 'field_data_field_group3';
  $handler->display->display_options['fields']['field_group3']['field'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['label'] = '';
  $handler->display->display_options['fields']['field_group3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_group3']['alter']['path'] = 'http://library.austintexas.gov[path]';
  $handler->display->display_options['fields']['field_group3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group3']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_mr_date_and_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['delta_offset'] = '0';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '787',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'rooms';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Denied' => 'Denied',
  );
  $handler->display->display_options['path'] = 'rooms/amr';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: AMI */
  $handler = $view->new_display('page', 'AMI', 'page_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Milwood Branch Rooms Calendar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
ul#months_nav {
position: absolute;
right: 0;
top: 0;
}
ul#months_nav li {
display: inline;
}
ul#months_nav li:after {
content: " |";
}
ul#months_nav li.last:after {
content: "";
}
</style>
<ul id="months_nav">
<li>2014</li>
<li><a href="/rooms/ami/2014-01">Jan</a></li>
<li><a href="/rooms/ami/2014-02">Feb</a></li>
<li><a href="/rooms/ami/2014-03">Mar</a></li>
<li><a href="/rooms/ami/2014-04">Apr</a></li>
<li><a href="/rooms/ami/2014-05">May</a></li>
<li><a href="/rooms/ami/2014-06">Jun</a></li>
<li><a href="/rooms/ami/2014-07">Jul</a></li>
<li><a href="/rooms/ami/2014-08">Aug</a></li>
<li><a href="/rooms/ami/2014-09">Sep</a></li>
<li><a href="/rooms/ami/2014-10">Oct</a></li>
<li><a href="/rooms/ami/2014-11">Nov</a></li>
<li class="last"><a href="/rooms/ami/2014-12">Dec</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'room';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'rooms' => 'rooms',
    'book_list_categories' => 0,
    'merci_equipment_group' => 0,
    'blog_topics' => 0,
    'event_titles' => 0,
    'database_subjects' => 0,
    'faq_topics' => 0,
    'ig_subjects' => 0,
    'intended_audience' => 0,
    'page_type' => 0,
    'press_release_types' => 0,
    'tags' => 0,
    'library_location' => 0,
    'library_service_audience' => 0,
    'library_service_category' => 0,
    'recycled_reads_category' => 0,
    'recycled_reads_craft_material' => 0,
    'recycled_reads_event_type' => 0,
    'recycled_reads_tag' => 0,
    'templates' => 0,
    'youth_category' => 0,
    'library_hours' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Group */
  $handler->display->display_options['fields']['field_group3']['id'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['table'] = 'field_data_field_group3';
  $handler->display->display_options['fields']['field_group3']['field'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['label'] = '';
  $handler->display->display_options['fields']['field_group3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_group3']['alter']['path'] = 'http://library.austintexas.gov[path]';
  $handler->display->display_options['fields']['field_group3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group3']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_mr_date_and_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['delta_offset'] = '0';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '788',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'rooms';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Denied' => 'Denied',
  );
  $handler->display->display_options['path'] = 'rooms/ami';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: ANV */
  $handler = $view->new_display('page', 'ANV', 'page_13');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'North Village Branch Rooms Calendar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
ul#months_nav {
position: absolute;
right: 0;
top: 0;
}
ul#months_nav li {
display: inline;
}
ul#months_nav li:after {
content: " |";
}
ul#months_nav li.last:after {
content: "";
}
</style>
<ul id="months_nav">
<li>2014</li>
<li><a href="/rooms/anv/2014-01">Jan</a></li>
<li><a href="/rooms/anv/2014-02">Feb</a></li>
<li><a href="/rooms/anv/2014-03">Mar</a></li>
<li><a href="/rooms/anv/2014-04">Apr</a></li>
<li><a href="/rooms/anv/2014-05">May</a></li>
<li><a href="/rooms/anv/2014-06">Jun</a></li>
<li><a href="/rooms/anv/2014-07">Jul</a></li>
<li><a href="/rooms/anv/2014-08">Aug</a></li>
<li><a href="/rooms/anv/2014-09">Sep</a></li>
<li><a href="/rooms/anv/2014-10">Oct</a></li>
<li><a href="/rooms/anv/2014-11">Nov</a></li>
<li class="last"><a href="/rooms/anv/2014-12">Dec</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'room';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'rooms' => 'rooms',
    'book_list_categories' => 0,
    'merci_equipment_group' => 0,
    'blog_topics' => 0,
    'event_titles' => 0,
    'database_subjects' => 0,
    'faq_topics' => 0,
    'ig_subjects' => 0,
    'intended_audience' => 0,
    'page_type' => 0,
    'press_release_types' => 0,
    'tags' => 0,
    'library_location' => 0,
    'library_service_audience' => 0,
    'library_service_category' => 0,
    'recycled_reads_category' => 0,
    'recycled_reads_craft_material' => 0,
    'recycled_reads_event_type' => 0,
    'recycled_reads_tag' => 0,
    'templates' => 0,
    'youth_category' => 0,
    'library_hours' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Group */
  $handler->display->display_options['fields']['field_group3']['id'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['table'] = 'field_data_field_group3';
  $handler->display->display_options['fields']['field_group3']['field'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['label'] = '';
  $handler->display->display_options['fields']['field_group3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_group3']['alter']['path'] = 'http://library.austintexas.gov[path]';
  $handler->display->display_options['fields']['field_group3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group3']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_mr_date_and_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['delta_offset'] = '0';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '789',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'rooms';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Denied' => 'Denied',
  );
  $handler->display->display_options['path'] = 'rooms/anv';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: AOQ */
  $handler = $view->new_display('page', 'AOQ', 'page_14');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Old Quarry Branch Rooms Calendar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
ul#months_nav {
position: absolute;
right: 0;
top: 0;
}
ul#months_nav li {
display: inline;
}
ul#months_nav li:after {
content: " |";
}
ul#months_nav li.last:after {
content: "";
}
</style>
<ul id="months_nav">
<li>2014</li>
<li><a href="/rooms/aoq/2014-01">Jan</a></li>
<li><a href="/rooms/aoq/2014-02">Feb</a></li>
<li><a href="/rooms/aoq/2014-03">Mar</a></li>
<li><a href="/rooms/aoq/2014-04">Apr</a></li>
<li><a href="/rooms/aoq/2014-05">May</a></li>
<li><a href="/rooms/aoq/2014-06">Jun</a></li>
<li><a href="/rooms/aoq/2014-07">Jul</a></li>
<li><a href="/rooms/aoq/2014-08">Aug</a></li>
<li><a href="/rooms/aoq/2014-09">Sep</a></li>
<li><a href="/rooms/aoq/2014-10">Oct</a></li>
<li><a href="/rooms/aoq/2014-11">Nov</a></li>
<li class="last"><a href="/rooms/aoq/2014-12">Dec</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'room';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'rooms' => 'rooms',
    'book_list_categories' => 0,
    'merci_equipment_group' => 0,
    'blog_topics' => 0,
    'event_titles' => 0,
    'database_subjects' => 0,
    'faq_topics' => 0,
    'ig_subjects' => 0,
    'intended_audience' => 0,
    'page_type' => 0,
    'press_release_types' => 0,
    'tags' => 0,
    'library_location' => 0,
    'library_service_audience' => 0,
    'library_service_category' => 0,
    'recycled_reads_category' => 0,
    'recycled_reads_craft_material' => 0,
    'recycled_reads_event_type' => 0,
    'recycled_reads_tag' => 0,
    'templates' => 0,
    'youth_category' => 0,
    'library_hours' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Group */
  $handler->display->display_options['fields']['field_group3']['id'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['table'] = 'field_data_field_group3';
  $handler->display->display_options['fields']['field_group3']['field'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['label'] = '';
  $handler->display->display_options['fields']['field_group3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_group3']['alter']['path'] = 'http://library.austintexas.gov[path]';
  $handler->display->display_options['fields']['field_group3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group3']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_mr_date_and_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['delta_offset'] = '0';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '790',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'rooms';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Denied' => 'Denied',
  );
  $handler->display->display_options['path'] = 'rooms/aoq';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: APH */
  $handler = $view->new_display('page', 'APH', 'page_15');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Pleasant Hill Branch Rooms Calendar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
ul#months_nav {
position: absolute;
right: 0;
top: 0;
}
ul#months_nav li {
display: inline;
}
ul#months_nav li:after {
content: " |";
}
ul#months_nav li.last:after {
content: "";
}
</style>
<ul id="months_nav">
<li>2014</li>
<li><a href="/rooms/aph/2014-01">Jan</a></li>
<li><a href="/rooms/aph/2014-02">Feb</a></li>
<li><a href="/rooms/aph/2014-03">Mar</a></li>
<li><a href="/rooms/aph/2014-04">Apr</a></li>
<li><a href="/rooms/aph/2014-05">May</a></li>
<li><a href="/rooms/aph/2014-06">Jun</a></li>
<li><a href="/rooms/aph/2014-07">Jul</a></li>
<li><a href="/rooms/aph/2014-08">Aug</a></li>
<li><a href="/rooms/aph/2014-09">Sep</a></li>
<li><a href="/rooms/aph/2014-10">Oct</a></li>
<li><a href="/rooms/aph/2014-11">Nov</a></li>
<li class="last"><a href="/rooms/aph/2014-12">Dec</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'room';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'rooms' => 'rooms',
    'book_list_categories' => 0,
    'merci_equipment_group' => 0,
    'blog_topics' => 0,
    'event_titles' => 0,
    'database_subjects' => 0,
    'faq_topics' => 0,
    'ig_subjects' => 0,
    'intended_audience' => 0,
    'page_type' => 0,
    'press_release_types' => 0,
    'tags' => 0,
    'library_location' => 0,
    'library_service_audience' => 0,
    'library_service_category' => 0,
    'recycled_reads_category' => 0,
    'recycled_reads_craft_material' => 0,
    'recycled_reads_event_type' => 0,
    'recycled_reads_tag' => 0,
    'templates' => 0,
    'youth_category' => 0,
    'library_hours' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Group */
  $handler->display->display_options['fields']['field_group3']['id'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['table'] = 'field_data_field_group3';
  $handler->display->display_options['fields']['field_group3']['field'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['label'] = '';
  $handler->display->display_options['fields']['field_group3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_group3']['alter']['path'] = 'http://library.austintexas.gov[path]';
  $handler->display->display_options['fields']['field_group3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group3']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_mr_date_and_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['delta_offset'] = '0';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '791',
    1 => '792',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'rooms';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Denied' => 'Denied',
  );
  $handler->display->display_options['path'] = 'rooms/aph';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: ARZ */
  $handler = $view->new_display('page', 'ARZ', 'page_16');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ruiz Branch Rooms Calendar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
ul#months_nav {
position: absolute;
right: 0;
top: 0;
}
ul#months_nav li {
display: inline;
}
ul#months_nav li:after {
content: " |";
}
ul#months_nav li.last:after {
content: "";
}
</style>
<ul id="months_nav">
<li>2014</li>
<li><a href="/rooms/arz/2014-01">Jan</a></li>
<li><a href="/rooms/arz/2014-02">Feb</a></li>
<li><a href="/rooms/arz/2014-03">Mar</a></li>
<li><a href="/rooms/arz/2014-04">Apr</a></li>
<li><a href="/rooms/arz/2014-05">May</a></li>
<li><a href="/rooms/arz/2014-06">Jun</a></li>
<li><a href="/rooms/arz/2014-07">Jul</a></li>
<li><a href="/rooms/arz/2014-08">Aug</a></li>
<li><a href="/rooms/arz/2014-09">Sep</a></li>
<li><a href="/rooms/arz/2014-10">Oct</a></li>
<li><a href="/rooms/arz/2014-11">Nov</a></li>
<li class="last"><a href="/rooms/arz/2014-12">Dec</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'room';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'rooms' => 'rooms',
    'book_list_categories' => 0,
    'merci_equipment_group' => 0,
    'blog_topics' => 0,
    'event_titles' => 0,
    'database_subjects' => 0,
    'faq_topics' => 0,
    'ig_subjects' => 0,
    'intended_audience' => 0,
    'page_type' => 0,
    'press_release_types' => 0,
    'tags' => 0,
    'library_location' => 0,
    'library_service_audience' => 0,
    'library_service_category' => 0,
    'recycled_reads_category' => 0,
    'recycled_reads_craft_material' => 0,
    'recycled_reads_event_type' => 0,
    'recycled_reads_tag' => 0,
    'templates' => 0,
    'youth_category' => 0,
    'library_hours' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Group */
  $handler->display->display_options['fields']['field_group3']['id'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['table'] = 'field_data_field_group3';
  $handler->display->display_options['fields']['field_group3']['field'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['label'] = '';
  $handler->display->display_options['fields']['field_group3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_group3']['alter']['path'] = 'http://library.austintexas.gov[path]';
  $handler->display->display_options['fields']['field_group3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group3']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_mr_date_and_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['delta_offset'] = '0';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '793',
    1 => '794',
    2 => '795',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'rooms';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Denied' => 'Denied',
  );
  $handler->display->display_options['path'] = 'rooms/arz';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: ASE */
  $handler = $view->new_display('page', 'ASE', 'page_17');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Southeast Branch Rooms Calendar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
ul#months_nav {
position: absolute;
right: 0;
top: 0;
}
ul#months_nav li {
display: inline;
}
ul#months_nav li:after {
content: " |";
}
ul#months_nav li.last:after {
content: "";
}
</style>
<ul id="months_nav">
<li>2014</li>
<li><a href="/rooms/ase/2014-01">Jan</a></li>
<li><a href="/rooms/ase/2014-02">Feb</a></li>
<li><a href="/rooms/ase/2014-03">Mar</a></li>
<li><a href="/rooms/ase/2014-04">Apr</a></li>
<li><a href="/rooms/ase/2014-05">May</a></li>
<li><a href="/rooms/ase/2014-06">Jun</a></li>
<li><a href="/rooms/ase/2014-07">Jul</a></li>
<li><a href="/rooms/ase/2014-08">Aug</a></li>
<li><a href="/rooms/ase/2014-09">Sep</a></li>
<li><a href="/rooms/ase/2014-10">Oct</a></li>
<li><a href="/rooms/ase/2014-11">Nov</a></li>
<li class="last"><a href="/rooms/ase/2014-12">Dec</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'room';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'rooms' => 'rooms',
    'book_list_categories' => 0,
    'merci_equipment_group' => 0,
    'blog_topics' => 0,
    'event_titles' => 0,
    'database_subjects' => 0,
    'faq_topics' => 0,
    'ig_subjects' => 0,
    'intended_audience' => 0,
    'page_type' => 0,
    'press_release_types' => 0,
    'tags' => 0,
    'library_location' => 0,
    'library_service_audience' => 0,
    'library_service_category' => 0,
    'recycled_reads_category' => 0,
    'recycled_reads_craft_material' => 0,
    'recycled_reads_event_type' => 0,
    'recycled_reads_tag' => 0,
    'templates' => 0,
    'youth_category' => 0,
    'library_hours' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Group */
  $handler->display->display_options['fields']['field_group3']['id'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['table'] = 'field_data_field_group3';
  $handler->display->display_options['fields']['field_group3']['field'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['label'] = '';
  $handler->display->display_options['fields']['field_group3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_group3']['alter']['path'] = 'http://library.austintexas.gov[path]';
  $handler->display->display_options['fields']['field_group3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group3']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_mr_date_and_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['delta_offset'] = '0';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '796',
    1 => '797',
    2 => '798',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'rooms';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Denied' => 'Denied',
  );
  $handler->display->display_options['path'] = 'rooms/ase';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: ASR */
  $handler = $view->new_display('page', 'ASR', 'page_18');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Spicewood Springs Branch Rooms Calendar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
ul#months_nav {
position: absolute;
right: 0;
top: 0;
}
ul#months_nav li {
display: inline;
}
ul#months_nav li:after {
content: " |";
}
ul#months_nav li.last:after {
content: "";
}
</style>
<ul id="months_nav">
<li>2014</li>
<li><a href="/rooms/asr/2014-01">Jan</a></li>
<li><a href="/rooms/asr/2014-02">Feb</a></li>
<li><a href="/rooms/asr/2014-03">Mar</a></li>
<li><a href="/rooms/asr/2014-04">Apr</a></li>
<li><a href="/rooms/asr/2014-05">May</a></li>
<li><a href="/rooms/asr/2014-06">Jun</a></li>
<li><a href="/rooms/asr/2014-07">Jul</a></li>
<li><a href="/rooms/asr/2014-08">Aug</a></li>
<li><a href="/rooms/asr/2014-09">Sep</a></li>
<li><a href="/rooms/asr/2014-10">Oct</a></li>
<li><a href="/rooms/asr/2014-11">Nov</a></li>
<li class="last"><a href="/rooms/asr/2014-12">Dec</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'room';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'rooms' => 'rooms',
    'book_list_categories' => 0,
    'merci_equipment_group' => 0,
    'blog_topics' => 0,
    'event_titles' => 0,
    'database_subjects' => 0,
    'faq_topics' => 0,
    'ig_subjects' => 0,
    'intended_audience' => 0,
    'page_type' => 0,
    'press_release_types' => 0,
    'tags' => 0,
    'library_location' => 0,
    'library_service_audience' => 0,
    'library_service_category' => 0,
    'recycled_reads_category' => 0,
    'recycled_reads_craft_material' => 0,
    'recycled_reads_event_type' => 0,
    'recycled_reads_tag' => 0,
    'templates' => 0,
    'youth_category' => 0,
    'library_hours' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Group */
  $handler->display->display_options['fields']['field_group3']['id'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['table'] = 'field_data_field_group3';
  $handler->display->display_options['fields']['field_group3']['field'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['label'] = '';
  $handler->display->display_options['fields']['field_group3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_group3']['alter']['path'] = 'http://library.austintexas.gov[path]';
  $handler->display->display_options['fields']['field_group3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group3']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_mr_date_and_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['delta_offset'] = '0';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '799',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'rooms';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Denied' => 'Denied',
  );
  $handler->display->display_options['path'] = 'rooms/asr';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: ATB */
  $handler = $view->new_display('page', 'ATB', 'page_19');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Terrazas Branch Rooms Calendar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
ul#months_nav {
position: absolute;
right: 0;
top: 0;
}
ul#months_nav li {
display: inline;
}
ul#months_nav li:after {
content: " |";
}
ul#months_nav li.last:after {
content: "";
}
</style>
<ul id="months_nav">
<li>2014</li>
<li><a href="/rooms/atb/2014-01">Jan</a></li>
<li><a href="/rooms/atb/2014-02">Feb</a></li>
<li><a href="/rooms/atb/2014-03">Mar</a></li>
<li><a href="/rooms/atb/2014-04">Apr</a></li>
<li><a href="/rooms/atb/2014-05">May</a></li>
<li><a href="/rooms/atb/2014-06">Jun</a></li>
<li><a href="/rooms/atb/2014-07">Jul</a></li>
<li><a href="/rooms/atb/2014-08">Aug</a></li>
<li><a href="/rooms/atb/2014-09">Sep</a></li>
<li><a href="/rooms/atb/2014-10">Oct</a></li>
<li><a href="/rooms/atb/2014-11">Nov</a></li>
<li class="last"><a href="/rooms/atb/2014-12">Dec</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'room';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'rooms' => 'rooms',
    'book_list_categories' => 0,
    'merci_equipment_group' => 0,
    'blog_topics' => 0,
    'event_titles' => 0,
    'database_subjects' => 0,
    'faq_topics' => 0,
    'ig_subjects' => 0,
    'intended_audience' => 0,
    'page_type' => 0,
    'press_release_types' => 0,
    'tags' => 0,
    'library_location' => 0,
    'library_service_audience' => 0,
    'library_service_category' => 0,
    'recycled_reads_category' => 0,
    'recycled_reads_craft_material' => 0,
    'recycled_reads_event_type' => 0,
    'recycled_reads_tag' => 0,
    'templates' => 0,
    'youth_category' => 0,
    'library_hours' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Group */
  $handler->display->display_options['fields']['field_group3']['id'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['table'] = 'field_data_field_group3';
  $handler->display->display_options['fields']['field_group3']['field'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['label'] = '';
  $handler->display->display_options['fields']['field_group3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_group3']['alter']['path'] = 'http://library.austintexas.gov[path]';
  $handler->display->display_options['fields']['field_group3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group3']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_mr_date_and_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['delta_offset'] = '0';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '839',
    1 => '800',
    2 => '840',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'rooms';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Denied' => 'Denied',
  );
  $handler->display->display_options['path'] = 'rooms/atb';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: ATO */
  $handler = $view->new_display('page', 'ATO', 'page_20');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Twin Oaks Branch Rooms Calendar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
ul#months_nav {
position: absolute;
right: 0;
top: 0;
}
ul#months_nav li {
display: inline;
}
ul#months_nav li:after {
content: " |";
}
ul#months_nav li.last:after {
content: "";
}
</style>
<ul id="months_nav">
<li>2014</li>
<li><a href="/rooms/ato/2014-01">Jan</a></li>
<li><a href="/rooms/ato/2014-02">Feb</a></li>
<li><a href="/rooms/ato/2014-03">Mar</a></li>
<li><a href="/rooms/ato/2014-04">Apr</a></li>
<li><a href="/rooms/ato/2014-05">May</a></li>
<li><a href="/rooms/ato/2014-06">Jun</a></li>
<li><a href="/rooms/ato/2014-07">Jul</a></li>
<li><a href="/rooms/ato/2014-08">Aug</a></li>
<li><a href="/rooms/ato/2014-09">Sep</a></li>
<li><a href="/rooms/ato/2014-10">Oct</a></li>
<li><a href="/rooms/ato/2014-11">Nov</a></li>
<li class="last"><a href="/rooms/ato/2014-12">Dec</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'room';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'rooms' => 'rooms',
    'book_list_categories' => 0,
    'merci_equipment_group' => 0,
    'blog_topics' => 0,
    'event_titles' => 0,
    'database_subjects' => 0,
    'faq_topics' => 0,
    'ig_subjects' => 0,
    'intended_audience' => 0,
    'page_type' => 0,
    'press_release_types' => 0,
    'tags' => 0,
    'library_location' => 0,
    'library_service_audience' => 0,
    'library_service_category' => 0,
    'recycled_reads_category' => 0,
    'recycled_reads_craft_material' => 0,
    'recycled_reads_event_type' => 0,
    'recycled_reads_tag' => 0,
    'templates' => 0,
    'youth_category' => 0,
    'library_hours' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Group */
  $handler->display->display_options['fields']['field_group3']['id'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['table'] = 'field_data_field_group3';
  $handler->display->display_options['fields']['field_group3']['field'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['label'] = '';
  $handler->display->display_options['fields']['field_group3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_group3']['alter']['path'] = 'http://library.austintexas.gov[path]';
  $handler->display->display_options['fields']['field_group3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group3']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_mr_date_and_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['delta_offset'] = '0';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '801',
    1 => '802',
    2 => '803',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'rooms';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Denied' => 'Denied',
  );
  $handler->display->display_options['path'] = 'rooms/ato';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: AUH */
  $handler = $view->new_display('page', 'AUH', 'page_21');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'University Hills Branch Rooms Calendar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
ul#months_nav {
position: absolute;
right: 0;
top: 0;
}
ul#months_nav li {
display: inline;
}
ul#months_nav li:after {
content: " |";
}
ul#months_nav li.last:after {
content: "";
}
</style>
<ul id="months_nav">
<li>2014</li>
<li><a href="/rooms/auh/2014-01">Jan</a></li>
<li><a href="/rooms/auh/2014-02">Feb</a></li>
<li><a href="/rooms/auh/2014-03">Mar</a></li>
<li><a href="/rooms/auh/2014-04">Apr</a></li>
<li><a href="/rooms/auh/2014-05">May</a></li>
<li><a href="/rooms/auh/2014-06">Jun</a></li>
<li><a href="/rooms/auh/2014-07">Jul</a></li>
<li><a href="/rooms/auh/2014-08">Aug</a></li>
<li><a href="/rooms/auh/2014-09">Sep</a></li>
<li><a href="/rooms/auh/2014-10">Oct</a></li>
<li><a href="/rooms/auh/2014-11">Nov</a></li>
<li class="last"><a href="/rooms/auh/2014-12">Dec</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'room';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'rooms' => 'rooms',
    'book_list_categories' => 0,
    'merci_equipment_group' => 0,
    'blog_topics' => 0,
    'event_titles' => 0,
    'database_subjects' => 0,
    'faq_topics' => 0,
    'ig_subjects' => 0,
    'intended_audience' => 0,
    'page_type' => 0,
    'press_release_types' => 0,
    'tags' => 0,
    'library_location' => 0,
    'library_service_audience' => 0,
    'library_service_category' => 0,
    'recycled_reads_category' => 0,
    'recycled_reads_craft_material' => 0,
    'recycled_reads_event_type' => 0,
    'recycled_reads_tag' => 0,
    'templates' => 0,
    'youth_category' => 0,
    'library_hours' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Group */
  $handler->display->display_options['fields']['field_group3']['id'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['table'] = 'field_data_field_group3';
  $handler->display->display_options['fields']['field_group3']['field'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['label'] = '';
  $handler->display->display_options['fields']['field_group3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_group3']['alter']['path'] = 'http://library.austintexas.gov[path]';
  $handler->display->display_options['fields']['field_group3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group3']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_mr_date_and_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['delta_offset'] = '0';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '804',
    1 => '805',
    2 => '806',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'rooms';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Denied' => 'Denied',
  );
  $handler->display->display_options['path'] = 'rooms/auh';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: AWK */
  $handler = $view->new_display('page', 'AWK', 'page_22');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Willie Mae Kirk Branch Rooms Calendar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
ul#months_nav {
position: absolute;
right: 0;
top: 0;
}
ul#months_nav li {
display: inline;
}
ul#months_nav li:after {
content: " |";
}
ul#months_nav li.last:after {
content: "";
}
</style>
<ul id="months_nav">
<li>2014</li>
<li><a href="/rooms/awk/2014-01">Jan</a></li>
<li><a href="/rooms/awk/2014-02">Feb</a></li>
<li><a href="/rooms/awk/2014-03">Mar</a></li>
<li><a href="/rooms/awk/2014-04">Apr</a></li>
<li><a href="/rooms/awk/2014-05">May</a></li>
<li><a href="/rooms/awk/2014-06">Jun</a></li>
<li><a href="/rooms/awk/2014-07">Jul</a></li>
<li><a href="/rooms/awk/2014-08">Aug</a></li>
<li><a href="/rooms/awk/2014-09">Sep</a></li>
<li><a href="/rooms/awk/2014-10">Oct</a></li>
<li><a href="/rooms/awk/2014-11">Nov</a></li>
<li class="last"><a href="/rooms/awk/2014-12">Dec</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'room';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'rooms' => 'rooms',
    'book_list_categories' => 0,
    'merci_equipment_group' => 0,
    'blog_topics' => 0,
    'event_titles' => 0,
    'database_subjects' => 0,
    'faq_topics' => 0,
    'ig_subjects' => 0,
    'intended_audience' => 0,
    'page_type' => 0,
    'press_release_types' => 0,
    'tags' => 0,
    'library_location' => 0,
    'library_service_audience' => 0,
    'library_service_category' => 0,
    'recycled_reads_category' => 0,
    'recycled_reads_craft_material' => 0,
    'recycled_reads_event_type' => 0,
    'recycled_reads_tag' => 0,
    'templates' => 0,
    'youth_category' => 0,
    'library_hours' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Group */
  $handler->display->display_options['fields']['field_group3']['id'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['table'] = 'field_data_field_group3';
  $handler->display->display_options['fields']['field_group3']['field'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['label'] = '';
  $handler->display->display_options['fields']['field_group3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_group3']['alter']['path'] = 'http://library.austintexas.gov[path]';
  $handler->display->display_options['fields']['field_group3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group3']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_mr_date_and_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['delta_offset'] = '0';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '807',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'rooms';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Denied' => 'Denied',
  );
  $handler->display->display_options['path'] = 'rooms/awk';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: AWP */
  $handler = $view->new_display('page', 'AWP', 'page_23');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Windsor Park Branch Rooms Calendar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
ul#months_nav {
position: absolute;
right: 0;
top: 0;
}
ul#months_nav li {
display: inline;
}
ul#months_nav li:after {
content: " |";
}
ul#months_nav li.last:after {
content: "";
}
</style>
<ul id="months_nav">
<li>2014</li>
<li><a href="/rooms/awp/2014-01">Jan</a></li>
<li><a href="/rooms/awp/2014-02">Feb</a></li>
<li><a href="/rooms/awp/2014-03">Mar</a></li>
<li><a href="/rooms/awp/2014-04">Apr</a></li>
<li><a href="/rooms/awp/2014-05">May</a></li>
<li><a href="/rooms/awp/2014-06">Jun</a></li>
<li><a href="/rooms/awp/2014-07">Jul</a></li>
<li><a href="/rooms/awp/2014-08">Aug</a></li>
<li><a href="/rooms/awp/2014-09">Sep</a></li>
<li><a href="/rooms/awp/2014-10">Oct</a></li>
<li><a href="/rooms/awp/2014-11">Nov</a></li>
<li class="last"><a href="/rooms/awp/2014-12">Dec</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'room';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'rooms' => 'rooms',
    'book_list_categories' => 0,
    'merci_equipment_group' => 0,
    'blog_topics' => 0,
    'event_titles' => 0,
    'database_subjects' => 0,
    'faq_topics' => 0,
    'ig_subjects' => 0,
    'intended_audience' => 0,
    'page_type' => 0,
    'press_release_types' => 0,
    'tags' => 0,
    'library_location' => 0,
    'library_service_audience' => 0,
    'library_service_category' => 0,
    'recycled_reads_category' => 0,
    'recycled_reads_craft_material' => 0,
    'recycled_reads_event_type' => 0,
    'recycled_reads_tag' => 0,
    'templates' => 0,
    'youth_category' => 0,
    'library_hours' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Group */
  $handler->display->display_options['fields']['field_group3']['id'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['table'] = 'field_data_field_group3';
  $handler->display->display_options['fields']['field_group3']['field'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['label'] = '';
  $handler->display->display_options['fields']['field_group3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_group3']['alter']['path'] = 'http://library.austintexas.gov[path]';
  $handler->display->display_options['fields']['field_group3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group3']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_mr_date_and_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['delta_offset'] = '0';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '808',
    1 => '809',
    2 => '810',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'rooms';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Denied' => 'Denied',
  );
  $handler->display->display_options['path'] = 'rooms/awp';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'rooms' => 'rooms',
    'book_list_categories' => 0,
    'merci_equipment_group' => 0,
    'blog_topics' => 0,
    'event_titles' => 0,
    'database_subjects' => 0,
    'faq_topics' => 0,
    'ig_subjects' => 0,
    'intended_audience' => 0,
    'page_type' => 0,
    'press_release_types' => 0,
    'tags' => 0,
    'library_location' => 0,
    'library_service_audience' => 0,
    'library_service_category' => 0,
    'recycled_reads_category' => 0,
    'recycled_reads_craft_material' => 0,
    'recycled_reads_event_type' => 0,
    'recycled_reads_tag' => 0,
    'templates' => 0,
    'youth_category' => 0,
    'library_hours' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_mr_date_and_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['delta_offset'] = '0';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['arguments']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['arguments']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['arguments']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['arguments']['field_mr_date_and_time_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_mr_date_and_time_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_mr_date_and_time_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_mr_date_and_time_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_mr_date_and_time_value']['use_fromto'] = 'no';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'rooms' => 'rooms',
  );
  $handler->display->display_options['argument_input'] = array(
    'field_mr_date_and_time_value' => array(
      'type' => 'none',
      'context' => 'entity:node.field_date_and_time',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Date',
    ),
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Room ID',
    ),
  );
  $handler->display->display_options['link_to_view'] = '1';
  $handler->display->display_options['inherit_panels_path'] = '0';

  /* Display: AYB */
  $handler = $view->new_display('page', 'AYB', 'page_24');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Yarborough Branch Rooms Calendar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
ul#months_nav {
position: absolute;
right: 0;
top: 0;
}
ul#months_nav li {
display: inline;
}
ul#months_nav li:after {
content: " |";
}
ul#months_nav li.last:after {
content: "";
}
</style>
<ul id="months_nav">
<li>2014</li>
<li><a href="/rooms/ayb/2014-01">Jan</a></li>
<li><a href="/rooms/ayb/2014-02">Feb</a></li>
<li><a href="/rooms/ayb/2014-03">Mar</a></li>
<li><a href="/rooms/ayb/2014-04">Apr</a></li>
<li><a href="/rooms/ayb/2014-05">May</a></li>
<li><a href="/rooms/ayb/2014-06">Jun</a></li>
<li><a href="/rooms/ayb/2014-07">Jul</a></li>
<li><a href="/rooms/ayb/2014-08">Aug</a></li>
<li><a href="/rooms/ayb/2014-09">Sep</a></li>
<li><a href="/rooms/ayb/2014-10">Oct</a></li>
<li><a href="/rooms/ayb/2014-11">Nov</a></li>
<li class="last"><a href="/rooms/ayb/2014-12">Dec</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'room';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'rooms' => 'rooms',
    'book_list_categories' => 0,
    'merci_equipment_group' => 0,
    'blog_topics' => 0,
    'event_titles' => 0,
    'database_subjects' => 0,
    'faq_topics' => 0,
    'ig_subjects' => 0,
    'intended_audience' => 0,
    'page_type' => 0,
    'press_release_types' => 0,
    'tags' => 0,
    'library_location' => 0,
    'library_service_audience' => 0,
    'library_service_category' => 0,
    'recycled_reads_category' => 0,
    'recycled_reads_craft_material' => 0,
    'recycled_reads_event_type' => 0,
    'recycled_reads_tag' => 0,
    'templates' => 0,
    'youth_category' => 0,
    'library_hours' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Group */
  $handler->display->display_options['fields']['field_group3']['id'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['table'] = 'field_data_field_group3';
  $handler->display->display_options['fields']['field_group3']['field'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['label'] = '';
  $handler->display->display_options['fields']['field_group3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_group3']['alter']['path'] = 'http://library.austintexas.gov[path]';
  $handler->display->display_options['fields']['field_group3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group3']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'just_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_mr_date_and_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['delta_offset'] = '0';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '811',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'rooms';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Denied' => 'Denied',
  );
  $handler->display->display_options['path'] = 'rooms/ayb';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['apl_rooms_2014'] = $view;

  $view = new view();
  $view->name = 'groups_2014';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Groups';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'views_content_cache';
  $handler->display->display_options['cache']['results_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['keys'] = array(
    'comment' => array(
      'changed' => 0,
    ),
    'node' => array(
      'group' => 'group',
      'ahc_advertisement' => 0,
      'ahc_page' => 0,
      'alert' => 0,
      'page' => 0,
      'blog' => 0,
      'book_list' => 0,
      'database' => 0,
      'event' => 0,
      'faq' => 0,
      'highighted_images' => 0,
      'image_asset' => 0,
      'image_rotator' => 0,
      'information_guide' => 0,
      'merci_meeting_room' => 0,
      'merci_reservation' => 0,
      'migrate_extras_media_example' => 0,
      'new_information_guides' => 0,
      'panel' => 0,
      'article' => 0,
      'room_reservation' => 0,
      'services' => 0,
      'slide' => 0,
      'suggest_a_title' => 0,
      'webform' => 0,
    ),
    'node_only' => array(
      'node_changed' => 'node_changed',
    ),
  );
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
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
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Group';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Verified */
  $handler->display->display_options['fields']['field_verified_group']['id'] = 'field_verified_group';
  $handler->display->display_options['fields']['field_verified_group']['table'] = 'field_data_field_verified_group';
  $handler->display->display_options['fields']['field_verified_group']['field'] = 'field_verified_group';
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
    'group' => 'group',
  );

  /* Display: Groups */
  $handler = $view->new_display('panel_pane', 'Groups', 'panel_pane_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    19 => '19',
  );
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'name' => 'name',
    'field_phone_profile' => 'field_phone_profile',
    'mail' => 'mail',
    'field_verified_group' => 'field_verified_group',
    'created' => 'created',
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
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phone_profile' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_verified_group' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Group';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Representative';
  /* Field: Profile: Phone */
  $handler->display->display_options['fields']['field_phone_profile']['id'] = 'field_phone_profile';
  $handler->display->display_options['fields']['field_phone_profile']['table'] = 'field_data_field_phone_profile';
  $handler->display->display_options['fields']['field_phone_profile']['field'] = 'field_phone_profile';
  $handler->display->display_options['fields']['field_phone_profile']['relationship'] = 'profile';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'uid';
  /* Field: Content: Verified */
  $handler->display->display_options['fields']['field_verified_group']['id'] = 'field_verified_group';
  $handler->display->display_options['fields']['field_verified_group']['table'] = 'field_data_field_verified_group';
  $handler->display->display_options['fields']['field_verified_group']['field'] = 'field_verified_group';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';

  /* Display: Groups List */
  $handler = $view->new_display('panel_pane', 'Groups List', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Groups';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No groups for this user. <a href="node/add/group">Add a Group</a>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_groups_profile2']['id'] = 'reverse_field_groups_profile2';
  $handler->display->display_options['relationships']['reverse_field_groups_profile2']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_groups_profile2']['field'] = 'reverse_field_groups_profile2';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Profile: User uid */
  $handler->display->display_options['arguments']['user']['id'] = 'user';
  $handler->display->display_options['arguments']['user']['table'] = 'profile';
  $handler->display->display_options['arguments']['user']['field'] = 'user';
  $handler->display->display_options['arguments']['user']['relationship'] = 'reverse_field_groups_profile2';
  $handler->display->display_options['arguments']['user']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['user']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['user']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['user']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['user']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['argument_input'] = array(
    'user' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Profile: User uid',
    ),
  );

  /* Display: Content pane 2 */
  $handler = $view->new_display('panel_pane', 'Content pane 2', 'panel_pane_3');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No Groups found for this user.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_groups_profile2']['id'] = 'reverse_field_groups_profile2';
  $handler->display->display_options['relationships']['reverse_field_groups_profile2']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_groups_profile2']['field'] = 'reverse_field_groups_profile2';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Profile: User uid */
  $handler->display->display_options['arguments']['user']['id'] = 'user';
  $handler->display->display_options['arguments']['user']['table'] = 'profile';
  $handler->display->display_options['arguments']['user']['field'] = 'user';
  $handler->display->display_options['arguments']['user']['relationship'] = 'reverse_field_groups_profile2';
  $handler->display->display_options['arguments']['user']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['user']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['user']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['user']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['user']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['argument_input'] = array(
    'user' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Profile: User uid',
    ),
  );

  /* Display: References */
  $handler = $view->new_display('references', 'References', 'references_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'references_style';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'references_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Groups2 (field_groups2) - reverse */
  $handler->display->display_options['relationships']['reverse_field_groups2_profile2']['id'] = 'reverse_field_groups2_profile2';
  $handler->display->display_options['relationships']['reverse_field_groups2_profile2']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_groups2_profile2']['field'] = 'reverse_field_groups2_profile2';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Profile: Groups2 (field_groups2) */
  $handler->display->display_options['arguments']['field_groups2_nid']['id'] = 'field_groups2_nid';
  $handler->display->display_options['arguments']['field_groups2_nid']['table'] = 'field_data_field_groups2';
  $handler->display->display_options['arguments']['field_groups2_nid']['field'] = 'field_groups2_nid';
  $handler->display->display_options['arguments']['field_groups2_nid']['relationship'] = 'reverse_field_groups2_profile2';
  $handler->display->display_options['arguments']['field_groups2_nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_groups2_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_groups2_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_groups2_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_groups2_nid']['summary_options']['items_per_page'] = '25';

  /* Display: Groups Page */
  $handler = $view->new_display('page', 'Groups Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Groups';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    19 => '19',
  );
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'edit_node_1' => 'edit_node_1',
    'title' => 'title',
    'name' => 'name',
    'field_phone_profile' => 'field_phone_profile',
    'mail' => 'mail',
    'field_verified_group' => 'field_verified_group',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'edit_node_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phone_profile' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_verified_group' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'group_representative' => 'group_representative',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Group';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[edit_node]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Representative';
  /* Field: Profile: Phone */
  $handler->display->display_options['fields']['field_phone_profile']['id'] = 'field_phone_profile';
  $handler->display->display_options['fields']['field_phone_profile']['table'] = 'field_data_field_phone_profile';
  $handler->display->display_options['fields']['field_phone_profile']['field'] = 'field_phone_profile';
  $handler->display->display_options['fields']['field_phone_profile']['relationship'] = 'profile';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'uid';
  $handler->display->display_options['fields']['mail']['label'] = 'Email';
  /* Field: Content: Verified */
  $handler->display->display_options['fields']['field_verified_group']['id'] = 'field_verified_group';
  $handler->display->display_options['fields']['field_verified_group']['table'] = 'field_data_field_verified_group';
  $handler->display->display_options['fields']['field_verified_group']['field'] = 'field_verified_group';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node_1']['id'] = 'edit_node_1';
  $handler->display->display_options['fields']['edit_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node_1']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node_1']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
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
    'group' => 'group',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Verified (field_verified_group) */
  $handler->display->display_options['filters']['field_verified_group_value_1']['id'] = 'field_verified_group_value_1';
  $handler->display->display_options['filters']['field_verified_group_value_1']['table'] = 'field_data_field_verified_group';
  $handler->display->display_options['filters']['field_verified_group_value_1']['field'] = 'field_verified_group_value';
  $handler->display->display_options['filters']['field_verified_group_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_verified_group_value_1']['group'] = 2;
  /* Filter criterion: Content: Verified (field_verified_group) */
  $handler->display->display_options['filters']['field_verified_group_value']['id'] = 'field_verified_group_value';
  $handler->display->display_options['filters']['field_verified_group_value']['table'] = 'field_data_field_verified_group';
  $handler->display->display_options['filters']['field_verified_group_value']['field'] = 'field_verified_group_value';
  $handler->display->display_options['filters']['field_verified_group_value']['value'] = array(
    'Verified' => 'Verified',
    'Needs Verification' => 'Needs Verification',
    'Verification In Process...' => 'Verification In Process...',
    'Denied' => 'Denied',
  );
  $handler->display->display_options['filters']['field_verified_group_value']['group'] = 2;
  $handler->display->display_options['filters']['field_verified_group_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_verified_group_value']['expose']['operator_id'] = 'field_verified_group_value_op';
  $handler->display->display_options['filters']['field_verified_group_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_verified_group_value']['expose']['operator'] = 'field_verified_group_value_op';
  $handler->display->display_options['filters']['field_verified_group_value']['expose']['identifier'] = 'field_verified_group_value';
  $handler->display->display_options['filters']['field_verified_group_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_verified_group_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
  );
  $handler->display->display_options['path'] = 'groups';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'field_verified_group' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Created by';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'uid';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $export['groups_2014'] = $view;

  $view = new view();
  $view->name = 'room_calendar';
  $view->description = '';
  $view->tag = 'Calendar';
  $view->base_table = 'node';
  $view->human_name = 'Room Calendar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['hide_alter_empty'] = FALSE;
  /* Sort criterion: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-mr-date-and-time/month';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-mr-date-and-time/week';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Day */
  $handler = $view->new_display('page', 'Day', 'page_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );
  $handler->display->display_options['path'] = 'rooms2/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'year';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-mr-date-and-time/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'acys';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'block_2');
  $handler->display->display_options['display_description'] = 'Upcoming events block';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_mr_date_and_time.field_mr_date_and_time_value' => 'field_data_field_mr_date_and_time.field_mr_date_and_time_value',
  );

  /* Display: Reservations by Day */
  $handler = $view->new_display('panel_pane', 'Reservations by Day', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['arguments']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['arguments']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['arguments']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['arguments']['field_mr_date_and_time_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_mr_date_and_time_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_mr_date_and_time_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['argument_input'] = array(
    'field_mr_date_and_time_value' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '2',
      'fixed' => '',
      'label' => 'Content: Date and Time -  start date (field_mr_date_and_time)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['room_calendar'] = $view;

  $view = new view();
  $view->name = 'room_reservations_2014';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Room Reservations 2014';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Room Reservations';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'views_content_cache';
  $handler->display->display_options['cache']['results_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['keys'] = array(
    'comment' => array(
      'changed' => 0,
    ),
    'node' => array(
      'room_reservation' => 'room_reservation',
      'ahc_advertisement' => 0,
      'ahc_page' => 0,
      'alert' => 0,
      'page' => 0,
      'blog' => 0,
      'book_list' => 0,
      'database' => 0,
      'event' => 0,
      'faq' => 0,
      'group' => 0,
      'highighted_images' => 0,
      'image_asset' => 0,
      'image_rotator' => 0,
      'information_guide' => 0,
      'merci_meeting_room' => 0,
      'merci_reservation' => 0,
      'migrate_extras_media_example' => 0,
      'new_information_guides' => 0,
      'panel' => 0,
      'article' => 0,
      'services' => 0,
      'slide' => 0,
      'suggest_a_title' => 0,
      'webform' => 0,
    ),
    'node_only' => array(
      'node_changed' => 'node_changed',
    ),
  );
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'title_1' => 'title_1',
    'field_room2b' => 'field_room2b',
    'field_location2' => 'field_location2',
    'field_mr_date_and_time' => 'field_mr_date_and_time',
    'field_status' => 'field_status',
    'created' => 'created',
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
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_room2b' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mr_date_and_time' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<h3>No results for this filter.</h3>';
  /* Relationship: Field: Location (field_location) */
  $handler->display->display_options['relationships']['field_location_tid']['id'] = 'field_location_tid';
  $handler->display->display_options['relationships']['field_location_tid']['table'] = 'field_data_field_location';
  $handler->display->display_options['relationships']['field_location_tid']['field'] = 'field_location_tid';
  $handler->display->display_options['relationships']['field_location_tid']['label'] = 'location';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_group3_target_id']['id'] = 'field_group3_target_id';
  $handler->display->display_options['relationships']['field_group3_target_id']['table'] = 'field_data_field_group3';
  $handler->display->display_options['relationships']['field_group3_target_id']['field'] = 'field_group3_target_id';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '[path]';
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_group3_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Group';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[path]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Topic';
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Room */
  $handler->display->display_options['fields']['field_room2b']['id'] = 'field_room2b';
  $handler->display->display_options['fields']['field_room2b']['table'] = 'field_data_field_room2b';
  $handler->display->display_options['fields']['field_room2b']['field'] = 'field_room2b';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location2']['id'] = 'field_location2';
  $handler->display->display_options['fields']['field_location2']['table'] = 'field_data_field_location2';
  $handler->display->display_options['fields']['field_location2']['field'] = 'field_location2';
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = 'Time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Timestamp';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
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
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
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
    'room_reservation' => 'room_reservation',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    19 => '19',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'title' => 'title',
    'title_1' => 'title_1',
    'name' => 'name',
    'field_mr_date_and_time' => 'field_mr_date_and_time',
    'field_status' => 'field_status',
    'created' => 'created',
    'field_full_name2' => 'field_full_name2',
    'field_phone2' => 'field_phone2',
    'field_email2' => 'field_email2',
    'name_1' => 'name_1',
    'mail' => 'mail',
    'field_phone_profile' => 'field_phone_profile',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mr_date_and_time' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_full_name2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phone2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phone_profile' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<h3>Please select one or more Locations, and/or a specific Date or range of Dates, and/or one or more Statuses, and then select "Filter".</h3>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_group3_target_id']['id'] = 'field_group3_target_id';
  $handler->display->display_options['relationships']['field_group3_target_id']['table'] = 'field_data_field_group3';
  $handler->display->display_options['relationships']['field_group3_target_id']['field'] = 'field_group3_target_id';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'rooms' => 'rooms',
    'book_list_categories' => 0,
    'merci_equipment_group' => 0,
    'blog_topics' => 0,
    'event_titles' => 0,
    'database_subjects' => 0,
    'faq_topics' => 0,
    'ig_subjects' => 0,
    'intended_audience' => 0,
    'page_type' => 0,
    'press_release_types' => 0,
    'tags' => 0,
    'library_location' => 0,
    'library_service_audience' => 0,
    'library_service_category' => 0,
    'recycled_reads_category' => 0,
    'recycled_reads_craft_material' => 0,
    'recycled_reads_event_type' => 0,
    'recycled_reads_tag' => 0,
    'templates' => 0,
    'youth_category' => 0,
    'library_hours' => 0,
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node_1']['id'] = 'edit_node_1';
  $handler->display->display_options['fields']['edit_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node_1']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node_1']['label'] = '';
  $handler->display->display_options['fields']['edit_node_1']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '[path]';
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_group3_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Group';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[path]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Topic';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Room';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = 'Time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Timestamp';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name_1']['label'] = 'Author';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'uid';
  $handler->display->display_options['fields']['mail']['label'] = 'Author E-mail';
  /* Field: Profile: Phone */
  $handler->display->display_options['fields']['field_phone_profile']['id'] = 'field_phone_profile';
  $handler->display->display_options['fields']['field_phone_profile']['table'] = 'field_data_field_phone_profile';
  $handler->display->display_options['fields']['field_phone_profile']['field'] = 'field_phone_profile';
  $handler->display->display_options['fields']['field_phone_profile']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_phone_profile']['label'] = 'Author Phone';
  /* Field: Content: Full Name */
  $handler->display->display_options['fields']['field_full_name2']['id'] = 'field_full_name2';
  $handler->display->display_options['fields']['field_full_name2']['table'] = 'field_data_field_full_name2';
  $handler->display->display_options['fields']['field_full_name2']['field'] = 'field_full_name2';
  $handler->display->display_options['fields']['field_full_name2']['relationship'] = 'field_group3_target_id';
  $handler->display->display_options['fields']['field_full_name2']['label'] = 'Contact';
  $handler->display->display_options['fields']['field_full_name2']['element_label_colon'] = FALSE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone2']['id'] = 'field_phone2';
  $handler->display->display_options['fields']['field_phone2']['table'] = 'field_data_field_phone2';
  $handler->display->display_options['fields']['field_phone2']['field'] = 'field_phone2';
  $handler->display->display_options['fields']['field_phone2']['relationship'] = 'field_group3_target_id';
  $handler->display->display_options['fields']['field_phone2']['label'] = 'Contact Phone';
  $handler->display->display_options['fields']['field_phone2']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email2']['id'] = 'field_email2';
  $handler->display->display_options['fields']['field_email2']['table'] = 'field_data_field_email2';
  $handler->display->display_options['fields']['field_email2']['field'] = 'field_email2';
  $handler->display->display_options['fields']['field_email2']['relationship'] = 'field_group3_target_id';
  $handler->display->display_options['fields']['field_email2']['label'] = 'Contact Email';
  $handler->display->display_options['fields']['field_email2']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
    'room_reservation' => 'room_reservation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Location taxonomy2 (field_location_taxonomy2) */
  $handler->display->display_options['filters']['field_location_taxonomy2_tid']['id'] = 'field_location_taxonomy2_tid';
  $handler->display->display_options['filters']['field_location_taxonomy2_tid']['table'] = 'field_data_field_location_taxonomy2';
  $handler->display->display_options['filters']['field_location_taxonomy2_tid']['field'] = 'field_location_taxonomy2_tid';
  $handler->display->display_options['filters']['field_location_taxonomy2_tid']['value'] = array(
    182 => '182',
  );
  $handler->display->display_options['filters']['field_location_taxonomy2_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_location_taxonomy2_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_taxonomy2_tid']['expose']['operator_id'] = 'field_location_taxonomy2_tid_op';
  $handler->display->display_options['filters']['field_location_taxonomy2_tid']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_location_taxonomy2_tid']['expose']['operator'] = 'field_location_taxonomy2_tid_op';
  $handler->display->display_options['filters']['field_location_taxonomy2_tid']['expose']['identifier'] = 'field_location_taxonomy2_tid';
  $handler->display->display_options['filters']['field_location_taxonomy2_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_location_taxonomy2_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_location_taxonomy2_tid']['expose']['remember_roles'] = array(
    2 => 0,
    3 => '3',
    19 => '19',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    20 => 0,
  );
  $handler->display->display_options['filters']['field_location_taxonomy2_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_location_taxonomy2_tid']['vocabulary'] = 'library_location';
  /* Filter criterion: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['group'] = 1;
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['operator_id'] = 'field_mr_date_and_time_value_op';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['operator'] = 'field_mr_date_and_time_value_op';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['identifier'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
  );
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['year_range'] = '-1:+2';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
  );
  $handler->display->display_options['path'] = 'room-reservations';

  /* Display: Room Reservation by ID (nid) */
  $handler = $view->new_display('panel_pane', 'Room Reservation by ID (nid)', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_room' => 'field_room',
    'field_location2' => 'field_location2',
    'field_mr_date_and_time' => 'field_mr_date_and_time',
    'field_status' => 'field_status',
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
    'field_room' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mr_date_and_time' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_group3_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Group';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[path]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Topic';
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Room */
  $handler->display->display_options['fields']['field_room']['id'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['table'] = 'field_data_field_room';
  $handler->display->display_options['fields']['field_room']['field'] = 'field_room';
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = 'Time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Field: Content: Full Name */
  $handler->display->display_options['fields']['field_full_name2']['id'] = 'field_full_name2';
  $handler->display->display_options['fields']['field_full_name2']['table'] = 'field_data_field_full_name2';
  $handler->display->display_options['fields']['field_full_name2']['field'] = 'field_full_name2';
  $handler->display->display_options['fields']['field_full_name2']['relationship'] = 'field_group3_target_id';
  $handler->display->display_options['fields']['field_full_name2']['label'] = 'Contact';
  $handler->display->display_options['fields']['field_full_name2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_full_name2']['hide_empty'] = TRUE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone2']['id'] = 'field_phone2';
  $handler->display->display_options['fields']['field_phone2']['table'] = 'field_data_field_phone2';
  $handler->display->display_options['fields']['field_phone2']['field'] = 'field_phone2';
  $handler->display->display_options['fields']['field_phone2']['relationship'] = 'field_group3_target_id';
  $handler->display->display_options['fields']['field_phone2']['label'] = 'Contact Phone';
  $handler->display->display_options['fields']['field_phone2']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email2']['id'] = 'field_email2';
  $handler->display->display_options['fields']['field_email2']['table'] = 'field_data_field_email2';
  $handler->display->display_options['fields']['field_email2']['field'] = 'field_email2';
  $handler->display->display_options['fields']['field_email2']['relationship'] = 'field_group3_target_id';
  $handler->display->display_options['fields']['field_email2']['label'] = 'Contact Email';
  $handler->display->display_options['fields']['field_email2']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['arguments']['nid_2']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_2']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_2']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid_2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['argument_input'] = array(
    'nid_2' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Room Reservations by Room (tid) */
  $handler = $view->new_display('panel_pane', 'Room Reservations by Room (tid)', 'panel_pane_2');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'title' => 'title',
    'title_1' => 'title_1',
    'field_mr_date_and_time' => 'field_mr_date_and_time',
    'created' => 'created',
    'field_status' => 'field_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mr_date_and_time' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Location (field_location) */
  $handler->display->display_options['relationships']['field_location_tid']['id'] = 'field_location_tid';
  $handler->display->display_options['relationships']['field_location_tid']['table'] = 'field_data_field_location';
  $handler->display->display_options['relationships']['field_location_tid']['field'] = 'field_location_tid';
  $handler->display->display_options['relationships']['field_location_tid']['label'] = 'location';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_group3_target_id']['id'] = 'field_group3_target_id';
  $handler->display->display_options['relationships']['field_group3_target_id']['table'] = 'field_data_field_group3';
  $handler->display->display_options['relationships']['field_group3_target_id']['field'] = 'field_group3_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_group3_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Group';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[path]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Topic';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = 'Time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Timestamp';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['sorts']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'rooms' => 'rooms',
  );
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'empty';
  /* Contextual filter: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['arguments']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['arguments']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['arguments']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['arguments']['field_mr_date_and_time_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_mr_date_and_time_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_mr_date_and_time_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_mr_date_and_time_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_mr_date_and_time_value']['granularity'] = 'day';
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
    'room_reservation' => 'room_reservation',
  );
  /* Filter criterion: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['operator_id'] = 'field_mr_date_and_time_value_op';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['operator'] = 'field_mr_date_and_time_value_op';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['identifier'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
  );
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['year_range'] = '-1:+2';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
  );
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID',
    ),
    'field_mr_date_and_time_value' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Date',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Room Reservations by User (uid) */
  $handler = $view->new_display('panel_pane', 'Room Reservations by User (uid)', 'panel_pane_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_group3' => 'field_group3',
    'field_purpose_of_meeting' => 'field_purpose_of_meeting',
    'field_room' => 'field_room',
    'field_mr_date_and_time' => 'field_mr_date_and_time',
    'field_status' => 'field_status',
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
    'field_group3' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_purpose_of_meeting' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_room' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mr_date_and_time' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_group3_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Group';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[path]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Topic';
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Room */
  $handler->display->display_options['fields']['field_room']['id'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['table'] = 'field_data_field_room';
  $handler->display->display_options['fields']['field_room']['field'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['element_label_colon'] = FALSE;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = 'Time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
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
    'room_reservation' => 'room_reservation',
  );
  /* Filter criterion: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['operator_id'] = 'field_mr_date_and_time_value_op';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['operator'] = 'field_mr_date_and_time_value_op';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['identifier'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
  );
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['year_range'] = '-1:+2';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
  );
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Author uid',
    ),
  );

  /* Display: Room Reservations by Group */
  $handler = $view->new_display('panel_pane', 'Room Reservations by Group', 'panel_pane_4');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'title' => 'title',
    'title_1' => 'title_1',
    'name' => 'name',
    'field_mr_date_and_time' => 'field_mr_date_and_time',
    'field_status' => 'field_status',
    'created' => 'created',
    'field_full_name2' => 'field_full_name2',
    'field_phone2' => 'field_phone2',
    'field_email2' => 'field_email2',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mr_date_and_time' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_full_name2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phone2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_group3_target_id']['id'] = 'field_group3_target_id';
  $handler->display->display_options['relationships']['field_group3_target_id']['table'] = 'field_data_field_group3';
  $handler->display->display_options['relationships']['field_group3_target_id']['field'] = 'field_group3_target_id';
  $handler->display->display_options['relationships']['field_group3_target_id']['label'] = 'fg3';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'rooms' => 'rooms',
    'book_list_categories' => 0,
    'merci_equipment_group' => 0,
    'blog_topics' => 0,
    'event_titles' => 0,
    'database_subjects' => 0,
    'faq_topics' => 0,
    'ig_subjects' => 0,
    'intended_audience' => 0,
    'page_type' => 0,
    'press_release_types' => 0,
    'tags' => 0,
    'library_location' => 0,
    'library_service_audience' => 0,
    'library_service_category' => 0,
    'recycled_reads_category' => 0,
    'recycled_reads_craft_material' => 0,
    'recycled_reads_event_type' => 0,
    'recycled_reads_tag' => 0,
    'templates' => 0,
    'youth_category' => 0,
    'library_hours' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '[path]';
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_group3_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Group';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[path]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Topic';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<a href="[path]">[title_1]</a>';
  $handler->display->display_options['fields']['title_1']['alter']['path'] = '<a href="[path]">[title]</a>';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Room';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = 'Date';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Timestamp';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Full Name */
  $handler->display->display_options['fields']['field_full_name2']['id'] = 'field_full_name2';
  $handler->display->display_options['fields']['field_full_name2']['table'] = 'field_data_field_full_name2';
  $handler->display->display_options['fields']['field_full_name2']['field'] = 'field_full_name2';
  $handler->display->display_options['fields']['field_full_name2']['relationship'] = 'field_group3_target_id';
  $handler->display->display_options['fields']['field_full_name2']['label'] = 'Contact';
  $handler->display->display_options['fields']['field_full_name2']['element_label_colon'] = FALSE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone2']['id'] = 'field_phone2';
  $handler->display->display_options['fields']['field_phone2']['table'] = 'field_data_field_phone2';
  $handler->display->display_options['fields']['field_phone2']['field'] = 'field_phone2';
  $handler->display->display_options['fields']['field_phone2']['relationship'] = 'field_group3_target_id';
  $handler->display->display_options['fields']['field_phone2']['label'] = 'Contact Phone';
  $handler->display->display_options['fields']['field_phone2']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email2']['id'] = 'field_email2';
  $handler->display->display_options['fields']['field_email2']['table'] = 'field_data_field_email2';
  $handler->display->display_options['fields']['field_email2']['field'] = 'field_email2';
  $handler->display->display_options['fields']['field_email2']['relationship'] = 'field_group3_target_id';
  $handler->display->display_options['fields']['field_email2']['label'] = 'Contact Email';
  $handler->display->display_options['fields']['field_email2']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Group (field_group3) */
  $handler->display->display_options['arguments']['field_group3_target_id_1']['id'] = 'field_group3_target_id_1';
  $handler->display->display_options['arguments']['field_group3_target_id_1']['table'] = 'field_data_field_group3';
  $handler->display->display_options['arguments']['field_group3_target_id_1']['field'] = 'field_group3_target_id';
  $handler->display->display_options['arguments']['field_group3_target_id_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_group3_target_id_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_group3_target_id_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_group3_target_id_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_group3_target_id_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_group3_target_id_1']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_group3_target_id_1']['validate_options']['types'] = array(
    'group' => 'group',
  );
  $handler->display->display_options['arguments']['field_group3_target_id_1']['validate']['fail'] = 'empty';
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
    'room_reservation' => 'room_reservation',
  );
  /* Filter criterion: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['operator_id'] = 'field_mr_date_and_time_value_op';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['operator'] = 'field_mr_date_and_time_value_op';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['identifier'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
  );
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['year_range'] = '-1:+2';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
  );
  $handler->display->display_options['argument_input'] = array(
    'field_group3_target_id_1' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Group',
    ),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    19 => '19',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_room2b' => 'field_room2b',
    'field_location2' => 'field_location2',
    'field_mr_date_and_time' => 'field_mr_date_and_time',
    'field_status' => 'field_status',
    'created' => 'created',
    'title_1' => 'title_1',
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
    'field_room2b' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mr_date_and_time' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Location (field_location) */
  $handler->display->display_options['relationships']['field_location_tid']['id'] = 'field_location_tid';
  $handler->display->display_options['relationships']['field_location_tid']['table'] = 'field_data_field_location';
  $handler->display->display_options['relationships']['field_location_tid']['field'] = 'field_location_tid';
  $handler->display->display_options['relationships']['field_location_tid']['label'] = 'location';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_group3_target_id']['id'] = 'field_group3_target_id';
  $handler->display->display_options['relationships']['field_group3_target_id']['table'] = 'field_data_field_group3';
  $handler->display->display_options['relationships']['field_group3_target_id']['field'] = 'field_group3_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Meeting';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Room */
  $handler->display->display_options['fields']['field_room2b']['id'] = 'field_room2b';
  $handler->display->display_options['fields']['field_room2b']['table'] = 'field_data_field_room2b';
  $handler->display->display_options['fields']['field_room2b']['field'] = 'field_room2b';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location2']['id'] = 'field_location2';
  $handler->display->display_options['fields']['field_location2']['table'] = 'field_data_field_location2';
  $handler->display->display_options['fields']['field_location2']['field'] = 'field_location2';
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = 'Time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Timestamp';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_group3_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Group';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_group3_target_id';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
    'room_reservation' => 'room_reservation',
  );
  /* Filter criterion: Content: Room (field_room) */
  $handler->display->display_options['filters']['field_room_tid']['id'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['table'] = 'field_data_field_room';
  $handler->display->display_options['filters']['field_room_tid']['field'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['value'] = '';
  $handler->display->display_options['filters']['field_room_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_room_tid']['expose']['operator_id'] = 'field_room_tid_op';
  $handler->display->display_options['filters']['field_room_tid']['expose']['label'] = 'Room';
  $handler->display->display_options['filters']['field_room_tid']['expose']['operator'] = 'field_room_tid_op';
  $handler->display->display_options['filters']['field_room_tid']['expose']['identifier'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_room_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
  );
  $handler->display->display_options['filters']['field_room_tid']['vocabulary'] = 'rooms';
  /* Filter criterion: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['operator_id'] = 'field_mr_date_and_time_value_op';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['operator'] = 'field_mr_date_and_time_value_op';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['identifier'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
  );
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['year_range'] = '-1:+2';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'x';
  $handler->display->display_options['path'] = 'room-reservations2';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_2');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    19 => '19',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'title' => 'title',
    'title_1' => 'title_1',
    'field_room2b' => 'field_room2b',
    'field_location2' => 'field_location2',
    'field_mr_date_and_time' => 'field_mr_date_and_time',
    'field_status' => 'field_status',
    'created' => 'created',
    'edit_node' => 'edit_node',
    'mail' => 'mail',
    'field_phone_profile' => 'field_phone_profile',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_room2b' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mr_date_and_time' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phone_profile' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Location (field_location) */
  $handler->display->display_options['relationships']['field_location_tid']['id'] = 'field_location_tid';
  $handler->display->display_options['relationships']['field_location_tid']['table'] = 'field_data_field_location';
  $handler->display->display_options['relationships']['field_location_tid']['field'] = 'field_location_tid';
  $handler->display->display_options['relationships']['field_location_tid']['label'] = 'location';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_group3_target_id']['id'] = 'field_group3_target_id';
  $handler->display->display_options['relationships']['field_group3_target_id']['table'] = 'field_data_field_group3';
  $handler->display->display_options['relationships']['field_group3_target_id']['field'] = 'field_group3_target_id';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'Author';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '[path]';
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_group3_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Group';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[path]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Topic';
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Room */
  $handler->display->display_options['fields']['field_room2b']['id'] = 'field_room2b';
  $handler->display->display_options['fields']['field_room2b']['table'] = 'field_data_field_room2b';
  $handler->display->display_options['fields']['field_room2b']['field'] = 'field_room2b';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location2']['id'] = 'field_location2';
  $handler->display->display_options['fields']['field_location2']['table'] = 'field_data_field_location2';
  $handler->display->display_options['fields']['field_location2']['field'] = 'field_location2';
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = 'Time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Timestamp';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'uid';
  /* Field: Profile: Phone */
  $handler->display->display_options['fields']['field_phone_profile']['id'] = 'field_phone_profile';
  $handler->display->display_options['fields']['field_phone_profile']['table'] = 'field_data_field_phone_profile';
  $handler->display->display_options['fields']['field_phone_profile']['field'] = 'field_phone_profile';
  $handler->display->display_options['fields']['field_phone_profile']['relationship'] = 'profile';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
    'room_reservation' => 'room_reservation',
  );
  /* Filter criterion: Content: Room (field_room) */
  $handler->display->display_options['filters']['field_room_tid']['id'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['table'] = 'field_data_field_room';
  $handler->display->display_options['filters']['field_room_tid']['field'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['value'] = '';
  $handler->display->display_options['filters']['field_room_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_room_tid']['expose']['operator_id'] = 'field_room_tid_op';
  $handler->display->display_options['filters']['field_room_tid']['expose']['label'] = 'Room';
  $handler->display->display_options['filters']['field_room_tid']['expose']['operator'] = 'field_room_tid_op';
  $handler->display->display_options['filters']['field_room_tid']['expose']['identifier'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_room_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
  );
  $handler->display->display_options['filters']['field_room_tid']['vocabulary'] = 'rooms';
  /* Filter criterion: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['operator_id'] = 'field_mr_date_and_time_value_op';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['operator'] = 'field_mr_date_and_time_value_op';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['identifier'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
  );
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['year_range'] = '-1:+2';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
  );
  $handler->display->display_options['path'] = 'room-reservations-edit';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_3');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    19 => '19',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'title' => 'title',
    'title_1' => 'title_1',
    'field_room2b' => 'field_room2b',
    'field_location2' => 'field_location2',
    'field_mr_date_and_time' => 'field_mr_date_and_time',
    'field_status' => 'field_status',
    'created' => 'created',
    'edit_node' => 'edit_node',
    'mail' => 'mail',
    'field_phone_profile' => 'field_phone_profile',
    'field_group3' => 'field_group3',
    'field_verified_group' => 'field_verified_group',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_room2b' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mr_date_and_time' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phone_profile' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_group3' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_verified_group' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Location (field_location) */
  $handler->display->display_options['relationships']['field_location_tid']['id'] = 'field_location_tid';
  $handler->display->display_options['relationships']['field_location_tid']['table'] = 'field_data_field_location';
  $handler->display->display_options['relationships']['field_location_tid']['field'] = 'field_location_tid';
  $handler->display->display_options['relationships']['field_location_tid']['label'] = 'location';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'Author';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_group3_target_id']['id'] = 'field_group3_target_id';
  $handler->display->display_options['relationships']['field_group3_target_id']['table'] = 'field_data_field_group3';
  $handler->display->display_options['relationships']['field_group3_target_id']['field'] = 'field_group3_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Request';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '[path]';
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[path]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Room */
  $handler->display->display_options['fields']['field_room2b']['id'] = 'field_room2b';
  $handler->display->display_options['fields']['field_room2b']['table'] = 'field_data_field_room2b';
  $handler->display->display_options['fields']['field_room2b']['field'] = 'field_room2b';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location2']['id'] = 'field_location2';
  $handler->display->display_options['fields']['field_location2']['table'] = 'field_data_field_location2';
  $handler->display->display_options['fields']['field_location2']['field'] = 'field_location2';
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = 'Time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Timestamp';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Group */
  $handler->display->display_options['fields']['field_group3']['id'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['table'] = 'field_data_field_group3';
  $handler->display->display_options['fields']['field_group3']['field'] = 'field_group3';
  $handler->display->display_options['fields']['field_group3']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Verified */
  $handler->display->display_options['fields']['field_verified_group']['id'] = 'field_verified_group';
  $handler->display->display_options['fields']['field_verified_group']['table'] = 'field_data_field_verified_group';
  $handler->display->display_options['fields']['field_verified_group']['field'] = 'field_verified_group';
  $handler->display->display_options['fields']['field_verified_group']['relationship'] = 'field_group3_target_id';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'uid';
  /* Field: Profile: Phone */
  $handler->display->display_options['fields']['field_phone_profile']['id'] = 'field_phone_profile';
  $handler->display->display_options['fields']['field_phone_profile']['table'] = 'field_data_field_phone_profile';
  $handler->display->display_options['fields']['field_phone_profile']['field'] = 'field_phone_profile';
  $handler->display->display_options['fields']['field_phone_profile']['relationship'] = 'profile';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node_1']['id'] = 'edit_node_1';
  $handler->display->display_options['fields']['edit_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node_1']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node_1']['relationship'] = 'field_group3_target_id';
  $handler->display->display_options['fields']['edit_node_1']['label'] = 'Edit Group';
  $handler->display->display_options['fields']['edit_node_1']['text'] = 'Edit Group';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
    'room_reservation' => 'room_reservation',
  );
  /* Filter criterion: Content: Room (field_room) */
  $handler->display->display_options['filters']['field_room_tid']['id'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['table'] = 'field_data_field_room';
  $handler->display->display_options['filters']['field_room_tid']['field'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['value'] = '';
  $handler->display->display_options['filters']['field_room_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_room_tid']['expose']['operator_id'] = 'field_room_tid_op';
  $handler->display->display_options['filters']['field_room_tid']['expose']['label'] = 'Room';
  $handler->display->display_options['filters']['field_room_tid']['expose']['operator'] = 'field_room_tid_op';
  $handler->display->display_options['filters']['field_room_tid']['expose']['identifier'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_room_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
  );
  $handler->display->display_options['filters']['field_room_tid']['vocabulary'] = 'rooms';
  /* Filter criterion: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['operator_id'] = 'field_mr_date_and_time_value_op';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['operator'] = 'field_mr_date_and_time_value_op';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['identifier'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
  );
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['year_range'] = '-1:+2';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
  );
  /* Filter criterion: Content: Verified (field_verified_group) */
  $handler->display->display_options['filters']['field_verified_group_value']['id'] = 'field_verified_group_value';
  $handler->display->display_options['filters']['field_verified_group_value']['table'] = 'field_data_field_verified_group';
  $handler->display->display_options['filters']['field_verified_group_value']['field'] = 'field_verified_group_value';
  $handler->display->display_options['filters']['field_verified_group_value']['relationship'] = 'field_group3_target_id';
  $handler->display->display_options['filters']['field_verified_group_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_verified_group_value']['expose']['operator_id'] = 'field_verified_group_value_op';
  $handler->display->display_options['filters']['field_verified_group_value']['expose']['label'] = 'Verified';
  $handler->display->display_options['filters']['field_verified_group_value']['expose']['operator'] = 'field_verified_group_value_op';
  $handler->display->display_options['filters']['field_verified_group_value']['expose']['identifier'] = 'field_verified_group_value';
  $handler->display->display_options['filters']['field_verified_group_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_verified_group_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
  );
  $handler->display->display_options['path'] = 'groups-edit';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_4');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'title' => 'title',
    'title_1' => 'title_1',
    'name' => 'name',
    'field_mr_date_and_time' => 'field_mr_date_and_time',
    'field_status' => 'field_status',
    'created' => 'created',
    'field_full_name2' => 'field_full_name2',
    'field_phone2' => 'field_phone2',
    'field_email2' => 'field_email2',
    'name_1' => 'name_1',
    'mail' => 'mail',
    'field_phone_profile' => 'field_phone_profile',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mr_date_and_time' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_full_name2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phone2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phone_profile' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<h3>Please select one or more Locations, and/or a specific Date or range of Dates, and/or one or more Statuses, and then select "Filter".</h3>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_group3_target_id']['id'] = 'field_group3_target_id';
  $handler->display->display_options['relationships']['field_group3_target_id']['table'] = 'field_data_field_group3';
  $handler->display->display_options['relationships']['field_group3_target_id']['field'] = 'field_group3_target_id';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'rooms' => 'rooms',
    'book_list_categories' => 0,
    'merci_equipment_group' => 0,
    'blog_topics' => 0,
    'event_titles' => 0,
    'database_subjects' => 0,
    'faq_topics' => 0,
    'ig_subjects' => 0,
    'intended_audience' => 0,
    'page_type' => 0,
    'press_release_types' => 0,
    'tags' => 0,
    'library_location' => 0,
    'library_service_audience' => 0,
    'library_service_category' => 0,
    'recycled_reads_category' => 0,
    'recycled_reads_craft_material' => 0,
    'recycled_reads_event_type' => 0,
    'recycled_reads_tag' => 0,
    'templates' => 0,
    'youth_category' => 0,
    'library_hours' => 0,
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node_1']['id'] = 'edit_node_1';
  $handler->display->display_options['fields']['edit_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node_1']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node_1']['label'] = '';
  $handler->display->display_options['fields']['edit_node_1']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '[path]';
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_group3_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Group';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[path]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Topic';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Room';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_mr_date_and_time']['id'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['field'] = 'field_mr_date_and_time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['label'] = 'Time';
  $handler->display->display_options['fields']['field_mr_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mr_date_and_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Timestamp';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name_1']['label'] = 'Author';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'uid';
  $handler->display->display_options['fields']['mail']['label'] = 'Author E-mail';
  /* Field: Profile: Phone */
  $handler->display->display_options['fields']['field_phone_profile']['id'] = 'field_phone_profile';
  $handler->display->display_options['fields']['field_phone_profile']['table'] = 'field_data_field_phone_profile';
  $handler->display->display_options['fields']['field_phone_profile']['field'] = 'field_phone_profile';
  $handler->display->display_options['fields']['field_phone_profile']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_phone_profile']['label'] = 'Author Phone';
  /* Field: Content: Full Name */
  $handler->display->display_options['fields']['field_full_name2']['id'] = 'field_full_name2';
  $handler->display->display_options['fields']['field_full_name2']['table'] = 'field_data_field_full_name2';
  $handler->display->display_options['fields']['field_full_name2']['field'] = 'field_full_name2';
  $handler->display->display_options['fields']['field_full_name2']['relationship'] = 'field_group3_target_id';
  $handler->display->display_options['fields']['field_full_name2']['label'] = 'Contact';
  $handler->display->display_options['fields']['field_full_name2']['element_label_colon'] = FALSE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone2']['id'] = 'field_phone2';
  $handler->display->display_options['fields']['field_phone2']['table'] = 'field_data_field_phone2';
  $handler->display->display_options['fields']['field_phone2']['field'] = 'field_phone2';
  $handler->display->display_options['fields']['field_phone2']['relationship'] = 'field_group3_target_id';
  $handler->display->display_options['fields']['field_phone2']['label'] = 'Contact Phone';
  $handler->display->display_options['fields']['field_phone2']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email2']['id'] = 'field_email2';
  $handler->display->display_options['fields']['field_email2']['table'] = 'field_data_field_email2';
  $handler->display->display_options['fields']['field_email2']['field'] = 'field_email2';
  $handler->display->display_options['fields']['field_email2']['relationship'] = 'field_group3_target_id';
  $handler->display->display_options['fields']['field_email2']['label'] = 'Contact Email';
  $handler->display->display_options['fields']['field_email2']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
    'room_reservation' => 'room_reservation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Location taxonomy2 (field_location_taxonomy2) */
  $handler->display->display_options['filters']['field_location_taxonomy2_tid']['id'] = 'field_location_taxonomy2_tid';
  $handler->display->display_options['filters']['field_location_taxonomy2_tid']['table'] = 'field_data_field_location_taxonomy2';
  $handler->display->display_options['filters']['field_location_taxonomy2_tid']['field'] = 'field_location_taxonomy2_tid';
  $handler->display->display_options['filters']['field_location_taxonomy2_tid']['value'] = array(
    182 => '182',
  );
  $handler->display->display_options['filters']['field_location_taxonomy2_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_location_taxonomy2_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_taxonomy2_tid']['expose']['operator_id'] = 'field_location_taxonomy2_tid_op';
  $handler->display->display_options['filters']['field_location_taxonomy2_tid']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_location_taxonomy2_tid']['expose']['operator'] = 'field_location_taxonomy2_tid_op';
  $handler->display->display_options['filters']['field_location_taxonomy2_tid']['expose']['identifier'] = 'field_location_taxonomy2_tid';
  $handler->display->display_options['filters']['field_location_taxonomy2_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_location_taxonomy2_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_location_taxonomy2_tid']['expose']['remember_roles'] = array(
    2 => 0,
    3 => '3',
    19 => '19',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    20 => 0,
  );
  $handler->display->display_options['filters']['field_location_taxonomy2_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_location_taxonomy2_tid']['vocabulary'] = 'library_location';
  /* Filter criterion: Content: Date and Time -  start date (field_mr_date_and_time) */
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['id'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['table'] = 'field_data_field_mr_date_and_time';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['field'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['group'] = 1;
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['operator_id'] = 'field_mr_date_and_time_value_op';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['operator'] = 'field_mr_date_and_time_value_op';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['identifier'] = 'field_mr_date_and_time_value';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
  );
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_mr_date_and_time_value']['year_range'] = '-1:+2';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
  );
  $handler->display->display_options['path'] = 'check-conflicts';
  $export['room_reservations_2014'] = $view;

  $view = new view();
  $view->name = 'tag_with_recent_group2';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tag with recent group';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tag with recent group';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
    18 => '18',
    19 => '19',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['arguments']['nid_1']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid_1']['summary']['format'] = 'default_summary';
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
    'group' => 'group',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'tag-with-recent-group2/%';

  /* Display: jump menu */
  $handler = $view->new_display('panel_pane', 'jump menu', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Choose a group';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['path'] = 'nid';
  $handler->display->display_options['style_options']['text'] = 'Request a meeting room for this group';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['footer']['area_text_custom']['content'] = 'Do you need to <a href="/create-a-new-group">create a new group</a>?';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No groups found for this user.';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'tag-with-recent-group/[nid]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Author uid',
    ),
  );

  /* Display: jump menu - all */
  $handler = $view->new_display('panel_pane', 'jump menu - all', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All groups (Administrators\' view)';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['path'] = 'nid';
  $handler->display->display_options['style_options']['text'] = 'Request a meeting room for this group';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['footer']['area_text_custom']['content'] = 'Do you need to <a href="/create-a-group">create a new group</a>?';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No groups found for this user.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'tag-with-recent-group/[nid]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<strong>[title]</strong>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '...created by ';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'none',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Author uid',
    ),
  );
  $export['tag_with_recent_group2'] = $view;

  return $export;
}
