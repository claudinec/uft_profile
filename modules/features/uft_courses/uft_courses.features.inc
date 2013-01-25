<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function uft_courses_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}

/**
 * Implementation of hook_node_info().
 */
function uft_courses_node_info() {
  $items = array(
    'course' => array(
      'name' => t('Course'),
      'module' => 'features',
      'description' => t('Course information.'),
      'has_title' => '1',
      'title_label' => t('Course Name'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
