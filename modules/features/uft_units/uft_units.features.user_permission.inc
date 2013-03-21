<?php
/**
 * @file
 * uft_units.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function uft_units_user_default_permissions() {
  $permissions = array();

  // Exported permission: create unit content.
  $permissions['create unit content'] = array(
    'name' => 'create unit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any unit content.
  $permissions['delete any unit content'] = array(
    'name' => 'delete any unit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own unit content.
  $permissions['delete own unit content'] = array(
    'name' => 'delete own unit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any unit content.
  $permissions['edit any unit content'] = array(
    'name' => 'edit any unit content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own unit content.
  $permissions['edit own unit content'] = array(
    'name' => 'edit own unit content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
