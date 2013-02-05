<?php
/**
 * @file
 * uft_units.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uft_units_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'timetable';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Timetable';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Timetable';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_semester',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_day' => 'field_day',
    'field_semester' => 'field_semester',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_day' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_semester' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Timetable (field_timetable) */
  $handler->display->display_options['relationships']['field_timetable_value']['id'] = 'field_timetable_value';
  $handler->display->display_options['relationships']['field_timetable_value']['table'] = 'field_data_field_timetable';
  $handler->display->display_options['relationships']['field_timetable_value']['field'] = 'field_timetable_value';
  $handler->display->display_options['relationships']['field_timetable_value']['delta'] = '-1';
  /* Field: Field collection item: Semester */
  $handler->display->display_options['fields']['field_semester']['id'] = 'field_semester';
  $handler->display->display_options['fields']['field_semester']['table'] = 'field_data_field_semester';
  $handler->display->display_options['fields']['field_semester']['field'] = 'field_semester';
  $handler->display->display_options['fields']['field_semester']['relationship'] = 'field_timetable_value';
  $handler->display->display_options['fields']['field_semester']['label'] = '';
  $handler->display->display_options['fields']['field_semester']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_semester']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Day */
  $handler->display->display_options['fields']['field_day']['id'] = 'field_day';
  $handler->display->display_options['fields']['field_day']['table'] = 'field_data_field_day';
  $handler->display->display_options['fields']['field_day']['field'] = 'field_day';
  $handler->display->display_options['fields']['field_day']['relationship'] = 'field_timetable_value';
  /* Field: Content: Unit Code */
  $handler->display->display_options['fields']['field_unit_code']['id'] = 'field_unit_code';
  $handler->display->display_options['fields']['field_unit_code']['table'] = 'field_data_field_unit_code';
  $handler->display->display_options['fields']['field_unit_code']['field'] = 'field_unit_code';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Mode of Teaching */
  $handler->display->display_options['fields']['field_mode_of_teaching']['id'] = 'field_mode_of_teaching';
  $handler->display->display_options['fields']['field_mode_of_teaching']['table'] = 'field_data_field_mode_of_teaching';
  $handler->display->display_options['fields']['field_mode_of_teaching']['field'] = 'field_mode_of_teaching';
  /* Sort criterion: Field collection item: Semester (field_semester) */
  $handler->display->display_options['sorts']['field_semester_value']['id'] = 'field_semester_value';
  $handler->display->display_options['sorts']['field_semester_value']['table'] = 'field_data_field_semester';
  $handler->display->display_options['sorts']['field_semester_value']['field'] = 'field_semester_value';
  $handler->display->display_options['sorts']['field_semester_value']['relationship'] = 'field_timetable_value';
  /* Sort criterion: Field collection item: Day (field_day) */
  $handler->display->display_options['sorts']['field_day_value']['id'] = 'field_day_value';
  $handler->display->display_options['sorts']['field_day_value']['table'] = 'field_data_field_day';
  $handler->display->display_options['sorts']['field_day_value']['field'] = 'field_day_value';
  $handler->display->display_options['sorts']['field_day_value']['relationship'] = 'field_timetable_value';
  /* Sort criterion: Content: Unit Code (field_unit_code) */
  $handler->display->display_options['sorts']['field_unit_code_value']['id'] = 'field_unit_code_value';
  $handler->display->display_options['sorts']['field_unit_code_value']['table'] = 'field_data_field_unit_code';
  $handler->display->display_options['sorts']['field_unit_code_value']['field'] = 'field_unit_code_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'unit' => 'unit',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'timetable';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Timetables';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['timetable'] = $view;

  return $export;
}
