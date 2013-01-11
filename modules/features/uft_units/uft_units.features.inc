<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function uft_units_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}

/**
 * Implementation of hook_node_info().
 */
function uft_units_node_info() {
  $items = array(
    'unit' => array(
      'name' => t('Unit'),
      'description' => t('Unit content. '),
      'has_title' => '1',
      'title_label' => t('Unit Title'),
      'has_body' => '1',
      'body_label' => t('Content'),
      'min_word_count' => '0',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function uft_units_views_api() {
  return array(
    'api' => '2',
  );
}
