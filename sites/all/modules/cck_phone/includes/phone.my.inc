<?php
// $Id: phone.my.inc,v 1.1 2010/07/08 11:22:37 ckng Exp $

/**
 * @file
 * CCK Field for Malaysia phone numbers.
 */

function _my_phone_rules() {
  $rules = array();

  // rule: 'area code, min length, max length'
  // Geographic land line number
  $rules[] = array("2", 7);    // Domestic access code to Singapore
  $rules[] = array("3", 8);    // Selangor & Federal Territories of Kuala Lumpur & Putrajaya
  $rules[] = array("4", 7);    // Kedah, Penang & Perlis
  $rules[] = array("5", 7);    // Perak & Cameron Highlands (Pahang)
  $rules[] = array("6", 7);    // Melaka, Negeri Sembilan & Muar (Johor)
  $rules[] = array("7", 7);    // Johor (except Muar)
  $rules[] = array("80", 6);   // Domestic access code to Brunei (East Malaysia only)
//  $rules[] = array("81", 6);    // reserved
  $rules[] = array("82", 6);   // Kuching (Sarawak)
  $rules[] = array("83", 6);   // Sri Aman (Sarawak)
  $rules[] = array("84", 6);   // Sarikei, Bintangor, Sibu, Kanowit, Song, & Kapit (Sarawak)
  $rules[] = array("85", 6);   // Lawas, Limbang, Miri (Sarawak)
  $rules[] = array("86", 6);   // Bintulu, Belaga (Sarawak)
  $rules[] = array("87", 6);   // Inner District (Sabah) & Federal Territory of Labuan
  $rules[] = array("88", 6);   // Kota Kinabalu, Kudat (Sabah)
  $rules[] = array("89", 6);   // Lahad Datu, Sandakan, Tawau (Sabah)
  $rules[] = array("9", 7);    // Kelantan, Pahang (except Cameron Highlands) & Terengganu

  // Mobile number structure
  $rules[] = array("10", 7);
  $rules[] = array("11", 7);
  $rules[] = array("12", 7);
  $rules[] = array("13", 7);
  $rules[] = array("14", 7);
  $rules[] = array("15", 7);
  $rules[] = array("16", 7);
  $rules[] = array("17", 7);
  $rules[] = array("18", 7);
  $rules[] = array("19", 7);

  return $rules;
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
function my_validate_number($number = '', $subaddress = '', &$error, $phone_type = 'Voice') {
  if (!empty($number)) {
    foreach (_my_phone_rules() as $rule) {
      // define regular expression
      $regex = '/^
        ([0]*)                             # an optional 0
        ('. $rule[0] .')                   # area code
        \d{'. $rule[1] .'}                 # local number within length $rule[1] & $rule[2]
        $/x';

      $result = preg_match($regex, $number, $matches);

      if ($result) {
        return TRUE;
      }
    }
    $error = t('"%phone_input" is not a valid Malaysia phone number, it should be 9-10 digits number like "03-2222 2222", "0" is optional and will be removed.', array('%phone_input' => $number));
    return FALSE;
  }
}

/**
 * Cleanup user-entered values for a phone number field for storing to DB.
 *
 * @param $number
 *   A single phone number item.
 * @param $href
 *   Valid number (numeric and + charaters only) placed at 
 *   href="tel:<phone number>;ext=123" of anchor tag.
 */
function my_sanitize_number(&$number) {
  // Remove trunk prefix '0'
  $number = preg_replace('/^([0]*)/', '', $number);
}

/**
 * Default formatter for international phone number.
 *
 * @param $number
 *   Phone number.
 */
function my_formatter_default($number) {
  // Format the phone number however you like, this is the default
  foreach (_my_phone_rules() as $rule) {
    // define regular expression
    $regex = '/^
      ('. $rule[0] .')                   # area code
      (\d{3,4})
      (\d{4})
      $/x';
    $result = preg_match($regex, $number, $matches);

    if ($result) {
      // output as A-BBB CCCC
      $phone =  $matches[1] .'-'. $matches[2] .' '. $matches[3];

      continue;
    }
  }
  return $phone;
}