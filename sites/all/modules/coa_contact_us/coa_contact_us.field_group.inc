<?php
/**
 * @file
 * coa_contact_us.field_group.inc
 */

/**
 * Implementation of hook_field_group_info().
 */
function coa_contact_us_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_key_contact|node|contact_information|default';
  $field_group->group_name = 'group_key_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_information';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Key Contact',
    'weight' => '5',
    'children' => array(
      0 => 'field_key_con_name',
      1 => 'field_key_con_position',
      2 => 'field_key_con_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_key_contact|node|contact_information|default'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_key_contact|node|contact_information|form';
  $field_group->group_name = 'group_key_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_information';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Key Contact',
    'weight' => '8',
    'children' => array(
      0 => 'field_key_con_name',
      1 => 'field_key_con_position',
      2 => 'field_key_con_phone',
      3 => 'field_elected_position',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Key Contact',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => 'The main contact for a Department',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_key_contact|node|contact_information|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|contact_information|default';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_information';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '4',
    'children' => array(
      0 => 'field_address1',
      1 => 'field_address2',
      2 => 'field_city',
      3 => 'field_state',
      4 => 'field_zipcode',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_location|node|contact_information|default'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|contact_information|form';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_information';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '6',
    'children' => array(
      0 => 'field_address1',
      1 => 'field_address2',
      2 => 'field_city',
      3 => 'field_state',
      4 => 'field_zipcode',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Location',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => 'Physical or Mailing address',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_location|node|contact_information|form'] = $field_group;

  return $export;
}
