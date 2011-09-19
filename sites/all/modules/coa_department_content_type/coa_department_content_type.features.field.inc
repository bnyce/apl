<?php
/**
 * @file
 * coa_department_content_type.features.field.inc
 */

/**
 * Implementation of hook_field_default_fields().
 */
function coa_department_content_type_field_default_fields() {
  $fields = array();

  // Exported field: 'node-department-body'
  $fields['node-department-body'] = array(
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
      'bundle' => 'department',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Enter the mission statement and - optionally - a summary for this Department or Program.  If a summary is included, Drupal will use it for list views.  Otherwise Drupal will use the contents of the mission statement trimmed to 600 characters.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Mission Statement',
      'required' => 1,
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
        'weight' => '4',
      ),
      'widget_type' => 'text_textarea_with_summary',
    ),
  );

  // Exported field: 'node-department-field_bus_tax'
  $fields['node-department-field_bus_tax'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_bus_tax',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => '0',
            'vocabulary' => 'business_portal',
          ),
        ),
      ),
      'translatable' => '1',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'department',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
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
      'field_name' => 'field_bus_tax',
      'label' => 'Business Taxonomy',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '14',
      ),
    ),
  );

  // Exported field: 'node-department-field_cat_dept'
  $fields['node-department-field_cat_dept'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_cat_dept',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => '0',
            'vocabulary' => 'department',
          ),
        ),
      ),
      'translatable' => '1',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'department',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'This field should be hidden by COA_TAXONOMY_SELECTOR module.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_cat_dept',
      'label' => 'Department',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'node-department-field_dept_chars'
  $fields['node-department-field_dept_chars'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_dept_chars',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'number',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'department',
      'default_value' => array(
        0 => array(
          'value' => '1000',
        ),
      ),
      'deleted' => '0',
      'description' => 'The maximum number of characters permitted on the page (or more specifically, the combined total of Mission and Message).  If additional features are selected, the number of characters will be reduced according a value associated with each feature.',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_dept_chars',
      'label' => 'Character Limit',
      'required' => 1,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-department-field_dept_feature_views'
  $fields['node-department-field_dept_feature_views'] = array(
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
          'delimiter' => '/',
          'dsv_arguments' => 1,
          'php_arguments' => 1,
          'rows' => '1',
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
          'taxonomy_term:feed_1' => 0,
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
      'bundle' => 'department',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'viewreference',
          'settings' => array(),
          'type' => 'viewreference_default',
          'weight' => '6',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_dept_feature_views',
      'label' => 'Features',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'viewreference',
        'settings' => array(),
        'type' => 'viewreference_select',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'node-department-field_dept_features'
  $fields['node-department-field_dept_features'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_dept_features',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'number',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'department',
      'default_value' => array(
        0 => array(
          'value' => '3',
        ),
      ),
      'deleted' => '0',
      'description' => 'The maximum number of features permitted on this page.',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_dept_features',
      'label' => 'Feature Limit',
      'required' => 1,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '0',
      ),
    ),
  );

  // Exported field: 'node-department-field_dept_message'
  $fields['node-department-field_dept_message'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_dept_message',
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
      'bundle' => 'department',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Use this field to add additional messages about your Department or Program. This information will be placed below the Mission statement.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_dept_message',
      'label' => 'Message',
      'required' => 0,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-department-field_dev_tax'
  $fields['node-department-field_dev_tax'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_dev_tax',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => '0',
            'vocabulary' => 'development_taxonomy',
          ),
        ),
      ),
      'translatable' => '1',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'department',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
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
      'field_name' => 'field_dev_tax',
      'label' => 'Development Taxonomy',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '16',
      ),
    ),
  );

  // Exported field: 'node-department-field_env_tax'
  $fields['node-department-field_env_tax'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_env_tax',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => '0',
            'vocabulary' => 'environment_taxonomy',
          ),
        ),
      ),
      'translatable' => '1',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'department',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 11,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_env_tax',
      'label' => 'Environment Taxonomy',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '20',
      ),
    ),
  );

  // Exported field: 'node-department-field_gov_tax'
  $fields['node-department-field_gov_tax'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_gov_tax',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => '0',
            'vocabulary' => 'government_taxonomy',
          ),
        ),
      ),
      'translatable' => '1',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'department',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 10,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_gov_tax',
      'label' => 'Government Taxonomy',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '18',
      ),
    ),
  );

  // Exported field: 'node-department-field_page_resident'
  $fields['node-department-field_page_resident'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_page_resident',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => '0',
            'vocabulary' => 'portal',
          ),
        ),
      ),
      'translatable' => '1',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'department',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 7,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_page_resident',
      'label' => 'Resident Taxonomy',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'node-departments-field_home_category'
  $fields['node-departments-field_home_category'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_home_category',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => '0',
            'vocabulary' => 'home_page_category',
          ),
        ),
      ),
      'translatable' => '1',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'departments',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_home_category',
      'label' => 'Category',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '0',
      ),
    ),
  );

  // Exported field: 'node-departments-field_news_link'
  $fields['node-departments-field_news_link'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_news_link',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'title' => 'optional',
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => '1',
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'departments',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'default',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_news_link',
      'label' => 'Link',
      'required' => 1,
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => '_top',
        ),
        'display' => array(
          'url_cutoff' => '',
        ),
        'enable_tokens' => 1,
        'title' => 'value',
        'title_value' => '[node:title]',
        'url' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => '-2',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Business Taxonomy');
  t('Category');
  t('Character Limit');
  t('Department');
  t('Development Taxonomy');
  t('Enter the mission statement and - optionally - a summary for this Department or Program.  If a summary is included, Drupal will use it for list views.  Otherwise Drupal will use the contents of the mission statement trimmed to 600 characters.');
  t('Environment Taxonomy');
  t('Feature Limit');
  t('Features');
  t('Government Taxonomy');
  t('Link');
  t('Message');
  t('Mission Statement');
  t('Resident Taxonomy');
  t('The maximum number of characters permitted on the page (or more specifically, the combined total of Mission and Message).  If additional features are selected, the number of characters will be reduced according a value associated with each feature.');
  t('The maximum number of features permitted on this page.');
  t('This field should be hidden by COA_TAXONOMY_SELECTOR module.');
  t('Use this field to add additional messages about your Department or Program. This information will be placed below the Mission statement.');

  return $fields;
}
