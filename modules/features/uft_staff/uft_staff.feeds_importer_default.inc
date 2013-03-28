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
        'mappings' => array(
          0 => array(
            'source' => 'First Name',
            'target' => 'field_first_name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Surname',
            'target' => 'field_surname',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Path',
            'target' => 'path_alias',
            'pathauto_override' => 1,
          ),
          4 => array(
            'source' => 'Department Name',
            'target' => 'field_department',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Postgraduate Supervision',
            'target' => 'field_postgraduate_supervision',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Qualifications',
            'target' => 'field_qualifications',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Research Interests',
            'target' => 'field_research_interests',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Teaching Interests',
            'target' => 'field_teaching_interests',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'College',
            'target' => 'field_college',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Staff Type',
            'target' => 'field_staff_type',
            'unique' => FALSE,
          ),
        ),
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
