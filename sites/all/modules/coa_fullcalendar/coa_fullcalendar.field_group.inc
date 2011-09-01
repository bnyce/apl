<?php
/**
 * @file
 * coa_fullcalendar.field_group.inc
 */

/**
 * Implementation of hook_field_group_info().
 */
function coa_fullcalendar_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info_grp|node|calender_events|default';
  $field_group->group_name = 'group_contact_info_grp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'calender_events';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '6',
    'children' => array(
      0 => 'field_contact_name',
      1 => 'field_email',
      2 => 'field_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_contact_info_grp|node|calender_events|default'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info_grp|node|calender_events|form';
  $field_group->group_name = 'group_contact_info_grp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'calender_events';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '7',
    'children' => array(
      0 => 'field_contact_name',
      1 => 'field_email',
      2 => 'field_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contact_info_grp|node|calender_events|form'] = $field_group;

  return $export;
}
