<?php
/**
 * @file
 * meeting_rooms_2014.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function meeting_rooms_2014_user_default_roles() {
  $roles = array();

  // Exported role: Group Representative.
  $roles['Group Representative'] = array(
    'name' => 'Group Representative',
    'weight' => 16,
  );

  // Exported role: Meeting Rooms Administrator 2014.
  $roles['Meeting Rooms Administrator 2014'] = array(
    'name' => 'Meeting Rooms Administrator 2014',
    'weight' => 17,
  );

  return $roles;
}
