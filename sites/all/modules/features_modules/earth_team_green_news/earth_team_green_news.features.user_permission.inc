<?php
/**
 * @file
 * earth_team_green_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function earth_team_green_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: add media from remote sources.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: create field_green_news_image.
  $permissions['create field_green_news_image'] = array(
    'name' => 'create field_green_news_image',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create green_news_post content.
  $permissions['create green_news_post content'] = array(
    'name' => 'create green_news_post content',
    'roles' => array(
      0 => 'Content Administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit media.
  $permissions['edit media'] = array(
    'name' => 'edit media',
    'roles' => array(),
    'module' => 'media',
  );

  // Exported permission: skip CAPTCHA.
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'captcha',
  );

  // Exported permission: view field_green_news_image.
  $permissions['view field_green_news_image'] = array(
    'name' => 'view field_green_news_image',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_green_news_image.
  $permissions['view own field_green_news_image'] = array(
    'name' => 'view own field_green_news_image',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
