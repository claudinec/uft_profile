<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function uft_units_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'archive_2011';
  $context->description = 'Archive of 2011 units';
  $context->tag = 'archive';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        9 => 9,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-13' => array(
          'module' => 'block',
          'delta' => 13,
          'region' => 'content_top',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Archive of 2011 units');
  t('archive');
  $export['archive_2011'] = $context;

  return $export;
}
