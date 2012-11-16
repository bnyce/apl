<?php
/**
 * @file
 * suggest_a_title_feature_.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function suggest_a_title_feature__ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_node_info().
 */
function suggest_a_title_feature__node_info() {
  $items = array(
    'suggest_a_title' => array(
      'name' => t('Suggest a Title'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('<p>Thank you for taking the time to suggest an item for the Library. Your input as a citizen of Austin is valuable to the Library\'s selection team and will be given careful consideration.</p>
<p>Have you searched the <a href="http://austin.bibliocommons.com">Library catalog</a> for the item you are suggesting? If not, please check the catalog before completing this form.</p>
<p>The decision to purchase an item is based on the Library\'s selection criteria, current budget constraints, and the item\'s availability.</p>'),
    ),
  );
  return $items;
}
