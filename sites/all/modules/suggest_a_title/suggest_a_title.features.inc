<?php
/**
 * @file
 * suggest_a_title.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function suggest_a_title_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function suggest_a_title_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function suggest_a_title_node_info() {
  $items = array(
    'suggest_a_title' => array(
      'name' => t('Suggest a Title for Purchase'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('<div id="suggest-thanks" class="messages status"><p>Thank you for taking the time to suggest an item for the Library. Your input as a citizen of Austin is valuable to the Library\'s selection team and will be given careful consideration.</p>
<p>Have you searched the <a href="http://austin.bibliocommons.com">Library catalog</a> for the item you are suggesting? If not, please check the catalog before completing this form.</p>
<p>The decision to purchase an item is based on the Library\'s selection criteria, current budget constraints, and the item\'s availability.</p></div>'),
    ),
  );
  return $items;
}
