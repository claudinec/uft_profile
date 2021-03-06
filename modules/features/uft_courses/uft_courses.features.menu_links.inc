<?php
/**
 * @file
 * uft_courses.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function uft_courses_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:courses
  $menu_links['main-menu:courses'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'courses',
    'router_path' => 'courses',
    'link_title' => 'Courses',
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
  t('Courses');


  return $menu_links;
}
