<?php
// $Id: phone.us.inc,v 1.1 2010/07/08 11:22:37 ckng Exp $

/**
 * @file
 * CCK Field for North American phone numbers.
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
function us_validate_number($number = '', $subaddress = '', &$error, $phone_type = 'Voice') {
  if (!empty($number)) {
    // Define regular expression
    $regex = '/^
      ([1]*)        # an optional 1
      [2-9][0-8]\d  # area code (Allowed range of [2-9] for the first digit, [0-8] for the second, and [0-9] for the third digit)
      [2-9]\d{2}    # 3-digit prefix (cannot start with 0 or 1)
      \d{4}         # 4-digit line number
      $/x';

    $result = preg_match($regex, $number, $matches);

    if ($result && $matches[1] == '') {
      return TRUE;
    }
    elseif ($result && $matches[1] == '1') {
      $error = t('Please enter a 10 digits North American phone number like "999 999 9999", without the country code "1" or "+1"');
      return FALSE;
    }
    else {
      $error = t('%phone_input is not a valid North American phone number, it should be 10 digits number like "989 999 9999"', array('%phone_input' => $number));
      return FALSE;
    }
  }
}


/**
 * Cleanup user-entered values for a phone number field for saving to DB.
 *
 * @param $number
 *   A single phone number item.
 */
function us_sanitize_number(&$number) {
  // Remove prefix '1'

  $number = preg_replace('/^([1]*)/', '', $number);
}

/**
 * Default formatter for international phone number.
 *
 * @param $number
 *   Phone number.
 */
function us_formatter_default($number) {
  // Format the phone number however you like, this is the default
  // define regular expression
  $regex = '/^
    ([2-9][0-8]\d)  # area code (Allowed range of [2-9] for the first digit, [0-8] for the second, and [0-9] for the third digit)
    ([2-9]\d{2})    # 3-digit prefix (cannot start with 0 or 1)
    (\d{4})         # 4-digit line number
    /x';

  $result = preg_match($regex, $number, $matches);

  if ($result) {
    // output as (AAA) BBB CCCC
    $phone =  '('. $matches[1] .') '. $matches[2] .' '. $matches[3];
  }

  return $phone;
}