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

  // Exported permission: clear staff feeds.
  $permissions['clear staff feeds'] = array(
    'name' => 'clear staff feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: create staff_profile content.
  $permissions['create staff_profile content'] = array(
    'name' => 'create staff_profile content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
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
      'Administrator' => 'Administrator',
      'Staff' => 'Staff',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own staff_profile content.
  $permissions['edit own staff_profile content'] = array(
    'name' => 'edit own staff_profile content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Staff' => 'Staff',
    ),
    'module' => 'node',
  );

  // Exported permission: import staff feeds.
  $permissions['import staff feeds'] = array(
    'name' => 'import staff feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: publish revisions of any staff_profile content.
  $permissions['publish revisions of any staff_profile content'] = array(
    'name' => 'publish revisions of any staff_profile content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: publish revisions of own staff_profile content.
  $permissions['publish revisions of own staff_profile content'] = array(
    'name' => 'publish revisions of own staff_profile content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: tamper staff.
  $permissions['tamper staff'] = array(
    'name' => 'tamper staff',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: unlock staff feeds.
  $permissions['unlock staff feeds'] = array(
    'name' => 'unlock staff feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: view revisions of any staff_profile content.
  $permissions['view revisions of any staff_profile content'] = array(
    'name' => 'view revisions of any staff_profile content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: view revisions of own staff_profile content.
  $permissions['view revisions of own staff_profile content'] = array(
    'name' => 'view revisions of own staff_profile content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'revisioning',
  );

  return $permissions;
}
