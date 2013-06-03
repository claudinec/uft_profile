<?php
/**
 * @file
 * uft_courses.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function uft_courses_user_default_permissions() {
  $permissions = array();

  // Exported permission: create course content.
  $permissions['create course content'] = array(
    'name' => 'create course content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any course content.
  $permissions['delete any course content'] = array(
    'name' => 'delete any course content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own course content.
  $permissions['delete own course content'] = array(
    'name' => 'delete own course content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any course content.
  $permissions['edit any course content'] = array(
    'name' => 'edit any course content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own course content.
  $permissions['edit own course content'] = array(
    'name' => 'edit own course content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: publish revisions of any course content.
  $permissions['publish revisions of any course content'] = array(
    'name' => 'publish revisions of any course content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: publish revisions of own course content.
  $permissions['publish revisions of own course content'] = array(
    'name' => 'publish revisions of own course content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: view revisions of any course content.
  $permissions['view revisions of any course content'] = array(
    'name' => 'view revisions of any course content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: view revisions of own course content.
  $permissions['view revisions of own course content'] = array(
    'name' => 'view revisions of own course content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'revisioning',
  );

  return $permissions;
}
