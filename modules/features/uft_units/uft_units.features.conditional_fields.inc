<?php

/**
 * Implementation of hook_conditional_fields_default_fields().
 */
function uft_units_conditional_fields_default_fields() {
$items = array();
$items[] = array (
  'control_field_name' => 'field_course_type_ref',
  'field_name' => 'field_graddip_field',
  'type' => 'unit',
  'trigger_values' => 
  array (
    61 => '61',
  ),
);
$items[] = array (
  'control_field_name' => 'field_course_type_ref',
  'field_name' => 'field_mdiv_field',
  'type' => 'unit',
  'trigger_values' => 
  array (
    58 => '58',
  ),
);
$items[] = array (
  'control_field_name' => 'field_course_type_ref',
  'field_name' => 'field_ugrad_level',
  'type' => 'unit',
  'trigger_values' => 
  array (
    805 => '805',
    59 => '59',
    804 => '804',
  ),
);
return $items;
}
