<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function uft_courses_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:courses
  $menu_links['primary-links:courses'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'courses',
    'router_path' => 'courses',
    'link_title' => 'Courses',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Courses');


  return $menu_links;
}
