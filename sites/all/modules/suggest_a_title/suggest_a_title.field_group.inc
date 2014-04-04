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
  $field_group->identifier = 'group_suggestion|node|suggest_a_title|form';
  $field_group->group_name = 'group_suggestion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'suggest_a_title';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'What title would you like to suggest?',
    'weight' => '6',
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

  return $export;
}
