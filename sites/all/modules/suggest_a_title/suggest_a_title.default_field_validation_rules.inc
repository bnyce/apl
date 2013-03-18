<?php
/**
 * @file
 * suggest_a_title.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function suggest_a_title_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'APL Card NUMBER';
  $rule->name = 'apl_card_number';
  $rule->field_name = 'field_austin_public_library_card';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'suggest_a_title';
  $rule->validator = 'field_validation_numeric2_validator';
  $rule->settings = array(
    'min' => '',
    'max' => '',
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
    ),
    'errors' => 0,
  );
  $rule->error_message = 'Please provide a valid Austin Public Library card number.';
  $export['apl_card_number'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Choose ONE selection';
  $rule->name = 'choose_one_selection';
  $rule->field_name = 'field_format';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'suggest_a_title';
  $rule->validator = 'field_validation_number_of_selections_validator';
  $rule->settings = array(
    'min' => '1',
    'max' => '1',
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
    ),
    'errors' => 0,
  );
  $rule->error_message = 'Please select a Format.';
  $export['choose_one_selection'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'NOT "Not Specified"';
  $rule->name = 'not_not_specified_';
  $rule->field_name = 'field_format';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'suggest_a_title';
  $rule->validator = 'field_validation_blacklist_validator';
  $rule->settings = array(
    'data' => 'Not Specified',
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
    ),
    'errors' => 0,
  );
  $rule->error_message = 'Please select a Format.';
  $export['not_not_specified_'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Email';
  $rule->name = 'valid_email';
  $rule->field_name = 'field_your_e_mail';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'suggest_a_title';
  $rule->validator = 'field_validation_email_validator';
  $rule->settings = array(
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = 'Please provide a valid email address.';
  $export['valid_email'] = $rule;

  return $export;
}
