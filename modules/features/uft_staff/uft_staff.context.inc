<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function uft_staff_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'staff';
  $context->description = 'User is staff member';
  $context->tag = 'users';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'Administrator' => 'Administrator',
        'Dean' => 'Dean',
        'Lecturer' => 'Lecturer',
        'UFT Office' => 'UFT Office',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('User is staff member');
  t('users');
  $export['staff'] = $context;

  return $export;
}
