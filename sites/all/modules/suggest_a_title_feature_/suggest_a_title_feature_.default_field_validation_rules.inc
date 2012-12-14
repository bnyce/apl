<?php
/**
 * @file
 * suggest_a_title_feature_.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function suggest_a_title_feature__default_field_validation_rule() {
  $export = array();

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
