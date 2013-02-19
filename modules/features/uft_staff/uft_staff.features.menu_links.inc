<?php
/**
 * @file
 * uft_staff.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function uft_staff_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:staff
  $menu_links['main-menu:staff'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'staff',
    'router_path' => 'staff',
    'link_title' => 'Staff',
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
  t('Staff');


  return $menu_links;
}
