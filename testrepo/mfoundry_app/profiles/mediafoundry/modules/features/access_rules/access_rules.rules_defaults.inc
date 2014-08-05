<?php
/**
 * @file
 * access_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function access_rules_default_rules_configuration() {
  $items = array();
  $items['rules_grant_access_of_free_contents'] = entity_import('rules_config', '{ "rules_grant_access_of_free_contents" : {
      "LABEL" : "Grant Access of Free Contents",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "content_access_rules" ],
      "ON" : [ "node_update", "node_insert" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_add_to_subscription" } },
        { "data_is" : { "data" : [ "node:field-add-to-subscription" ], "value" : "1" } }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "[node:title] is Free now!!!" } },
        { "content_access_action_grant_node_permissions" : {
            "node" : [ "node" ],
            "permissions" : { "value" : [
                "view:1",
                "view:2",
                "view:3",
                "view:5",
                "view:6",
                "view:7",
                "view_own:1",
                "view_own:2",
                "view_own:3",
                "view_own:5",
                "view_own:6",
                "view_own:7",
                "update:3",
                "update:5",
                "update:6",
                "update:7",
                "update_own:3",
                "update_own:5",
                "update_own:6",
                "update_own:7",
                "delete:3",
                "delete:5",
                "delete:6",
                "delete:7",
                "delete_own:3",
                "delete_own:5",
                "delete_own:6",
                "delete_own:7"
              ]
            }
          }
        }
      ]
    }
  }');
  $items['rules_grant_access_to_a_node_if_product_points_to_premium_node'] = entity_import('rules_config', '{ "rules_grant_access_to_a_node_if_product_points_to_premium_node" : {
      "LABEL" : "Grant access to a node if product points to premium node",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules", "content_access_rules" ],
      "USES VARIABLES" : { "list_item" : { "label" : "List Item", "type" : "commerce_line_item" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "list-item" ], "field" : "commerce_product" } },
        { "entity_has_field" : {
            "entity" : [ "list-item:commerce-product" ],
            "field" : "field_premium_node"
          }
        }
      ],
      "DO" : [
        { "content_access_action_user_grant" : {
            "node" : [ "list-item:commerce-product:field-premium-node" ],
            "content_access_user_view" : [ "list-item:order:owner" ],
            "content_access_user_update" : [ "" ],
            "content_access_user_delete" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_grant_access_to_a_node_on_order_completion'] = entity_import('rules_config', '{ "rules_grant_access_to_a_node_on_order_completion" : {
      "LABEL" : "Grant access to a node on order completion",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "entity" ],
      "ON" : [ "commerce_order_update" ],
      "IF" : [
        { "data_is" : { "data" : [ "commerce-order:state" ], "value" : "completed" } }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "commerce-order:commerce-line-items" ] },
            "ITEM" : { "list_item" : "list item" },
            "DO" : [
              { "component_rules_grant_access_to_a_node_if_product_points_to_premium_node" : { "list_item" : [ "list_item" ] } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_revoke_access_of_paid_contents'] = entity_import('rules_config', '{ "rules_revoke_access_of_paid_contents" : {
      "LABEL" : "Revoke Access of Paid Contents",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "content_access_rules" ],
      "ON" : [ "node_update", "node_insert" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_add_to_subscription" } },
        { "data_is" : { "data" : [ "node:field-add-to-subscription" ], "value" : "2" } }
      ],
      "DO" : [
        { "content_access_action_revoke_node_permissions" : {
            "node" : [ "node" ],
            "permissions" : { "value" : [
                "view:1",
                "view:2",
                "view:3",
                "view:5",
                "view:6",
                "view:7",
                "view_own:3",
                "view_own:5",
                "view_own:6",
                "view_own:7",
                "update:3",
                "update:5",
                "update:6",
                "update:7",
                "update_own:3",
                "update_own:5",
                "update_own:6",
                "update_own:7",
                "delete:3",
                "delete:5",
                "delete:6",
                "delete:7",
                "delete_own:3",
                "delete_own:5",
                "delete_own:6",
                "delete_own:7"
              ]
            }
          }
        },
        { "drupal_message" : { "message" : "[node:title] is paid now, Please create Subscription for the content." } }
      ]
    }
  }');
  return $items;
}
