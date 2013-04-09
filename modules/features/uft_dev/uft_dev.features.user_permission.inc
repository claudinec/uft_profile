<?php
/**
 * @file
 * uft_dev.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function uft_dev_user_default_permissions() {
  $permissions = array();

  // Exported permission: access environment indicator.
  $permissions['access environment indicator'] = array(
    'name' => 'access environment indicator',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'environment_indicator',
  );

  return $permissions;
}
