<?php

/**
 * Implementation of hook_content_default_fields().
 */
function uft_units_content_default_fields() {
  $fields = array();

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

  // Translatables
  // Included for use with string extractors like potx.
  t('Corequisites');
  t('Courses');
  t('Date');
  t('Department Name');
  t('Disciplines');
  t('Field');
  t('File attachments');
  t('GradDip Field');
  t('MDiv Field');
  t('MDiv Type of Study');
  t('Mode of Teaching');
  t('Name');
  t('Pre-2013 Unit Code');
  t('Prerequisites');
  t('Prohibited Combinations');
  t('RTI');
  t('Recommended reading');
  t('Teaching Methods');
  t('Undergraduate Level');
  t('Unit Code');
  t('Unit Value');

  return $fields;
}
