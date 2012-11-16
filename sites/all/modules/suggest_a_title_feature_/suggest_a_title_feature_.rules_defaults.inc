<?php
/**
 * @file
 * suggest_a_title_feature_.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function suggest_a_title_feature__default_rules_configuration() {
  $items = array();
  $items['rules_send_e_mail_on_suggest_a_title'] = entity_import('rules_config', '{ "rules_send_e_mail_on_suggest_a_title" : {
      "LABEL" : "Send e-mail on Suggest a Title",
      "PLUGIN" : "reaction rule",
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
        { "mail" : {
            "to" : "bryce.benton@austintexas.gov",
            "subject" : "(Demonstrates Workflow Rule) New node: [node:nid]",
            "message" : "It appears that Replacement Patterns work really well, so we can put anything from the newly created node in this email. --bryce\\r\\n\\r\\nNode url: [node:url]",
            "language" : [ "" ]
          }
        },
        { "redirect" : { "url" : "suggest-a-title\\/thanks" } }
      ]
    }
  }');
  return $items;
}
