<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function uft_staff_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:staff
  $menu_links['primary-links:staff'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'staff',
    'router_path' => 'staff',
    'link_title' => 'Staff',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Staff');


  return $menu_links;
}
