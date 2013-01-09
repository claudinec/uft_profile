<?php

/**
 * Implementation of hook_content_default_fields().
 */
function uft_staff_content_default_fields() {
  $fields = array();

  // Exported field: field_academic_year
  $fields['profile-field_academic_year'] = array(
    'field_name' => 'field_academic_year',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '4',
      'parent' => '',
      'label' => array(
        'format' => 'above',
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
      'label' => 'Year (Associate teachers)',
      'weight' => '4',
      'description' => 'Choose which years in which this associate teacher is active',
      'type' => 'nodereference_buttons',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_comment
  $fields['profile-field_comment'] = array(
    'field_name' => 'field_comment',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '19',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
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
          '_error_element' => 'default_value_widget][field_comment][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Comment',
      'weight' => '19',
      'description' => 'Any information to show in the summary screen - e.g. On Leave Semester 2',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_department_ref
  $fields['profile-field_department_ref'] = array(
    'field_name' => 'field_department_ref',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '5',
      'parent' => '',
      'label' => array(
        'format' => 'above',
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
      'weight' => '5',
      'description' => '',
      'type' => 'nodereference_buttons',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_department_role
  $fields['profile-field_department_role'] = array(
    'field_name' => 'field_department_role',
    'type_name' => 'profile',
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
          '_error_element' => 'default_value_widget][field_department_role][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Role',
      'weight' => '6',
      'description' => 'Role within department (e.g. Head of Department)',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_display_email
  $fields['profile-field_display_email'] = array(
    'field_name' => 'field_display_email',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '9',
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
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_display_email][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Email',
      'weight' => '9',
      'description' => 'The email address to be displayed for the user. Not necessarily the same email address as the one provided at registration which the system uses to keep in contact with the user.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_files
  $fields['profile-field_files'] = array(
    'field_name' => 'field_files',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '20',
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
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'filefield_sources' => array(
        'imce' => 'imce',
        'reference' => 'reference',
        'remote' => 0,
        'attach' => 0,
      ),
      'filefield_source_autocomplete' => '0',
      'filefield_source_attach_path' => 'file_attach',
      'filefield_source_attach_absolute' => '0',
      'filefield_source_attach_mode' => 'move',
      'label' => 'Files',
      'weight' => '20',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_first_name
  $fields['profile-field_first_name'] = array(
    'field_name' => 'field_first_name',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
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
    'required' => '1',
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
          '_error_element' => 'default_value_widget][field_first_name][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'First Name',
      'weight' => '-1',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_list_in_directory
  $fields['profile-field_list_in_directory'] = array(
    'field_name' => 'field_list_in_directory',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '10',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
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
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'yes
no
',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'List in Directory',
      'weight' => '10',
      'description' => '',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_office_loc
  $fields['profile-field_office_loc'] = array(
    'field_name' => 'field_office_loc',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '12',
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
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_office_loc][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Office Location',
      'weight' => '12',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_pg_supervision
  $fields['profile-field_pg_supervision'] = array(
    'field_name' => 'field_pg_supervision',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '17',
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
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_pg_supervision][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Postgraduate  Supervision',
      'weight' => '17',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_phone_number
  $fields['profile-field_phone_number'] = array(
    'field_name' => 'field_phone_number',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '11',
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
    'max_length' => '20',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '20',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_phone_number][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Phone Number',
      'weight' => '11',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_publications
  $fields['profile-field_publications'] = array(
    'field_name' => 'field_publications',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '18',
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
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_publications][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Publications',
      'weight' => '18',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_quals
  $fields['profile-field_quals'] = array(
    'field_name' => 'field_quals',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '1',
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
      'label' => 'Qualifications',
      'weight' => '1',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_research_interests
  $fields['profile-field_research_interests'] = array(
    'field_name' => 'field_research_interests',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '16',
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
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_research_interests][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Research Interests',
      'weight' => '16',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_staff_type_num
  $fields['profile-field_staff_type_num'] = array(
    'field_name' => 'field_staff_type_num',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '3',
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
    'allowed_values' => '0|Office Staff
1|Academic Staff
2|Associate Teachers
3|Former Staff
',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Staff Type',
      'weight' => '3',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_surname
  $fields['profile-field_surname'] = array(
    'field_name' => 'field_surname',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
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
    'required' => '1',
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
          '_error_element' => 'default_value_widget][field_surname][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Surname',
      'weight' => 0,
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_teaching
  $fields['profile-field_teaching'] = array(
    'field_name' => 'field_teaching',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '15',
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
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_teaching][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Teaching Interests',
      'weight' => '15',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_user_college
  $fields['profile-field_user_college'] = array(
    'field_name' => 'field_user_college',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      'label' => array(
        'format' => 'above',
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
      'book' => 0,
      'course_type' => 0,
      'uft_event_date' => 0,
      'grad_dip_field' => 0,
      'mdiv_field' => 0,
      'mdiv_studies' => 0,
      'page' => 0,
      'profile' => 0,
      'story' => 0,
      'uft_group' => 0,
      'uft_group_wiki_post' => 0,
      'unit' => 0,
      'unit_review' => 0,
      'whole_day_uft_event' => 0,
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
      'label' => 'College',
      'weight' => '2',
      'description' => '',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_website
  $fields['profile-field_website'] = array(
    'field_name' => 'field_website',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '14',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
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
      'rows' => '1',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_website][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Website (do not use)',
      'weight' => '14',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_website_link
  $fields['profile-field_website_link'] = array(
    'field_name' => 'field_website_link',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '13',
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
    'type' => 'link',
    'required' => '0',
    'multiple' => '1',
    'module' => 'link',
    'active' => '1',
    'initial' => '1',
    'new_per_click' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'optional',
    'title_value' => '',
    'enable_tokens' => 0,
    'validate_url' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Website',
      'weight' => '13',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('College');
  t('Comment');
  t('Department Name');
  t('Email');
  t('Files');
  t('First Name');
  t('List in Directory');
  t('Office Location');
  t('Phone Number');
  t('Postgraduate  Supervision');
  t('Publications');
  t('Qualifications');
  t('Research Interests');
  t('Role');
  t('Staff Type');
  t('Surname');
  t('Teaching Interests');
  t('Website');
  t('Website (do not use)');
  t('Year (Associate teachers)');

  return $fields;
}
