<?php
/**
 * @file
 * earth_team_green_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function earth_team_green_news_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function earth_team_green_news_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function earth_team_green_news_image_default_styles() {
  $styles = array();

  // Exported image style: green_news_post.
  $styles['green_news_post'] = array(
    'name' => 'green_news_post',
    'label' => 'Green News Post',
    'effects' => array(
      16 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '225',
          'height' => '225',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: person.
  $styles['person'] = array(
    'name' => 'person',
    'label' => 'person',
    'effects' => array(
      9 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '300',
          'height' => '300',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function earth_team_green_news_node_info() {
  $items = array(
    'green_news_post' => array(
      'name' => t('Green News Post'),
      'base' => 'node_content',
      'description' => t('Submit a post to Green News!'),
      'has_title' => '1',
      'title_label' => t('Post Title'),
      'help' => '',
    ),
  );
  return $items;
}
