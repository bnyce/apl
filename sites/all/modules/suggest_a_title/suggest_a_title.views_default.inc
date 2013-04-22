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
    9 => '9',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'nid' => 'nid',
    'created' => 'created',
    'title' => 'title',
    'field_author_performer_band' => 'field_author_performer_band',
    'field_format' => 'field_format',
    'field_targeted_age_level_of_item' => 'field_targeted_age_level_of_item',
    'field_language' => 'field_language',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
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
    'title' => array(
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
    'field_format' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_targeted_age_level_of_item' => array(
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
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="messages warning">There are no items in the Queue that match your criteria.</div>';
  $handler->display->display_options['empty']['area']['format'] = 'truly_unfiltered_html';
  /* Relationship: Content revision: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'Selector';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Row';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'ID';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/[nid]/edit';
  $handler->display->display_options['fields']['nid']['alter']['max_length'] = '2';
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date/Time';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]/edit';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Author/Performer/Band */
  $handler->display->display_options['fields']['field_author_performer_band']['id'] = 'field_author_performer_band';
  $handler->display->display_options['fields']['field_author_performer_band']['table'] = 'field_data_field_author_performer_band';
  $handler->display->display_options['fields']['field_author_performer_band']['field'] = 'field_author_performer_band';
  /* Field: Content: Format */
  $handler->display->display_options['fields']['field_format']['id'] = 'field_format';
  $handler->display->display_options['fields']['field_format']['table'] = 'field_data_field_format';
  $handler->display->display_options['fields']['field_format']['field'] = 'field_format';
  /* Field: Content: Targeted Age Level of Item */
  $handler->display->display_options['fields']['field_targeted_age_level_of_item']['id'] = 'field_targeted_age_level_of_item';
  $handler->display->display_options['fields']['field_targeted_age_level_of_item']['table'] = 'field_data_field_targeted_age_level_of_item';
  $handler->display->display_options['fields']['field_targeted_age_level_of_item']['field'] = 'field_targeted_age_level_of_item';
  $handler->display->display_options['fields']['field_targeted_age_level_of_item']['element_label_colon'] = FALSE;
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Selector';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Follow Up (field_follow_up) */
  $handler->display->display_options['filters']['field_follow_up_value']['id'] = 'field_follow_up_value';
  $handler->display->display_options['filters']['field_follow_up_value']['table'] = 'field_data_field_follow_up';
  $handler->display->display_options['filters']['field_follow_up_value']['field'] = 'field_follow_up_value';
  $handler->display->display_options['filters']['field_follow_up_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_follow_up_value']['value'] = array(
    'Denial' => 'Denial',
    'Not Available' => 'Not Available',
    'In Catalog' => 'In Catalog',
    'To Be Ordered' => 'To Be Ordered',
    'Resources' => 'Resources',
  );
  $handler->display->display_options['filters']['field_follow_up_value']['group'] = 1;
  /* Filter criterion: Content: Format (field_format) */
  $handler->display->display_options['filters']['field_format_value']['id'] = 'field_format_value';
  $handler->display->display_options['filters']['field_format_value']['table'] = 'field_data_field_format';
  $handler->display->display_options['filters']['field_format_value']['field'] = 'field_format_value';
  $handler->display->display_options['filters']['field_format_value']['value'] = array(
    'all' => 'all',
    'Not Specified' => 'Not Specified',
    'Blu-ray Disc' => 'Blu-ray Disc',
    'Book on CD' => 'Book on CD',
    'Book-fiction' => 'Book-fiction',
    'Book-graphic novel' => 'Book-graphic novel',
    'Book-large type' => 'Book-large type',
    'Book-nonfiction' => 'Book-nonfiction',
    'Book-picture' => 'Book-picture',
    'DVD' => 'DVD',
    'eAudiobook-fiction' => 'eAudiobook-fiction',
    'eAudiobook-nonfiction' => 'eAudiobook-nonfiction',
    'eBook-fiction' => 'eBook-fiction',
    'eBook-nonfiction' => 'eBook-nonfiction',
    'Music CD' => 'Music CD',
    'Other' => 'Other',
    'Periodical/Newspaper' => 'Periodical/Newspaper',
  );
  $handler->display->display_options['filters']['field_format_value']['group'] = 1;
  $handler->display->display_options['filters']['field_format_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_format_value']['expose']['operator_id'] = 'field_format_value_op';
  $handler->display->display_options['filters']['field_format_value']['expose']['label'] = 'Format';
  $handler->display->display_options['filters']['field_format_value']['expose']['operator'] = 'field_format_value_op';
  $handler->display->display_options['filters']['field_format_value']['expose']['identifier'] = 'field_format_value';
  $handler->display->display_options['filters']['field_format_value']['expose']['remember_roles'] = array(
    2 => 0,
    3 => '3',
    7 => '7',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_format_value']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_format_value']['group_info']['label'] = 'Format';
  $handler->display->display_options['filters']['field_format_value']['group_info']['identifier'] = 'field_format_value';
  $handler->display->display_options['filters']['field_format_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Format',
      'operator' => 'or',
      'value' => array(
        'Blu-ray Disc' => 'Blu-ray Disc',
        'Book on CD' => 'Book on CD',
        'Book-fiction' => 'Book-fiction',
        'Book-graphic novel' => 'Book-graphic novel',
        'Book-large type' => 'Book-large type',
        'Book-nonfiction' => 'Book-nonfiction',
        'Book-picture' => 'Book-picture',
        'DVD' => 'DVD',
        'eAudiobook-fiction' => 'eAudiobook-fiction',
        'eAudiobook-nonfiction' => 'eAudiobook-nonfiction',
        'eBook-fiction' => 'eBook-fiction',
        'eBook-nonfiction' => 'eBook-nonfiction',
        'Music CD' => 'Music CD',
        'Other' => 'Other',
        'Periodical/Newspaper' => 'Periodical/Newspaper',
      ),
    ),
  );
  /* Filter criterion: Content: Language (field_language) */
  $handler->display->display_options['filters']['field_language_value']['id'] = 'field_language_value';
  $handler->display->display_options['filters']['field_language_value']['table'] = 'field_data_field_language';
  $handler->display->display_options['filters']['field_language_value']['field'] = 'field_language_value';
  $handler->display->display_options['filters']['field_language_value']['value'] = array(
    'English' => 'English',
  );
  $handler->display->display_options['filters']['field_language_value']['group'] = 1;
  $handler->display->display_options['filters']['field_language_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_language_value']['expose']['operator_id'] = 'field_language_value_op';
  $handler->display->display_options['filters']['field_language_value']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['field_language_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_language_value']['expose']['operator'] = 'field_language_value_op';
  $handler->display->display_options['filters']['field_language_value']['expose']['identifier'] = 'field_language_value';
  $handler->display->display_options['filters']['field_language_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Selector';
  $handler->display->display_options['filters']['uid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );

  /* Display: Suggest a Title: Archive */
  $handler = $view->new_display('page', 'Suggest a Title: Archive', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Suggest a Title: Archive';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'nid' => 'nid',
    'created' => 'created',
    'title' => 'title',
    'field_author_performer_band' => 'field_author_performer_band',
    'field_format' => 'field_format',
    'field_targeted_age_level_of_item' => 'field_targeted_age_level_of_item',
    'field_language' => 'field_language',
    'name' => 'name',
    'field_anticipated_' => 'field_anticipated_',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
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
    'title' => array(
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
    'field_format' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_targeted_age_level_of_item' => array(
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
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_anticipated_' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>This view shows All Suggestions. You may also view <a href="/suggest-a-title/queue">Suggestions Awaiting Follow Up</a>.</p>';
  $handler->display->display_options['header']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p>This view shows All Suggestions. You may also view <a href="/suggest-a-title/queue">Suggestions Awaiting Follow Up</a>.</p>';
  $handler->display->display_options['footer']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Row';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'ID';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/[nid]/edit';
  $handler->display->display_options['fields']['nid']['alter']['max_length'] = '2';
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Suggestion date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]/edit';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Author/Performer/Band */
  $handler->display->display_options['fields']['field_author_performer_band']['id'] = 'field_author_performer_band';
  $handler->display->display_options['fields']['field_author_performer_band']['table'] = 'field_data_field_author_performer_band';
  $handler->display->display_options['fields']['field_author_performer_band']['field'] = 'field_author_performer_band';
  /* Field: Content: Format */
  $handler->display->display_options['fields']['field_format']['id'] = 'field_format';
  $handler->display->display_options['fields']['field_format']['table'] = 'field_data_field_format';
  $handler->display->display_options['fields']['field_format']['field'] = 'field_format';
  /* Field: Content: Targeted Age Level of Item */
  $handler->display->display_options['fields']['field_targeted_age_level_of_item']['id'] = 'field_targeted_age_level_of_item';
  $handler->display->display_options['fields']['field_targeted_age_level_of_item']['table'] = 'field_data_field_targeted_age_level_of_item';
  $handler->display->display_options['fields']['field_targeted_age_level_of_item']['field'] = 'field_targeted_age_level_of_item';
  $handler->display->display_options['fields']['field_targeted_age_level_of_item']['label'] = 'Targeted Age';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Selector';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Anticipated? */
  $handler->display->display_options['fields']['field_anticipated_']['id'] = 'field_anticipated_';
  $handler->display->display_options['fields']['field_anticipated_']['table'] = 'field_data_field_anticipated_';
  $handler->display->display_options['fields']['field_anticipated_']['field'] = 'field_anticipated_';
  $handler->display->display_options['fields']['field_anticipated_']['type'] = 'list_key';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Response date';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Follow Up (field_follow_up) */
  $handler->display->display_options['filters']['field_follow_up_value']['id'] = 'field_follow_up_value';
  $handler->display->display_options['filters']['field_follow_up_value']['table'] = 'field_data_field_follow_up';
  $handler->display->display_options['filters']['field_follow_up_value']['field'] = 'field_follow_up_value';
  $handler->display->display_options['filters']['field_follow_up_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_follow_up_value']['value'] = array(
    'Awaiting Response' => 'Awaiting Response',
  );
  $handler->display->display_options['filters']['field_follow_up_value']['group'] = 1;
  /* Filter criterion: Content: Format (field_format) */
  $handler->display->display_options['filters']['field_format_value']['id'] = 'field_format_value';
  $handler->display->display_options['filters']['field_format_value']['table'] = 'field_data_field_format';
  $handler->display->display_options['filters']['field_format_value']['field'] = 'field_format_value';
  $handler->display->display_options['filters']['field_format_value']['value'] = array(
    'Blu-ray Disc' => 'Blu-ray Disc',
    'Book on CD' => 'Book on CD',
    'Book-fiction' => 'Book-fiction',
    'Book-graphic novel' => 'Book-graphic novel',
    'Book-large type' => 'Book-large type',
    'Book-nonfiction' => 'Book-nonfiction',
    'Book-picture' => 'Book-picture',
    'DVD' => 'DVD',
    'eAudiobook-fiction' => 'eAudiobook-fiction',
    'eAudiobook-nonfiction' => 'eAudiobook-nonfiction',
    'eBook-fiction' => 'eBook-fiction',
    'eBook-nonfiction' => 'eBook-nonfiction',
    'Music CD' => 'Music CD',
    'Periodical/Newspaper' => 'Periodical/Newspaper',
    'Other' => 'Other',
  );
  $handler->display->display_options['filters']['field_format_value']['group'] = 1;
  $handler->display->display_options['filters']['field_format_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_format_value']['expose']['operator_id'] = 'field_format_value_op';
  $handler->display->display_options['filters']['field_format_value']['expose']['label'] = 'Format';
  $handler->display->display_options['filters']['field_format_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_format_value']['expose']['operator'] = 'field_format_value_op';
  $handler->display->display_options['filters']['field_format_value']['expose']['identifier'] = 'field_format_value';
  $handler->display->display_options['filters']['field_format_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_format_value']['expose']['remember_roles'] = array(
    2 => 0,
    3 => '3',
    7 => '7',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_format_value']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_format_value']['group_info']['label'] = 'Format';
  $handler->display->display_options['filters']['field_format_value']['group_info']['identifier'] = 'field_format_value';
  $handler->display->display_options['filters']['field_format_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Format',
      'operator' => 'or',
      'value' => array(
        'Blu-ray Disc' => 'Blu-ray Disc',
        'Book on CD' => 'Book on CD',
        'Book-fiction' => 'Book-fiction',
        'Book-graphic novel' => 'Book-graphic novel',
        'Book-large type' => 'Book-large type',
        'Book-nonfiction' => 'Book-nonfiction',
        'Book-picture' => 'Book-picture',
        'DVD' => 'DVD',
        'eAudiobook-fiction' => 'eAudiobook-fiction',
        'eAudiobook-nonfiction' => 'eAudiobook-nonfiction',
        'eBook-fiction' => 'eBook-fiction',
        'eBook-nonfiction' => 'eBook-nonfiction',
        'Music CD' => 'Music CD',
        'Other' => 'Other',
        'Periodical/Newspaper' => 'Periodical/Newspaper',
      ),
    ),
  );
  /* Filter criterion: Content: Targeted Age Level of Item (field_targeted_age_level_of_item) */
  $handler->display->display_options['filters']['field_targeted_age_level_of_item_value']['id'] = 'field_targeted_age_level_of_item_value';
  $handler->display->display_options['filters']['field_targeted_age_level_of_item_value']['table'] = 'field_data_field_targeted_age_level_of_item';
  $handler->display->display_options['filters']['field_targeted_age_level_of_item_value']['field'] = 'field_targeted_age_level_of_item_value';
  $handler->display->display_options['filters']['field_targeted_age_level_of_item_value']['group'] = 1;
  $handler->display->display_options['filters']['field_targeted_age_level_of_item_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_targeted_age_level_of_item_value']['expose']['operator_id'] = 'field_targeted_age_level_of_item_value_op';
  $handler->display->display_options['filters']['field_targeted_age_level_of_item_value']['expose']['label'] = 'Targeted Age';
  $handler->display->display_options['filters']['field_targeted_age_level_of_item_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_targeted_age_level_of_item_value']['expose']['operator'] = 'field_targeted_age_level_of_item_value_op';
  $handler->display->display_options['filters']['field_targeted_age_level_of_item_value']['expose']['identifier'] = 'field_targeted_age_level_of_item_value';
  $handler->display->display_options['filters']['field_targeted_age_level_of_item_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_targeted_age_level_of_item_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Language (field_language) */
  $handler->display->display_options['filters']['field_language_value']['id'] = 'field_language_value';
  $handler->display->display_options['filters']['field_language_value']['table'] = 'field_data_field_language';
  $handler->display->display_options['filters']['field_language_value']['field'] = 'field_language_value';
  $handler->display->display_options['filters']['field_language_value']['value'] = array(
    'English' => 'English',
  );
  $handler->display->display_options['filters']['field_language_value']['group'] = 1;
  $handler->display->display_options['filters']['field_language_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_language_value']['expose']['operator_id'] = 'field_language_value_op';
  $handler->display->display_options['filters']['field_language_value']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['field_language_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_language_value']['expose']['operator'] = 'field_language_value_op';
  $handler->display->display_options['filters']['field_language_value']['expose']['identifier'] = 'field_language_value';
  $handler->display->display_options['filters']['field_language_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Selector';
  $handler->display->display_options['filters']['uid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Updated date */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'node';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = 'between';
  $handler->display->display_options['filters']['changed']['exposed'] = TRUE;
  $handler->display->display_options['filters']['changed']['expose']['operator_id'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['label'] = 'Response date';
  $handler->display->display_options['filters']['changed']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['changed']['expose']['operator'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['identifier'] = 'changed';
  $handler->display->display_options['filters']['changed']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['path'] = 'suggest-a-title/queue/archive';

  /* Display: Suggest a Title: Queue */
  $handler = $view->new_display('page', 'Suggest a Title: Queue', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p>This view shows only Suggestions awaiting a Follow Up. You may also view <a href="/suggest-a-title/queue/all">All Suggestions</a>.</p>';
  $handler->display->display_options['footer']['area']['format'] = 'truly_unfiltered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Row';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'ID';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/[nid]/edit';
  $handler->display->display_options['fields']['nid']['alter']['max_length'] = '2';
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Suggestion date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]/edit';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Author/Performer/Band */
  $handler->display->display_options['fields']['field_author_performer_band']['id'] = 'field_author_performer_band';
  $handler->display->display_options['fields']['field_author_performer_band']['table'] = 'field_data_field_author_performer_band';
  $handler->display->display_options['fields']['field_author_performer_band']['field'] = 'field_author_performer_band';
  /* Field: Content: Format */
  $handler->display->display_options['fields']['field_format']['id'] = 'field_format';
  $handler->display->display_options['fields']['field_format']['table'] = 'field_data_field_format';
  $handler->display->display_options['fields']['field_format']['field'] = 'field_format';
  /* Field: Content: Targeted Age Level of Item */
  $handler->display->display_options['fields']['field_targeted_age_level_of_item']['id'] = 'field_targeted_age_level_of_item';
  $handler->display->display_options['fields']['field_targeted_age_level_of_item']['table'] = 'field_data_field_targeted_age_level_of_item';
  $handler->display->display_options['fields']['field_targeted_age_level_of_item']['field'] = 'field_targeted_age_level_of_item';
  $handler->display->display_options['fields']['field_targeted_age_level_of_item']['label'] = 'Targeted Age';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Follow Up (field_follow_up) */
  $handler->display->display_options['filters']['field_follow_up_value']['id'] = 'field_follow_up_value';
  $handler->display->display_options['filters']['field_follow_up_value']['table'] = 'field_data_field_follow_up';
  $handler->display->display_options['filters']['field_follow_up_value']['field'] = 'field_follow_up_value';
  $handler->display->display_options['filters']['field_follow_up_value']['value'] = array(
    'Awaiting Response' => 'Awaiting Response',
  );
  $handler->display->display_options['filters']['field_follow_up_value']['group'] = 1;
  /* Filter criterion: Content: Format (field_format) */
  $handler->display->display_options['filters']['field_format_value']['id'] = 'field_format_value';
  $handler->display->display_options['filters']['field_format_value']['table'] = 'field_data_field_format';
  $handler->display->display_options['filters']['field_format_value']['field'] = 'field_format_value';
  $handler->display->display_options['filters']['field_format_value']['value'] = array(
    'all' => 'all',
    'Blu-ray Disc' => 'Blu-ray Disc',
    'Book on CD' => 'Book on CD',
    'Book-fiction' => 'Book-fiction',
    'Book-graphic novel' => 'Book-graphic novel',
    'Book-large type' => 'Book-large type',
    'Book-nonfiction' => 'Book-nonfiction',
    'Book-picture' => 'Book-picture',
    'DVD' => 'DVD',
    'eAudiobook-fiction' => 'eAudiobook-fiction',
    'eAudiobook-nonfiction' => 'eAudiobook-nonfiction',
    'eBook-fiction' => 'eBook-fiction',
    'eBook-nonfiction' => 'eBook-nonfiction',
    'eMusic' => 'eMusic',
    'eVideo' => 'eVideo',
    'ePeriodical' => 'ePeriodical',
    'eNewspaper' => 'eNewspaper',
    'Music CD' => 'Music CD',
    'Periodical/Newspaper' => 'Periodical/Newspaper',
    'Other' => 'Other',
  );
  $handler->display->display_options['filters']['field_format_value']['group'] = 1;
  $handler->display->display_options['filters']['field_format_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_format_value']['expose']['operator_id'] = 'field_format_value_op';
  $handler->display->display_options['filters']['field_format_value']['expose']['label'] = 'Format';
  $handler->display->display_options['filters']['field_format_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_format_value']['expose']['operator'] = 'field_format_value_op';
  $handler->display->display_options['filters']['field_format_value']['expose']['identifier'] = 'field_format_value';
  $handler->display->display_options['filters']['field_format_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_format_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_format_value']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_format_value']['group_info']['label'] = 'Format';
  $handler->display->display_options['filters']['field_format_value']['group_info']['identifier'] = 'field_format_value';
  $handler->display->display_options['filters']['field_format_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Format',
      'operator' => 'or',
      'value' => array(
        'all' => 'all',
      ),
    ),
    2 => array(
      'title' => 'Format',
      'operator' => 'empty',
      'value' => array(
        'all' => 'all',
      ),
    ),
  );
  /* Filter criterion: Content: Targeted Age Level of Item (field_targeted_age_level_of_item) */
  $handler->display->display_options['filters']['field_targeted_age_level_of_item_value']['id'] = 'field_targeted_age_level_of_item_value';
  $handler->display->display_options['filters']['field_targeted_age_level_of_item_value']['table'] = 'field_data_field_targeted_age_level_of_item';
  $handler->display->display_options['filters']['field_targeted_age_level_of_item_value']['field'] = 'field_targeted_age_level_of_item_value';
  $handler->display->display_options['filters']['field_targeted_age_level_of_item_value']['group'] = 1;
  $handler->display->display_options['filters']['field_targeted_age_level_of_item_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_targeted_age_level_of_item_value']['expose']['operator_id'] = 'field_targeted_age_level_of_item_value_op';
  $handler->display->display_options['filters']['field_targeted_age_level_of_item_value']['expose']['label'] = 'Targeted Age';
  $handler->display->display_options['filters']['field_targeted_age_level_of_item_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_targeted_age_level_of_item_value']['expose']['operator'] = 'field_targeted_age_level_of_item_value_op';
  $handler->display->display_options['filters']['field_targeted_age_level_of_item_value']['expose']['identifier'] = 'field_targeted_age_level_of_item_value';
  $handler->display->display_options['filters']['field_targeted_age_level_of_item_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_targeted_age_level_of_item_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Language (field_language) */
  $handler->display->display_options['filters']['field_language_value']['id'] = 'field_language_value';
  $handler->display->display_options['filters']['field_language_value']['table'] = 'field_data_field_language';
  $handler->display->display_options['filters']['field_language_value']['field'] = 'field_language_value';
  $handler->display->display_options['filters']['field_language_value']['value'] = array(
    'English' => 'English',
  );
  $handler->display->display_options['filters']['field_language_value']['group'] = 1;
  $handler->display->display_options['filters']['field_language_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_language_value']['expose']['operator_id'] = 'field_language_value_op';
  $handler->display->display_options['filters']['field_language_value']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['field_language_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_language_value']['expose']['operator'] = 'field_language_value_op';
  $handler->display->display_options['filters']['field_language_value']['expose']['identifier'] = 'field_language_value';
  $handler->display->display_options['filters']['field_language_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_language_value']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'suggest-a-title/queue';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Queue';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['suggest_a_title_queue'] = $view;

  return $export;
}
