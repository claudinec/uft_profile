<?php
/**
 * @file
 * uft_units.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uft_units_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_node_info().
 */
function uft_units_node_info() {
  $items = array(
    'unit' => array(
      'name' => t('Unit'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Unit Title'),
      'help' => '',
    ),
  );
  return $items;
}
