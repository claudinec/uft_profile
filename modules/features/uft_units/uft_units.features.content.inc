<?php

/**
 * Implementation of hook_content_default_fields().
 */
function uft_units_content_default_fields() {
  $fields = array();

  // Exported field: field_ac_board_chair
  $fields['unit-field_ac_board_chair'] = array(
    'field_name' => 'field_ac_board_chair',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '14',
      'parent' => 'group_approvals',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_ac_board_chair][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Academic Board Chair',
      'weight' => '14',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_academic_year
  $fields['unit-field_academic_year'] = array(
    'field_name' => 'field_academic_year',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '33',
      'parent' => 'group_timetabling',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'referenceable_types' => array(
      'academic_year' => 'academic_year',
      'book' => 0,
      'college' => 0,
      'committee_group' => 0,
      'course_type' => 0,
      'day_of_week' => 0,
      'department' => 0,
      'discipline' => 0,
      'uft_event_date' => 0,
      'field' => 0,
      'grad_dip_field' => 0,
      'location' => 0,
      'mdiv_field' => 0,
      'mdiv_studies' => 0,
      'mass_contact' => 0,
      'page' => 0,
      'profile' => 0,
      'rti' => 0,
      'story' => 0,
      'tsa_article' => 0,
      'uft_group_meeting' => 0,
      'uft_group_standard_post' => 0,
      'unit' => 0,
      'unit_frequency' => 0,
      'webform' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'default_value' => array(
        '0' => array(
          'nid' => '272',
        ),
      ),
      'default_value_php' => NULL,
      'size' => 60,
      'label' => 'Years Offered',
      'weight' => '33',
      'description' => 'Choose which years the unit will be offered in',
      'type' => 'nodereference_buttons',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_assess_outcomes
  $fields['unit-field_assess_outcomes'] = array(
    'field_name' => 'field_assess_outcomes',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '45',
      'parent' => 'group_assessment',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'initial' => '4',
    'new_per_click' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '20',
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_assess_outcomes][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Learning Outcomes Assessed',
      'weight' => '45',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_assess_type
  $fields['unit-field_assess_type'] = array(
    'field_name' => 'field_assess_type',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '43',
      'parent' => 'group_assessment',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'initial' => '4',
    'new_per_click' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_assess_type][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Assessment Type',
      'weight' => '43',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_assess_weight
  $fields['unit-field_assess_weight'] = array(
    'field_name' => 'field_assess_weight',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '44',
      'parent' => 'group_assessment',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_float',
    'required' => '0',
    'multiple' => '1',
    'module' => 'number',
    'active' => '1',
    'initial' => '4',
    'new_per_click' => '1',
    'prefix' => '',
    'suffix' => '%',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_assess_weight][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Weighting',
      'weight' => '44',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_bibliography
  $fields['unit-field_bibliography'] = array(
    'field_name' => 'field_bibliography',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '19',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '24',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_bibliography][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Recommended reading',
      'weight' => '19',
      'description' => '<p>Provide a bibliography of no more than ten works. Mark with asterisks those texts which students should purchase. 
</p>

<p>
Please format the list as for a bibliography according to <a href="http://www.press.uchicago.edu/books/turabian/turabian_citationguide.html">Turabian</a>.
</p>

<p>The text <strong>"* = set texts recommended for purchase"</strong> will be added to the beginning of this entry. Please do not add this text yourself.</p>',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_btheol_discipline
  $fields['unit-field_btheol_discipline'] = array(
    'field_name' => 'field_btheol_discipline',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '17',
      'parent' => 'group_unit_fields',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'referenceable_types' => array(
      'discipline' => 'discipline',
      'academic_year' => 0,
      'book' => 0,
      'college' => 0,
      'committee_group' => 0,
      'course_type' => 0,
      'day_of_week' => 0,
      'department' => 0,
      'uft_event_date' => 0,
      'field' => 0,
      'grad_dip_field' => 0,
      'location' => 0,
      'mdiv_field' => 0,
      'mdiv_studies' => 0,
      'page' => 0,
      'profile' => 0,
      'rti' => 0,
      'story' => 0,
      'tsa_article' => 0,
      'uft_group' => 0,
      'uft_group_wiki_post' => 0,
      'unit' => 0,
      'unit_frequency' => 0,
      'unit_review' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Disciplines',
      'weight' => '17',
      'description' => '',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_btheol_field
  $fields['unit-field_btheol_field'] = array(
    'field_name' => 'field_btheol_field',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '16',
      'parent' => 'group_unit_fields',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'referenceable_types' => array(
      'field' => 'field',
      'academic_year' => 0,
      'book' => 0,
      'college' => 0,
      'committee_group' => 0,
      'course_type' => 0,
      'day_of_week' => 0,
      'department' => 0,
      'discipline' => 0,
      'uft_event_date' => 0,
      'grad_dip_field' => 0,
      'location' => 0,
      'mdiv_field' => 0,
      'mdiv_studies' => 0,
      'page' => 0,
      'profile' => 0,
      'rti' => 0,
      'story' => 0,
      'tsa_article' => 0,
      'uft_group' => 0,
      'uft_group_wiki_post' => 0,
      'unit' => 0,
      'unit_frequency' => 0,
      'unit_review' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Field',
      'weight' => '16',
      'description' => '',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_corequisites
  $fields['unit-field_corequisites'] = array(
    'field_name' => 'field_corequisites',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '13',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '4',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_corequisites][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Corequisites',
      'weight' => '13',
      'description' => 'Please specify any other units which students must complete in order to receive credit for this unit. Leave blank if inapplicable.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_course_type_ref
  $fields['unit-field_course_type_ref'] = array(
    'field_name' => 'field_course_type_ref',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '15',
      'parent' => 'group_unit_fields',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'referenceable_types' => array(
      'course_type' => 'course_type',
      'academic_year' => 0,
      'book' => 0,
      'college' => 0,
      'committee_group' => 0,
      'day_of_week' => 0,
      'department' => 0,
      'discipline' => 0,
      'uft_event_date' => 0,
      'field' => 0,
      'grad_dip_field' => 0,
      'location' => 0,
      'mdiv_field' => 0,
      'mdiv_studies' => 0,
      'page' => 0,
      'profile' => 0,
      'rti' => 0,
      'story' => 0,
      'tsa_article' => 0,
      'uft_group' => 0,
      'uft_group_wiki_post' => 0,
      'unit' => 0,
      'unit_frequency' => 0,
      'unit_review' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'size' => 60,
      'label' => 'Courses',
      'weight' => '15',
      'description' => '',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_cwsc_approval
  $fields['unit-field_cwsc_approval'] = array(
    'field_name' => 'field_cwsc_approval',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '17',
      'parent' => 'group_approvals',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'field_cwsc_approval_default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'field_cwsc_approval_default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'field_cwsc_approval_default',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'd/m/Y',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'CWSC Approval',
      'weight' => '17',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_cwsc_chair
  $fields['unit-field_cwsc_chair'] = array(
    'field_name' => 'field_cwsc_chair',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '16',
      'parent' => 'group_approvals',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_cwsc_chair][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'CWSC Chair',
      'weight' => '16',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_day_num
  $fields['unit-field_day_num'] = array(
    'field_name' => 'field_day_num',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '27',
      'parent' => 'group_timetabling',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0|Sunday
1|Monday
2|Tuesday
3|Wednesday
4|Thursday
5|Friday
6|Saturday
',
    'allowed_values_php' => '',
    'widget' => array(
      'label' => 'Day',
      'weight' => '27',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_department_approval
  $fields['unit-field_department_approval'] = array(
    'field_name' => 'field_department_approval',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '15',
      'parent' => 'group_approvals',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'field_department_approval_default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'field_department_approval_default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'field_department_approval_default',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'd/m/Y',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Academic Board Approval',
      'weight' => '15',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_department_ref
  $fields['unit-field_department_ref'] = array(
    'field_name' => 'field_department_ref',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '19',
      'parent' => 'group_unit_fields',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'referenceable_types' => array(
      'department' => 'department',
      'academic_year' => 0,
      'book' => 0,
      'college' => 0,
      'committee_group' => 0,
      'course_type' => 0,
      'uft_event_date' => 0,
      'grad_dip_field' => 0,
      'location' => 0,
      'mdiv_field' => 0,
      'mdiv_studies' => 0,
      'page' => 0,
      'profile' => 0,
      'rti' => 0,
      'story' => 0,
      'uft_group' => 0,
      'uft_group_wiki_post' => 0,
      'unit' => 0,
      'unit_frequency' => 0,
      'unit_review' => 0,
      'discipline' => 0,
      'field' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Department Name',
      'weight' => '19',
      'description' => '',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_files
  $fields['unit-field_files'] = array(
    'field_name' => 'field_files',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '8',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'initial' => '3',
    'new_per_click' => '3',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'txt doc pdf',
      'file_path' => 'unit',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'filefield_sources' => array(
        'imce' => 'imce',
        'reference' => 'reference',
        'attach' => 'attach',
        'remote' => 0,
      ),
      'filefield_source_autocomplete' => '0',
      'filefield_source_attach_path' => 'file_attach',
      'filefield_source_attach_absolute' => '0',
      'filefield_source_attach_mode' => 'move',
      'label' => 'File attachments',
      'weight' => '8',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_frequency
  $fields['unit-field_frequency'] = array(
    'field_name' => 'field_frequency',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '32',
      'parent' => 'group_timetabling',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'referenceable_types' => array(
      'unit_frequency' => 'unit_frequency',
      'academic_year' => 0,
      'book' => 0,
      'college' => 0,
      'committee_group' => 0,
      'course_type' => 0,
      'department' => 0,
      'uft_event_date' => 0,
      'grad_dip_field' => 0,
      'location' => 0,
      'mdiv_field' => 0,
      'mdiv_studies' => 0,
      'page' => 0,
      'profile' => 0,
      'rti' => 0,
      'story' => 0,
      'uft_group' => 0,
      'uft_group_wiki_post' => 0,
      'unit' => 0,
      'unit_review' => 0,
      'discipline' => 0,
      'field' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Unit Frequency',
      'weight' => '32',
      'description' => 'How often will this unit be offered?',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_graddip_field
  $fields['unit-field_graddip_field'] = array(
    'field_name' => 'field_graddip_field',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '14',
      'parent' => 'group_unit_level',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'referenceable_types' => array(
      'grad_dip_field' => 'grad_dip_field',
      'academic_year' => 0,
      'book' => 0,
      'college' => 0,
      'committee_group' => 0,
      'course_type' => 0,
      'day_of_week' => 0,
      'department' => 0,
      'discipline' => 0,
      'uft_event_date' => 0,
      'field' => 0,
      'location' => 0,
      'mdiv_field' => 0,
      'mdiv_studies' => 0,
      'mass_contact' => 0,
      'page' => 0,
      'profile' => 0,
      'rti' => 0,
      'story' => 0,
      'tsa_article' => 0,
      'uft_group_meeting' => 0,
      'uft_group_standard_post' => 0,
      'unit' => 0,
      'unit_frequency' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'size' => 60,
      'label' => 'GradDip Field',
      'weight' => '14',
      'description' => '',
      'type' => 'nodereference_buttons',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_learning_outcomes
  $fields['unit-field_learning_outcomes'] = array(
    'field_name' => 'field_learning_outcomes',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '6',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '12',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_learning_outcomes][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Learning Outcomes',
      'weight' => '6',
      'description' => '<p>List the knowledge and skills the students will be expected to have gained by the end of the unit. Learning outcomes must be measurable goals which should be tested by the assessment for the unit. Use action words such as <em>articulate</em>, <em>demonstrate</em>, <em>evaluate</em>, <em>analyse</em>. Where a class is taught at more than one level, the higher level should comprise additional and more intense learning outcomes.</p>

<p>Please format this entry as a list. The text <strong>"Upon successful completion of this unit, it is expected that students will be able to:"</strong> will be added to the beginning of this entry. Please do not add this text yourself.</p>',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_lecturer_profile
  $fields['unit-field_lecturer_profile'] = array(
    'field_name' => 'field_lecturer_profile',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '7',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'referenceable_types' => array(
      'profile' => 'profile',
      'academic_year' => 0,
      'book' => 0,
      'college' => 0,
      'committee_group' => 0,
      'course_type' => 0,
      'day_of_week' => 0,
      'department' => 0,
      'discipline' => 0,
      'uft_event_date' => 0,
      'field' => 0,
      'grad_dip_field' => 0,
      'location' => 0,
      'mdiv_field' => 0,
      'mdiv_studies' => 0,
      'mass_contact' => 0,
      'page' => 0,
      'panel' => 0,
      'rti' => 0,
      'story' => 0,
      'tsa_article' => 0,
      'uft_group_meeting' => 0,
      'uft_group_standard_post' => 0,
      'unit' => 0,
      'unit_frequency' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_lecturer_profile][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'size' => '60',
      'label' => 'Lecturer/s',
      'weight' => '7',
      'description' => 'Please list the staff who will teach this unit. If any staff member has not been accredited as a teacher by the Coursework Studies Committee in the appropriate discipline, please also complete and submit a Teacher Accreditation form.',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_lib_imp_action
  $fields['unit-field_lib_imp_action'] = array(
    'field_name' => 'field_lib_imp_action',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '15',
      'parent' => 'group_library_impact',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_lib_imp_action][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Action required',
      'weight' => '15',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_lib_imp_approv
  $fields['unit-field_lib_imp_approv'] = array(
    'field_name' => 'field_lib_imp_approv',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '13',
      'parent' => 'group_library_impact',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'No
Yes
',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Approval',
      'weight' => '13',
      'description' => '',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_lib_imp_date
  $fields['unit-field_lib_imp_date'] = array(
    'field_name' => 'field_lib_imp_date',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '17',
      'parent' => 'group_library_impact',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'short',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'd/m/Y',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Date',
      'weight' => '17',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_lib_imp_name
  $fields['unit-field_lib_imp_name'] = array(
    'field_name' => 'field_lib_imp_name',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '16',
      'parent' => 'group_library_impact',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_lib_imp_name][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Name',
      'weight' => '16',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_lib_imp_statement
  $fields['unit-field_lib_imp_statement'] = array(
    'field_name' => 'field_lib_imp_statement',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '14',
      'parent' => 'group_library_impact',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0|Current library resources are sufficient for this unit
1|Additional resources will be required for this unit',
    'allowed_values_php' => '',
    'widget' => array(
      'label' => 'Library Impact Statement',
      'weight' => '14',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_location
  $fields['unit-field_location'] = array(
    'field_name' => 'field_location',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '31',
      'parent' => 'group_timetabling',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'referenceable_types' => array(
      'college' => 'college',
      'location' => 'location',
      'rti' => 'rti',
      'academic_year' => 0,
      'book' => 0,
      'committee_group' => 0,
      'course_type' => 0,
      'day_of_week' => 0,
      'department' => 0,
      'discipline' => 0,
      'uft_event_date' => 0,
      'field' => 0,
      'grad_dip_field' => 0,
      'mdiv_field' => 0,
      'mdiv_studies' => 0,
      'mass_contact' => 0,
      'page' => 0,
      'profile' => 0,
      'story' => 0,
      'tsa_article' => 0,
      'uft_group' => 0,
      'uft_group_meeting' => 0,
      'uft_group_standard_post' => 0,
      'uft_group_wiki_post' => 0,
      'unit' => 0,
      'unit_frequency' => 0,
      'unit_review' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'default_value' => array(
        '0' => array(
          'nid' => '293',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Location',
      'weight' => '31',
      'description' => '',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_mdiv_field
  $fields['unit-field_mdiv_field'] = array(
    'field_name' => 'field_mdiv_field',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '18',
      'parent' => 'group_unit_fields',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'referenceable_types' => array(
      'mdiv_field' => 'mdiv_field',
      'academic_year' => 0,
      'book' => 0,
      'college' => 0,
      'committee_group' => 0,
      'course_type' => 0,
      'day_of_week' => 0,
      'department' => 0,
      'discipline' => 0,
      'uft_event_date' => 0,
      'field' => 0,
      'grad_dip_field' => 0,
      'location' => 0,
      'mdiv_studies' => 0,
      'mass_contact' => 0,
      'page' => 0,
      'profile' => 0,
      'rti' => 0,
      'story' => 0,
      'tsa_article' => 0,
      'uft_group_meeting' => 0,
      'uft_group_standard_post' => 0,
      'unit' => 0,
      'unit_frequency' => 0,
      'webform' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'size' => 60,
      'label' => 'MDiv Field',
      'weight' => '18',
      'description' => '',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_mdiv_type_study
  $fields['unit-field_mdiv_type_study'] = array(
    'field_name' => 'field_mdiv_type_study',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '15',
      'parent' => 'group_unit_level',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'plain',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'referenceable_types' => array(
      'mdiv_studies' => 'mdiv_studies',
      'academic_year' => 0,
      'book' => 0,
      'college' => 0,
      'committee_group' => 0,
      'course_type' => 0,
      'day_of_week' => 0,
      'department' => 0,
      'discipline' => 0,
      'uft_event_date' => 0,
      'field' => 0,
      'grad_dip_field' => 0,
      'location' => 0,
      'mdiv_field' => 0,
      'mass_contact' => 0,
      'page' => 0,
      'profile' => 0,
      'rti' => 0,
      'story' => 0,
      'tsa_article' => 0,
      'uft_group_meeting' => 0,
      'uft_group_standard_post' => 0,
      'unit' => 0,
      'unit_frequency' => 0,
      'webform' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'size' => 60,
      'label' => 'MDiv Type of Study',
      'weight' => '15',
      'description' => '',
      'type' => 'nodereference_buttons',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_mode
  $fields['unit-field_mode'] = array(
    'field_name' => 'field_mode',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '15',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '4',
    'module' => 'text',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Semester
Online
Intensive
Placement',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Mode of Teaching',
      'weight' => '15',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_notes
  $fields['unit-field_notes'] = array(
    'field_name' => 'field_notes',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '34',
      'parent' => 'group_timetabling',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_notes][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Notes',
      'weight' => '34',
      'description' => 'Free text: for intensive timetable dates, or for information about special enrolment arrangements or locations',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_pre2013_unit_code
  $fields['unit-field_pre2013_unit_code'] = array(
    'field_name' => 'field_pre2013_unit_code',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'sticky' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Pre-2013 Unit Code',
      'weight' => '-1',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_prerequisites
  $fields['unit-field_prerequisites'] = array(
    'field_name' => 'field_prerequisites',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '12',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '4',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_prerequisites][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Prerequisites',
      'weight' => '12',
      'description' => 'Please specify units or areas of study which must be completed before this unit is undertaken. Leave blank if inapplicable.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_prohibited_combinations
  $fields['unit-field_prohibited_combinations'] = array(
    'field_name' => 'field_prohibited_combinations',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '14',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_prohibited_combinations][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Prohibited Combinations',
      'weight' => '14',
      'description' => 'Please specify any units within the RTI with substantially similar content which cannot be credited in the same course as this unit. Leave blank if inapplicable.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_reviewer_1
  $fields['unit-field_reviewer_1'] = array(
    'field_name' => 'field_reviewer_1',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '8',
      'parent' => 'group_approvals',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '30',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_reviewer_1][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Reviewer 1 Approval',
      'weight' => '8',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_reviewer_1_date
  $fields['unit-field_reviewer_1_date'] = array(
    'field_name' => 'field_reviewer_1_date',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '9',
      'parent' => 'group_approvals',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'field_reviewer_1_date_default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'field_reviewer_1_date_default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'field_reviewer_1_date_default',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'd/m/Y',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Reviewer 1 Approval Date',
      'weight' => '9',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_reviewer_2
  $fields['unit-field_reviewer_2'] = array(
    'field_name' => 'field_reviewer_2',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '10',
      'parent' => 'group_approvals',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '30',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_reviewer_2][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Reviewer 2 Approval',
      'weight' => '10',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_reviewer_2_date
  $fields['unit-field_reviewer_2_date'] = array(
    'field_name' => 'field_reviewer_2_date',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '11',
      'parent' => 'group_approvals',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'field_reviewer_2_date_default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'field_reviewer_2_date_default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'field_reviewer_2_date_default',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'd/m/Y',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Reviewer 2 Approval Date',
      'weight' => '11',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_rti_dept_head
  $fields['unit-field_rti_dept_head'] = array(
    'field_name' => 'field_rti_dept_head',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '12',
      'parent' => 'group_approvals',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_rti_dept_head][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'RTI Department Head',
      'weight' => '12',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_rti_dept_head_date
  $fields['unit-field_rti_dept_head_date'] = array(
    'field_name' => 'field_rti_dept_head_date',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '13',
      'parent' => 'group_approvals',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'short',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'd/m/Y',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'RTI Dept Head Date',
      'weight' => '13',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_semester
  $fields['unit-field_semester'] = array(
    'field_name' => 'field_semester',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '26',
      'parent' => 'group_timetabling',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Semester 1
Semester 2
Year-long
Intensive',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Semester',
      'weight' => '26',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_teaching_methods
  $fields['unit-field_teaching_methods'] = array(
    'field_name' => 'field_teaching_methods',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '16',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_teaching_methods][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Teaching Methods',
      'weight' => '16',
      'description' => 'Describe the types of learning experiences offered in this unit (e.g. lectures, tutorials, seminars, field work).',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_time
  $fields['unit-field_time'] = array(
    'field_name' => 'field_time',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '29',
      'parent' => 'group_timetabling',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '9:30 - 12:30
10 - 1
2:00 - 5:00
2:15 - 5:15
5:00 - 8:00
5:30 - 8:30
6:00 - 9:00
6:30 - 9:30
',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Time',
      'weight' => '29',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_uft_code
  $fields['unit-field_uft_code'] = array(
    'field_name' => 'field_uft_code',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'text_processing' => '0',
    'max_length' => '14',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '14',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_uft_code][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Unit Code',
      'weight' => '-2',
      'description' => 'Check TAMS to make sure the code is not already in use for an existing unit as the code for each unit must be unique across the MCD (your Registrar or Coursework Coordinator will be able to help you with this).',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_ugrad_level
  $fields['unit-field_ugrad_level'] = array(
    'field_name' => 'field_ugrad_level',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '13',
      'parent' => 'group_unit_level',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '3',
    'module' => 'number',
    'active' => '1',
    'initial' => '3',
    'new_per_click' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '1
2
3
',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Undergraduate Level',
      'weight' => '13',
      'description' => '',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_unit_hours_personal
  $fields['unit-field_unit_hours_personal'] = array(
    'field_name' => 'field_unit_hours_personal',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '39',
      'parent' => 'group_unit_workload',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_unit_hours_personal][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Expected personal study hours per week',
      'weight' => '39',
      'description' => '<p>
Indicate the total time students are expected to spend per week in studying outside of scheduled class time. This figure should allow for the time required to prepare and write assessment tasks and examinations.
</p>

<p>
For undergraduate units, the indicative study time for standard semester units is nine hours per week - three timetabled hours plus six hours of personal study.  (36 hours per week for a full-time student.)
</p>

<p>
For graduate/postgraduate units, the indicative study time for standard semester units is twelve hours per week - three timetabled hours plus nine hours of personal study.  (36 hours per week for a full-time student.)
</p>',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_unit_hours_timetabled
  $fields['unit-field_unit_hours_timetabled'] = array(
    'field_name' => 'field_unit_hours_timetabled',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '38',
      'parent' => 'group_unit_workload',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_unit_hours_timetabled][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Number of timetabled hours per week',
      'weight' => '38',
      'description' => 'Indicate the total scheduled class time per week. Include lectures, tutorials, clinical and other placements, etc. This figure should be derived from a total class time of approximately 36 hours for a 15-point unit. (<em>Pro rata</em> for non-15-point units, for example, a 10-point unit should have 24 hours of class time.)',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_unit_hours_total
  $fields['unit-field_unit_hours_total'] = array(
    'field_name' => 'field_unit_hours_total',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '41',
      'parent' => 'group_unit_workload',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_unit_hours_total][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Total workload hours for unit',
      'weight' => '41',
      'description' => 'Multiply total workload hours per week by the number of teaching weeks in the unit to calculate the total workload hours for the unit. ',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_unit_hours_week
  $fields['unit-field_unit_hours_week'] = array(
    'field_name' => 'field_unit_hours_week',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '40',
      'parent' => 'group_unit_workload',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'computed_value',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'computed',
    'required' => '0',
    'multiple' => '0',
    'module' => 'computed_field',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'code' => '$node_field[0][\'value\'] = $node->field_unit_hours_timetabled[0][\'value\'] + $node->field_unit_hours_personal[0][\'value\'];',
    'display_format' => '$display = $node_field_item[\'value\'];',
    'store' => 1,
    'data_type' => 'float',
    'data_length' => '3',
    'data_not_NULL' => 0,
    'data_default' => '',
    'data_sortable' => 1,
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Total workload hours per week',
      'weight' => '40',
      'description' => 'For semester mode, total workload hours per week is automatically calculated as timetabled + personal hours per week. The indicative undergraduate workload total is 9x12=108 hours.  The indicative graduate/postgraduate workload total is 12x12=144 hours.',
      'type' => 'computed',
      'module' => 'computed_field',
    ),
  );

  // Exported field: field_unit_new_rev
  $fields['unit-field_unit_new_rev'] = array(
    'field_name' => 'field_unit_new_rev',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '1|New unit
2|Revised unit
',
    'allowed_values_php' => '',
    'widget' => array(
      'label' => 'New or revised unit',
      'weight' => '2',
      'description' => '',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_unit_proposedby
  $fields['unit-field_unit_proposedby'] = array(
    'field_name' => 'field_unit_proposedby',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '3',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '3',
    'module' => 'nodereference',
    'active' => '1',
    'initial' => '3',
    'new_per_click' => '1',
    'referenceable_types' => array(
      'profile' => 'profile',
      'academic_year' => 0,
      'book' => 0,
      'college' => 0,
      'committee_group' => 0,
      'course_type' => 0,
      'day_of_week' => 0,
      'department' => 0,
      'discipline' => 0,
      'uft_event_date' => 0,
      'field' => 0,
      'grad_dip_field' => 0,
      'location' => 0,
      'mdiv_field' => 0,
      'mdiv_studies' => 0,
      'mass_contact' => 0,
      'page' => 0,
      'rti' => 0,
      'story' => 0,
      'tsa_article' => 0,
      'uft_group_meeting' => 0,
      'uft_group_standard_post' => 0,
      'unit' => 0,
      'unit_frequency' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_unit_proposedby][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'size' => '60',
      'label' => 'Proposed by',
      'weight' => '3',
      'description' => 'The name of the faculty member who is proposing the unit (described below as ‘the proposer’).',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_unit_rti
  $fields['unit-field_unit_rti'] = array(
    'field_name' => 'field_unit_rti',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'referenceable_types' => array(
      'rti' => 'rti',
      'academic_year' => 0,
      'book' => 0,
      'college' => 0,
      'committee_group' => 0,
      'course_type' => 0,
      'department' => 0,
      'uft_event_date' => 0,
      'grad_dip_field' => 0,
      'location' => 0,
      'mdiv_field' => 0,
      'mdiv_studies' => 0,
      'page' => 0,
      'profile' => 0,
      'story' => 0,
      'uft_group' => 0,
      'uft_group_wiki_post' => 0,
      'unit' => 0,
      'unit_frequency' => 0,
      'unit_review' => 0,
      'discipline' => 0,
      'field' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'default_value' => array(
        '0' => array(
          'nid' => '281',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'RTI',
      'weight' => '1',
      'description' => '',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_unit_value
  $fields['unit-field_unit_value'] = array(
    'field_name' => 'field_unit_value',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '4',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'prefix' => '',
    'suffix' => ' points',
    'min' => '',
    'max' => '',
    'allowed_values' => '15
30
45',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Unit Value',
      'weight' => '4',
      'description' => 'A standard MCD unit is 15 points; other values should be used only in exceptional circumstances.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_unit_workload
  $fields['unit-field_unit_workload'] = array(
    'field_name' => 'field_unit_workload',
    'type_name' => 'unit',
    'display_settings' => array(
      'weight' => '42',
      'parent' => 'group_unit_workload',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_unit_workload][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Workload',
      'weight' => '42',
      'description' => 'For intensive and placement units, calculate totals for timetabled hours and expected personal hours as appropriate. Total workload hours should nonetheless approximate the indicative totals:
The indicative undergraduate workload total is 9x12=108 hours.  The indicative graduate/postgraduate workload total is 12x12=144 hours.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Academic Board Approval');
  t('Academic Board Chair');
  t('Action required');
  t('Approval');
  t('Assessment Type');
  t('CWSC Approval');
  t('CWSC Chair');
  t('Corequisites');
  t('Courses');
  t('Date');
  t('Day');
  t('Department Name');
  t('Disciplines');
  t('Expected personal study hours per week');
  t('Field');
  t('File attachments');
  t('GradDip Field');
  t('Learning Outcomes');
  t('Learning Outcomes Assessed');
  t('Lecturer/s');
  t('Library Impact Statement');
  t('Location');
  t('MDiv Field');
  t('MDiv Type of Study');
  t('Mode of Teaching');
  t('Name');
  t('New or revised unit');
  t('Notes');
  t('Number of timetabled hours per week');
  t('Pre-2013 Unit Code');
  t('Prerequisites');
  t('Prohibited Combinations');
  t('Proposed by');
  t('RTI');
  t('RTI Department Head');
  t('RTI Dept Head Date');
  t('Recommended reading');
  t('Reviewer 1 Approval');
  t('Reviewer 1 Approval Date');
  t('Reviewer 2 Approval');
  t('Reviewer 2 Approval Date');
  t('Semester');
  t('Teaching Methods');
  t('Time');
  t('Total workload hours for unit');
  t('Total workload hours per week');
  t('Undergraduate Level');
  t('Unit Code');
  t('Unit Frequency');
  t('Unit Value');
  t('Weighting');
  t('Workload');
  t('Years Offered');

  return $fields;
}
