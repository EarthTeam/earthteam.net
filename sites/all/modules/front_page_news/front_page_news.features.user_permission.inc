<?php
/**
 * @file
 * front_page_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function front_page_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: create field_green_news_type.
  $permissions['create field_green_news_type'] = array(
    'name' => 'create field_green_news_type',
    'roles' => array(
      0 => 'Content Administrator',
      1 => 'Super Administrator',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: delete terms in 4.
  $permissions['delete terms in 4'] = array(
    'name' => 'delete terms in 4',
    'roles' => array(
      0 => 'Super Administrator',
      1 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit field_green_news_type.
  $permissions['edit field_green_news_type'] = array(
    'name' => 'edit field_green_news_type',
    'roles' => array(
      0 => 'Super Administrator',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_green_news_type.
  $permissions['edit own field_green_news_type'] = array(
    'name' => 'edit own field_green_news_type',
    'roles' => array(
      0 => 'Content Administrator',
      1 => 'Super Administrator',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit terms in 4.
  $permissions['edit terms in 4'] = array(
    'name' => 'edit terms in 4',
    'roles' => array(
      0 => 'Super Administrator',
      1 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: view field_green_news_type.
  $permissions['view field_green_news_type'] = array(
    'name' => 'view field_green_news_type',
    'roles' => array(
      0 => 'Super Administrator',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_green_news_type.
  $permissions['view own field_green_news_type'] = array(
    'name' => 'view own field_green_news_type',
    'roles' => array(
      0 => 'Content Administrator',
      1 => 'Super Administrator',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
