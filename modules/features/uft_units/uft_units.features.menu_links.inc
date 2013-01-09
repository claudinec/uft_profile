<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function uft_units_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:node/649
  $menu_links['primary-links:node/649'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'node/649',
    'router_path' => 'node/%',
    'link_title' => 'Timetables',
    'options' => array(
      'attributes' => array(
        'title' => '2012 Timetables',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Timetables');


  return $menu_links;
}
