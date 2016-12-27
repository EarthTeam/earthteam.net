<?php
/**
 * @file
 * front_page_news.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function front_page_news_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-blog-menu:front/CAP
  $menu_links['menu-blog-menu:front/CAP'] = array(
    'menu_name' => 'menu-blog-menu',
    'link_path' => 'front/CAP',
    'router_path' => 'front',
    'link_title' => 'URBAN FORESTRY',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
  );
  // Exported menu link: menu-blog-menu:front/News
  $menu_links['menu-blog-menu:front/News'] = array(
    'menu_name' => 'menu-blog-menu',
    'link_path' => 'front/News',
    'router_path' => 'front',
    'link_title' => 'LATEST NEWS',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
  );
  // Exported menu link: menu-blog-menu:front/RAP
  $menu_links['menu-blog-menu:front/RAP'] = array(
    'menu_name' => 'menu-blog-menu',
    'link_path' => 'front/RAP',
    'router_path' => 'front',
    'link_title' => 'WATERSHED',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '0',
  );
  // Exported menu link: menu-blog-menu:front/WAP
  $menu_links['menu-blog-menu:front/WAP'] = array(
    'menu_name' => 'menu-blog-menu',
    'link_path' => 'front/WAP',
    'router_path' => 'front',
    'link_title' => 'ZEROLITTER',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('LATEST NEWS');
  t('URBAN FORESTRY');
  t('WATERSHED');
  t('ZEROLITTER');


  return $menu_links;
}
