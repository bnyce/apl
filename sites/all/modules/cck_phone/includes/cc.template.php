<?php
// $Id: API.php,v 1.3 2010/07/12 09:54:52 ckng Exp $

/**
 * @file
 * Phone Number custom country API
 *
 * 'CC' will be used throughout this document to indicate country code
 * abbreviation. You should replace it with the correct country code
 * in the following functions name. For full list of country code
 * abbreviation, refer to the 2 alphabet list in the countries.txt.
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
function CC_validate_number($number = '', $subaddress = '', &$error, $phone_type = 'Voice') {
  // Assign $subaddress_error as FALSE if $subaddress is not valid
  if (!empty($subaddress) && $subaddress_error) {
    $error = t('%subaddress is not a valid extension number', array('%subaddress' => $subaddress));
    return FALSE;
  }
  // Assign $number_error as FALSE if $number is not valid
  if (!empty($number) && $number_error) {
    $error = t('%phone_input is not a valid phone number, it should be 10 digits number like "999 999 9999"', array('%phone_input' => $number));
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
function CC_sanitize_number(&$number) {
  // your cleanup like removing trunk prefix
  $number = preg_replace('/^([0]*)/', '', $number);
}


/**
 * Default formatter for international phone number.
 *
 * @param $number
 *   Phone number.
 */
function CC_formatter_default($number) {
  // Format the phone number and its area code into human readable format
  $phone = $number;

  return $phone;
}