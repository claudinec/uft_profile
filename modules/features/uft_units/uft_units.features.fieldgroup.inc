<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function uft_units_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_unit_fields
  $groups['unit-group_unit_fields'] = array(
    'group_type' => 'standard',
    'type_name' => 'unit',
    'group_name' => 'group_unit_fields',
    'label' => 'Unit Fields',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '10',
        'parent' => '',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '10',
    'parent' => '',
    'fields' => array(
      '0' => 'field_course_type_ref',
      '1' => 'field_btheol_field',
      '2' => 'field_btheol_discipline',
      '3' => 'field_mdiv_field',
      '4' => 'field_department_ref',
    ),
    'depth' => 0,
    'parents' => array(
      '0' => '',
    ),
  );

  // Exported group: group_unit_level
  $groups['unit-group_unit_level'] = array(
    'group_type' => 'standard',
    'type_name' => 'unit',
    'group_name' => 'group_unit_level',
    'label' => 'Unit Level',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '11',
        'parent' => '',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '11',
    'parent' => '',
    'fields' => array(
      '0' => 'field_ugrad_level',
      '1' => 'field_graddip_field',
      '2' => 'field_mdiv_type_study',
    ),
    'depth' => 0,
    'parents' => array(
      '0' => '',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Unit Fields');
  t('Unit Level');

  return $groups;
}
