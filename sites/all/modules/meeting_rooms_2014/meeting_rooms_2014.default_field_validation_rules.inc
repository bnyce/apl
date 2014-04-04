<?php
/**
 * @file
 * meeting_rooms_2014.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function meeting_rooms_2014_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Must be on or after 2014';
  $rule->name = 'must_be_on_or_after_2014';
  $rule->field_name = 'field_mr_date_and_time';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'room_reservation';
  $rule->validator = 'field_validation_date_range2_validator';
  $rule->settings = array(
    'cycle' => 'global',
    'min' => '1 January 2014',
    'max' => '31 December 2014',
    'reverse' => 0,
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
      9 => 0,
      8 => 0,
      10 => 0,
      11 => 0,
      12 => 0,
      13 => 0,
      14 => 0,
      15 => 0,
      16 => 0,
      17 => 0,
      18 => 0,
      19 => 0,
      20 => 0,
      21 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = 'Please enter a date in 2014.';
  $export['must_be_on_or_after_2014'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Validation: Agreements';
  $rule->name = 'validation_agreements';
  $rule->field_name = 'field_agreements_group';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'group';
  $rule->validator = 'field_validation_number_of_selections_validator';
  $rule->settings = array(
    'min' => '6',
    'max' => '6',
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
      9 => 0,
      8 => 0,
      10 => 0,
      11 => 0,
      12 => 0,
      13 => 0,
      14 => 0,
      15 => 0,
      16 => 0,
      17 => 0,
      18 => 0,
      19 => 0,
      20 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = 'If your group is eligible, please agree to all stated Agreements.';
  $export['validation_agreements'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Validation: Email';
  $rule->name = 'validation_email';
  $rule->field_name = 'field_email2';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'group';
  $rule->validator = 'field_validation_email_validator';
  $rule->settings = array(
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
      9 => 0,
      8 => 0,
      10 => 0,
      11 => 0,
      12 => 0,
      13 => 0,
      14 => 0,
      15 => 0,
      16 => 0,
      17 => 0,
      18 => 0,
      19 => 0,
      20 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = 'Please check that the email address is valid.';
  $export['validation_email'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Validation: Phone';
  $rule->name = 'validation_phone';
  $rule->field_name = 'field_phone_profile';
  $rule->col = 'value';
  $rule->entity_type = 'profile2';
  $rule->bundle = 'main';
  $rule->validator = 'field_validation_phone_validator';
  $rule->settings = array(
    'country' => 'ca',
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
      9 => 0,
      8 => 0,
      10 => 0,
      11 => 0,
      12 => 0,
      13 => 0,
      14 => 0,
      15 => 0,
      16 => 0,
      17 => 0,
      18 => 0,
      19 => 0,
      20 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = 'Valid phone number is required.';
  $export['validation_phone'] = $rule;

  return $export;
}
