<?php
/**
 * @file
 * social_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function social_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-social-links.
  $menus['menu-social-links'] = array(
    'menu_name' => 'menu-social-links',
    'title' => 'Social Links',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Social Links');


  return $menus;
}
