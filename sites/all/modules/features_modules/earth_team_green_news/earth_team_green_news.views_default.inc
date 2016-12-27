<?php
/**
 * @file
 * earth_team_green_news.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function earth_team_green_news_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'green_news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Green News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'The Green News';
  $handler->display->display_options['css_class'] = 'green-news-page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_green_news_school' => 'field_green_news_school',
    'city' => 'city',
  );
  $handler->display->display_options['row_options']['separator'] = '|';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'The Green News empowers young people to apply their knowledge and skills in media technology to educate others about environmental science issues and stewardship opportunities.<br />
<div><span style="line-height: 1.538em;">To see students on screen check out the latest </span><strong style="line-height: 1.538em;">Green Screen TV</strong><span style="line-height: 1.538em;"> productions. View student artwork and poetry in our </span><strong style="line-height: 1.538em;">Green News Anthologies</strong><span style="line-height: 1.538em;">.&nbsp;</span></div><div><center><span style="color: #0074bd;">&nbsp;</span></center></div><center><a title="Pinole Valley Waste Audit 2013 by earthteambayarea, on Flickr" href="http://instagram.com/earthteampinolehs"><img src="http://farm4.staticflickr.com/3681/10845066783_9c7ff158bb.jpg" alt="Pinole Valley Waste Audit 2013" width="270" height="190" /></a><span style="line-height: 1.538em;">&nbsp;</span><a title="Screen shot of Pinole Valley Waste Audit by earthteambayarea, on Flickr" href="http://www.youtube.com/watch?v=k-4RzD_94E0&amp;feature=share&amp;list=UUQRmj5jZMHpytkgb1t_hnhg"><img src="http://farm4.staticflickr.com/3699/10932264403_738baf3bb7_m.jpg" alt="Screen shot of Pinole Valley Waste Audit" width="285" height="190" /></a></center><div><center><em>Students document programs using Instagram and video interviews.</em></center><center></center></div><center><h4>Follow EarthTeam schools on Instagram to see students in action!</h4></center><center><!-- SnapWidget --> <iframe style="border: none; overflow: hidden; width: 500px; height: 150px;" title="Instagram Widget" src="http://snapwidget.com/sc/?u=ZWFydGh0ZWFtfGlufDE1MHwzfDN8fG5vfDV8bm9uZXxvblN0YXJ0fHllcw==&amp;v=24614" frameborder="0" scrolling="no"></iframe></center><p>Alameda Community Learning Center | <a href="http://instagram.com/earthteamaclc" target="_blank">@earthteamaclc</a></p><p>Castlemont High School | <a href="http://instagram.com/earthteamcastlemonths" target="_blank">@earthteamcastlemonths</a></p><p>Mission Valley ROP | <a href="http://instagram.com/earthteammissionvalleyrop" target="_blank">@earthteammissionvalleyrop</a></p><p>Pinole Valley High School | <a href="http://instagram.com/earthteampinolehs" target="_blank">@earthteampinolehs</a></p><p>Richmond High School | <a href="http://instagram.com/earthteamrichmondhs" target="_blank">@earthteamrichmondhs</a></p><p>Skyline High School | <a href="http://instagram.com/earthteamskylinehs" target="_blank">@earthteamskylinehs</a></p><p>Youth Advisory Board | <a href="http://instagram.com/earthteamyab" target="_blank">@earthteamyab</a></p><p>EarthTeam (Official) | <a href="http://instagram.com/earthteam" target="_blank">@earthteam</a></p>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: YouTube Link */
  $handler->display->display_options['fields']['field_green_news_youtube']['id'] = 'field_green_news_youtube';
  $handler->display->display_options['fields']['field_green_news_youtube']['table'] = 'field_data_field_green_news_youtube';
  $handler->display->display_options['fields']['field_green_news_youtube']['field'] = 'field_green_news_youtube';
  $handler->display->display_options['fields']['field_green_news_youtube']['label'] = '';
  $handler->display->display_options['fields']['field_green_news_youtube']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_green_news_youtube']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_green_news_youtube']['click_sort_column'] = 'input';
  $handler->display->display_options['fields']['field_green_news_youtube']['type'] = 'youtube_thumbnail';
  $handler->display->display_options['fields']['field_green_news_youtube']['settings'] = array(
    'image_style' => 'green_news_post',
    'image_link' => 'youtube',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_green_news_image']['id'] = 'field_green_news_image';
  $handler->display->display_options['fields']['field_green_news_image']['table'] = 'field_data_field_green_news_image';
  $handler->display->display_options['fields']['field_green_news_image']['field'] = 'field_green_news_image';
  $handler->display->display_options['fields']['field_green_news_image']['label'] = '';
  $handler->display->display_options['fields']['field_green_news_image']['element_class'] = 'green-news-image';
  $handler->display->display_options['fields']['field_green_news_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_green_news_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_green_news_image']['empty'] = '[field_green_news_youtube]';
  $handler->display->display_options['fields']['field_green_news_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_green_news_image']['settings'] = array(
    'image_style' => 'green_news_post',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: School */
  $handler->display->display_options['fields']['field_green_news_school']['id'] = 'field_green_news_school';
  $handler->display->display_options['fields']['field_green_news_school']['table'] = 'field_data_field_green_news_school';
  $handler->display->display_options['fields']['field_green_news_school']['field'] = 'field_green_news_school';
  $handler->display->display_options['fields']['field_green_news_school']['label'] = '';
  $handler->display->display_options['fields']['field_green_news_school']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_green_news_school']['element_label_colon'] = FALSE;
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['label'] = '';
  $handler->display->display_options['fields']['province']['exclude'] = TRUE;
  $handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['province']['style'] = 'code';
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['city']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['city']['alter']['text'] = '[city], [province]';
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_green_news_school] | [city]';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'h3';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_green_news_body']['id'] = 'field_green_news_body';
  $handler->display->display_options['fields']['field_green_news_body']['table'] = 'field_data_field_green_news_body';
  $handler->display->display_options['fields']['field_green_news_body']['field'] = 'field_green_news_body';
  $handler->display->display_options['fields']['field_green_news_body']['label'] = '';
  $handler->display->display_options['fields']['field_green_news_body']['element_class'] = 'green-news-body';
  $handler->display->display_options['fields']['field_green_news_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_green_news_body']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'green_news_post' => 'green_news_post',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Green News */
  $handler = $view->new_display('page', 'Green News', 'green_news');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['path'] = 'programs/green-news2';
  $handler->display->display_options['menu']['title'] = 'The Green News';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Green News Admin */
  $handler = $view->new_display('page', 'Green News Admin', 'page_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access administration pages';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_green_news_image' => 'field_green_news_image',
    'title' => 'title',
    'field_green_news_school' => 'field_green_news_school',
    'province' => 'province',
    'city' => 'city',
    'nothing' => 'nothing',
    'field_green_news_body' => 'field_green_news_body',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_green_news_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_green_news_school' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'province' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'city' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_green_news_body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: School */
  $handler->display->display_options['fields']['field_green_news_school']['id'] = 'field_green_news_school';
  $handler->display->display_options['fields']['field_green_news_school']['table'] = 'field_data_field_green_news_school';
  $handler->display->display_options['fields']['field_green_news_school']['field'] = 'field_green_news_school';
  $handler->display->display_options['fields']['field_green_news_school']['element_label_colon'] = FALSE;
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['alter']['text'] = '[city], [province]';
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['label'] = 'State/Province';
  $handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['province']['style'] = 'code';
  /* Field: Content: YouTube Link */
  $handler->display->display_options['fields']['field_green_news_youtube']['id'] = 'field_green_news_youtube';
  $handler->display->display_options['fields']['field_green_news_youtube']['table'] = 'field_data_field_green_news_youtube';
  $handler->display->display_options['fields']['field_green_news_youtube']['field'] = 'field_green_news_youtube';
  $handler->display->display_options['fields']['field_green_news_youtube']['label'] = '';
  $handler->display->display_options['fields']['field_green_news_youtube']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_green_news_youtube']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_green_news_youtube']['click_sort_column'] = 'input';
  $handler->display->display_options['fields']['field_green_news_youtube']['type'] = 'youtube_thumbnail';
  $handler->display->display_options['fields']['field_green_news_youtube']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'youtube',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_green_news_image']['id'] = 'field_green_news_image';
  $handler->display->display_options['fields']['field_green_news_image']['table'] = 'field_data_field_green_news_image';
  $handler->display->display_options['fields']['field_green_news_image']['field'] = 'field_green_news_image';
  $handler->display->display_options['fields']['field_green_news_image']['label'] = '';
  $handler->display->display_options['fields']['field_green_news_image']['element_class'] = 'green-news-image';
  $handler->display->display_options['fields']['field_green_news_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_green_news_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_green_news_image']['empty'] = '[field_green_news_youtube]';
  $handler->display->display_options['fields']['field_green_news_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_green_news_image']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_green_news_image']['settings'] = array(
    'file_view_mode' => 'media_preview',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_green_news_body']['id'] = 'field_green_news_body';
  $handler->display->display_options['fields']['field_green_news_body']['table'] = 'field_data_field_green_news_body';
  $handler->display->display_options['fields']['field_green_news_body']['field'] = 'field_green_news_body';
  $handler->display->display_options['fields']['field_green_news_body']['alter']['text'] = '[field_green_news_image] [field_green_news_body]';
  $handler->display->display_options['fields']['field_green_news_body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_green_news_body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_green_news_body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_green_news_body']['element_class'] = 'green-news-body';
  $handler->display->display_options['fields']['field_green_news_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_green_news_body']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'l F jS, Y';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'green_news_post' => 'green_news_post',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/green-news';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Green News';
  $handler->display->display_options['menu']['description'] = 'Green News Administration';
  $handler->display->display_options['menu']['weight'] = '8';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['green_news'] = $view;

  $view = new view();
  $view->name = 'green_news_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Green News Blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'green-screen-tv';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Green Screen TV</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: Related Videos */
  $handler->display->display_options['fields']['field_program_videos']['id'] = 'field_program_videos';
  $handler->display->display_options['fields']['field_program_videos']['table'] = 'field_data_field_program_videos';
  $handler->display->display_options['fields']['field_program_videos']['field'] = 'field_program_videos';
  $handler->display->display_options['fields']['field_program_videos']['label'] = '';
  $handler->display->display_options['fields']['field_program_videos']['element_class'] = 'field-item';
  $handler->display->display_options['fields']['field_program_videos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_program_videos']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_program_videos']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_program_videos']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_program_videos']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_program_videos']['multi_type'] = 'ul';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['argument'] = '68';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'program_page' => 'program_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Green Screen TV */
  $handler = $view->new_display('block', 'Green Screen TV', 'block');

  /* Display: The Green News */
  $handler = $view->new_display('block', 'The Green News', 'related_green_news');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'related-green-news';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>The Green News</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Related Green News */
  $handler->display->display_options['fields']['field_programs_green_news']['id'] = 'field_programs_green_news';
  $handler->display->display_options['fields']['field_programs_green_news']['table'] = 'field_data_field_programs_green_news';
  $handler->display->display_options['fields']['field_programs_green_news']['field'] = 'field_programs_green_news';
  $handler->display->display_options['fields']['field_programs_green_news']['label'] = '';
  $handler->display->display_options['fields']['field_programs_green_news']['element_class'] = 'field-item';
  $handler->display->display_options['fields']['field_programs_green_news']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_programs_green_news']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_programs_green_news']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_programs_green_news']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_programs_green_news']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_programs_green_news']['multi_type'] = 'ul';

  /* Display: Submit News */
  $handler = $view->new_display('block', 'Submit News', 'submit_block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'submit-news';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Related Videos */
  $handler->display->display_options['fields']['field_program_videos']['id'] = 'field_program_videos';
  $handler->display->display_options['fields']['field_program_videos']['table'] = 'field_data_field_program_videos';
  $handler->display->display_options['fields']['field_program_videos']['field'] = 'field_program_videos';
  $handler->display->display_options['fields']['field_program_videos']['label'] = '';
  $handler->display->display_options['fields']['field_program_videos']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_program_videos']['element_class'] = 'field-item';
  $handler->display->display_options['fields']['field_program_videos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_program_videos']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_program_videos']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_program_videos']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_program_videos']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_program_videos']['multi_type'] = 'ul';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a class="green-news-submit" href="/programs/green-news/post">Submit a Post!</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $export['green_news_blocks'] = $view;

  return $export;
}
