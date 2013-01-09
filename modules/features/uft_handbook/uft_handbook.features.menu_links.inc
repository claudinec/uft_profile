<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function uft_handbook_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:node/26
  $menu_links['primary-links:node/26'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'node/26',
    'router_path' => 'node/%',
    'link_title' => 'About the UFT',
    'options' => array(
      'attributes' => array(
        'title' => 'About The UFT',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: primary-links:node/870
  $menu_links['primary-links:node/870'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'node/870',
    'router_path' => 'node/%',
    'link_title' => 'Students',
    'options' => array(
      'attributes' => array(
        'title' => 'Students',
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
