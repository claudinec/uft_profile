<?php
/**
 * @file
 * uft_units.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function uft_units_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:timetable
  $menu_links['main-menu:timetable'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'timetable',
    'router_path' => 'timetable',
    'link_title' => 'Timetables',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Timetables');


  return $menu_links;
}
