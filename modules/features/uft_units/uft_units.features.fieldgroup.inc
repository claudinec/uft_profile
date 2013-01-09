<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function uft_units_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_approvals
  $groups['unit-group_approvals'] = array(
    'group_type' => 'standard',
    'type_name' => 'unit',
    'group_name' => 'group_approvals',
    'label' => 'Approvals',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => '<p style="margin-left: 1cm;">
	Approvals must be completed in sequence; all approvals must be complete before the unit can be presented to the Coursework Studies Committee.</p>
<p style="margin-left: 1cm;">
	&nbsp;</p>
<p style="margin-left: 1cm;">
	For new units, two reviewers <strong>in addition to the proposer</strong> are required.&nbsp; At least one of these reviewers must be external to the offering RTI.</p>
<p style="margin-left: 1cm;">
	&nbsp;</p>
<p style="margin-left: 1cm;">
	For revised units, one reviewer <strong>in addition to the proposer </strong>is required.&nbsp; This reviewer may be internal.</p>
',
      ),
      'display' => array(
        'weight' => '21',
        'parent' => '',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsible',
          'exclude' => 0,
        ),
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '21',
    'parent' => '',
    'fields' => array(
      '0' => 'field_reviewer_1',
      '1' => 'field_reviewer_1_date',
      '2' => 'field_reviewer_2',
      '3' => 'field_reviewer_2_date',
      '4' => 'field_rti_dept_head',
      '5' => 'field_rti_dept_head_date',
      '6' => 'field_ac_board_chair',
      '7' => 'field_department_approval',
      '8' => 'field_cwsc_chair',
      '9' => 'field_cwsc_approval',
    ),
    'depth' => 0,
    'parents' => array(
      '0' => '',
    ),
  );

  // Exported group: group_assessment
  $groups['unit-group_assessment'] = array(
    'group_type' => 'multigroup',
    'type_name' => 'unit',
    'group_name' => 'group_assessment',
    'label' => 'Assessment',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '<p>Briefly describe all assessment tasks for the unit, including word counts for each item (e.g. 1 x 3000 word research essay). Provide a weighting for each item (e.g. 50%) ensuring that the total adds up to 100%. Assessment tasks must test the learning outcomes for the unit, please provide the numbers of learning outcomes assessed by each task. If there is only one assessment task, it should assess all learning outcomes.
</p>

<p>
The normal total word count for a standard 15 point unit at each level is as follows:
</p>

<ul>
<li>Diploma: 3,000 to 4,000 words
<li>Undergraduate	first year: 4,000 words
<li>second year: 4,000-5,000 words
<li>third year: 5,000-6,000 words
<li>Graduate level: 6,000 words, usually more than one piece of work
<li>Postgraduate level: 6,000 words, usually a single paper
</ul>

<p>
Each hour of examination time counts as 1,000 words.
</p>

<p>
If this unit is to be assessed by means other than written work, please provide a justification explaining how the assessment may be marked by two examiners and providing an equivalent word length for any non-written item. 
</p>',
      ),
      'display' => array(
        'weight' => '18',
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
        'settings' => array(),
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
      'multigroup' => array(
        'subgroup' => array(
          'weight' => -20,
          'label' => 'above',
          '5' => array(
            'format' => 'fieldset',
            'exclude' => 0,
          ),
          'teaser' => array(
            'format' => 'table-multiple',
            'exclude' => 0,
          ),
          'full' => array(
            'format' => 'table-multiple',
            'exclude' => 0,
          ),
          '4' => array(
            'format' => 'fieldset',
            'exclude' => 0,
          ),
          '2' => array(
            'format' => 'fieldset',
            'exclude' => 0,
          ),
          '3' => array(
            'format' => 'fieldset',
            'exclude' => 0,
          ),
          'sticky' => array(
            'format' => 'fieldset',
            'exclude' => 0,
          ),
          'token' => array(
            'format' => 'fieldset',
            'exclude' => 0,
          ),
        ),
        'multiple-columns' => 0,
        'required' => 0,
        'multiple' => '1',
        'initial' => '4',
        'new_per_click' => '1',
        'labels' => array(
          '0' => '',
          '1' => '',
          '2' => '',
          '3' => '',
          '4' => '',
          '5' => '',
          '6' => '',
          '7' => '',
          '8' => '',
          '9' => '',
        ),
      ),
    ),
    'weight' => '18',
    'parent' => '',
    'fields' => array(
      '0' => 'field_assess_type',
      '1' => 'field_assess_weight',
      '2' => 'field_assess_outcomes',
    ),
    'depth' => 0,
    'parents' => array(
      '0' => '',
    ),
  );

  // Exported group: group_library_impact
  $groups['unit-group_library_impact'] = array(
    'group_type' => 'standard',
    'type_name' => 'unit',
    'group_name' => 'group_library_impact',
    'label' => 'Library Impact Statement',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => 'Identify texts and resources which may need to be made available by the appropriate library.',
      ),
      'display' => array(
        'weight' => '20',
        'parent' => '',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsible',
          'exclude' => 0,
        ),
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '20',
    'parent' => '',
    'fields' => array(
      '0' => 'field_lib_imp_approv',
      '1' => 'field_lib_imp_statement',
      '2' => 'field_lib_imp_action',
      '3' => 'field_lib_imp_name',
      '4' => 'field_lib_imp_date',
    ),
    'depth' => 0,
    'parents' => array(
      '0' => '',
    ),
  );

  // Exported group: group_timetabling
  $groups['unit-group_timetabling'] = array(
    'group_type' => 'standard',
    'type_name' => 'unit',
    'group_name' => 'group_timetabling',
    'label' => 'Timetabling',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '9',
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
    'weight' => '9',
    'parent' => '',
    'fields' => array(
      '0' => 'field_semester',
      '1' => 'field_day_num',
      '2' => 'field_time',
      '3' => 'field_location',
      '4' => 'field_frequency',
      '5' => 'field_academic_year',
      '6' => 'field_notes',
    ),
    'depth' => 0,
    'parents' => array(
      '0' => '',
    ),
  );

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

  // Exported group: group_unit_workload
  $groups['unit-group_unit_workload'] = array(
    'group_type' => 'standard',
    'type_name' => 'unit',
    'group_name' => 'group_unit_workload',
    'label' => 'Workload',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => 'For semester mode, total workload hours per week is automatically calculated as timetabled + personal hours per week.',
      ),
      'display' => array(
        'weight' => '17',
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
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '17',
    'parent' => '',
    'fields' => array(
      '0' => 'field_unit_hours_timetabled',
      '1' => 'field_unit_hours_personal',
      '2' => 'field_unit_hours_week',
      '3' => 'field_unit_hours_total',
      '4' => 'field_unit_workload',
    ),
    'depth' => 0,
    'parents' => array(
      '0' => '',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Approvals');
  t('Assessment');
  t('Library Impact Statement');
  t('Timetabling');
  t('Unit Fields');
  t('Unit Level');
  t('Workload');

  return $groups;
}
