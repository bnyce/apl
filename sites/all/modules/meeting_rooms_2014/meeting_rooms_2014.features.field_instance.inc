<?php
/**
 * @file
 * meeting_rooms_2014.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function meeting_rooms_2014_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-group-field_agreements_group'
  $field_instances['node-group-field_agreements_group'] = array(
    'bundle' => 'group',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<ul class="menu">
<li class="leaf"><a target="_blank" href="/meeting-rooms/policy">Meeting Rooms Policy</a></li>
<li class="leaf"><a target="_blank" href="/meeting-rooms/guidelines">Meeting Room Guidelines</a></li>
<li class="leaf"><a target="_blank" href="/meeting-rooms/reservations">Reservations Guidelines</a></li>
<li class="leaf"><a target="_blank" href="/meeting-rooms/care">Care and Use of Facilities</a></li>
<li class="last leaf"><a target="_blank" href="/meeting-rooms/ahc">Austin History Center Guidelines</a></li>
</ul>
If your group is eligible, please agree to all stated Agreements.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
    'exclude_cv' => 0,
    'field_name' => 'field_agreements_group',
    'label' => 'Agreements',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-group-field_digital_signature_group'
  $field_instances['node-group-field_digital_signature_group'] = array(
    'bundle' => 'group',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'By typing my name, I am submitting my signature with my agreement to honor the Meeting Room guidelines and policies.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_digital_signature_group',
    'label' => 'Digital Signature',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-group-field_email2'
  $field_instances['node-group-field_email2'] = array(
    'bundle' => 'group',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'exclude_cv' => 0,
    'field_name' => 'field_email2',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'exclude_cv' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-group-field_full_name2'
  $field_instances['node-group-field_full_name2'] = array(
    'bundle' => 'group',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'exclude_cv' => 0,
    'field_name' => 'field_full_name2',
    'label' => 'Full Name',
    'required' => 0,
    'settings' => array(
      'exclude_cv' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-group-field_notes2'
  $field_instances['node-group-field_notes2'] = array(
    'bundle' => 'group',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use this space for any extra notes about this group, such as alternative contact info.',
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
    'exclude_cv' => 0,
    'field_name' => 'field_notes2',
    'label' => 'Notes',
    'required' => 0,
    'settings' => array(
      'exclude_cv' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-group-field_phone2'
  $field_instances['node-group-field_phone2'] = array(
    'bundle' => 'group',
    'default_value' => NULL,
    'deleted' => 0,
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
    'exclude_cv' => 0,
    'field_name' => 'field_phone2',
    'label' => 'Phone',
    'required' => 0,
    'settings' => array(
      'exclude_cv' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-group-field_purpose_of_group2'
  $field_instances['node-group-field_purpose_of_group2'] = array(
    'bundle' => 'group',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'exclude_cv' => 0,
    'field_name' => 'field_purpose_of_group2',
    'label' => 'Purpose of Group',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-group-field_purpose_of_meeting'
  $field_instances['node-group-field_purpose_of_meeting'] = array(
    'bundle' => 'group',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_purpose_of_meeting',
    'label' => 'Purpose of Group',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-group-field_verified_group'
  $field_instances['node-group-field_verified_group'] = array(
    'bundle' => 'group',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_verified_group',
    'label' => 'Verified',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-room_reservation-body'
  $field_instances['node-room_reservation-body'] = array(
    'bundle' => 'room_reservation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 35,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'exclude_cv' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-room_reservation-field_austin_history_center_room'
  $field_instances['node-room_reservation-field_austin_history_center_room'] = array(
    'bundle' => 'room_reservation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>The Austin History Center is closed on Monday. The Austin History Center is open Tuesday-Saturday 10am-6pm and Sunday 12pm-6pm.</p>
<p><strong>Austin History Center</strong><br/>
810 Guadalupe St., Austin, TX, 78701<br/>
512-974-7557</p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
    'exclude_cv' => 0,
    'field_name' => 'field_austin_history_center_room',
    'label' => 'Austin History Center Rooms',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-room_reservation-field_carver_branch_rooms2'
  $field_instances['node-room_reservation-field_carver_branch_rooms2'] = array(
    'bundle' => 'room_reservation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 33,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_carver_branch_rooms2',
    'label' => 'Carver Branch Rooms',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-room_reservation-field_cepeda_branch_rooms2'
  $field_instances['node-room_reservation-field_cepeda_branch_rooms2'] = array(
    'bundle' => 'room_reservation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>The Cepeda Branch is closed on Friday and Sunday. The Cepeda Branch is open Monday-Thursday 10am-9pm and Saturday 10am-5pm.</p>
<p><strong>Cepeda Branch</strong><br/>
651 N. Pleasant Valley Rd., Austin, TX, 78702<br/>
512-974-7372</p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 34,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_cepeda_branch_rooms2',
    'label' => 'Cepeda Branch Rooms',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-room_reservation-field_expected_attendance'
  $field_instances['node-room_reservation-field_expected_attendance'] = array(
    'bundle' => 'room_reservation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Note: the listed capacity for each room is for seated capacity, without tables.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_expected_attendance',
    'label' => 'Expected Attendance',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'max' => 195,
      'min' => 3,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-room_reservation-field_group3'
  $field_instances['node-room_reservation-field_group3'] = array(
    'bundle' => 'room_reservation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
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
    'exclude_cv' => 0,
    'field_name' => 'field_group3',
    'label' => 'Group',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-room_reservation-field_hampton_branch_at_oak_hill'
  $field_instances['node-room_reservation-field_hampton_branch_at_oak_hill'] = array(
    'bundle' => 'room_reservation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>The Hampton Branch at Oak Hill is closed on Thursday and Sunday. The Hampton Branch at Oak Hill is open Monday-Wednesday 10am-9pm, Friday 10am-6pm and Saturday 10am-5pm.</p>
<p><strong>Hampton Branch at Oak Hill</strong><br/>
5125 Convict Hill Rd., Austin, TX, 78749<br/>
512-974-9900</p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_hampton_branch_at_oak_hill',
    'label' => 'Hampton Branch at Oak Hill Rooms',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-room_reservation-field_howson_branch_rooms'
  $field_instances['node-room_reservation-field_howson_branch_rooms'] = array(
    'bundle' => 'room_reservation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>The Howson Branch is closed on Thursday and Sunday. The Howson Branch is open Monday-Wednesday 10am-9pm, Friday 10am-6pm and Saturday 10am-5pm.</p>
<p><strong>Howson Branch</strong><br/>
2500 Exposition Blvd., Austin, TX, 78703<br/>
512-974-8800</p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_howson_branch_rooms',
    'label' => 'Howson Branch Rooms',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-room_reservation-field_little_walnut_creek_rooms'
  $field_instances['node-room_reservation-field_little_walnut_creek_rooms'] = array(
    'bundle' => 'room_reservation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>The Little Walnut Creek Branch is closed on Friday. The Little Walnut Creek Branch is open Monday-Thursday 10am-9pm, Saturday 10am-5pm and Sunday 2pm-6pm.</p>
<p><strong>Little Walnut Creek Branch</strong><br/>
835 Rundberg Ln., Austin, TX, 78758<br/>
512-974-9860</p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_little_walnut_creek_rooms',
    'label' => 'Little Walnut Creek Rooms',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-room_reservation-field_location2'
  $field_instances['node-room_reservation-field_location2'] = array(
    'bundle' => 'room_reservation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_location2',
    'label' => 'Location',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-room_reservation-field_location_taxonomy2'
  $field_instances['node-room_reservation-field_location_taxonomy2'] = array(
    'bundle' => 'room_reservation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 32,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_location_taxonomy2',
    'label' => 'Location taxonomy2',
    'required' => 0,
    'settings' => array(
      'exclude_cv' => FALSE,
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
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-room_reservation-field_manchaca_road_branch_rooms'
  $field_instances['node-room_reservation-field_manchaca_road_branch_rooms'] = array(
    'bundle' => 'room_reservation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>The Manchaca Road Branch is closed on Friday. The Manchaca Branch is open Monday-Thursday 10am-9pm, Saturday 10am-5pm and Sunday 2pm-6pm.</p>
<p><strong>Manchaca Road Branch</strong><br/>
5500 Manchaca Rd., Austin, TX, 78745<br/>
512-974-8700</p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_manchaca_road_branch_rooms',
    'label' => 'Manchaca Road Branch Rooms',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-room_reservation-field_milwood_branch_rooms'
  $field_instances['node-room_reservation-field_milwood_branch_rooms'] = array(
    'bundle' => 'room_reservation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>The Milwood Branch is closed on Friday and Sunday. The Milwood Branch is open Monday-Thursday 10am-9pm and Saturday 10am-5pm.</p>
<p><strong>Milwood Branch</strong><br/>
12500 Amherst Dr., Austin, TX, 78727<br/>
512-974-9880</p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_milwood_branch_rooms',
    'label' => 'Milwood Branch Rooms',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-room_reservation-field_mr_date_and_time'
  $field_instances['node-room_reservation-field_mr_date_and_time'] = array(
    'bundle' => 'room_reservation',
    'deleted' => 0,
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
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 1,
    'field_name' => 'field_mr_date_and_time',
    'label' => 'Date and Time',
    'required' => 1,
    'settings' => array(
      'default_value' => 'strtotime',
      'default_value2' => 'same',
      'default_value_code' => '1 January 2014',
      'default_value_code2' => '+5 days',
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'Y/m/d - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '2014:2014',
      ),
      'type' => 'date_popup',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'node-room_reservation-field_north_village_branch_rooms'
  $field_instances['node-room_reservation-field_north_village_branch_rooms'] = array(
    'bundle' => 'room_reservation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>The North Village Branch is closed on Thursday and Sunday. The North Village Branch is open Monday-Wednesday 10am-9pm, Friday 10am-6pm and Saturday 10am-5pm.</p>
<p><strong>North Village Branch</strong><br/>
2505 Steck Ave., Austin, TX, 78757<br/>
512-974-9960</p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_north_village_branch_rooms',
    'label' => 'North Village Branch Rooms',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-room_reservation-field_old_quarry_branch_rooms'
  $field_instances['node-room_reservation-field_old_quarry_branch_rooms'] = array(
    'bundle' => 'room_reservation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>The Old Quarry Branch is closed on Friday and Sunday. The Old Quarry Branch is open Monday-Thursday 10am-9pm and Saturday 10am-5pm.</p>
<p><strong>Old Quarry Branch</strong><br/>
7051 Village Center Dr., Austin, TX, 78731<br/>
512-974-8860</p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_old_quarry_branch_rooms',
    'label' => 'Old Quarry Branch Rooms',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-room_reservation-field_pleasant_hill_branch_rooms'
  $field_instances['node-room_reservation-field_pleasant_hill_branch_rooms'] = array(
    'bundle' => 'room_reservation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>The Pleasant Hill Branch is closed on Friday and Sunday. The Pleasant Hill Branch is open Monday-Thursday 10am-9pm and Saturday 10am-5pm.</p>
<p><strong>Pleasant Hill Branch</strong><br/>
211 E. William Cannon Dr., Austin, TX, 78745<br/>
512-974-3940</p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
    'exclude_cv' => 0,
    'field_name' => 'field_pleasant_hill_branch_rooms',
    'label' => 'Pleasant Hill Branch Rooms',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-room_reservation-field_purpose_of_meeting'
  $field_instances['node-room_reservation-field_purpose_of_meeting'] = array(
    'bundle' => 'room_reservation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Is there a specific book or subject matter for this meeting?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_purpose_of_meeting',
    'label' => 'Topic',
    'required' => 0,
    'settings' => array(
      'exclude_cv' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-room_reservation-field_room'
  $field_instances['node-room_reservation-field_room'] = array(
    'bundle' => 'room_reservation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_room',
    'label' => 'Room',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
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
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'node-room_reservation-field_room2b'
  $field_instances['node-room_reservation-field_room2b'] = array(
    'bundle' => 'room_reservation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 28,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_room2b',
    'label' => 'Room',
    'required' => 0,
    'settings' => array(
      'exclude_cv' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-room_reservation-field_ruiz_branch_rooms'
  $field_instances['node-room_reservation-field_ruiz_branch_rooms'] = array(
    'bundle' => 'room_reservation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>The Ruiz Branch is closed on Friday. The Ruiz Branch is open Monday-Thursday 10am-9pm, Saturday 10am-5pm and Sunday 2pm-6pm.</p>
<p><strong>Ruiz Branch</strong><br/>
1600 Grove Blvd., Austin, TX, 78741<br/>
512-974-7500</p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
    'exclude_cv' => 0,
    'field_name' => 'field_ruiz_branch_rooms',
    'label' => 'Ruiz Branch Rooms',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-room_reservation-field_southeast_branch_rooms'
  $field_instances['node-room_reservation-field_southeast_branch_rooms'] = array(
    'bundle' => 'room_reservation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>The Southeast Branch is closed on Thursday and Sunday. The Southeast Branch is open Monday-Wednesday 10am-9pm, Friday 10am-6pm and Saturday 10am-5pm.</p>
<p><strong>Southeast Branch</strong><br/>
5803 Nuckols Crossing Rd., Austin, TX, 78744<br/>
512-974-8840</p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
    'exclude_cv' => 0,
    'field_name' => 'field_southeast_branch_rooms',
    'label' => 'Southeast Branch Rooms',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-room_reservation-field_spicewood_springs_branch_r'
  $field_instances['node-room_reservation-field_spicewood_springs_branch_r'] = array(
    'bundle' => 'room_reservation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>The Spicewood Springs Branch is closed on Thursday and Sunday. The Spicewood Springs Branch is open Monday-Wednesday 10am-9pm, Friday 10am-6pm and Saturday 10am-5pm.</p>
<p><strong>Spicewood Springs Branch</strong><br/>
8637 Spicewood Springs Rd., Austin, TX, 78759<br/>
512-974-3800</p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_spicewood_springs_branch_r',
    'label' => 'Spicewood Springs Branch Rooms',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-room_reservation-field_status'
  $field_instances['node-room_reservation-field_status'] = array(
    'bundle' => 'room_reservation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_status',
    'label' => 'Status',
    'required' => 0,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-room_reservation-field_terrazas_branch_rooms2'
  $field_instances['node-room_reservation-field_terrazas_branch_rooms2'] = array(
    'bundle' => 'room_reservation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>The Terrazas Branch is closed on Thursday and Sunday. The Terrazas Branch is open Monday-Wednesday 10am-9pm, Friday 10am-6pm and Sunday 10am-5pm.</p>
<p><strong>Terrazas Branch</strong><br/>
1105 E. Cesar Chavez St., Austin, TX, 78702<br/>
512-974-3625</p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 30,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_terrazas_branch_rooms2',
    'label' => 'Terrazas Branch Rooms',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-room_reservation-field_twin_oaks_branch_rooms'
  $field_instances['node-room_reservation-field_twin_oaks_branch_rooms'] = array(
    'bundle' => 'room_reservation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>The Twin Oaks Branch is closed on Thursday and Sunday. The Twin Oaks Branch is open Monday-Wednesday 10am-9pm, Friday 10am-6pm and Saturday 10am-5pm.</p>
<p><strong>Twin Oaks Branch</strong><br/>
1800 S. 5th St., Austin, TX, 78704<br/>
512-974-9980</p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
    'exclude_cv' => 0,
    'field_name' => 'field_twin_oaks_branch_rooms',
    'label' => 'Twin Oaks Branch Rooms',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-room_reservation-field_university_hills_branch_ro'
  $field_instances['node-room_reservation-field_university_hills_branch_ro'] = array(
    'bundle' => 'room_reservation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>The University Hills Branch is closed on Friday and Sunday. The University Hills Branch is open Monday-Thursday 10am-9pm and Saturday 10am-5pm.</p>
<p><strong>University Hills Branch</strong><br/>
4721 Loyola Ln., Austin, TX, 78723<br/>
512-974-9940</p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
    'exclude_cv' => 0,
    'field_name' => 'field_university_hills_branch_ro',
    'label' => 'University Hills Branch Rooms',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-room_reservation-field_willie_mae_kirk_branch_roo'
  $field_instances['node-room_reservation-field_willie_mae_kirk_branch_roo'] = array(
    'bundle' => 'room_reservation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>The Willie Mae Kirk Branch is closed on Thursday and Sunday. The Willie Mae Kirk Branch is open Monday-Wednesday 10am-9pm, Friday 10am-6pm and Saturday 10am-5pm.</p>
<p><strong>Willie Mae Kirk Branch</strong><br/>
3101 Oak Springs Dr., Austin, TX, 78702<br/>
512-974-9920</p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_willie_mae_kirk_branch_roo',
    'label' => 'Willie Mae Kirk Branch Rooms',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-room_reservation-field_windsor_park_branch_rooms'
  $field_instances['node-room_reservation-field_windsor_park_branch_rooms'] = array(
    'bundle' => 'room_reservation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>The Windsor Park Branch is closed on Thursday and Sunday. The Windsor Park Branch is open Monday-Wednesday 10am-9pm, Friday 10am-6pm and Saturday 10am-5pm.</p>
<p><strong>Windsor Park Branch</strong><br/>
5833 Westminster Dr., Austin, TX, 78723<br/>
512-974-9840</p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
    'exclude_cv' => 0,
    'field_name' => 'field_windsor_park_branch_rooms',
    'label' => 'Windsor Park Branch Rooms',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'node-room_reservation-field_yarborough_branch_rooms'
  $field_instances['node-room_reservation-field_yarborough_branch_rooms'] = array(
    'bundle' => 'room_reservation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>The Yarborough Branch is closed on Friday and Sunday. The Yarborough Branch is open Monday-Thursday 10am-9pm and Saturday 10am-5pm.</p>
<p><strong>Yarborough Branch</strong><br/>
2200 Hancock St., Austin, TX, 78756<br/>
512-974-8820</p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 27,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_yarborough_branch_rooms',
    'label' => 'Yarborough Branch Rooms',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'taxonomy_term-rooms-field_capacity2'
  $field_instances['taxonomy_term-rooms-field_capacity2'] = array(
    'bundle' => 'rooms',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'exclude_cv' => 0,
    'field_name' => 'field_capacity2',
    'label' => 'Capacity',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-rooms-field_location'
  $field_instances['taxonomy_term-rooms-field_location'] = array(
    'bundle' => 'rooms',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_location',
    'label' => 'Location',
    'required' => FALSE,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<p>The Austin History Center is closed on Monday. The Austin History Center is open Tuesday-Saturday 10am-6pm and Sunday 12pm-6pm.</p>
<p><strong>Austin History Center</strong><br/>
810 Guadalupe St., Austin, TX, 78701<br/>
512-974-7557</p>');
  t('<p>The Cepeda Branch is closed on Friday and Sunday. The Cepeda Branch is open Monday-Thursday 10am-9pm and Saturday 10am-5pm.</p>
<p><strong>Cepeda Branch</strong><br/>
651 N. Pleasant Valley Rd., Austin, TX, 78702<br/>
512-974-7372</p>');
  t('<p>The Hampton Branch at Oak Hill is closed on Thursday and Sunday. The Hampton Branch at Oak Hill is open Monday-Wednesday 10am-9pm, Friday 10am-6pm and Saturday 10am-5pm.</p>
<p><strong>Hampton Branch at Oak Hill</strong><br/>
5125 Convict Hill Rd., Austin, TX, 78749<br/>
512-974-9900</p>');
  t('<p>The Howson Branch is closed on Thursday and Sunday. The Howson Branch is open Monday-Wednesday 10am-9pm, Friday 10am-6pm and Saturday 10am-5pm.</p>
<p><strong>Howson Branch</strong><br/>
2500 Exposition Blvd., Austin, TX, 78703<br/>
512-974-8800</p>');
  t('<p>The Little Walnut Creek Branch is closed on Friday. The Little Walnut Creek Branch is open Monday-Thursday 10am-9pm, Saturday 10am-5pm and Sunday 2pm-6pm.</p>
<p><strong>Little Walnut Creek Branch</strong><br/>
835 Rundberg Ln., Austin, TX, 78758<br/>
512-974-9860</p>');
  t('<p>The Manchaca Road Branch is closed on Friday. The Manchaca Branch is open Monday-Thursday 10am-9pm, Saturday 10am-5pm and Sunday 2pm-6pm.</p>
<p><strong>Manchaca Road Branch</strong><br/>
5500 Manchaca Rd., Austin, TX, 78745<br/>
512-974-8700</p>');
  t('<p>The Milwood Branch is closed on Friday and Sunday. The Milwood Branch is open Monday-Thursday 10am-9pm and Saturday 10am-5pm.</p>
<p><strong>Milwood Branch</strong><br/>
12500 Amherst Dr., Austin, TX, 78727<br/>
512-974-9880</p>');
  t('<p>The North Village Branch is closed on Thursday and Sunday. The North Village Branch is open Monday-Wednesday 10am-9pm, Friday 10am-6pm and Saturday 10am-5pm.</p>
<p><strong>North Village Branch</strong><br/>
2505 Steck Ave., Austin, TX, 78757<br/>
512-974-9960</p>');
  t('<p>The Old Quarry Branch is closed on Friday and Sunday. The Old Quarry Branch is open Monday-Thursday 10am-9pm and Saturday 10am-5pm.</p>
<p><strong>Old Quarry Branch</strong><br/>
7051 Village Center Dr., Austin, TX, 78731<br/>
512-974-8860</p>');
  t('<p>The Pleasant Hill Branch is closed on Friday and Sunday. The Pleasant Hill Branch is open Monday-Thursday 10am-9pm and Saturday 10am-5pm.</p>
<p><strong>Pleasant Hill Branch</strong><br/>
211 E. William Cannon Dr., Austin, TX, 78745<br/>
512-974-3940</p>');
  t('<p>The Ruiz Branch is closed on Friday. The Ruiz Branch is open Monday-Thursday 10am-9pm, Saturday 10am-5pm and Sunday 2pm-6pm.</p>
<p><strong>Ruiz Branch</strong><br/>
1600 Grove Blvd., Austin, TX, 78741<br/>
512-974-7500</p>');
  t('<p>The Southeast Branch is closed on Thursday and Sunday. The Southeast Branch is open Monday-Wednesday 10am-9pm, Friday 10am-6pm and Saturday 10am-5pm.</p>
<p><strong>Southeast Branch</strong><br/>
5803 Nuckols Crossing Rd., Austin, TX, 78744<br/>
512-974-8840</p>');
  t('<p>The Spicewood Springs Branch is closed on Thursday and Sunday. The Spicewood Springs Branch is open Monday-Wednesday 10am-9pm, Friday 10am-6pm and Saturday 10am-5pm.</p>
<p><strong>Spicewood Springs Branch</strong><br/>
8637 Spicewood Springs Rd., Austin, TX, 78759<br/>
512-974-3800</p>');
  t('<p>The Terrazas Branch is closed on Thursday and Sunday. The Terrazas Branch is open Monday-Wednesday 10am-9pm, Friday 10am-6pm and Sunday 10am-5pm.</p>
<p><strong>Terrazas Branch</strong><br/>
1105 E. Cesar Chavez St., Austin, TX, 78702<br/>
512-974-3625</p>');
  t('<p>The Twin Oaks Branch is closed on Thursday and Sunday. The Twin Oaks Branch is open Monday-Wednesday 10am-9pm, Friday 10am-6pm and Saturday 10am-5pm.</p>
<p><strong>Twin Oaks Branch</strong><br/>
1800 S. 5th St., Austin, TX, 78704<br/>
512-974-9980</p>');
  t('<p>The University Hills Branch is closed on Friday and Sunday. The University Hills Branch is open Monday-Thursday 10am-9pm and Saturday 10am-5pm.</p>
<p><strong>University Hills Branch</strong><br/>
4721 Loyola Ln., Austin, TX, 78723<br/>
512-974-9940</p>');
  t('<p>The Willie Mae Kirk Branch is closed on Thursday and Sunday. The Willie Mae Kirk Branch is open Monday-Wednesday 10am-9pm, Friday 10am-6pm and Saturday 10am-5pm.</p>
<p><strong>Willie Mae Kirk Branch</strong><br/>
3101 Oak Springs Dr., Austin, TX, 78702<br/>
512-974-9920</p>');
  t('<p>The Windsor Park Branch is closed on Thursday and Sunday. The Windsor Park Branch is open Monday-Wednesday 10am-9pm, Friday 10am-6pm and Saturday 10am-5pm.</p>
<p><strong>Windsor Park Branch</strong><br/>
5833 Westminster Dr., Austin, TX, 78723<br/>
512-974-9840</p>');
  t('<p>The Yarborough Branch is closed on Friday and Sunday. The Yarborough Branch is open Monday-Thursday 10am-9pm and Saturday 10am-5pm.</p>
<p><strong>Yarborough Branch</strong><br/>
2200 Hancock St., Austin, TX, 78756<br/>
512-974-8820</p>');
  t('<ul class="menu">
<li class="leaf"><a target="_blank" href="/meeting-rooms/policy">Meeting Rooms Policy</a></li>
<li class="leaf"><a target="_blank" href="/meeting-rooms/guidelines">Meeting Room Guidelines</a></li>
<li class="leaf"><a target="_blank" href="/meeting-rooms/reservations">Reservations Guidelines</a></li>
<li class="leaf"><a target="_blank" href="/meeting-rooms/care">Care and Use of Facilities</a></li>
<li class="last leaf"><a target="_blank" href="/meeting-rooms/ahc">Austin History Center Guidelines</a></li>
</ul>
If your group is eligible, please agree to all stated Agreements.');
  t('Agreements');
  t('Austin History Center Rooms');
  t('Body');
  t('By typing my name, I am submitting my signature with my agreement to honor the Meeting Room guidelines and policies.');
  t('Capacity');
  t('Carver Branch Rooms');
  t('Cepeda Branch Rooms');
  t('Date and Time');
  t('Digital Signature');
  t('Email');
  t('Expected Attendance');
  t('Full Name');
  t('Group');
  t('Hampton Branch at Oak Hill Rooms');
  t('Howson Branch Rooms');
  t('Is there a specific book or subject matter for this meeting?');
  t('Little Walnut Creek Rooms');
  t('Location');
  t('Location taxonomy2');
  t('Manchaca Road Branch Rooms');
  t('Milwood Branch Rooms');
  t('North Village Branch Rooms');
  t('Note: the listed capacity for each room is for seated capacity, without tables.');
  t('Notes');
  t('Old Quarry Branch Rooms');
  t('Phone');
  t('Pleasant Hill Branch Rooms');
  t('Purpose of Group');
  t('Room');
  t('Ruiz Branch Rooms');
  t('Southeast Branch Rooms');
  t('Spicewood Springs Branch Rooms');
  t('Status');
  t('Terrazas Branch Rooms');
  t('Topic');
  t('Twin Oaks Branch Rooms');
  t('University Hills Branch Rooms');
  t('Use this space for any extra notes about this group, such as alternative contact info.');
  t('Verified');
  t('Willie Mae Kirk Branch Rooms');
  t('Windsor Park Branch Rooms');
  t('Yarborough Branch Rooms');

  return $field_instances;
}
