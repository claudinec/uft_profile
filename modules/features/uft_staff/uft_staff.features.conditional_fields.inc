<?php

/**
 * Implementation of hook_conditional_fields_default_fields().
 */
function uft_staff_conditional_fields_default_fields() {
$items = array();
$items[] = array (
  'control_field_name' => 'field_staff_type_num',
  'field_name' => 'field_academic_year',
  'type' => 'profile',
  'trigger_values' => 
  array (
    2 => '2',
  ),
);
$items[] = array (
  'control_field_name' => 'field_staff_type_num',
  'field_name' => 'field_display_email',
  'type' => 'profile',
  'trigger_values' => 
  array (
    0 => '0',
    1 => '1',
  ),
);
return $items;
}
