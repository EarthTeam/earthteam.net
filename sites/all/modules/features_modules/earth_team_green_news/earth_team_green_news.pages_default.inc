<?php
/**
 * @file
 * earth_team_green_news.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function earth_team_green_news_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'green_news';
  $page->task = 'page';
  $page->admin_title = 'Green News';
  $page->admin_description = '';
  $page->path = 'programs/green-news';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_green_news_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'green_news';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'program-node',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2cb7c123-d54d-4a95-bcc6-49865c2fbb6a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-81b3390b-d9e4-4ab6-9005-f93685805112';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'green_news';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'green_news',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '81b3390b-d9e4-4ab6-9005-f93685805112';
    $display->content['new-81b3390b-d9e4-4ab6-9005-f93685805112'] = $pane;
    $display->panels['left'][0] = 'new-81b3390b-d9e4-4ab6-9005-f93685805112';
    $pane = new stdClass();
    $pane->pid = 'new-71218904-afe0-4166-b406-b9d1315f17bd';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'green_news_blocks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'submit_block',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '71218904-afe0-4166-b406-b9d1315f17bd';
    $display->content['new-71218904-afe0-4166-b406-b9d1315f17bd'] = $pane;
    $display->panels['right'][0] = 'new-71218904-afe0-4166-b406-b9d1315f17bd';
    $pane = new stdClass();
    $pane->pid = 'new-3dda835e-191a-4922-8a1d-b53b91f539c7';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'green_news_blocks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3dda835e-191a-4922-8a1d-b53b91f539c7';
    $display->content['new-3dda835e-191a-4922-8a1d-b53b91f539c7'] = $pane;
    $display->panels['right'][1] = 'new-3dda835e-191a-4922-8a1d-b53b91f539c7';
    $pane = new stdClass();
    $pane->pid = 'new-606b1334-70d7-48f8-a3e9-29f1e719ae6a';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'green_news_blocks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'related_green_news',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '606b1334-70d7-48f8-a3e9-29f1e719ae6a';
    $display->content['new-606b1334-70d7-48f8-a3e9-29f1e719ae6a'] = $pane;
    $display->panels['right'][2] = 'new-606b1334-70d7-48f8-a3e9-29f1e719ae6a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-81b3390b-d9e4-4ab6-9005-f93685805112';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['green_news'] = $page;

  return $pages;

}
