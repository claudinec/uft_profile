<?php
/**
 * @file
 * uft_users.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function uft_users_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration menu.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: access backup and migrate.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: access backup files.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: access contextual links.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access dashboard.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: access devel information.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access site reports.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Staff' => 'Staff',
    ),
    'module' => 'user',
  );

  // Exported permission: admin_classes.
  $permissions['admin_classes'] = array(
    'name' => 'admin_classes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: admin_display_suite.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: admin_fields.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: admin_view_modes.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: administer actions.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: administer backup and migrate.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: administer blocks.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: administer boxes.
  $permissions['administer boxes'] = array(
    'name' => 'administer boxes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'boxes',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer contexts.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: administer feeds.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: administer module filter.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: administer modules.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer pathauto.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer search.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: administer shortcuts.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: administer site configuration.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer software updates.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer themes.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer views.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: block IP addresses.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: customize shortcut links.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: delete backup files.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: display drupal links.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(),
    'module' => 'admin_menu',
  );

  // Exported permission: edit boxes.
  $permissions['edit boxes'] = array(
    'name' => 'edit boxes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'boxes',
  );

  // Exported permission: edit revisions.
  $permissions['edit revisions'] = array(
    'name' => 'edit revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: execute php code.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: flush caches.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: manage features.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: notify of path changes.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(),
    'module' => 'pathauto',
  );

  // Exported permission: perform backup.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: publish revisions.
  $permissions['publish revisions'] = array(
    'name' => 'publish revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: restore from backup.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: select account cancellation method.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: switch shortcut sets.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: switch users.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: unpublish current revision.
  $permissions['unpublish current revision'] = array(
    'name' => 'unpublish current revision',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: use PHP for title patterns.
  $permissions['use PHP for title patterns'] = array(
    'name' => 'use PHP for title patterns',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'auto_nodetitle',
  );

  // Exported permission: use advanced search.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(),
    'module' => 'search',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: view revision status messages.
  $permissions['view revision status messages'] = array(
    'name' => 'view revision status messages',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Staff' => 'Staff',
    ),
    'module' => 'node',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
