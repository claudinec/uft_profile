<?php
/**
 * @file
 * uft_units.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function uft_units_default_rules_configuration() {
  $items = array();
  $items['rules_publish_latest_revision'] = entity_import('rules_config', '{ "rules_publish_latest_revision" : {
      "LABEL" : "Publish latest revision",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "revisioning" ],
      "ON" : [ "node_view" ],
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "unit" : "unit" } } } }
      ],
      "DO" : [
        { "revisioning_rules_action_publish_latest" : { "node" : [ "node" ] } }
      ]
    }
  }');
  return $items;
}
