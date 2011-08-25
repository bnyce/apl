<?php
/**
 * @file
 * coa_contact_us.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function coa_contact_us_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'contact_us';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Contact Us';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'services-table ';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'tid' => 'tid',
    'title' => 'title',
    'field_address1' => 'field_address1',
    'field_address2' => 'field_address1',
    'field_global_contact_phone' => 'field_global_contact_phone',
    'field_email' => 'field_email',
    'field_key_con_phone' => 'field_key_con_phone',
    'field_key_con_position' => 'title',
    'field_key_con_name' => 'title',
    'field_contact_info_note' => 'field_contact_info_note',
    'field_global_contact' => 'field_global_contact',
    'field_elected_position' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'tid' => array(
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_address1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_address2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_global_contact_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_key_con_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_key_con_position' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_key_con_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_contact_info_note' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_global_contact' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_elected_position' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Taxonomy: All terms */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['link_to_taxonomy'] = 1;
  $handler->display->display_options['fields']['tid']['limit'] = 1;
  $handler->display->display_options['fields']['tid']['vocabularies'] = array(
    'department' => 'department',
    'forums' => 0,
    'business_portal' => 0,
    'calander_departments' => 0,
    'default' => 0,
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
  $handler->display->display_options['fields']['title']['label'] = 'Department/Office';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'department/[tid]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 1;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Address1 */
  $handler->display->display_options['fields']['field_address1']['id'] = 'field_address1';
  $handler->display->display_options['fields']['field_address1']['table'] = 'field_data_field_address1';
  $handler->display->display_options['fields']['field_address1']['field'] = 'field_address1';
  $handler->display->display_options['fields']['field_address1']['label'] = 'Address';
  $handler->display->display_options['fields']['field_address1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_address1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_address1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_address1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_address1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_address1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_address1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_address1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_address1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_address1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_address1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_address1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_address1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_address1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_address1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_address1']['field_api_classes'] = 0;
  /* Field: Content: Address2 */
  $handler->display->display_options['fields']['field_address2']['id'] = 'field_address2';
  $handler->display->display_options['fields']['field_address2']['table'] = 'field_data_field_address2';
  $handler->display->display_options['fields']['field_address2']['field'] = 'field_address2';
  $handler->display->display_options['fields']['field_address2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_address2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_address2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_address2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_address2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_address2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_address2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_address2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_address2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_address2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_address2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_address2']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_address2']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_address2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_address2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_address2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_address2']['field_api_classes'] = 0;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_global_contact_phone']['id'] = 'field_global_contact_phone';
  $handler->display->display_options['fields']['field_global_contact_phone']['table'] = 'field_data_field_global_contact_phone';
  $handler->display->display_options['fields']['field_global_contact_phone']['field'] = 'field_global_contact_phone';
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_global_contact_phone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['click_sort_column'] = 'number';
  $handler->display->display_options['fields']['field_global_contact_phone']['field_api_classes'] = 0;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_email']['field_api_classes'] = 0;
  /* Field: Content: Phone Number */
  $handler->display->display_options['fields']['field_key_con_phone']['id'] = 'field_key_con_phone';
  $handler->display->display_options['fields']['field_key_con_phone']['table'] = 'field_data_field_key_con_phone';
  $handler->display->display_options['fields']['field_key_con_phone']['field'] = 'field_key_con_phone';
  $handler->display->display_options['fields']['field_key_con_phone']['label'] = 'Key Phone';
  $handler->display->display_options['fields']['field_key_con_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_key_con_phone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['click_sort_column'] = 'number';
  $handler->display->display_options['fields']['field_key_con_phone']['field_api_classes'] = 0;
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_key_con_position']['id'] = 'field_key_con_position';
  $handler->display->display_options['fields']['field_key_con_position']['table'] = 'field_data_field_key_con_position';
  $handler->display->display_options['fields']['field_key_con_position']['field'] = 'field_key_con_position';
  $handler->display->display_options['fields']['field_key_con_position']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['text'] = '[field_key_con_position],';
  $handler->display->display_options['fields']['field_key_con_position']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_key_con_position']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['field_api_classes'] = 0;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_key_con_name']['id'] = 'field_key_con_name';
  $handler->display->display_options['fields']['field_key_con_name']['table'] = 'field_data_field_key_con_name';
  $handler->display->display_options['fields']['field_key_con_name']['field'] = 'field_key_con_name';
  $handler->display->display_options['fields']['field_key_con_name']['label'] = 'Key Name';
  $handler->display->display_options['fields']['field_key_con_name']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['text'] = '[field_key_con_name], [field_key_con_position], [field_key_con_phone]';
  $handler->display->display_options['fields']['field_key_con_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_key_con_name']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_key_con_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['field_api_classes'] = 0;
  /* Field: Content: Note */
  $handler->display->display_options['fields']['field_contact_info_note']['id'] = 'field_contact_info_note';
  $handler->display->display_options['fields']['field_contact_info_note']['table'] = 'field_data_field_contact_info_note';
  $handler->display->display_options['fields']['field_contact_info_note']['field'] = 'field_contact_info_note';
  $handler->display->display_options['fields']['field_contact_info_note']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_contact_info_note']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_contact_info_note']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['field_api_classes'] = 0;
  /* Field: Content: Global Contact */
  $handler->display->display_options['fields']['field_global_contact']['id'] = 'field_global_contact';
  $handler->display->display_options['fields']['field_global_contact']['table'] = 'field_data_field_global_contact';
  $handler->display->display_options['fields']['field_global_contact']['field'] = 'field_global_contact';
  $handler->display->display_options['fields']['field_global_contact']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_global_contact']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_global_contact']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_global_contact']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_global_contact']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_global_contact']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['field_api_classes'] = 0;
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
  /* Filter criterion: Fields: Global Contact (field_global_contact) */
  $handler->display->display_options['filters']['field_global_contact_value']['id'] = 'field_global_contact_value';
  $handler->display->display_options['filters']['field_global_contact_value']['table'] = 'field_data_field_global_contact';
  $handler->display->display_options['filters']['field_global_contact_value']['field'] = 'field_global_contact_value';
  $handler->display->display_options['filters']['field_global_contact_value']['operator'] = 'not empty';
  /* Filter criterion: Fields: Elected Position (field_elected_position) */
  $handler->display->display_options['filters']['field_elected_position_value']['id'] = 'field_elected_position_value';
  $handler->display->display_options['filters']['field_elected_position_value']['table'] = 'field_data_field_elected_position';
  $handler->display->display_options['filters']['field_elected_position_value']['field'] = 'field_elected_position_value';

  /* Display: Departments */
  $handler = $view->new_display('panel_pane', 'Departments', 'panel_pane_1');
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
  /* Filter criterion: Fields: Global Contact (field_global_contact) */
  $handler->display->display_options['filters']['field_global_contact_value']['id'] = 'field_global_contact_value';
  $handler->display->display_options['filters']['field_global_contact_value']['table'] = 'field_data_field_global_contact';
  $handler->display->display_options['filters']['field_global_contact_value']['field'] = 'field_global_contact_value';
  $handler->display->display_options['filters']['field_global_contact_value']['operator'] = 'not empty';
  /* Filter criterion: Fields: Elected Position (field_elected_position) */
  $handler->display->display_options['filters']['field_elected_position_value']['id'] = 'field_elected_position_value';
  $handler->display->display_options['filters']['field_elected_position_value']['table'] = 'field_data_field_elected_position';
  $handler->display->display_options['filters']['field_elected_position_value']['field'] = 'field_elected_position_value';
  $handler->display->display_options['filters']['field_elected_position_value']['operator'] = 'empty';

  /* Display: City Council */
  $handler = $view->new_display('panel_pane', 'City Council', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'tid';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_key_con_name' => 'field_key_con_name',
    'field_key_con_position' => 'field_key_con_position',
    'field_key_con_phone' => 'field_key_con_phone',
    'field_elected_position' => 'field_elected_position',
    'tid' => 'tid',
    'title' => 'field_elected_position',
    'field_address1' => 'field_address1',
    'field_address2' => 'field_address1',
    'field_global_contact_phone' => 'field_global_contact_phone',
    'field_email' => 'field_email',
    'field_contact_info_note' => 'field_contact_info_note',
    'field_global_contact' => 'field_global_contact',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_key_con_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_key_con_position' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_key_con_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_elected_position' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'tid' => array(
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_address1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_address2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_global_contact_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_contact_info_note' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_global_contact' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_key_con_name']['id'] = 'field_key_con_name';
  $handler->display->display_options['fields']['field_key_con_name']['table'] = 'field_data_field_key_con_name';
  $handler->display->display_options['fields']['field_key_con_name']['field'] = 'field_key_con_name';
  $handler->display->display_options['fields']['field_key_con_name']['label'] = 'Key Name';
  $handler->display->display_options['fields']['field_key_con_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['text'] = '[field_key_con_name], [field_key_con_position], [field_key_con_phone]';
  $handler->display->display_options['fields']['field_key_con_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_key_con_name']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_key_con_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['field_api_classes'] = 0;
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_key_con_position']['id'] = 'field_key_con_position';
  $handler->display->display_options['fields']['field_key_con_position']['table'] = 'field_data_field_key_con_position';
  $handler->display->display_options['fields']['field_key_con_position']['field'] = 'field_key_con_position';
  $handler->display->display_options['fields']['field_key_con_position']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['text'] = '[field_key_con_position],';
  $handler->display->display_options['fields']['field_key_con_position']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_key_con_position']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['field_api_classes'] = 0;
  /* Field: Content: Phone Number */
  $handler->display->display_options['fields']['field_key_con_phone']['id'] = 'field_key_con_phone';
  $handler->display->display_options['fields']['field_key_con_phone']['table'] = 'field_data_field_key_con_phone';
  $handler->display->display_options['fields']['field_key_con_phone']['field'] = 'field_key_con_phone';
  $handler->display->display_options['fields']['field_key_con_phone']['label'] = 'Key Phone';
  $handler->display->display_options['fields']['field_key_con_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_key_con_phone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['click_sort_column'] = 'number';
  $handler->display->display_options['fields']['field_key_con_phone']['field_api_classes'] = 0;
  /* Field: Content: Elected Position */
  $handler->display->display_options['fields']['field_elected_position']['id'] = 'field_elected_position';
  $handler->display->display_options['fields']['field_elected_position']['table'] = 'field_data_field_elected_position';
  $handler->display->display_options['fields']['field_elected_position']['field'] = 'field_elected_position';
  $handler->display->display_options['fields']['field_elected_position']['label'] = 'Department/Office';
  $handler->display->display_options['fields']['field_elected_position']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_elected_position']['alter']['text'] = '[field_elected_position]  [field_key_con_name] :  [field_key_con_phone] ';
  $handler->display->display_options['fields']['field_elected_position']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_elected_position']['alter']['path'] = 'department/[tid]';
  $handler->display->display_options['fields']['field_elected_position']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['field_elected_position']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_elected_position']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_elected_position']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_elected_position']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_elected_position']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_elected_position']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_elected_position']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_elected_position']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_elected_position']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_elected_position']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_elected_position']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_elected_position']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_elected_position']['field_api_classes'] = 0;
  /* Field: Taxonomy: All terms */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['text'] = 'Mayor & City Council';
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['link_to_taxonomy'] = 1;
  $handler->display->display_options['fields']['tid']['limit'] = 1;
  $handler->display->display_options['fields']['tid']['vocabularies'] = array(
    'department' => 'department',
    'forums' => 0,
    'business_portal' => 0,
    'calander_departments' => 0,
    'default' => 0,
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
  $handler->display->display_options['fields']['title']['label'] = 'Department/Office';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'department/[tid]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 1;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Address1 */
  $handler->display->display_options['fields']['field_address1']['id'] = 'field_address1';
  $handler->display->display_options['fields']['field_address1']['table'] = 'field_data_field_address1';
  $handler->display->display_options['fields']['field_address1']['field'] = 'field_address1';
  $handler->display->display_options['fields']['field_address1']['label'] = 'Address';
  $handler->display->display_options['fields']['field_address1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_address1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_address1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_address1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_address1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_address1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_address1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_address1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_address1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_address1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_address1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_address1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_address1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_address1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_address1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_address1']['field_api_classes'] = 0;
  /* Field: Content: Address2 */
  $handler->display->display_options['fields']['field_address2']['id'] = 'field_address2';
  $handler->display->display_options['fields']['field_address2']['table'] = 'field_data_field_address2';
  $handler->display->display_options['fields']['field_address2']['field'] = 'field_address2';
  $handler->display->display_options['fields']['field_address2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_address2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_address2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_address2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_address2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_address2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_address2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_address2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_address2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_address2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_address2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_address2']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_address2']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_address2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_address2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_address2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_address2']['field_api_classes'] = 0;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_global_contact_phone']['id'] = 'field_global_contact_phone';
  $handler->display->display_options['fields']['field_global_contact_phone']['table'] = 'field_data_field_global_contact_phone';
  $handler->display->display_options['fields']['field_global_contact_phone']['field'] = 'field_global_contact_phone';
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_global_contact_phone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['click_sort_column'] = 'number';
  $handler->display->display_options['fields']['field_global_contact_phone']['field_api_classes'] = 0;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_email']['field_api_classes'] = 0;
  /* Field: Content: Note */
  $handler->display->display_options['fields']['field_contact_info_note']['id'] = 'field_contact_info_note';
  $handler->display->display_options['fields']['field_contact_info_note']['table'] = 'field_data_field_contact_info_note';
  $handler->display->display_options['fields']['field_contact_info_note']['field'] = 'field_contact_info_note';
  $handler->display->display_options['fields']['field_contact_info_note']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_contact_info_note']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_contact_info_note']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['field_api_classes'] = 0;
  /* Field: Content: Global Contact */
  $handler->display->display_options['fields']['field_global_contact']['id'] = 'field_global_contact';
  $handler->display->display_options['fields']['field_global_contact']['table'] = 'field_data_field_global_contact';
  $handler->display->display_options['fields']['field_global_contact']['field'] = 'field_global_contact';
  $handler->display->display_options['fields']['field_global_contact']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_global_contact']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_global_contact']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_global_contact']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_global_contact']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_global_contact']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['field_api_classes'] = 0;
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
  /* Filter criterion: Fields: Global Contact (field_global_contact) */
  $handler->display->display_options['filters']['field_global_contact_value']['id'] = 'field_global_contact_value';
  $handler->display->display_options['filters']['field_global_contact_value']['table'] = 'field_data_field_global_contact';
  $handler->display->display_options['filters']['field_global_contact_value']['field'] = 'field_global_contact_value';
  $handler->display->display_options['filters']['field_global_contact_value']['operator'] = 'not empty';
  /* Filter criterion: Fields: Elected Position (field_elected_position) */
  $handler->display->display_options['filters']['field_elected_position_value']['id'] = 'field_elected_position_value';
  $handler->display->display_options['filters']['field_elected_position_value']['table'] = 'field_data_field_elected_position';
  $handler->display->display_options['filters']['field_elected_position_value']['field'] = 'field_elected_position_value';
  $handler->display->display_options['filters']['field_elected_position_value']['value'] = array(
    'Mayor' => 'Mayor',
    'Mayor Pro Tem' => 'Mayor Pro Tem',
    'Council Member' => 'Council Member',
  );

  /* Display: City Manager */
  $handler = $view->new_display('panel_pane', 'City Manager', 'panel_pane_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'tid';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_key_con_name' => 'field_key_con_name',
    'field_key_con_position' => 'field_key_con_position',
    'field_key_con_phone' => 'field_key_con_phone',
    'field_elected_position' => 'field_elected_position',
    'tid' => 'tid',
    'title' => 'field_elected_position',
    'field_address1' => 'field_address1',
    'field_address2' => 'field_address1',
    'field_global_contact_phone' => 'field_global_contact_phone',
    'field_email' => 'field_email',
    'field_contact_info_note' => 'field_contact_info_note',
    'field_global_contact' => 'field_global_contact',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_key_con_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_key_con_position' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_key_con_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_elected_position' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'tid' => array(
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_address1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_address2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_global_contact_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_contact_info_note' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_global_contact' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_key_con_name']['id'] = 'field_key_con_name';
  $handler->display->display_options['fields']['field_key_con_name']['table'] = 'field_data_field_key_con_name';
  $handler->display->display_options['fields']['field_key_con_name']['field'] = 'field_key_con_name';
  $handler->display->display_options['fields']['field_key_con_name']['label'] = 'Key Name';
  $handler->display->display_options['fields']['field_key_con_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['text'] = '[field_key_con_name], [field_key_con_position], [field_key_con_phone]';
  $handler->display->display_options['fields']['field_key_con_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_key_con_name']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_key_con_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_key_con_name']['field_api_classes'] = 0;
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_key_con_position']['id'] = 'field_key_con_position';
  $handler->display->display_options['fields']['field_key_con_position']['table'] = 'field_data_field_key_con_position';
  $handler->display->display_options['fields']['field_key_con_position']['field'] = 'field_key_con_position';
  $handler->display->display_options['fields']['field_key_con_position']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['text'] = '[field_key_con_position],';
  $handler->display->display_options['fields']['field_key_con_position']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_key_con_position']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_key_con_position']['field_api_classes'] = 0;
  /* Field: Content: Phone Number */
  $handler->display->display_options['fields']['field_key_con_phone']['id'] = 'field_key_con_phone';
  $handler->display->display_options['fields']['field_key_con_phone']['table'] = 'field_data_field_key_con_phone';
  $handler->display->display_options['fields']['field_key_con_phone']['field'] = 'field_key_con_phone';
  $handler->display->display_options['fields']['field_key_con_phone']['label'] = 'Key Phone';
  $handler->display->display_options['fields']['field_key_con_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_key_con_phone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_key_con_phone']['click_sort_column'] = 'number';
  $handler->display->display_options['fields']['field_key_con_phone']['field_api_classes'] = 0;
  /* Field: Content: Elected Position */
  $handler->display->display_options['fields']['field_elected_position']['id'] = 'field_elected_position';
  $handler->display->display_options['fields']['field_elected_position']['table'] = 'field_data_field_elected_position';
  $handler->display->display_options['fields']['field_elected_position']['field'] = 'field_elected_position';
  $handler->display->display_options['fields']['field_elected_position']['label'] = 'Department/Office';
  $handler->display->display_options['fields']['field_elected_position']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_elected_position']['alter']['text'] = '[field_elected_position]  [field_key_con_name] :  [field_key_con_phone] ';
  $handler->display->display_options['fields']['field_elected_position']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_elected_position']['alter']['path'] = 'department/[tid]';
  $handler->display->display_options['fields']['field_elected_position']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['field_elected_position']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_elected_position']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_elected_position']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_elected_position']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_elected_position']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_elected_position']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_elected_position']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_elected_position']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_elected_position']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_elected_position']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_elected_position']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_elected_position']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_elected_position']['field_api_classes'] = 0;
  /* Field: Taxonomy: All terms */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['text'] = 'City Manager';
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['link_to_taxonomy'] = 1;
  $handler->display->display_options['fields']['tid']['limit'] = 1;
  $handler->display->display_options['fields']['tid']['vocabularies'] = array(
    'department' => 'department',
    'forums' => 0,
    'business_portal' => 0,
    'calander_departments' => 0,
    'default' => 0,
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
  $handler->display->display_options['fields']['title']['label'] = 'Department/Office';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'department/[tid]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 1;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Address1 */
  $handler->display->display_options['fields']['field_address1']['id'] = 'field_address1';
  $handler->display->display_options['fields']['field_address1']['table'] = 'field_data_field_address1';
  $handler->display->display_options['fields']['field_address1']['field'] = 'field_address1';
  $handler->display->display_options['fields']['field_address1']['label'] = 'Address';
  $handler->display->display_options['fields']['field_address1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_address1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_address1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_address1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_address1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_address1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_address1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_address1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_address1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_address1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_address1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_address1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_address1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_address1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_address1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_address1']['field_api_classes'] = 0;
  /* Field: Content: Address2 */
  $handler->display->display_options['fields']['field_address2']['id'] = 'field_address2';
  $handler->display->display_options['fields']['field_address2']['table'] = 'field_data_field_address2';
  $handler->display->display_options['fields']['field_address2']['field'] = 'field_address2';
  $handler->display->display_options['fields']['field_address2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_address2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_address2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_address2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_address2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_address2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_address2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_address2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_address2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_address2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_address2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_address2']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_address2']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_address2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_address2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_address2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_address2']['field_api_classes'] = 0;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_global_contact_phone']['id'] = 'field_global_contact_phone';
  $handler->display->display_options['fields']['field_global_contact_phone']['table'] = 'field_data_field_global_contact_phone';
  $handler->display->display_options['fields']['field_global_contact_phone']['field'] = 'field_global_contact_phone';
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_global_contact_phone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_global_contact_phone']['click_sort_column'] = 'number';
  $handler->display->display_options['fields']['field_global_contact_phone']['field_api_classes'] = 0;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_email']['field_api_classes'] = 0;
  /* Field: Content: Note */
  $handler->display->display_options['fields']['field_contact_info_note']['id'] = 'field_contact_info_note';
  $handler->display->display_options['fields']['field_contact_info_note']['table'] = 'field_data_field_contact_info_note';
  $handler->display->display_options['fields']['field_contact_info_note']['field'] = 'field_contact_info_note';
  $handler->display->display_options['fields']['field_contact_info_note']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_contact_info_note']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_contact_info_note']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_contact_info_note']['field_api_classes'] = 0;
  /* Field: Content: Global Contact */
  $handler->display->display_options['fields']['field_global_contact']['id'] = 'field_global_contact';
  $handler->display->display_options['fields']['field_global_contact']['table'] = 'field_data_field_global_contact';
  $handler->display->display_options['fields']['field_global_contact']['field'] = 'field_global_contact';
  $handler->display->display_options['fields']['field_global_contact']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_global_contact']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_global_contact']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_global_contact']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_global_contact']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_global_contact']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_global_contact']['field_api_classes'] = 0;
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
  /* Filter criterion: Fields: Global Contact (field_global_contact) */
  $handler->display->display_options['filters']['field_global_contact_value']['id'] = 'field_global_contact_value';
  $handler->display->display_options['filters']['field_global_contact_value']['table'] = 'field_data_field_global_contact';
  $handler->display->display_options['filters']['field_global_contact_value']['field'] = 'field_global_contact_value';
  $handler->display->display_options['filters']['field_global_contact_value']['operator'] = 'not empty';
  /* Filter criterion: Fields: Elected Position (field_elected_position) */
  $handler->display->display_options['filters']['field_elected_position_value']['id'] = 'field_elected_position_value';
  $handler->display->display_options['filters']['field_elected_position_value']['table'] = 'field_data_field_elected_position';
  $handler->display->display_options['filters']['field_elected_position_value']['field'] = 'field_elected_position_value';
  $handler->display->display_options['filters']['field_elected_position_value']['value'] = array(
    'City Manager' => 'City Manager',
    'Chief of Staff' => 'Chief of Staff',
    'Asst. City Manager' => 'Asst. City Manager',
    'C.F.O.' => 'C.F.O.',
    'Communications and Public Information Office' => 'Communications and Public Information Office',
  );
  $translatables['contact_us'] = array(
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
    t('Department/Office'),
    t('department/[tid]'),
    t('Address'),
    t('Address2'),
    t('Phone'),
    t('Email'),
    t('Key Phone'),
    t('Position'),
    t('[field_key_con_position],'),
    t('Key Name'),
    t('[field_key_con_name], [field_key_con_position], [field_key_con_phone]'),
    t('Note'),
    t('Global Contact'),
    t('Departments'),
    t('View panes'),
    t('City Council'),
    t('[field_elected_position]  [field_key_con_name] :  [field_key_con_phone] '),
    t('Mayor & City Council'),
    t('City Manager'),
  );
  $export['contact_us'] = $view;

  return $export;
}
