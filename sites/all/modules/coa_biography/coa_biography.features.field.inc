<?php
/**
 * @file
 * coa_biography.features.field.inc
 */

/**
 * Implementation of hook_field_default_fields().
 */
function coa_biography_field_default_fields() {
  $fields = array();

  // Exported field: 'node-biography-body'
  $fields['node-biography-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'biography',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Biography',
      'required' => 0,
      'settings' => array(
        'display_summary' => 1,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '20',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '7',
      ),
      'widget_type' => 'text_textarea_with_summary',
    ),
  );

  // Exported field: 'node-biography-field_council_place'
  $fields['node-biography-field_council_place'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_council_place',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          1 => '1',
          2 => '2',
          3 => '3',
          4 => '4',
          5 => '5',
          6 => '6',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '1',
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'biography',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 6,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_council_place',
      'label' => 'Place',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-biography-field_dept_feature_views'
  $fields['node-biography-field_dept_feature_views'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_dept_feature_views',
      'foreign keys' => array(),
      'indexes' => array(
        'view_id' => array(
          0 => 'view_id',
        ),
      ),
      'module' => 'viewreference',
      'settings' => array(
        'append_id' => 0,
        'arguments' => array(
          'delimiter' => '^',
          'dsv_arguments' => 1,
          'php_arguments' => 0,
          'rows' => '10',
        ),
        'referenceable_views' => array(
          'Directory:page' => 0,
          'Directory:panel_pane_1' => 0,
          'archive:block' => 0,
          'archive:page' => 0,
          'backlinks:block' => 0,
          'backlinks:page' => 0,
          'breadcrumb:panel_pane_1' => 0,
          'bus_home_news:block' => 0,
          'bus_home_news:feed' => 0,
          'bus_home_news:page' => 0,
          'comments_recent:block' => 0,
          'comments_recent:page' => 0,
          'date_browser:date_nav_1' => 0,
          'date_browser:page' => 0,
          'department_features:panel_pane_1' => 'department_features:panel_pane_1',
          'department_features:panel_pane_2' => 'department_features:panel_pane_2',
          'department_features:panel_pane_3' => 'department_features:panel_pane_3',
          'department_features:panel_pane_4' => 'department_features:panel_pane_4',
          'department_features:panel_pane_5' => 'department_features:panel_pane_5',
          'dept_home_page:panel_pane_1' => 0,
          'dept_listing:panel_pane_1' => 0,
          'dept_page_blocks:panel_pane_1' => 0,
          'dept_page_blocks:panel_pane_10' => 0,
          'dept_page_blocks:panel_pane_11' => 'dept_page_blocks:panel_pane_11',
          'dept_page_blocks:panel_pane_12' => 0,
          'dept_page_blocks:panel_pane_13' => 0,
          'dept_page_blocks:panel_pane_14' => 0,
          'dept_page_blocks:panel_pane_15' => 0,
          'dept_page_blocks:panel_pane_16' => 0,
          'dept_page_blocks:panel_pane_17' => 0,
          'dept_page_blocks:panel_pane_18' => 0,
          'dept_page_blocks:panel_pane_2' => 0,
          'dept_page_blocks:panel_pane_3' => 0,
          'dept_page_blocks:panel_pane_4' => 0,
          'dept_page_blocks:panel_pane_5' => 0,
          'dept_page_blocks:panel_pane_6' => 0,
          'dept_page_blocks:panel_pane_8' => 0,
          'dept_page_blocks:panel_pane_9' => 0,
          'dev_home_list:block' => 0,
          'dev_home_list:page' => 0,
          'env_home_news:block' => 0,
          'env_home_news:feed' => 0,
          'env_home_news:page' => 0,
          'events:block' => 0,
          'events:page_1' => 0,
          'frontpage:feed' => 0,
          'frontpage:page' => 0,
          'fullcalendar:calendar_day_block' => 0,
          'fullcalendar:calendar_day_block2' => 0,
          'fullcalendar:calendar_month_block' => 0,
          'fullcalendar:feed_1' => 0,
          'fullcalendar:fullcalendar_page' => 0,
          'glossary:attachment' => 0,
          'glossary:page' => 0,
          'gov_home_bio:block_1' => 0,
          'gov_home_bio:block_2' => 0,
          'gov_home_bio:block_3' => 0,
          'gov_home_bio:page' => 0,
          'home_promos:block' => 0,
          'home_promos:block_1' => 0,
          'home_promos:block_2' => 0,
          'home_promos:block_3' => 0,
          'home_promos:block_4' => 0,
          'home_promos:panel_pane_1' => 0,
          'home_promos:panel_pane_2' => 0,
          'home_promos:panel_pane_3' => 0,
          'i_need_to:block_1' => 0,
          'i_need_to:block_2' => 0,
          'i_need_to:block_3' => 0,
          'i_need_to:block_4' => 0,
          'i_need_to:block_5' => 0,
          'i_need_to:block_6' => 0,
          'mini_videos:panel_pane_1' => 0,
          'nodequeue_1:block' => 0,
          'nodequeue_1:page' => 0,
          'nodequeue_2:block' => 0,
          'nodequeue_2:page' => 0,
          'nodequeue_3:block' => 0,
          'nodequeue_3:page' => 0,
          'nodequeue_4:block' => 0,
          'nodequeue_4:page' => 0,
          'online_services:block' => 0,
          'online_services:block_1' => 0,
          'online_services:block_2' => 0,
          'online_services:block_3' => 0,
          'online_services:block_4' => 0,
          'online_services:panel_pane_1' => 0,
          'online_services:panel_pane_2' => 0,
          'online_services:panel_pane_3' => 0,
          'online_services_departments:block' => 0,
          'online_services_departments:block_1' => 0,
          'online_services_departments:block_2' => 0,
          'online_services_departments:block_3' => 0,
          'online_services_departments:block_4' => 0,
          'online_services_departments:panel_pane_1' => 0,
          'pay_online_links:panel_pane_1' => 0,
          'popular:block' => 0,
          'popular:block_1' => 0,
          'popular:page' => 0,
          'popular:page_1' => 0,
          'portal_menu:panel_pane_1' => 0,
          'portal_page_menu:panel_pane_1' => 0,
          'portal_view:panel_pane_1' => 0,
          'portal_view:panel_pane_2' => 0,
          'portal_view:panel_pane_3' => 0,
          'portal_view:panel_pane_4' => 0,
          'portal_view:panel_pane_5' => 0,
          'portal_view:panel_pane_6' => 0,
          'portal_view:panel_pane_7' => 0,
          'res_home_news:block' => 0,
          'res_home_news:feed' => 0,
          'res_home_news:page' => 0,
          'service_directory_view:attachment' => 0,
          'service_directory_view:page' => 0,
          'taxonomy_term:feed' => 0,
          'taxonomy_term:page' => 0,
          'topic_promoted:block' => 0,
          'topic_sticky:block' => 0,
          'tracker:page' => 0,
          'workbench_current_user:block_1' => 0,
          'workbench_edited:block_1' => 0,
          'workbench_edited:page_1' => 0,
          'workbench_files:page_1' => 0,
          'workbench_moderation:drafts_page' => 0,
          'workbench_moderation:needs_review_page' => 0,
          'workbench_recent_content:block_1' => 0,
          'workbench_recent_content:page_1' => 0,
        ),
      ),
      'translatable' => '1',
      'type' => 'viewreference',
    ),
    'field_instance' => array(
      'bundle' => 'biography',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'viewreference',
          'settings' => array(),
          'type' => 'viewreference_default',
          'weight' => 15,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_dept_feature_views',
      'label' => 'Feature',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'viewreference',
        'settings' => array(),
        'type' => 'viewreference_select',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'node-biography-field_first_name'
  $fields['node-biography-field_first_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_first_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'biography',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 8,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_first_name',
      'label' => 'First Name',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-biography-field_image'
  $fields['node-biography-field_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '1',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'biography',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 3,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_image',
      'label' => 'Photo',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'file_directory' => 'bio_images',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '200x250',
        'min_resolution' => '',
        'title_field' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-biography-field_last_name'
  $fields['node-biography-field_last_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_last_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'biography',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 9,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_last_name',
      'label' => 'Last Name',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-biography-field_office_term'
  $fields['node-biography-field_office_term'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_office_term',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'date',
      'settings' => array(
        'granularity' => array(
          'day' => 'day',
          'month' => 'month',
          'year' => 'year',
        ),
        'repeat' => 0,
        'timezone_db' => '',
        'todate' => 'required',
        'tz_handling' => 'none',
      ),
      'translatable' => '1',
      'type' => 'date',
    ),
    'field_instance' => array(
      'bundle' => 'biography',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => 14,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_office_term',
      'label' => 'Office Term',
      'required' => 0,
      'settings' => array(
        'default_format' => 'medium',
        'default_value' => 'blank',
        'default_value2' => 'blank',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'increment' => 1,
          'input_format' => 'Y-m-d H:i:s',
          'input_format_custom' => 'F d, Y',
          'label_position' => 'within',
          'repeat_collapsed' => 0,
          'text_parts' => array(),
          'year_range' => '-3:+3',
        ),
        'type' => 'date_text',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-biography-field_quote'
  $fields['node-biography-field_quote'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_quote',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'biography',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 12,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_quote',
      'label' => 'Quote',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '10',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Biography');
  t('Feature');
  t('First Name');
  t('Last Name');
  t('Office Term');
  t('Photo');
  t('Place');
  t('Quote');

  return $fields;
}
