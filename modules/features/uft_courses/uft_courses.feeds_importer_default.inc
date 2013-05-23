<?php
/**
 * @file
 * uft_courses.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function uft_courses_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'courses';
  $feeds_importer->config = array(
    'name' => 'Courses',
    'description' => 'Courses from 2012 site',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
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
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Path',
            'target' => 'path_alias',
            'pathauto_override' => 1,
          ),
          2 => array(
            'source' => 'Course Description',
            'target' => 'field_course_description',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Course Pathways',
            'target' => 'field_course_pathways',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Course Structure',
            'target' => 'field_course_structure',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Course Type',
            'target' => 'field_course_type',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Course Volume',
            'target' => 'field_course_volume',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Entry Requirements',
            'target' => 'field_entry_requirements',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Graduate Outcomes',
            'target' => 'field_graduate_outcomes',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Modes of Study',
            'target' => 'field_modes_of_study',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'html',
        'skip_hash_check' => 0,
        'bundle' => 'course',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['courses'] = $feeds_importer;

  return $export;
}
