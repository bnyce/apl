<?php

/**
 * @file
 * Builds placeholder replacement tokens for anonymous_posting data.
 */

/**
 * Implements hook_token_info().
 */
function anonymous_posting_token_info() {
  $type = array('anonymous_posting' => array(
      'name' => t('Anonymous Posting'),
      'description' => t('Tokens for node using the anonymous posting datas (hostname, name, mail and homepage).'),
      'needs-data' => 'node',
    ));

  $node['hostname'] = array(
    'name' => t("IP Address"),
    'description' => t("The IP address of the computer the comment was posted from."),
  );
  $node['name'] = array(
    'name' => t("Name"),
    'description' => t("The name left by the comment author."),
  );
  $node['mail'] = array(
    'name' => t("Email address"),
    'description' => t("The email address left by the comment author."),
  );
  $node['homepage'] = array(
    'name' => t("Home page"),
    'description' => t("The home page URL left by the comment author."),
  );

  return array(
    'types' => $type,
    'tokens' => array(
      'node' => $node
    ),
  );
}

/**
 * Implements hook_tokens().
 */
function anonymous_posting_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $sanitize = !empty($options['sanitize']);
  $replacements = array();

  if ($type == 'node' && !empty($data['node'])) {
    $field_items = field_get_items('node', $data['node'], ANONYMOUS_POSTING_FIELD_NAME);
    $field_items = $field_items ? current($field_items) : array('hostname' => '', 'name' => '', 'mail' => '', 'homepage' => '',);
    foreach ($tokens as $name => $original) {      
      switch ($name) {
        // Simple key values on the node.
        case 'hostname':
          $replacements[$original] = $sanitize ? check_plain($field_items['hostname']) : $field_items['hostname'];
          break;
        case 'name':
          $replacements[$original] = $sanitize ? check_plain($field_items['name']) : $field_items['name'];
          break;
        case 'mail':
          $replacements[$original] = $sanitize ? check_plain($field_items['mail']) : $field_items['mail'];
          break;
        case 'homepage':
          $replacements[$original] = $sanitize ? check_url($field_items['homepage']) : $field_items['homepage'];
          break;
      }
    }
  }

  return $replacements;
}

/**
 * Implements hook_tokens_alter().
 */
function anonymous_posting_tokens_alter(array &$replacements, array $context) {
  // Replace token [node:author] value with anonymous_posting author name value
  // if the node author is anonymous.
  $token_name = '[node:author]';
  if (array_key_exists($token_name, $replacements)
    && $context['data']['node']
    && !$context['data']['node']->uid // true if node author is anonymous
    && $field_items = field_get_items('node', $context['data']['node'], ANONYMOUS_POSTING_FIELD_NAME)) {
    $field_items = current($field_items);
    if ($field_items['name']) {
      $replacements[$token_name] = check_plain($field_items['name']);
    }
  }
}
