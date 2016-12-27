<?php
/**
 * @file
 * zerolitter_map_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function zerolitter_map_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function zerolitter_map_page_node_info() {
  $items = array(
    'external_page' => array(
      'name' => t('External Page'),
      'base' => 'node_content',
      'description' => t('A page from an external website.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
