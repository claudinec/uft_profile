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
            'source' => 'Unit Code',
            'target' => 'field_unit_code',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 0,
          ),
          2 => array(
            'source' => 'Path',
            'target' => 'path_alias',
            'pathauto_override' => 1,
          ),
          3 => array(
            'source' => 'Body',
            'target' => 'field_unit_content',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'BTheol Field',
            'target' => 'field_unit_field',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Corequisites',
            'target' => 'field_corequisites',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'GradDip Field',
            'target' => 'field_postgraduate_level',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Learning Outcomes',
            'target' => 'field_learning_outcomes',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'MDiv Type of Study',
            'target' => 'field_mdiv_type_of_study',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Mode of Teaching',
            'target' => 'field_mode_of_teaching',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Pre-2013 Unit Code',
            'target' => 'field_pre_2013_unit_code',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Prerequisites',
            'target' => 'field_prerequisites',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Prohibited Combinations',
            'target' => 'field_prohibited_combinations',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'RTI',
            'target' => 'field_rti',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Teaching Methods',
            'target' => 'field_teaching_methods',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Undergraduate Level',
            'target' => 'field_undergraduate_level',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'Unit Frequency',
            'target' => 'field_unit_frequency',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'Department Name',
            'target' => 'field_department',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'Course Type',
            'target' => 'field_courses',
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
