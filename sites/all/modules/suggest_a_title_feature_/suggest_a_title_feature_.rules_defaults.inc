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
      "LABEL" : "Suggest a Title - Thank You for Submitting",
      "PLUGIN" : "reaction rule",
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
        { "mail" : {
            "to" : "[node:field-your-e-mail]; \\u0022(Remove static address on apldev!) Suggestor\\u0027s e-mail here\\u0022 \\u003Cbryce.benton@austintexas.gov\\u003E",
            "subject" : "Thank you for Suggesting a Title for Purchase",
            "message" : "Thank you for Suggesting a Title for Purchase. You can expect to receive a follow up e-mail within two months.\\r\\n\\r\\n\\r\\nYou suggested:\\r\\n\\r\\nTitle: \\r\\n[node:title]\\r\\n\\r\\nAuthor\\/Performer\\/Band: \\r\\n[node:field-author-performer-band]\\r\\n\\r\\nPublisher: \\r\\n[node:field-publisher]\\r\\n\\r\\nPublication Year: \\r\\n[node:field-publication-year]\\t\\r\\n\\r\\nIdentifier: \\r\\n[node:field-isbn-issn-upc]\\r\\n\\r\\nHow did you learn about this title? \\r\\n[node:field-how-did-you-learn-about-th]\\r\\n\\r\\nFormat: \\r\\n[node:field-format]\\r\\n\\r\\nLanguage: \\r\\n[node:field-language]\\r\\n\\r\\nWhich library locations do you use the most? \\r\\n[node:field-which-library-locations-do]\\r\\n\\r\\nURL: \\r\\n[node:field-url]",
            "from" : "\\u0022Austin Public Library\\u0022 \\u003Cnoreplyapl@austintexas.gov\\u003E",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_suggest_a_title_denial'] = entity_import('rules_config', '{ "rules_suggest_a_title_denial" : {
      "LABEL" : "Suggest a Title - Denial",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "suggest a title" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "suggest_a_title" : "suggest_a_title" } }
          }
        },
        { "AND" : [] },
        { "data_is" : { "data" : [ "node:field-follow-up" ], "value" : "Denial" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[node:field-your-e-mail]; \\u0022(Remove static address on apldev! -denial- ) Suggestor\\u0027s e-mail here\\u0022 \\u003Cbryce.benton@austintexas.gov\\u003E",
            "subject" : "Suggest a Title for Purchase - Follow Up",
            "message" : "Thank you for taking the time to make a purchase suggestion to us for:\\r\\n\\r\\nTitle:\\r\\n[node:title]\\r\\n\\r\\nAuthor\\/Performer\\/Band:\\r\\n[node:field-author-performer-band]\\r\\n\\r\\nCustomer suggestions help us build a quality library collection. Unfortunately, we are not able to purchase the title at this time. This item does not meet the Austin Public Library\\u2019s \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/basic-page\\/materials-selection-policy\\u0022\\u003EMaterials Selection policy\\u003C\\/a\\u003E.\\r\\n\\r\\nYou may be able to borrow this title through Interlibrary Loan (ILL). Interlibrary Loan is a service that allows Austin Public Library card holders access to materials from other library collections worldwide. To use Interlibrary Loan services you must have a current Library card. To inquire about the title you are interested in, please phone our Call a Librarian service, (512) 974-7400, or email our \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/ask\\u0022\\u003EAsk a Librarian\\u003C\\/a\\u003E service. ",
            "from" : "\\u0022Austin Public Library\\u0022 \\u003Cnoreplyapl@austintexas.gov\\u003E",
            "language" : [ "" ]
          }
        },
        { "data_set" : { "data" : [ "node:field-most-recent-email-sent" ], "value" : "now" } }
      ]
    }
  }');
  $items['rules_suggest_a_title_in_catalog'] = entity_import('rules_config', '{ "rules_suggest_a_title_in_catalog" : {
      "LABEL" : "Suggest a Title - In Catalog",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "suggest a title" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "suggest_a_title" : "suggest_a_title" } }
          }
        },
        { "AND" : [] },
        { "data_is" : { "data" : [ "node:field-follow-up" ], "value" : "In Catalog" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[node:field-your-e-mail]; \\u0022(Remove static address on apldev! -in catalog- ) Suggestor\\u0027s e-mail here\\u0022 \\u003Cbryce.benton@austintexas.gov\\u003E",
            "subject" : "Suggest a Title for Purchase - Follow Up",
            "message" : "Thank you for taking the time to make a purchase suggestion to us for:\\r\\n\\r\\nTitle:\\r\\n[node:title]\\r\\n\\r\\nAuthor\\/Performer\\/Band:\\r\\n[node:field-author-performer-band]\\r\\n\\r\\nCustomer suggestions help us build a quality library collection. This title is listed in our catalog.  For help locating a copy, please visit, email, chat, or call us:\\r\\n\\r\\nLocations and hours of operation: \\r\\nhttp:\\/\\/www.austinlibrary.com\\/mapapp\\/gmap.cfm?zipcode=all\\r\\n\\r\\nLibrary Catalog: \\r\\nhttp:\\/\\/austin.bibliocommons.com \\r\\n\\r\\nAsk a Librarian: \\r\\nhttp:\\/\\/library.austintexas.gov\\/ask\\r\\n\\r\\nCall a Librarian: \\r\\n(512) 974-7400",
            "from" : "\\u0022Austin Public Library\\u0022 \\u003Cnoreplyapl@austintexas.gov\\u003E",
            "language" : [ "" ]
          }
        },
        { "data_set" : { "data" : [ "node:field-most-recent-email-sent" ], "value" : "now" } }
      ]
    }
  }');
  $items['rules_suggest_a_title_not_available'] = entity_import('rules_config', '{ "rules_suggest_a_title_not_available" : {
      "LABEL" : "Suggest a Title - Not Available",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "suggest a title" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "suggest_a_title" : "suggest_a_title" } }
          }
        },
        { "AND" : [] },
        { "data_is" : { "data" : [ "node:field-follow-up" ], "value" : "Not Available" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[node:field-your-e-mail]; \\u0022(Remove static address on apldev! -not available- ) Suggestor\\u0027s e-mail here\\u0022 \\u003Cbryce.benton@austintexas.gov\\u003E",
            "subject" : "Austin Public Library - Suggest a Title for Purchase - Follow Up",
            "message" : "Thank you for taking the time to make a purchase suggestion to us for [node:title]. Customer suggestions help us build a quality library collection. Unfortunately, we are not able to purchase the title at this time. The item is either out-of-print, out of stock, not yet available or otherwise not available from our vendor.\\r\\n\\r\\nOut-of-print and out-of stock titles may be available through Interlibrary Loan (ILL). Interlibrary Loan is a service that allows Austin Public Library card holders access to materials from other library collections worldwide. To use Interlibrary Loan services you must have a current Library card.  To inquire about the title you are interested in, please phone our Call a Librarian service, (512) 974-7400, or email our \\u003Ca href=\\u0022http:\\/\\/austin.tx.libanswers.com\\/\\u0022\\u003EAsk a Librarian\\u003C\\/a\\u003E service.\\r\\n\\r\\nWe are unable to place holds on forthcoming titles. You are welcome to check the Library catalog periodically to see when they have been added to the collection.",
            "from" : "\\u0022Austin Public Library\\u0022 \\u003Cnoreplyapl@austintexas.gov\\u003E",
            "language" : [ "" ]
          }
        },
        { "data_set" : { "data" : [ "node:field-most-recent-email-sent" ], "value" : "now" } }
      ]
    }
  }');
  $items['rules_suggest_a_title_resources'] = entity_import('rules_config', '{ "rules_suggest_a_title_resources" : {
      "LABEL" : "Suggest a Title - Resources",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "suggest a title" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "suggest_a_title" : "suggest_a_title" } }
          }
        },
        { "AND" : [] },
        { "data_is" : { "data" : [ "node:field-follow-up" ], "value" : "Resources" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[node:field-your-e-mail]; \\u0022(Remove static address on apldev! -resources- ) Suggestor\\u0027s e-mail here\\u0022 \\u003Cbryce.benton@austintexas.gov\\u003E",
            "subject" : "Suggest a Title for Purchase - Follow Up",
            "message" : "Thank you for taking the time to make a purchase suggestion to us for:\\r\\n\\r\\nTitle:\\r\\n[node:title]\\r\\n\\r\\nAuthor\\/Performer\\/Band:\\r\\n[node:field-author-performer-band]\\r\\n\\r\\nThe Austin Public Library offers many resources on the subject matter you suggested. To find out more about what\\u2019s available, please visit, email, chat, or call us:\\r\\n\\r\\nLocations and hours of operation: http:\\/\\/www.austinlibrary.com\\/mapapp\\/gmap.cfm?zipcode=all\\r\\nLibrary Catalog: http:\\/\\/austin.bibliocommons.com \\r\\nAsk a Librarian: http:\\/\\/library.austintexas.gov\\/ask\\r\\nCall a Librarian: (512) 974-7400",
            "from" : "\\u0022Austin Public Library\\u0022 \\u003Cnoreplyapl@austintexas.gov\\u003E",
            "language" : [ "" ]
          }
        },
        { "data_set" : { "data" : [ "node:field-most-recent-email-sent" ], "value" : "now" } }
      ]
    }
  }');
  $items['rules_suggest_a_title_to_be_ordered'] = entity_import('rules_config', '{ "rules_suggest_a_title_to_be_ordered" : {
      "LABEL" : "Suggest a Title - To Be Ordered",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "suggest a title" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "suggest_a_title" : "suggest_a_title" } }
          }
        },
        { "AND" : [] },
        { "data_is" : { "data" : [ "node:field-follow-up" ], "value" : "To Be Ordered" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[node:field-your-e-mail]; \\u0022(Remove static address on apldev! -to be ordered- ) Suggestor\\u0027s e-mail here\\u0022 \\u003Cbryce.benton@austintexas.gov\\u003E",
            "subject" : "Suggest a Title for Purchase - Follow Up",
            "message" : "Thank you for taking the time to make a purchase suggestion to us for:\\r\\n\\r\\nTitle:\\r\\n[node:title]\\r\\n\\r\\nAuthor\\/Performer\\/Band:\\r\\n[node:field-author-performer-band]\\r\\n\\r\\nCustomer suggestions help us build a quality library collection. This title is available from our [node:field-format] vendor and will be ordered promptly; it should arrive within 4-6 weeks.\\r\\n\\r\\nYou are welcome to check the \\u003Ca href=\\u0022http:\\/\\/austin.bibliocommons.com\\/\\u0022\\u003ELibrary catalog\\u003C\\/a\\u003E periodically to see when it has been added to the collection.",
            "from" : "\\u0022Austin Public Library\\u0022 \\u003Cnoreplyapl@austintexas.gov\\u003E",
            "language" : [ "" ]
          }
        },
        { "data_set" : { "data" : [ "node:field-most-recent-email-sent" ], "value" : "now" } }
      ]
    }
  }');
  return $items;
}
