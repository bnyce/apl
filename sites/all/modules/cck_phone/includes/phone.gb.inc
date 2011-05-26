<?php
// $Id: phone.gb.inc,v 1.1 2010/07/08 11:22:37 ckng Exp $

/**
 * @file
 * CCK Field for United Kingdom phone numbers.
 */

function _uk_phone_rules() {
  // TODO: more detailed check by area codes
  $regex = '/^
      ([0]*)(2[03489])(\d{4})(\d{4})  # 02x [eight-digit local number]
      |
      ([0]*)(11[3-8])(\d{3})(\d{4})   # 011x [seven-digit local number]
      |
      ([0]*)(1[2-9]1)(\d{3})(\d{4})   # 01x1 [seven-digit local number]
      |
      ([0]*)(1[2-9][0|2-9]\d)(\d{5,6})   # 01xxx [mostly six-digit local numbers] (but not 01x1 codes)
    $/x';

  return $regex;
}

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
function gb_validate_number($number = '', $subaddress = '', &$error, $phone_type = 'Voice') {
  if (!empty($number)) {
    if (preg_match(_uk_phone_rules(), $number)) {
      return TRUE;
    }
    $error = t('"%phone_input" is not a valid United Kingdom phone number, it should be 10 digits number like "29 9999 9999", with optional leading "0"', array('%phone_input' => $number));
    return FALSE;
  }
}

/**
 * Cleanup user-entered values for a phone number field for saving to DB.
 *
 * @param $number
 *   A single phone number item.
 */
function gb_sanitize_number(&$number) {
  // Remove trunk prefix '0'
  $number = preg_replace('/^([0]*)/', '', $number);
}

/**
 * Default formatter for international phone number.
 *
 * @param $number
 *   Phone number.
 */
function gb_formatter_default($number) {
  $result = preg_match(_uk_phone_rules(), $number, $matches);

  if ($result) {
    // output as AA BBBB CCCC, AAA BBB CCCC or AAAA BBB CCC
    $phone =  $matches[1] .'-'. $matches[2] .' '. $matches[3];
  }

  return $phone;
}