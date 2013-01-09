<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function uft_units_taxonomy_default_vocabularies() {
  return array(
    'archive_years' => array(
      'name' => 'Archive years',
      'description' => 'Archiving a year\'s version of a unit (or other content).',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_archive_years',
      'weight' => '0',
      'nodes' => array(
        'unit' => 'unit',
      ),
    ),
  );
}
