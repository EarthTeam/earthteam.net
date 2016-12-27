<?php
/**
 * @file
 * front_page_news.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function front_page_news_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-blog-menu.
  $menus['menu-blog-menu'] = array(
    'menu_name' => 'menu-blog-menu',
    'title' => 'Blog Menu',
    'description' => 'Blog menu',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Blog Menu');
  t('Blog menu');


  return $menus;
}
