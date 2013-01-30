<?php
/**
 * @file
 * uft_units.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function uft_units_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'units';
  $feeds_importer->config = array(
    'name' => 'Units',
    'description' => 'Units from 2012 site',
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
        'content_type' => 'unit',
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Nid',
            'target' => 'nid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Body',
            'target' => 'field_unit_content',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Unit Code',
            'target' => 'field_unit_code',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Pre-2013 Unit Code',
            'target' => 'field_pre_2013_unit_code',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
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
  $export['units'] = $feeds_importer;

  return $export;
}
