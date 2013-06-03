<?php
/**
 * @file
 * uft_news_archive.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function uft_news_archive_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:news-archive
  $menu_links['main-menu:news-archive'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news-archive',
    'router_path' => 'news-archive',
    'link_title' => 'News Archive',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('News Archive');


  return $menu_links;
}
