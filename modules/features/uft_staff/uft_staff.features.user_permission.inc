<?php
/**
 * @file
 * uft_staff.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function uft_staff_user_default_permissions() {
  $permissions = array();

  // Exported permission: create staff_profile content.
  $permissions['create staff_profile content'] = array(
    'name' => 'create staff_profile content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any staff_profile content.
  $permissions['delete any staff_profile content'] = array(
    'name' => 'delete any staff_profile content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own staff_profile content.
  $permissions['delete own staff_profile content'] = array(
    'name' => 'delete own staff_profile content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any staff_profile content.
  $permissions['edit any staff_profile content'] = array(
    'name' => 'edit any staff_profile content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Staff',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own staff_profile content.
  $permissions['edit own staff_profile content'] = array(
    'name' => 'edit own staff_profile content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Staff',
    ),
    'module' => 'node',
  );

  // Exported permission: publish revisions of any staff_profile content.
  $permissions['publish revisions of any staff_profile content'] = array(
    'name' => 'publish revisions of any staff_profile content',
    'roles' => array(
      0 => 'Administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: publish revisions of own staff_profile content.
  $permissions['publish revisions of own staff_profile content'] = array(
    'name' => 'publish revisions of own staff_profile content',
    'roles' => array(
      0 => 'Administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: view revisions of any staff_profile content.
  $permissions['view revisions of any staff_profile content'] = array(
    'name' => 'view revisions of any staff_profile content',
    'roles' => array(
      0 => 'Administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: view revisions of own staff_profile content.
  $permissions['view revisions of own staff_profile content'] = array(
    'name' => 'view revisions of own staff_profile content',
    'roles' => array(
      0 => 'Administrator',
    ),
    'module' => 'revisioning',
  );

  return $permissions;
}
