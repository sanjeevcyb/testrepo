<?php
/**
 * @file
 * commerce_rules_feature.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function commerce_rules_feature_default_rules_configuration() {
  $items = array();
  $items['rules_cart_redirect'] = entity_import('rules_config', '{ "rules_cart_redirect" : {
      "LABEL" : "Cart Redirect",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "commerce_cart" ],
      "ON" : [ "commerce_cart_product_add" ],
      "DO" : [ { "redirect" : { "url" : "cart" } } ]
    }
  }');
  $items['rules_order_status_on_checkout'] = entity_import('rules_config', '{ "rules_order_status_on_checkout" : {
      "LABEL" : "Order Status on Checkout",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Order Status" ],
      "REQUIRES" : [ "commerce_order", "commerce_checkout" ],
      "ON" : [ "commerce_checkout_complete" ],
      "DO" : [
        { "commerce_order_update_state" : { "commerce_order" : [ "commerce-order" ], "order_state" : "completed" } }
      ]
    }
  }');
  return $items;
}
