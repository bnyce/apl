<?php
/**
 * @file
 * information_guides.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function information_guides_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_center_box_1|node|new_information_guides|form';
  $field_group->group_name = 'group_center_box_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'new_information_guides';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Center Box 1',
    'weight' => '15',
    'children' => array(
      0 => 'field_center_box_1_title',
      1 => 'field_center_box_1_body',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_center_box_1|node|new_information_guides|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_center_box_2|node|new_information_guides|form';
  $field_group->group_name = 'group_center_box_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'new_information_guides';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Center Box 2',
    'weight' => '16',
    'children' => array(
      0 => 'field_center_box_2_title',
      1 => 'field_center_box_2_body',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_center_box_2|node|new_information_guides|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_box_1|node|new_information_guides|form';
  $field_group->group_name = 'group_left_box_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'new_information_guides';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Left Box 1',
    'weight' => '12',
    'children' => array(
      0 => 'field_left_box_1_title',
      1 => 'field_left_box_1_body',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_left_box_1|node|new_information_guides|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_box_2|node|new_information_guides|form';
  $field_group->group_name = 'group_left_box_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'new_information_guides';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Left Box 2',
    'weight' => '13',
    'children' => array(
      0 => 'field_left_box_2_title',
      1 => 'field_left_box_2_body',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_left_box_2|node|new_information_guides|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_box_3|node|new_information_guides|form';
  $field_group->group_name = 'group_left_box_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'new_information_guides';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Left Box 3',
    'weight' => '14',
    'children' => array(
      0 => 'field_left_box_3_title',
      1 => 'field_left_box_3_body',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_left_box_3|node|new_information_guides|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_box_1|node|new_information_guides|form';
  $field_group->group_name = 'group_right_box_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'new_information_guides';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Right Box 1',
    'weight' => '17',
    'children' => array(
      0 => 'field_right_box_1_title',
      1 => 'field_right_box_1_body',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_right_box_1|node|new_information_guides|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_box_2|node|new_information_guides|form';
  $field_group->group_name = 'group_right_box_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'new_information_guides';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Right Box 2',
    'weight' => '18',
    'children' => array(
      0 => 'field_right_box_2_title',
      1 => 'field_right_box_2_body',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_right_box_2|node|new_information_guides|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_box_3|node|new_information_guides|form';
  $field_group->group_name = 'group_right_box_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'new_information_guides';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Right Box 3',
    'weight' => '19',
    'children' => array(
      0 => 'field_right_box_3_title',
      1 => 'field_right_box_3_body',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_right_box_3|node|new_information_guides|form'] = $field_group;

  return $export;
}
