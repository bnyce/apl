<?php
/**
 * @file
 * meeting_rooms_2014.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function meeting_rooms_2014_default_rules_configuration() {
  $items = array();
  $items['rules_associate_group_with_author_2'] = entity_import('rules_config', '{ "rules_associate_group_with_author_2" : {
      "LABEL" : "New Group \\u003E tag to Author",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "group" : "group" } } } }
      ],
      "DO" : [
        { "entity_query" : {
            "USING" : {
              "type" : "node",
              "property" : "nid",
              "value" : [ "node:nid" ],
              "limit" : "1"
            },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "NOT data_is" : { "data" : [ "site:current-user:uid" ], "value" : "38" } },
              "DO" : [
                { "list_add" : {
                    "list" : [ "site:current-user:profile-group-representative:field-groups" ],
                    "item" : [ "entity-fetched:0" ],
                    "unique" : 1
                  }
                }
              ]
            }
          ]
        },
        { "redirect" : { "url" : "request-a-meeting-room" } },
        { "data_set" : {
            "data" : [ "site:current-user:profile-group-representative:field-recent-group" ],
            "value" : [ "entity-fetched:0:nid" ]
          }
        }
      ]
    }
  }');
  $items['rules_bye_bye_log_out_'] = entity_import('rules_config', '{ "rules_bye_bye_log_out_" : {
      "LABEL" : "Bye bye (log out)",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_logout" ],
      "IF" : [
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "18" : "18" } } } }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "You are now logged out. Thank you for using the Austin Public Library\\u0027s meeting rooms." } }
      ]
    }
  }');
  $items['rules_check_for_capacity_view_'] = entity_import('rules_config', '{ "rules_check_for_capacity_view_" : {
      "LABEL" : "Check for capacity (view)",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules", "rules_conditional", "rb_misc" ],
      "ON" : [ "rb_misc_trigger_node_view_panel_context_13" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "argument-entity-id--node-1" ],
            "type" : { "value" : { "room_reservation" : "room_reservation" } }
          }
        }
      ],
      "DO" : [
        { "data_convert" : {
            "USING" : { "type" : "integer", "value" : [ "argument-entity-id--node-1:log" ] },
            "PROVIDE" : { "conversion_result" : { "room" : "Room from log" } }
          }
        },
        { "entity_fetch" : {
            "USING" : { "type" : "taxonomy_term", "id" : [ "room" ] },
            "PROVIDE" : { "entity_fetched" : { "fetched_room" : "Fetched room" } }
          }
        },
        { "data_convert" : {
            "USING" : { "type" : "integer", "value" : [ "fetched-room:description" ] },
            "PROVIDE" : { "conversion_result" : { "capacity" : "Capacity from description" } }
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : {
                  "data" : [ "argument-entity-id--node-1:field-expected-attendance" ],
                  "op" : "\\u003E",
                  "value" : [ "capacity" ]
                }
              },
              "DO" : [
                { "drupal_message" : {
                    "message" : "Expected attendance exceeds room capacity.",
                    "type" : "error",
                    "repeat" : 0
                  }
                }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_check_for_conflicts_2014'] = entity_import('rules_config', '{ "rules_check_for_conflicts_2014" : {
      "LABEL" : "Check for conflicts - 2014",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "9",
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules", "rules_conditional", "resource_conflict", "rb_misc" ],
      "ON" : [ "rb_misc_trigger_node_view_panel_context_13" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "argument-entity-id--node-1" ],
            "type" : { "value" : { "room_reservation" : "room_reservation" } }
          }
        }
      ],
      "DO" : [
        { "CONDITIONAL" : [
            {
              "IF" : { "resource_conflict_contains_conflict" : { "node" : [ "argument-entity-id--node-1" ] } },
              "DO" : [
                { "resource_conflict_load_conflict_list" : {
                    "USING" : { "node" : [ "argument-entity-id--node-1" ] },
                    "PROVIDE" : { "conflict_list" : { "conflict_list" : "Conflict List" } }
                  }
                },
                { "LOOP" : {
                    "USING" : { "list" : [ "conflict-list" ] },
                    "ITEM" : { "list_item" : "Current list item" },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "data_is" : {
                                "data" : [ "list-item:log" ],
                                "value" : [ "argument-entity-id--node-1:field-room:tid" ]
                              }
                            },
                            "DO" : [
                              { "CONDITIONAL" : [
                                  {
                                    "IF" : { "text_matches" : { "text" : [ "list-item:body:value" ], "match" : "Confirmed" } },
                                    "DO" : [
                                      { "drupal_message" : {
                                          "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                          "type" : "error",
                                          "repeat" : 0
                                        }
                                      }
                                    ]
                                  },
                                  { "ELSE" : [
                                      { "drupal_message" : {
                                          "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                          "type" : "error",
                                          "repeat" : 0
                                        }
                                      }
                                    ]
                                  }
                                ]
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  }
                }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_check_for_conflicts_2014_carver'] = entity_import('rules_config', '{ "rules_check_for_conflicts_2014_carver" : {
      "LABEL" : "Check for conflicts - 2014 - Carver",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "8",
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules", "resource_conflict", "rules_conditional", "rb_misc" ],
      "ON" : [ "rb_misc_trigger_node_view_panel_context_13" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "argument-entity-id--node-1" ],
            "type" : { "value" : { "room_reservation" : "room_reservation" } }
          }
        },
        { "AND" : [
            { "data_is" : {
                "data" : [ "argument-entity-id--node-1:field-room:tid" ],
                "op" : "IN",
                "value" : { "value" : [ "781", "782" ] }
              }
            },
            { "AND" : [
                { "resource_conflict_contains_conflict" : { "node" : [ "argument-entity-id--node-1" ] } }
              ]
            }
          ]
        }
      ],
      "DO" : [
        { "resource_conflict_load_conflict_list" : {
            "USING" : { "node" : [ "argument-entity-id--node-1" ] },
            "PROVIDE" : { "conflict_list" : { "conflict_list" : "Conflict List" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "conflict-list" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : { "data" : [ "list-item:log" ], "value" : "848" } },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "text_matches" : { "text" : [ "list-item:body:value" ], "match" : "Confirmed" } },
                            "DO" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          },
                          { "ELSE" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_check_for_conflicts_2014_carver_combo'] = entity_import('rules_config', '{ "rules_check_for_conflicts_2014_carver_combo" : {
      "LABEL" : "Check for conflicts - 2014 - Carver combo",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "8",
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules", "resource_conflict", "rules_conditional", "rb_misc" ],
      "ON" : [ "rb_misc_trigger_node_view_panel_context_13" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "argument-entity-id--node-1" ],
            "type" : { "value" : { "room_reservation" : "room_reservation" } }
          }
        },
        { "AND" : [
            { "data_is" : {
                "data" : [ "argument-entity-id--node-1:field-room:tid" ],
                "value" : "848"
              }
            },
            { "AND" : [
                { "resource_conflict_contains_conflict" : { "node" : [ "argument-entity-id--node-1" ] } }
              ]
            }
          ]
        }
      ],
      "DO" : [
        { "resource_conflict_load_conflict_list" : {
            "USING" : { "node" : [ "argument-entity-id--node-1" ] },
            "PROVIDE" : { "conflict_list" : { "conflict_list" : "Conflict List" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "conflict-list" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : { "data" : [ "list-item:log" ], "value" : "782" } },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "text_matches" : { "text" : [ "list-item:body:value" ], "match" : "Confirmed" } },
                            "DO" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          },
                          { "ELSE" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "list-item:log" ], "value" : "781" } },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "text_matches" : { "text" : [ "list-item:body:value" ], "match" : "Confirmed" } },
                            "DO" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests: \\u003Ca href=\\u0022taxonomy\\/term\\/[list-item:field-room2b]?field_mr_date_and_time_value%5Bvalue%5D%5Bdate%5D=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[list-item:field-room] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          },
                          { "ELSE" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_check_for_conflicts_2014_cepeda'] = entity_import('rules_config', '{ "rules_check_for_conflicts_2014_cepeda" : {
      "LABEL" : "Check for conflicts - 2014 - Cepeda",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "8",
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules", "resource_conflict", "rules_conditional", "rb_misc" ],
      "ON" : [ "rb_misc_trigger_node_view_panel_context_13" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "argument-entity-id--node-1" ],
            "type" : { "value" : { "room_reservation" : "room_reservation" } }
          }
        },
        { "AND" : [
            { "data_is" : {
                "data" : [ "argument-entity-id--node-1:field-room:tid" ],
                "op" : "IN",
                "value" : { "value" : [ "783", "849" ] }
              }
            },
            { "AND" : [
                { "resource_conflict_contains_conflict" : { "node" : [ "argument-entity-id--node-1" ] } }
              ]
            }
          ]
        }
      ],
      "DO" : [
        { "resource_conflict_load_conflict_list" : {
            "USING" : { "node" : [ "argument-entity-id--node-1" ] },
            "PROVIDE" : { "conflict_list" : { "conflict_list" : "Conflict List" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "conflict-list" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : { "data" : [ "list-item:log" ], "value" : "850" } },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "text_matches" : { "text" : [ "list-item:body:value" ], "match" : "Confirmed" } },
                            "DO" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          },
                          { "ELSE" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_check_for_conflicts_2014_cepeda_combo'] = entity_import('rules_config', '{ "rules_check_for_conflicts_2014_cepeda_combo" : {
      "LABEL" : "Check for conflicts - 2014 - Cepeda combo",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "8",
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules", "resource_conflict", "rules_conditional", "rb_misc" ],
      "ON" : [ "rb_misc_trigger_node_view_panel_context_13" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "argument-entity-id--node-1" ],
            "type" : { "value" : { "room_reservation" : "room_reservation" } }
          }
        },
        { "AND" : [
            { "data_is" : {
                "data" : [ "argument-entity-id--node-1:field-room:tid" ],
                "value" : "850"
              }
            },
            { "AND" : [
                { "resource_conflict_contains_conflict" : { "node" : [ "argument-entity-id--node-1" ] } }
              ]
            }
          ]
        }
      ],
      "DO" : [
        { "resource_conflict_load_conflict_list" : {
            "USING" : { "node" : [ "argument-entity-id--node-1" ] },
            "PROVIDE" : { "conflict_list" : { "conflict_list" : "Conflict List" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "conflict-list" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : { "data" : [ "list-item:log" ], "value" : "849" } },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "text_matches" : { "text" : [ "list-item:body:value" ], "match" : "Confirmed" } },
                            "DO" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          },
                          { "ELSE" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests: \\u003Ca href=\\u0022taxonomy\\/term\\/[list-item:field-room2b]?field_mr_date_and_time_value%5Bvalue%5D%5Bdate%5D=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[list-item:field-room] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "list-item:log" ], "value" : "783" } },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "text_matches" : { "text" : [ "list-item:body:value" ], "match" : "Confirmed" } },
                            "DO" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          },
                          { "ELSE" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_check_for_conflicts_2014_ruiz'] = entity_import('rules_config', '{ "rules_check_for_conflicts_2014_ruiz" : {
      "LABEL" : "Check for conflicts - 2014 - Ruiz",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "8",
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules", "resource_conflict", "rules_conditional", "rb_misc" ],
      "ON" : [ "rb_misc_trigger_node_view_panel_context_13" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "argument-entity-id--node-1" ],
            "type" : { "value" : { "room_reservation" : "room_reservation" } }
          }
        },
        { "AND" : [
            { "data_is" : {
                "data" : [ "argument-entity-id--node-1:field-room:tid" ],
                "op" : "IN",
                "value" : { "value" : [ "793", "795" ] }
              }
            },
            { "AND" : [
                { "resource_conflict_contains_conflict" : { "node" : [ "argument-entity-id--node-1" ] } }
              ]
            }
          ]
        }
      ],
      "DO" : [
        { "resource_conflict_load_conflict_list" : {
            "USING" : { "node" : [ "argument-entity-id--node-1" ] },
            "PROVIDE" : { "conflict_list" : { "conflict_list" : "Conflict List" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "conflict-list" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : { "data" : [ "list-item:log" ], "value" : "794" } },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "text_matches" : { "text" : [ "list-item:body:value" ], "match" : "Confirmed" } },
                            "DO" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          },
                          { "ELSE" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_check_for_conflicts_2014_ruiz_combo'] = entity_import('rules_config', '{ "rules_check_for_conflicts_2014_ruiz_combo" : {
      "LABEL" : "Check for conflicts - 2014 - Ruiz combo",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "8",
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules", "resource_conflict", "rules_conditional", "rb_misc" ],
      "ON" : [ "rb_misc_trigger_node_view_panel_context_13" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "argument-entity-id--node-1" ],
            "type" : { "value" : { "room_reservation" : "room_reservation" } }
          }
        },
        { "AND" : [
            { "data_is" : {
                "data" : [ "argument-entity-id--node-1:field-room:tid" ],
                "op" : "IN",
                "value" : { "value" : [ "794" ] }
              }
            },
            { "AND" : [
                { "resource_conflict_contains_conflict" : { "node" : [ "argument-entity-id--node-1" ] } }
              ]
            }
          ]
        }
      ],
      "DO" : [
        { "resource_conflict_load_conflict_list" : {
            "USING" : { "node" : [ "argument-entity-id--node-1" ] },
            "PROVIDE" : { "conflict_list" : { "conflict_list" : "Conflict List" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "conflict-list" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : { "data" : [ "list-item:log" ], "value" : "793" } },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "text_matches" : { "text" : [ "list-item:body:value" ], "match" : "Confirmed" } },
                            "DO" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          },
                          { "ELSE" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "list-item:log" ], "value" : "795" } },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "text_matches" : { "text" : [ "list-item:body:value" ], "match" : "Confirmed" } },
                            "DO" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          },
                          { "ELSE" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_check_for_conflicts_2014_southeast'] = entity_import('rules_config', '{ "rules_check_for_conflicts_2014_southeast" : {
      "LABEL" : "Check for conflicts - 2014 - Southeast",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "8",
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules", "resource_conflict", "rules_conditional", "rb_misc" ],
      "ON" : [ "rb_misc_trigger_node_view_panel_context_13" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "argument-entity-id--node-1" ],
            "type" : { "value" : { "room_reservation" : "room_reservation" } }
          }
        },
        { "AND" : [
            { "data_is" : {
                "data" : [ "argument-entity-id--node-1:field-room:tid" ],
                "op" : "IN",
                "value" : { "value" : [ "796", "798" ] }
              }
            },
            { "AND" : [
                { "resource_conflict_contains_conflict" : { "node" : [ "argument-entity-id--node-1" ] } }
              ]
            }
          ]
        }
      ],
      "DO" : [
        { "resource_conflict_load_conflict_list" : {
            "USING" : { "node" : [ "argument-entity-id--node-1" ] },
            "PROVIDE" : { "conflict_list" : { "conflict_list" : "Conflict List" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "conflict-list" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : { "data" : [ "list-item:log" ], "value" : "797" } },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "text_matches" : { "text" : [ "list-item:body:value" ], "match" : "Confirmed" } },
                            "DO" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          },
                          { "ELSE" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_check_for_conflicts_2014_southeast_combo'] = entity_import('rules_config', '{ "rules_check_for_conflicts_2014_southeast_combo" : {
      "LABEL" : "Check for conflicts - 2014 - Southeast combo",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "8",
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules", "resource_conflict", "rules_conditional", "rb_misc" ],
      "ON" : [ "rb_misc_trigger_node_view_panel_context_13" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "argument-entity-id--node-1" ],
            "type" : { "value" : { "room_reservation" : "room_reservation" } }
          }
        },
        { "AND" : [
            { "data_is" : {
                "data" : [ "argument-entity-id--node-1:field-room:tid" ],
                "op" : "IN",
                "value" : { "value" : [ "797" ] }
              }
            },
            { "AND" : [
                { "resource_conflict_contains_conflict" : { "node" : [ "argument-entity-id--node-1" ] } }
              ]
            }
          ]
        }
      ],
      "DO" : [
        { "resource_conflict_load_conflict_list" : {
            "USING" : { "node" : [ "argument-entity-id--node-1" ] },
            "PROVIDE" : { "conflict_list" : { "conflict_list" : "Conflict List" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "conflict-list" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : { "data" : [ "list-item:log" ], "value" : "798" } },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "text_matches" : { "text" : [ "list-item:body:value" ], "match" : "Confirmed" } },
                            "DO" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          },
                          { "ELSE" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "list-item:log" ], "value" : "796" } },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "text_matches" : { "text" : [ "list-item:body:value" ], "match" : "Confirmed" } },
                            "DO" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          },
                          { "ELSE" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_check_for_conflicts_2014_terrazas'] = entity_import('rules_config', '{ "rules_check_for_conflicts_2014_terrazas" : {
      "LABEL" : "Check for conflicts - 2014 - Terrazas",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "8",
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules", "resource_conflict", "rules_conditional", "rb_misc" ],
      "ON" : [ "rb_misc_trigger_node_view_panel_context_13" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "argument-entity-id--node-1" ],
            "type" : { "value" : { "room_reservation" : "room_reservation" } }
          }
        },
        { "AND" : [
            { "data_is" : {
                "data" : [ "argument-entity-id--node-1:field-room:tid" ],
                "op" : "IN",
                "value" : { "value" : [ "839", "840" ] }
              }
            },
            { "AND" : [
                { "resource_conflict_contains_conflict" : { "node" : [ "argument-entity-id--node-1" ] } }
              ]
            }
          ]
        }
      ],
      "DO" : [
        { "resource_conflict_load_conflict_list" : {
            "USING" : { "node" : [ "argument-entity-id--node-1" ] },
            "PROVIDE" : { "conflict_list" : { "conflict_list" : "Conflict List" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "conflict-list" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : { "data" : [ "list-item:log" ], "value" : "800" } },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "text_matches" : { "text" : [ "list-item:body:value" ], "match" : "Confirmed" } },
                            "DO" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          },
                          { "ELSE" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_check_for_conflicts_2014_terrazas_combo'] = entity_import('rules_config', '{ "rules_check_for_conflicts_2014_terrazas_combo" : {
      "LABEL" : "Check for conflicts - 2014 - Terrazas combo",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "8",
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules", "resource_conflict", "rules_conditional", "rb_misc" ],
      "ON" : [ "rb_misc_trigger_node_view_panel_context_13" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "argument-entity-id--node-1" ],
            "type" : { "value" : { "room_reservation" : "room_reservation" } }
          }
        },
        { "AND" : [
            { "data_is" : {
                "data" : [ "argument-entity-id--node-1:field-room:tid" ],
                "value" : "800"
              }
            },
            { "AND" : [
                { "resource_conflict_contains_conflict" : { "node" : [ "argument-entity-id--node-1" ] } }
              ]
            }
          ]
        }
      ],
      "DO" : [
        { "resource_conflict_load_conflict_list" : {
            "USING" : { "node" : [ "argument-entity-id--node-1" ] },
            "PROVIDE" : { "conflict_list" : { "conflict_list" : "Conflict List" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "conflict-list" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : { "data" : [ "list-item:log" ], "value" : "839" } },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "text_matches" : { "text" : [ "list-item:body:value" ], "match" : "Confirmed" } },
                            "DO" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          },
                          { "ELSE" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests: \\u003Ca href=\\u0022taxonomy\\/term\\/[list-item:field-room2b]?field_mr_date_and_time_value%5Bvalue%5D%5Bdate%5D=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[list-item:field-room] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "list-item:log" ], "value" : "840" } },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "text_matches" : { "text" : [ "list-item:body:value" ], "match" : "Confirmed" } },
                            "DO" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          },
                          { "ELSE" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_check_for_conflicts_2014_twin_oaks'] = entity_import('rules_config', '{ "rules_check_for_conflicts_2014_twin_oaks" : {
      "LABEL" : "Check for conflicts - 2014 - Twin Oaks",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "8",
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules", "resource_conflict", "rules_conditional", "rb_misc" ],
      "ON" : [ "rb_misc_trigger_node_view_panel_context_13" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "argument-entity-id--node-1" ],
            "type" : { "value" : { "room_reservation" : "room_reservation" } }
          }
        },
        { "AND" : [
            { "data_is" : {
                "data" : [ "argument-entity-id--node-1:field-room:tid" ],
                "op" : "IN",
                "value" : { "value" : [ "801", "803" ] }
              }
            },
            { "AND" : [
                { "resource_conflict_contains_conflict" : { "node" : [ "argument-entity-id--node-1" ] } }
              ]
            }
          ]
        }
      ],
      "DO" : [
        { "resource_conflict_load_conflict_list" : {
            "USING" : { "node" : [ "argument-entity-id--node-1" ] },
            "PROVIDE" : { "conflict_list" : { "conflict_list" : "Conflict List" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "conflict-list" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : { "data" : [ "list-item:log" ], "value" : "802" } },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "text_matches" : { "text" : [ "list-item:body:value" ], "match" : "Confirmed" } },
                            "DO" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          },
                          { "ELSE" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_check_for_conflicts_2014_twin_oaks_combo'] = entity_import('rules_config', '{ "rules_check_for_conflicts_2014_twin_oaks_combo" : {
      "LABEL" : "Check for conflicts - 2014 - Twin Oaks combo",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "8",
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules", "resource_conflict", "rules_conditional", "rb_misc" ],
      "ON" : [ "rb_misc_trigger_node_view_panel_context_13" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "argument-entity-id--node-1" ],
            "type" : { "value" : { "room_reservation" : "room_reservation" } }
          }
        },
        { "AND" : [
            { "data_is" : {
                "data" : [ "argument-entity-id--node-1:field-room:tid" ],
                "op" : "IN",
                "value" : { "value" : [ "802" ] }
              }
            },
            { "AND" : [
                { "resource_conflict_contains_conflict" : { "node" : [ "argument-entity-id--node-1" ] } }
              ]
            }
          ]
        }
      ],
      "DO" : [
        { "resource_conflict_load_conflict_list" : {
            "USING" : { "node" : [ "argument-entity-id--node-1" ] },
            "PROVIDE" : { "conflict_list" : { "conflict_list" : "Conflict List" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "conflict-list" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : { "data" : [ "list-item:log" ], "value" : "801" } },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "text_matches" : { "text" : [ "list-item:body:value" ], "match" : "Confirmed" } },
                            "DO" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          },
                          { "ELSE" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "list-item:log" ], "value" : "803" } },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "text_matches" : { "text" : [ "list-item:body:value" ], "match" : "Confirmed" } },
                            "DO" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          },
                          { "ELSE" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_check_for_conflicts_2014_university_hills'] = entity_import('rules_config', '{ "rules_check_for_conflicts_2014_university_hills" : {
      "LABEL" : "Check for conflicts - 2014 - University Hills",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "8",
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules", "resource_conflict", "rules_conditional", "rb_misc" ],
      "ON" : [ "rb_misc_trigger_node_view_panel_context_13" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "argument-entity-id--node-1" ],
            "type" : { "value" : { "room_reservation" : "room_reservation" } }
          }
        },
        { "AND" : [
            { "data_is" : {
                "data" : [ "argument-entity-id--node-1:field-room:tid" ],
                "op" : "IN",
                "value" : { "value" : [ "804", "806" ] }
              }
            },
            { "AND" : [
                { "resource_conflict_contains_conflict" : { "node" : [ "argument-entity-id--node-1" ] } }
              ]
            }
          ]
        }
      ],
      "DO" : [
        { "resource_conflict_load_conflict_list" : {
            "USING" : { "node" : [ "argument-entity-id--node-1" ] },
            "PROVIDE" : { "conflict_list" : { "conflict_list" : "Conflict List" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "conflict-list" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : { "data" : [ "list-item:log" ], "value" : "805" } },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "text_matches" : { "text" : [ "list-item:body:value" ], "match" : "Confirmed" } },
                            "DO" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          },
                          { "ELSE" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_check_for_conflicts_2014_university_hills_combo'] = entity_import('rules_config', '{ "rules_check_for_conflicts_2014_university_hills_combo" : {
      "LABEL" : "Check for conflicts - 2014 - University Hills combo",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "8",
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules", "resource_conflict", "rules_conditional", "rb_misc" ],
      "ON" : [ "rb_misc_trigger_node_view_panel_context_13" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "argument-entity-id--node-1" ],
            "type" : { "value" : { "room_reservation" : "room_reservation" } }
          }
        },
        { "AND" : [
            { "data_is" : {
                "data" : [ "argument-entity-id--node-1:field-room:tid" ],
                "op" : "IN",
                "value" : { "value" : [ "805" ] }
              }
            },
            { "AND" : [
                { "resource_conflict_contains_conflict" : { "node" : [ "argument-entity-id--node-1" ] } }
              ]
            }
          ]
        }
      ],
      "DO" : [
        { "resource_conflict_load_conflict_list" : {
            "USING" : { "node" : [ "argument-entity-id--node-1" ] },
            "PROVIDE" : { "conflict_list" : { "conflict_list" : "Conflict List" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "conflict-list" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : { "data" : [ "list-item:log" ], "value" : "804" } },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "text_matches" : { "text" : [ "list-item:body:value" ], "match" : "Confirmed" } },
                            "DO" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          },
                          { "ELSE" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "list-item:log" ], "value" : "806" } },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "text_matches" : { "text" : [ "list-item:body:value" ], "match" : "Confirmed" } },
                            "DO" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          },
                          { "ELSE" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_check_for_conflicts_2014_windsor_park'] = entity_import('rules_config', '{ "rules_check_for_conflicts_2014_windsor_park" : {
      "LABEL" : "Check for conflicts - 2014 - Windsor Park",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "8",
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules", "resource_conflict", "rules_conditional", "rb_misc" ],
      "ON" : [ "rb_misc_trigger_node_view_panel_context_13" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "argument-entity-id--node-1" ],
            "type" : { "value" : { "room_reservation" : "room_reservation" } }
          }
        },
        { "AND" : [
            { "data_is" : {
                "data" : [ "argument-entity-id--node-1:field-room:tid" ],
                "op" : "IN",
                "value" : { "value" : [ "808", "810" ] }
              }
            },
            { "AND" : [
                { "resource_conflict_contains_conflict" : { "node" : [ "argument-entity-id--node-1" ] } }
              ]
            }
          ]
        }
      ],
      "DO" : [
        { "resource_conflict_load_conflict_list" : {
            "USING" : { "node" : [ "argument-entity-id--node-1" ] },
            "PROVIDE" : { "conflict_list" : { "conflict_list" : "Conflict List" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "conflict-list" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : { "data" : [ "list-item:log" ], "value" : "809" } },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "text_matches" : { "text" : [ "list-item:body:value" ], "match" : "Confirmed" } },
                            "DO" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          },
                          { "ELSE" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_check_for_conflicts_2014_windsor_park_combo'] = entity_import('rules_config', '{ "rules_check_for_conflicts_2014_windsor_park_combo" : {
      "LABEL" : "Check for conflicts - 2014 - Windsor Park combo",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "8",
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules", "resource_conflict", "rules_conditional", "rb_misc" ],
      "ON" : [ "rb_misc_trigger_node_view_panel_context_13" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "argument-entity-id--node-1" ],
            "type" : { "value" : { "room_reservation" : "room_reservation" } }
          }
        },
        { "AND" : [
            { "data_is" : {
                "data" : [ "argument-entity-id--node-1:field-room:tid" ],
                "value" : "809"
              }
            },
            { "AND" : [
                { "resource_conflict_contains_conflict" : { "node" : [ "argument-entity-id--node-1" ] } }
              ]
            }
          ]
        }
      ],
      "DO" : [
        { "resource_conflict_load_conflict_list" : {
            "USING" : { "node" : [ "argument-entity-id--node-1" ] },
            "PROVIDE" : { "conflict_list" : { "conflict_list" : "Conflict List" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "conflict-list" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : { "data" : [ "list-item:log" ], "value" : "808" } },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "text_matches" : { "text" : [ "list-item:body:value" ], "match" : "Confirmed" } },
                            "DO" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          },
                          { "ELSE" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "list-item:log" ], "value" : "810" } },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "text_matches" : { "text" : [ "list-item:body:value" ], "match" : "Confirmed" } },
                            "DO" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          },
                          { "ELSE" : [
                              { "drupal_message" : {
                                  "message" : "This request conflicts with: \\u003Ca href=\\u0022[list-item:url]\\u0022\\u003E[list-item:title]\\u003C\\/a\\u003E ([list-item:field-status])\\u003Cbr\\/\\u003E\\r\\nView requests for this location and date: \\u003Ca href=\\u0022http:\\/\\/library.austintexas.gov\\/check-conflicts?field_location_taxonomy2_tid[]=[argument-entity-id--node-1:field-location-taxonomy2:tid]\\u0026field_mr_date_and_time_value[min][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0026field_mr_date_and_time_value[max][date]=[list-item:field-mr-date-and-time:value:date_only]\\u0022\\u003E[argument-entity-id--node-1:field-location-taxonomy2:name] on [list-item:field-mr-date-and-time:value:just_date]\\u003C\\/a\\u003E",
                                  "type" : "error",
                                  "repeat" : 0
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_display_which_group'] = entity_import('rules_config', '{ "rules_display_which_group" : {
      "LABEL" : "Display which group (for Group Representatives)",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules", "rules_conditional", "rules_forms" ],
      "ON" : [ "rules_forms_room_reservation_node_form_form_built" ],
      "IF" : [
        { "user_has_role" : {
            "account" : [ "user" ],
            "roles" : { "value" : { "18" : "18" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is_empty" : { "data" : [ "site:current-user:profile-group-representative:field-recent-group" ] } },
              "DO" : [ { "redirect" : { "url" : "choose-a-group" } } ]
            },
            { "ELSE" : [
                { "entity_fetch" : {
                    "USING" : {
                      "type" : "node",
                      "id" : [ "user:profile-group-representative:field-recent-group" ]
                    },
                    "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
                  }
                },
                { "drupal_message" : {
                    "message" : "\\u003Ch2\\u003ERepresenting \\u003Cstrong\\u003E[entity-fetched:title]\\u003C\\/strong\\u003E. Do you need to \\u003Ca href=\\u0022[site:url]choose-a-group\\u0022\\u003Eswitch to a different group\\u003C\\/a\\u003E?\\u003C\\/h2\\u003E",
                    "type" : "error",
                    "repeat" : 0
                  }
                }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_display_which_group_for_mras_'] = entity_import('rules_config', '{ "rules_display_which_group_for_mras_" : {
      "LABEL" : "Display which group (for MRAs)",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules", "rules_forms" ],
      "ON" : [ "rules_forms_room_reservation_node_form_form_built" ],
      "IF" : [
        { "user_has_role" : {
            "account" : [ "user" ],
            "roles" : { "value" : { "3" : "3", "19" : "19" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : {
              "type" : "node",
              "id" : [ "user:profile-group-representative:field-recent-group" ]
            },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "drupal_message" : {
            "message" : "\\u003Ch2\\u003ERepresenting \\u003Cstrong\\u003E[entity-fetched:title]\\u003C\\/strong\\u003E. Do you need to \\u003Ca href=\\u0022[site:url]choose-a-group\\u0022\\u003Eswitch to a different group\\u003C\\/a\\u003E?\\u003C\\/h2\\u003E",
            "type" : "error",
            "repeat" : 0
          }
        }
      ]
    }
  }');
  $items['rules_do_not_edit_confirmed_room_reservations'] = entity_import('rules_config', '{ "rules_do_not_edit_confirmed_room_reservations" : {
      "LABEL" : "Do not edit Confirmed Room Reservations",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules_forms", "rules" ],
      "ON" : [ "rules_forms_room_reservation_node_form_form_built" ],
      "IF" : [
        { "rules_forms_element_value" : {
            "form" : [ "form" ],
            "form_state" : [ "form_state" ],
            "element" : "radios:field_status:und",
            "value" : "Confirmed",
            "regex" : 0
          }
        },
        { "user_has_role" : { "account" : [ "user" ], "roles" : { "value" : { "18" : "18" } } } }
      ],
      "DO" : [
        { "drupal_message" : {
            "message" : "This Room Reservation is Confirmed, so only Administrators may edit it.",
            "type" : "error",
            "repeat" : 0
          }
        },
        { "rules_forms_set_disabled" : {
            "form" : [ "form" ],
            "element" : "textfield:field_group3:und:0:target_id",
            "disabled" : 1
          }
        },
        { "rules_forms_set_disabled" : { "form" : [ "form" ], "element" : "textfield:title", "disabled" : 1 } },
        { "rules_forms_set_disabled" : {
            "form" : [ "form" ],
            "element" : "textarea:field_purpose_of_meeting:und:0:value",
            "disabled" : 1
          }
        },
        { "rules_forms_set_disabled" : {
            "form" : [ "form" ],
            "element" : "textfield:field_expected_attendance:und:0:value",
            "disabled" : 1
          }
        },
        { "rules_forms_set_disabled" : {
            "form" : [ "form" ],
            "element" : "select:field_location2:und",
            "disabled" : 1
          }
        },
        { "rules_forms_set_disabled" : {
            "form" : [ "form" ],
            "element" : "radios:field_windsor_park_branch_rooms:und",
            "disabled" : 1
          }
        },
        { "rules_forms_set_disabled" : {
            "form" : [ "form" ],
            "element" : "submit:actions:submit",
            "disabled" : 1
          }
        },
        { "rules_forms_set_access" : {
            "form" : [ "form" ],
            "element" : "date_combo:field_mr_date_and_time:und:0",
            "access" : 1
          }
        },
        { "rules_forms_set_access" : { "form" : [ "form" ], "element" : "submit:actions:submit", "access" : 1 } }
      ]
    }
  }');
  $items['rules_log_the_locale'] = entity_import('rules_config', '{ "rules_log_the_locale" : {
      "LABEL" : "Room: Log the locale",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "9",
      "ACTIVE" : false,
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "ON" : [ "node_presave" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "room_reservation" : "room_reservation" } }
          }
        }
      ],
      "DO" : [
        { "SWITCH" : {
            "USING" : { "data" : [ "node:field-location2" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "Milwood Branch" },
                  "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "788" } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "North Village Branch" },
                  "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "789" } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Old Quarry Branch" },
                  "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "790" } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Pleasant Hill Branch" },
                  "DO" : [
                    { "SWITCH" : {
                        "USING" : { "data" : [ "node:field-pleasant-hill-branch-rooms" ] },
                        "DO" : [
                          { "CASE" : {
                              "USING" : { "value" : "Pleasant Hill Branch #1 (Capacity 20)" },
                              "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "791" } } ]
                            }
                          },
                          { "CASE" : {
                              "USING" : { "value" : "Pleasant Hill Branch #2 (Capacity 50)" },
                              "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "792" } } ]
                            }
                          }
                        ]
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Ruiz Branch" },
                  "DO" : [
                    { "SWITCH" : {
                        "USING" : { "data" : [ "node:field-ruiz-branch-rooms" ] },
                        "DO" : [
                          { "CASE" : {
                              "USING" : { "value" : "Ruiz Branch #1 (Capacity 39)" },
                              "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "793" } } ]
                            }
                          },
                          { "CASE" : {
                              "USING" : { "value" : "Ruiz Branch #2 (Capacity 39)" },
                              "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "795" } } ]
                            }
                          },
                          { "CASE" : {
                              "USING" : { "value" : "Ruiz Branch #1 \\u0026 #2 (Capacity 78)" },
                              "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "794" } } ]
                            }
                          }
                        ]
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Southeast Branch" },
                  "DO" : [
                    { "SWITCH" : {
                        "USING" : { "data" : [ "node:field-southeast-branch-rooms" ] },
                        "DO" : [
                          { "CASE" : {
                              "USING" : { "value" : "Southeast Branch #1 (Capacity 40)" },
                              "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "796" } } ]
                            }
                          },
                          { "CASE" : {
                              "USING" : { "value" : "Southeast Branch #2 (Capacity 28)" },
                              "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "798" } } ]
                            }
                          },
                          { "CASE" : {
                              "USING" : { "value" : "Southeast Branch #1 \\u0026 #2 (Capacity 68)" },
                              "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "797" } } ]
                            }
                          }
                        ]
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Spicewood Springs Branch" },
                  "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "799" } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Terrazas Branch" },
                  "DO" : [
                    { "SWITCH" : {
                        "USING" : { "data" : [ "node:field-terrazas-branch-rooms2" ] },
                        "DO" : [
                          { "CASE" : {
                              "USING" : { "value" : "Terrazas Branch #1 \\u0026 #2 (capacity 50)" },
                              "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "800" } } ]
                            }
                          },
                          { "CASE" : {
                              "USING" : { "value" : "Terrazas Branch #1 (capacity 25)" },
                              "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "839" } } ]
                            }
                          },
                          { "CASE" : {
                              "USING" : { "value" : "Terrazas Branch #2 (capacity 25)" },
                              "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "840" } } ]
                            }
                          }
                        ]
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Carver Branch" },
                  "DO" : [
                    { "SWITCH" : {
                        "USING" : { "data" : [ "node:field-carver-branch-rooms2" ] },
                        "DO" : [
                          { "CASE" : {
                              "USING" : { "value" : "Carver Branch #1 (capacity 25)" },
                              "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "781" } } ]
                            }
                          },
                          { "CASE" : {
                              "USING" : { "value" : "Carver Branch #2 (capacity 100)" },
                              "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "782" } } ]
                            }
                          },
                          { "CASE" : {
                              "USING" : { "value" : "Carver Branch #1 \\u0026 #2 (capacity 125)" },
                              "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "848" } } ]
                            }
                          }
                        ]
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Twin Oaks Branch" },
                  "DO" : [
                    { "SWITCH" : {
                        "USING" : { "data" : [ "node:field-twin-oaks-branch-rooms" ] },
                        "DO" : [
                          { "CASE" : {
                              "USING" : { "value" : "Twin Oaks Branch #1 (Capacity 20)" },
                              "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "801" } } ]
                            }
                          },
                          { "CASE" : {
                              "USING" : { "value" : "Twin Oaks Branch #2 (Capacity 20)" },
                              "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "803" } } ]
                            }
                          },
                          { "CASE" : {
                              "USING" : { "value" : "Twin Oaks Branch #1 \\u0026 #2 (Capacity 40)" },
                              "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "802" } } ]
                            }
                          }
                        ]
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "University Hills Branch" },
                  "DO" : [
                    { "SWITCH" : {
                        "USING" : { "data" : [ "node:field-university-hills-branch-ro" ] },
                        "DO" : [
                          { "CASE" : {
                              "USING" : { "value" : "University Hills Branch #1 (Capacity 40)" },
                              "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "804" } } ]
                            }
                          },
                          { "CASE" : {
                              "USING" : { "value" : "University Hills Branch #2 (Capacity 40)" },
                              "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "806" } } ]
                            }
                          },
                          { "CASE" : {
                              "USING" : { "value" : "University Hills Branch #1 \\u0026 #2 (Capacity 80)" },
                              "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "805" } } ]
                            }
                          }
                        ]
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Willie Mae Kirk Branch" },
                  "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "807" } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Windsor Park Branch" },
                  "DO" : [
                    { "SWITCH" : {
                        "USING" : { "data" : [ "node:field-windsor-park-branch-rooms" ] },
                        "DO" : [
                          { "CASE" : {
                              "USING" : { "value" : "Windsor Park Branch #1 (Capacity 32)" },
                              "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "808" } } ]
                            }
                          },
                          { "CASE" : {
                              "USING" : { "value" : "Windsor Park Branch #2 (Capacity 33)" },
                              "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "810" } } ]
                            }
                          },
                          { "CASE" : {
                              "USING" : { "value" : "Windsor Park Branch #1 \\u0026 #2 (Capacity 65)" },
                              "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "809" } } ]
                            }
                          }
                        ]
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Yarborough Branch" },
                  "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "811" } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Austin History Center" },
                  "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "780" } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Cepeda Branch" },
                  "DO" : [
                    { "SWITCH" : {
                        "USING" : { "data" : [ "node:field-cepeda-branch-rooms2" ] },
                        "DO" : [
                          { "CASE" : {
                              "USING" : { "value" : "Cepeda Branch #1 (Capacity 45)" },
                              "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "783" } } ]
                            }
                          },
                          { "CASE" : {
                              "USING" : { "value" : "Cepeda Branch #2 (Capacity 45)" },
                              "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "849" } } ]
                            }
                          },
                          { "CASE" : {
                              "USING" : { "value" : "Cepeda Branch #1 \\u0026 #2 (Capacity 90)" },
                              "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "850" } } ]
                            }
                          }
                        ]
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Hampton Branch at Oak Hill" },
                  "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "784" } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Howson Branch" },
                  "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "785" } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Little Walnut Creek Branch" },
                  "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "786" } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Manchaca Road Branch" },
                  "DO" : [ { "data_set" : { "data" : [ "node:field-room2b" ], "value" : "787" } } ]
                }
              }
            ]
          }
        },
        { "data_set" : { "data" : [ "node:log" ], "value" : "[node:field-room2b]" } },
        { "variable_add" : {
            "USING" : { "type" : "text", "value" : "[node:field-status]" },
            "PROVIDE" : { "variable_added" : { "variable_added" : "Added variable" } }
          }
        },
        { "data_set" : { "data" : [ "node:body:value" ], "value" : "[variable-added:value]" } },
        { "data_convert" : {
            "USING" : { "type" : "integer", "value" : [ "node:field-room2b" ] },
            "PROVIDE" : { "conversion_result" : { "room_taxonomy_id" : "Room Taxonomy Id" } }
          }
        },
        { "entity_fetch" : {
            "USING" : { "type" : "taxonomy_term", "id" : [ "room-taxonomy-id" ] },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "data_set" : { "data" : [ "node:field-room" ], "value" : [ "entity-fetched" ] } },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is_empty" : { "data" : [ "node:field-status" ] } },
              "DO" : [
                { "data_set" : { "data" : [ "node:field-status" ], "value" : "Awaiting Confirmation..." } }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_new_group_reps_add_a_reservation'] = entity_import('rules_config', '{ "rules_new_group_reps_add_a_reservation" : {
      "LABEL" : "New Group Rep -\\u003E Add a Group",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_insert" ],
      "IF" : [
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "18" : "18" } } } }
      ],
      "DO" : [ { "redirect" : { "url" : "node\\/add\\/group" } } ]
    }
  }');
  $items['rules_send_confirmation_on_new_request'] = entity_import('rules_config', '{ "rules_send_confirmation_on_new_request" : {
      "LABEL" : "Send confirmation on new request",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "3" : "3", "18" : "18" } },
            "operation" : "OR"
          }
        },
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "room_reservation" : "room_reservation" } }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "node:author:mail" ],
            "subject" : "[node:field-status]: Austin Public Library room request",
            "message" : "[node:field-status]: Austin Public Library room request\\r\\n\\r\\nYour group\\u0027s room request has been updated.\\r\\n\\r\\nStatus: [node:field-status]\\r\\nGroup: [node:field_group3]\\r\\nTopic: [node:title]\\r\\nExpected attendance: [node:field-expected-attendance]\\r\\nLocation: [node:field-location-taxonomy2:name]\\r\\nRoom: [node:field-room:name]\\r\\nDate: [node:field-mr-date-and-time:value]\\r\\nCheck current status of your request at: [node:url]",
            "from" : "\\u0022Austin Public Library\\u0022 \\u003Clibrary-noreply@austintexas.gov\\u003E",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_send_email_on_confirmation'] = entity_import('rules_config', '{ "rules_send_email_on_confirmation" : {
      "LABEL" : "Send email on confirmation",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "ON" : [ "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "room_reservation" : "room_reservation" } }
          }
        },
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "3" : "3", "19" : "19" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : {
                  "data" : [ "node:field-status" ],
                  "op" : "IN",
                  "value" : { "value" : { "Confirmed" : "Confirmed", "Denied" : "Denied" } }
                }
              },
              "DO" : [
                { "mail" : {
                    "to" : [ "node:author:mail" ],
                    "subject" : "[node:field-status]: Austin Public Library room request",
                    "message" : "[node:field-status]: Austin Public Library room request\\r\\n\\r\\nYour group\\u0027s room request has been updated.\\r\\n\\r\\nStatus: [node:field-status]\\r\\nGroup: [node:field_group3]\\r\\nTopic: [node:title]\\r\\nExpected attendance: [node:field-expected-attendance]\\r\\nLocation: [node:field-location-taxonomy2:name]\\r\\nRoom: [node:field-room:name]\\r\\nDate: [node:field-mr-date-and-time:value]\\r\\nCheck current status of your request at: [node:url]",
                    "from" : "\\u0022Austin Public Library\\u0022 \\u003Clibrary-noreply@austintexas.gov\\u003E",
                    "language" : [ "" ]
                  }
                },
                { "SWITCH" : {
                    "USING" : { "data" : [ "node:field-status" ] },
                    "DO" : [
                      { "CASE" : { "USING" : { "value" : "Confirmed" }, "DO" : [] } },
                      { "CASE" : { "USING" : { "value" : "Denied" }, "DO" : [] } }
                    ]
                  }
                }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_set_status_for_new_group'] = entity_import('rules_config', '{ "rules_set_status_for_new_group" : {
      "LABEL" : "New Group \\u003E set status",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "ON" : [ "node_presave" ],
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "group" : "group" } } } },
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "3" : "3", "18" : "18", "19" : "19" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "CONDITIONAL" : [
            {
              "IF" : { "user_has_role" : {
                  "account" : [ "site:current-user" ],
                  "roles" : { "value" : { "3" : "3", "19" : "19" } },
                  "operation" : "OR"
                }
              },
              "DO" : [
                { "data_set" : { "data" : [ "node:field-verified-group" ], "value" : "Verified" } }
              ]
            },
            { "ELSE" : [
                { "data_set" : {
                    "data" : [ "node:field-verified-group" ],
                    "value" : "Needs Verification"
                  }
                }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_set_the_group'] = entity_import('rules_config', '{ "rules_set_the_group" : {
      "LABEL" : "Set the Group",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "ON" : [ "node_presave" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "room_reservation" : "room_reservation" } }
          }
        },
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "2" : "2" } }
          }
        }
      ],
      "DO" : [
        { "data_convert" : {
            "USING" : {
              "type" : "integer",
              "value" : [ "site:current-user:profile-group-representative:field-recent-group" ]
            },
            "PROVIDE" : { "conversion_result" : { "conversion_result" : "Conversion result" } }
          }
        },
        { "entity_fetch" : {
            "USING" : { "type" : "node", "id" : [ "conversion-result" ] },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "site:current-user" ], "value" : [ "node:author" ] } },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "NOT data_is" : { "data" : [ "node:created" ], "op" : "\\u003C", "value" : "-1 minute" } },
                      "DO" : [
                        { "data_set" : { "data" : [ "node:field-group3" ], "value" : [ "entity-fetched" ] } }
                      ]
                    }
                  ]
                }
              ]
            }
          ]
        },
        { "variable_add" : {
            "USING" : { "type" : "integer" },
            "PROVIDE" : { "variable_added" : { "location_tid" : "Location tid" } }
          }
        },
        { "SWITCH" : {
            "USING" : { "data" : [ "node:field-location2" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "Spicewood Springs Branch" },
                  "DO" : [ { "data_set" : { "data" : [ "location-tid" ], "value" : "208" } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Terrazas Branch" },
                  "DO" : [ { "data_set" : { "data" : [ "location-tid" ], "value" : "209" } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Twin Oaks Branch" },
                  "DO" : [ { "data_set" : { "data" : [ "location-tid" ], "value" : "210" } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "University Hills Branch" },
                  "DO" : [ { "data_set" : { "data" : [ "location-tid" ], "value" : "185" } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Willie Mae Kirk Branch" },
                  "DO" : [ { "data_set" : { "data" : [ "location-tid" ], "value" : "201" } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Windsor Park Branch" },
                  "DO" : [ { "data_set" : { "data" : [ "location-tid" ], "value" : "184" } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Yarborough Branch" },
                  "DO" : [ { "data_set" : { "data" : [ "location-tid" ], "value" : "211" } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Austin History Center" },
                  "DO" : [ { "data_set" : { "data" : [ "location-tid" ], "value" : "183" } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Carver Branch" },
                  "DO" : [ { "data_set" : { "data" : [ "location-tid" ], "value" : "194" } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Cepeda Branch" },
                  "DO" : [ { "data_set" : { "data" : [ "location-tid" ], "value" : "186" } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Hampton Branch at Oak Hill" },
                  "DO" : [ { "data_set" : { "data" : [ "location-tid" ], "value" : "195" } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Howson Branch" },
                  "DO" : [ { "data_set" : { "data" : [ "location-tid" ], "value" : "196" } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Little Walnut Creek Branch" },
                  "DO" : [ { "data_set" : { "data" : [ "location-tid" ], "value" : "197" } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Manchaca Road Branch" },
                  "DO" : [ { "data_set" : { "data" : [ "location-tid" ], "value" : "198" } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Milwood Branch" },
                  "DO" : [ { "data_set" : { "data" : [ "location-tid" ], "value" : "199" } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "North Village Branch" },
                  "DO" : [ { "data_set" : { "data" : [ "location-tid" ], "value" : "200" } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Old Quarry Branch" },
                  "DO" : [ { "data_set" : { "data" : [ "location-tid" ], "value" : "202" } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Pleasant Hill Branch" },
                  "DO" : [ { "data_set" : { "data" : [ "location-tid" ], "value" : "203" } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Ruiz Branch" },
                  "DO" : [ { "data_set" : { "data" : [ "location-tid" ], "value" : "205" } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "Southeast Branch" },
                  "DO" : [ { "data_set" : { "data" : [ "location-tid" ], "value" : "207" } } ]
                }
              }
            ]
          }
        },
        { "entity_fetch" : {
            "USING" : { "type" : "taxonomy_term", "id" : [ "location-tid" ] },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched_tid" : "Fetched entity tid" } }
          }
        },
        { "data_set" : {
            "data" : [ "node:field-location-taxonomy2" ],
            "value" : [ "entity-fetched-tid" ]
          }
        }
      ]
    }
  }');
  $items['rules_set_the_taxonomy_term_for_room_rez'] = entity_import('rules_config', '{ "rules_set_the_taxonomy_term_for_room_rez" : {
      "LABEL" : "Set the taxonomy term for Room Rez",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "8",
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "room_reservation" : "room_reservation" } }
          }
        }
      ],
      "DO" : [
        { "data_convert" : {
            "USING" : { "type" : "integer", "value" : [ "node:field-room2b" ] },
            "PROVIDE" : { "conversion_result" : { "room2b" : "Integer converted from room2b" } }
          }
        },
        { "entity_fetch" : {
            "USING" : { "type" : "taxonomy_term", "id" : [ "room2b" ] },
            "PROVIDE" : { "entity_fetched" : { "room3b" : "Fetched taxonomy term - Room" } }
          }
        },
        { "data_set" : { "data" : [ "node:field-room" ], "value" : [ "room3b" ] } }
      ]
    }
  }');
  $items['rules_unpublish_denied_reservations'] = entity_import('rules_config', '{ "rules_unpublish_denied_reservations" : {
      "LABEL" : "Unpublish denied reservations",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "room_reservation" : "room_reservation" } }
          }
        },
        { "data_is" : { "data" : [ "node:field-status" ], "value" : "Denied" } }
      ],
      "DO" : [
        { "node_unpublish" : { "node" : [ "node" ] } },
        { "drupal_message" : {
            "message" : "Reservation \\u003Ca href=\\u0022[node:edit-url]\\u0022\\u003E[node:nid]\\u003C\\/a\\u003E was Denied and automatically unpublished.",
            "type" : "warning"
          }
        }
      ]
    }
  }');
  $items['rules_update_recent_group'] = entity_import('rules_config', '{ "rules_update_recent_group" : {
      "LABEL" : "Update recent group \\u003E Request room",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules", "rb_misc" ],
      "ON" : [ "rb_misc_trigger_page_tag_with_recent_group3_panel_context" ],
      "IF" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "2" : "2", "3" : "3", "18" : "18", "19" : "19" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "site:current-user:profile-group-representative:field-recent-group" ],
            "value" : [ "argument-entity-id--node-1:nid" ]
          }
        },
        { "redirect" : { "url" : "request-a-meeting-room" } }
      ]
    }
  }');
  $items['rules_update_title'] = entity_import('rules_config', '{ "rules_update_title" : {
      "LABEL" : "update title",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "meeting rooms 2014" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_view" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "room_reservation" : "room_reservation" } }
          }
        }
      ],
      "DO" : [
        { "drupal_message" : {
            "message" : "I\\u0027m about to change this title from \\u0022x\\u0022",
            "type" : "warning",
            "repeat" : 0
          }
        },
        { "entity_fetch" : {
            "USING" : {
              "type" : "node",
              "id" : [ "node:field-group3:nid" ],
              "revision_id" : [ "" ]
            },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "data_set" : { "data" : [ "node:title" ], "value" : [ "entity-fetched:title" ] } }
      ]
    }
  }');
  return $items;
}
