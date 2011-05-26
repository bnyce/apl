<?php
// $Id$

/**
 * @file
 * Phone number field for Philippine phone numbers.
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
function ph_validate_number($number = '', $subaddress = '', &$error, $phone_type = 'Voice') {
  ph_sanitize_number($number);
  if (!empty($number) && (drupal_strlen($number) < 8 || drupal_strlen($number) > 12)) {
    $error = t('%phone_input is not a valid phone number, it should have at least 8 digits number like "2 999 9999" and maximum of 12 digits like "12345 999 9999".', array('%phone_input' => $number));
    return FALSE;
  }
  return TRUE;
}

/**
 * Cleanup user-entered values for a phone number field for storing to DB.
 *
 * @param $number
 *   A single phone number item.
 */
function ph_sanitize_number(&$number) {
  $number = preg_replace('/^([0]*)/', '', $number);
}

/**
 * Default formatter for international phone number.
 *
 * @param $number
 *   Phone number.
 */
function ph_formatter_default($number) {
  $regex = "/
    # 5 digit area code.
    (
        (\d{5}) # capture 5 digit area code
        (\d{3}) # capture first set of numbers in the local number
        (\d{4}) # capture second set of numbers in the local number
    |
    # 4 digit area code.
        (\d{4}) # capture 4 digit area code
        (\d{3}) # capture first set of numbers in the local number
        (\d{4}) # capture second set of numbers in the local number
    |
    # 3 digit area code.
        (\d{3}) # capture 3 digit area code
        (\d{3}) # capture first set of numbers in the local number
        (\d{4}) # capture second set of numbers in the local number
    |
    # 2 digit area code.
        (\d{2}) # capture 2 digit area code
        (\d{3}) # capture first set of numbers in the local number
        (\d{4}) # capture second set of numbers in the local number
    |
    # 1 digit area code.
        (\d{1}) # capture 1 digit area code
        (\d{3}) # capture first set of numbers in the local number
        (\d{4}) # capture second set of numbers in the local number
    )
  /x";
  
  preg_match($regex, $number, $matches);
  if (isset($matches[14]) && !empty($matches[14])) {
    $area     = $matches[14];
    $head_num = $matches[15];
    $tail_num = $matches[16];
  }
  elseif (isset($matches[11]) && !empty($matches[11])) {
    $area     = $matches[11];
    $head_num = $matches[12];
    $tail_num = $matches[13];
  }
  elseif (isset($matches[8]) && !empty($matches[8])) {
    $area     = $matches[8];
    $head_num = $matches[9];
    $tail_num = $matches[10];
  }
  elseif (isset($matches[5]) && !empty($matches[5])) {
    $area     = $matches[5];
    $head_num = $matches[6];
    $tail_num = $matches[7];
  }
  else {
    $area     = $matches[2];
    $head_num = $matches[3];
    $tail_num = $matches[4];
  }
  return '(' . $area . ') ' . $head_num . '-' . $tail_num;
}