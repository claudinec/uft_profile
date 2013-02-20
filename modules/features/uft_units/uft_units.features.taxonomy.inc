<?php
/**
 * @file
 * uft_units.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function uft_units_taxonomy_default_vocabularies() {
  return array(
    'disciplines' => array(
      'name' => 'Disciplines',
      'machine_name' => 'disciplines',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
