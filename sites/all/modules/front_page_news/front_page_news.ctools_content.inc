<?php
/**
 * @file
 * front_page_news.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function front_page_news_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'upcoming_events_embed';
  $content->admin_title = '';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => '<none>',
    'body' => '<h2 class="pane-title">Test Calendar"</h2>
<iframe src="https://calendar.google.com/calendar/embed?mode=AGENDA&amp;height=600&amp;wkst=1&amp;bgcolor=%23FFFFFF&amp;src=lcmschools.org_ru0p0tufhab046m9sgfoghnv8g%40group.calendar.google.com&amp;color=%232952A3&amp;ctz=America%2FLos_Angeles" style="border-width:0" width="800" height="600" frameborder="0" scrolling="no"></iframe>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $export['upcoming_events_embed'] = $content;

  return $export;
}
