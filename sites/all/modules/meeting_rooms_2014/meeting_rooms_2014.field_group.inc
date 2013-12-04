<?php
/**
 * @file
 * meeting_rooms_2014.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function meeting_rooms_2014_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_admin|node|group|form';
  $field_group->group_name = 'group_admin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'group';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Administrative',
    'weight' => '0',
    'children' => array(
      0 => 'field_verified_group',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-admin field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_admin|node|group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rep2|node|group|form';
  $field_group->group_name = 'group_rep2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'group';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group Representative',
    'weight' => '10',
    'children' => array(
      0 => 'field_full_name2',
      1 => 'field_email2',
      2 => 'field_phone2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-rep2 field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_rep2|node|group|form'] = $field_group;

  return $export;
}
