<?php
/**
 * @file
 * social_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function social_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-social-links:http://www.instagram.com/earthteam
  $menu_links['menu-social-links:http://www.instagram.com/earthteam'] = array(
    'menu_name' => 'menu-social-links',
    'link_path' => 'http://www.instagram.com/earthteam',
    'router_path' => '',
    'link_title' => 'Instagram',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'menu-Instagram',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: menu-social-links:http://www.youtube.com/user/GreenScreenTV
  $menu_links['menu-social-links:http://www.youtube.com/user/GreenScreenTV'] = array(
    'menu_name' => 'menu-social-links',
    'link_path' => 'http://www.youtube.com/user/GreenScreenTV',
    'router_path' => '',
    'link_title' => 'YouTube',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'menu-youtube',
        ),
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-social-links:https://plus.google.com/u/0/photos/116262422950284549239/albums
  $menu_links['menu-social-links:https://plus.google.com/u/0/photos/116262422950284549239/albums'] = array(
    'menu_name' => 'menu-social-links',
    'link_path' => 'https://plus.google.com/u/0/photos/116262422950284549239/albums',
    'router_path' => '',
    'link_title' => 'Google+',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'menu-googleplus',
        ),
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-social-links:https://twitter.com/ETNetwork
  $menu_links['menu-social-links:https://twitter.com/ETNetwork'] = array(
    'menu_name' => 'menu-social-links',
    'link_path' => 'https://twitter.com/ETNetwork',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'menu-twitter',
        ),
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-social-links:https://www.facebook.com/EarthTeam
  $menu_links['menu-social-links:https://www.facebook.com/EarthTeam'] = array(
    'menu_name' => 'menu-social-links',
    'link_path' => 'https://www.facebook.com/EarthTeam',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'menu-facebook',
        ),
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-social-links:node/207
  $menu_links['menu-social-links:node/207'] = array(
    'menu_name' => 'menu-social-links',
    'link_path' => 'node/207',
    'router_path' => 'node/%',
    'link_title' => 'EarthTeam Events',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'earthteam-events',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('EarthTeam Events');
  t('Facebook');
  t('Google+');
  t('Instagram');
  t('Twitter');
  t('YouTube');


  return $menu_links;
}
