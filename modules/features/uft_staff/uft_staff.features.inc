<?php
/**
 * @file
 * uft_staff.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uft_staff_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function uft_staff_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function uft_staff_node_info() {
  $items = array(
    'staff_profile' => array(
      'name' => t('Staff profile'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
