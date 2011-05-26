<?php
// $Id$
/**
 * @file phone-field-view.tpl.php
 * Default theme implementation for rendering phone number field.
 *
 * Available variables:
 * - $phone: An associative array containing:
 * -- value: Formatted phone number.
 * -- int_code: International country calling code.
 * -- tel_value: Formatted phone number for tel URI.
 * -- subaddress_type: Subaddress value for telephone/fax's extension number (ext), 
 *      ISDN subaddress (isub), fax's T33 subaddress (tsub), modem's parameters (type) 
 *      and recommended parameters (rec). Ref: http://tools.ietf.org/html/rfc2806.
 * -- subaddress_value: Subaddress value.
 * -- type: hCard microformat property indicating the nature of the phone.
 * -- value_attr: Attributes of value item.
 * -- type_attr: Attributes of type item.
 * -- extra: Annotation or extra phone number's description.
 *
 * @ingroup themeable
 */
?>
<span class="tel">
  <span <?php print drupal_attributes($phone['type_attr']); ?>><?php print $phone['type']; ?></span>
  <a href="tel:<?php print $phone['tel_value']; ?><?php print empty($phone['subaddress_value']) ? '' : ';' . $phone['subaddress_type'] . ':' . $phone['subaddress_value']; ?>" <?php print drupal_attributes($phone['value_attr']); ?>>
    <?php print '+' . $phone['int_code'] . ' ' . $phone['value']; ?>
    <?php print empty($phone['subaddress_value']) ? '' : ' ' . $phone['subaddress_type'] . '. ' . $phone['subaddress_value']; ?>
  </a>
  <?php if ($phone['extra']): ?>
  <span><?php print $phone['extra']; ?></span>
  <?php endif; ?>
</span>