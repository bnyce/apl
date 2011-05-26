<?php
// $Id: phone.ca.inc,v 1.1 2010/07/08 11:22:37 ckng Exp $

/**
 * @file
 * CCK Field for Canada phone numbers.
 */

/**
 * Validate country level phone number.
 *
 * @param $number
 *   Digits only phone number value.
 * @param $subaddress
 *   Subaddress value for telephone/fax's extension number, ISDN subaddress, 
 *   fax's T33 subaddress, modem's parameters/recommended parameters. 
 *   Reference: http://tools.ietf.org/html/rfc2806.
 * @param $error
 *   Error message that will be displayed to user.
 * @param $phone_type
 *   Nature of the phone (Voice, Home, Msg, Work, Pref, Fax, Cell, Video, 
 *   Pager, BBS, Modem, Car, ISDN, PCS)
 * @return boolean
 *   TRUE if it is a valid phone number for this country, FALSE otherwise.
 */
function ca_validate_number($number = '', $subaddress = '', &$error, $phone_type = 'Voice') {
  module_load_include('inc', 'cck_phone', 'includes/phone.us');
  return us_validate_number($number, $subaddress, $error, $phone_type);
}

/**
 * Cleanup user-entered values for a phone number field for saving to DB.
 *
 * @param $number
 *   A single phone number item.
 */
function ca_sanitize_number(&$number) {
  module_load_include('inc', 'cck_phone', 'includes/phone.us');
  us_sanitize_number($number);
}

/**
 * Default formatter for international phone number.
 *
 * @param $number
 *   Phone number.
 */
function ca_formatter_default($number) {
  module_load_include('inc', 'cck_phone', 'includes/phone.us');
  return us_formatter_default($number);
}