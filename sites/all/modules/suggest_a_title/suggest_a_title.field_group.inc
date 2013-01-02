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
    'weight' => '-2',
    'children' => array(
      0 => 'body',
      1 => 'field_format',
      2 => 'field_how_did_you_learn_about_th',
      3 => 'field_isbn_issn_upc',
      4 => 'field_language',
      5 => 'field_publisher',
      6 => 'field_targeted_age_level_of_item',
      7 => 'field_text_publication_year',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'More Information (optional)',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
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
    'label' => 'Your Suggestion',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_author_performer_band',
      2 => 'field_format',
      3 => 'field_how_did_you_learn_about_th',
      4 => 'field_isbn_issn_upc',
      5 => 'field_language',
      6 => 'field_publisher',
      7 => 'field_targeted_age_level_of_item',
      8 => 'field_url',
      9 => 'field_publication_year',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
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
    'label' => 'Your Suggestion',
    'weight' => '0',
    'children' => array(
      0 => 'field_author_performer_band',
      1 => 'field_url',
      2 => 'title',
      3 => 'group_optional',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Your Suggestion',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '<p>Thank you for taking the time to suggest an item for the Library. Your input as a citizen of Austin is valuable to the Library\'s selection team and will be given careful consideration.</p>
<p>Have you searched the <a href="http://austin.bibliocommons.com">Library catalog</a> for the item you are suggesting? If not, please check the catalog before completing this form.</p>
<p>The decision to purchase an item is based on the Library\'s selection criteria, current budget constraints, and the item\'s availability.</p>',
      ),
      'formatter' => 'collapsible',
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
    'label' => 'How can we follow up with you?',
    'weight' => '1',
    'children' => array(
      0 => 'field_library_card_number',
      1 => 'field_which_library_locations_do',
      2 => 'field_your_e_mail',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
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
    'weight' => '1',
    'children' => array(
      0 => 'field_library_card_number',
      1 => 'field_which_library_locations_do',
      2 => 'field_your_e_mail',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'How can we follow up with you?',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_you|node|suggest_a_title|form'] = $field_group;

  return $export;
}
