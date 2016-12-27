<?php
/**
 * @file
 * front_page_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function front_page_news_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function front_page_news_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function front_page_news_node_info() {
  $items = array(
    'latest_news' => array(
      'name' => t('Blog'),
      'base' => 'node_content',
      'description' => t('Add a blog article to the homepage'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
