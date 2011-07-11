<?php

/**
 * @file views_grouping_limit_style_plugin.inc
 * Our handler.
 */

class views_limit_grouping_style_plugin extends views_plugin_style {

    /**
   * Add our option definitions.
   */
  function option_definition() {
    $options = parent::option_definition();
    $options['grouping-limit'] = array('default' => 0);
    $options['grouping-offset'] = array('default' => 0);
    return $options;
  }

  /**
   * Add our options to the form.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $form['grouping-limit'] = array(
      '#type' => 'textfield',
      '#title' => t('Items to display'),
      '#default_value' => $this->options['grouping-limit'],
      '#size' => 6,
      '#element_validate' => array('grouping_validate'),
      '#description' => t('The number of rows to show under each grouping header (only works when "Items to display" in the main view is set to unlimited).'),
    );
    $form['grouping-offset'] = array(
      '#type' => 'textfield',
      '#title' => t('Offset'),
      '#default_value' => $this->options['grouping-offset'],
      '#size' => 6,
      '#element_validate' => array('grouping_validate'),
      '#description' => t('The row to start on (<em>0</em> means it will start with first row, <em>1</em> means an offset of 1, and so on).'),
    );
  }

  /**
   * Overwriting parent's render_grouping method.
   */
  function render_grouping($records, $grouping_field = '') {
    $this->render_fields($this->view->result);
    $sets = array();
    if ($grouping_field) {
      foreach ($records as $index => $row) {
        $grouping = '';
        if (isset($this->view->field[$grouping_field])) {
          $grouping = $this->get_field($index, $grouping_field);
          if ($this->view->field[$grouping_field]->options['label']) {
            $grouping = $this->view->field[$grouping_field]->options['label'] . ': ' . $grouping;
          }
        }
        $sets[$grouping][$index] = $row;
      }
    }
    else {
      $sets[''] = $records;
    }
    // Apply the offset and limit.
    foreach ($sets as $group => $rows) {
      $output[$group] = array_slice($rows, $this->options['grouping-offset'], $this->options['grouping-limit'], TRUE);
    }

    return $output;
  }

} // end of class definition

/**
 * Validate the added form elements.
 */
function grouping_validate($element, &$form_state) {
  // Checking to see if numeric.
  if(!is_numeric($element['#value'])) {
    form_error($element, t('%element must be numeric.', array('%element' => $element['#title'])));
  }

  // Checking for negative values.
  if ($element['#value'] < 0) {
    form_error($element, t('%element cannot be negative.', array('%element' => $element['#title'])));
  }
}