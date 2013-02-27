<?php
/**
 * @file
 * uft_text.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function uft_text_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      0 => 'Administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format html.
  $permissions['use text format html'] = array(
    'name' => 'use text format html',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Staff',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
