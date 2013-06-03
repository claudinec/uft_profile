<?php
/**
 * @file
 * uft_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function uft_users_user_default_roles() {
  $roles = array();

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => 2,
  );

  // Exported role: Staff.
  $roles['Staff'] = array(
    'name' => 'Staff',
    'weight' => 3,
  );

  return $roles;
}
