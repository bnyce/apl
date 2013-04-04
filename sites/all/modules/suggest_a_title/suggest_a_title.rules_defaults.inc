<?php
/**
 * @file
 * suggest_a_title.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function suggest_a_title_default_rules_configuration() {
  $items = array();
  $items['rules_send_e_mail_on_suggest_a_title'] = entity_import('rules_config', '{ "rules_send_e_mail_on_suggest_a_title" : {
      "LABEL" : "Suggest a Title - Thank You Email Message",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "7",
      "TAGS" : [ "suggest a title" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "suggest_a_title" : "suggest_a_title" } }
          }
        },
        { "AND" : [] },
        { "NOT data_is_empty" : { "data" : [ "node:field-your-e-mail" ] } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[node:field-your-e-mail]",
            "subject" : "Suggest a Title: [node:title]",
            "message" : "Thank you for suggesting [node:title]. Processing time may take up to two weeks or more. \\r\\n\\r\\nYou may view the current status at any time by visiting your Suggestion\\u0027s URL, which is:\\r\\n[node:url]",
            "from" : "\\u0022Austin Public Library\\u0022 \\u003Cnoreplyapl@austintexas.gov\\u003E",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_suggest_a_title_denied'] = entity_import('rules_config', '{ "rules_suggest_a_title_denied" : {
      "LABEL" : "Suggest a Title - Response",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "suggest a title" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_update" ],
      "IF" : [
        { "node_is_published" : { "node" : [ "node" ] } },
        { "AND" : [] },
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "suggest_a_title" : "suggest_a_title" } }
          }
        },
        { "AND" : [] },
        { "data_is" : {
            "data" : [ "node:field-ready-to-email-" ],
            "value" : "Yes, send an email to the original Suggester after updating this Suggestion."
          }
        },
        { "AND" : [] },
        { "NOT data_is_empty" : { "data" : [ "node:field-your-e-mail" ] } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[node:field-your-e-mail]",
            "subject" : "Suggest a Title for Purchase: [node:title]",
            "message" : "[node:field-selector-s-comment]\\r\\n",
            "from" : "\\u0022Austin Public Library\\u0022 \\u003Cnoreplyapl@austintexas.gov\\u003E",
            "language" : [ "" ]
          }
        },
        { "data_set" : {
            "data" : [ "node:field-ready-to-email-" ],
            "value" : "No, do not send an email to the Suggester."
          }
        },
        { "drupal_message" : { "message" : "The status of title \\u003Ci\\u003E[node:title]\\u003C\\/i\\u003E was updated to \\u0022[node:field-follow-up]\\u0022 and a notification was sent to [node:field-your-e-mail]." } },
        { "redirect" : { "url" : "suggest-a-title\\/queue" } }
      ]
    }
  }');
  $items['rules_suggest_a_title_thank_you_site_message'] = entity_import('rules_config', '{ "rules_suggest_a_title_thank_you_site_message" : {
      "LABEL" : "Suggest a Title - Thank You Site Message",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-10",
      "TAGS" : [ "suggest a title" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "suggest_a_title" : "suggest_a_title" } }
          }
        }
      ],
      "DO" : [
        { "drupal_message" : {
            "message" : "\\u003Cp\\u003EThank you for suggesting \\u003Ci\\u003E[node:title]\\u003C\\/i\\u003E. Processing time may take up to two weeks or more.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EYou may view the current status of your suggestion at any time by visiting this page, which is at:\\u003Cbr\\/\\u003E\\r\\n\\u003Ca href=\\u0022[node:url]\\u0022\\u003E[node:url]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EWould you like to \\u003Ca href=\\u0022[site:url]\\/suggest-a-title\\u0022\\u003Esuggest another title for purchase\\u003C\\/a\\u003E?\\u003C\\/p\\u003E",
            "repeat" : 0
          }
        }
      ]
    }
  }');
  return $items;
}
