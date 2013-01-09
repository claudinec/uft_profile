<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function uft_courses_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'courses';
  $context->description = 'Context for course information pages.';
  $context->tag = 'courses';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*bachelor-*' => '*bachelor-*',
        '*graduate-*' => '*graduate-*',
        '*master-*' => '*master-*',
        '*doctor-*' => '*doctor-*',
      ),
    ),
    'user' => array(
      'values' => array(
        'Administrator' => 'Administrator',
      ),
    ),
  );
  $context->reactions = array(
    'theme' => array(
      'title' => '',
      'subtitle' => '',
      'class' => 'courses',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for course information pages.');
  t('courses');
  $export['courses'] = $context;

  return $export;
}
