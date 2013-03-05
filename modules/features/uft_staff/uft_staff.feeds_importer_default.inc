<?php
/**
 * @file
 * uft_staff.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function uft_staff_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'staff';
  $feeds_importer->config = array(
    'name' => 'Staff',
    'description' => 'Staff profile importer',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'staff_profile',
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(),
        'update_existing' => '2',
        'input_format' => 'html',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['staff'] = $feeds_importer;

  return $export;
}
