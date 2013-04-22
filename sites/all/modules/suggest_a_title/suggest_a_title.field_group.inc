<?php
/**
 * @file
 * suggest_a_title.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function suggest_a_title_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_optional|node|suggest_a_title|form';
  $field_group->group_name = 'group_optional';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'suggest_a_title';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_suggestion';
  $field_group->data = array(
    'label' => 'More Information (optional)',
    'weight' => '7',
    'children' => array(
      0 => 'body',
      1 => 'field_how_did_you_learn_about_th',
      2 => 'field_isbn_issn_upc',
      3 => 'field_publisher',
      4 => 'field_text_publication_year',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'More Information (optional)',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'suggest',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_optional|node|suggest_a_title|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_suggestion|node|suggest_a_title|default';
  $field_group->group_name = 'group_suggestion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'suggest_a_title';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Original Suggestion',
    'weight' => '12',
    'children' => array(
      0 => 'body',
      1 => 'field_author_performer_band',
      2 => 'field_format',
      3 => 'field_how_did_you_learn_about_th',
      4 => 'field_isbn_issn_upc',
      5 => 'field_language',
      6 => 'field_publisher',
      7 => 'field_targeted_age_level_of_item',
      8 => 'field_text_publication_year',
      9 => 'field_url',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Original Suggestion',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_suggestion|node|suggest_a_title|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_suggestion|node|suggest_a_title|form';
  $field_group->group_name = 'group_suggestion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'suggest_a_title';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'What title would you like to suggest?',
    'weight' => '7',
    'children' => array(
      0 => 'body',
      1 => 'field_author_performer_band',
      2 => 'field_format',
      3 => 'field_how_did_you_learn_about_th',
      4 => 'field_isbn_issn_upc',
      5 => 'field_language',
      6 => 'field_publisher',
      7 => 'field_targeted_age_level_of_item',
      8 => 'field_text_publication_year',
      9 => 'field_url',
      10 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'What title would you like to suggest?',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'suggest',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_suggestion|node|suggest_a_title|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_you|node|suggest_a_title|default';
  $field_group->group_name = 'group_you';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'suggest_a_title';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Administrative',
    'weight' => '15',
    'children' => array(
      0 => 'field_anticipated_',
      1 => 'field_follow_up',
      2 => 'field_ready_to_email_',
      3 => 'field_selector_s_comment',
      4 => 'field_which_library_locations_do',
      5 => 'field_your_e_mail',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Administrative',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_you|node|suggest_a_title|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_you|node|suggest_a_title|form';
  $field_group->group_name = 'group_you';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'suggest_a_title';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'How can we follow up with you?',
    'weight' => '7',
    'children' => array(
      0 => 'field_which_library_locations_do',
      1 => 'field_your_e_mail',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'How can we follow up with you?',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'suggest',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_you|node|suggest_a_title|form'] = $field_group;

  return $export;
}
