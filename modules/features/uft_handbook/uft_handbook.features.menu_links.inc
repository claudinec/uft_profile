<?php
/**
 * @file
 * uft_handbook.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function uft_handbook_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:node/68
  $menu_links['main-menu:node/68'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/68',
    'router_path' => 'node/%',
    'link_title' => 'About the UFT',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: main-menu:node/90
  $menu_links['main-menu:node/90'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/90',
    'router_path' => 'node/%',
    'link_title' => 'Students',
    'options' => array(
      'attributes' => array(
        'title' => 'Information for current and prospective students',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About the UFT');
  t('Students');


  return $menu_links;
}
