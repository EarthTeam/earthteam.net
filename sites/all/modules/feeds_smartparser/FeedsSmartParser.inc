<?php

/**
 * @file
 * Contains FeedsSmartParser and related classes.
 */

/**
 * A smart parser for html using http://code.fivefilters.org/php-readability/
 */
class FeedsSmartParser extends FeedsParser {
  /**
   * Implements FeedsParser::parse().
   */
  public function parse(FeedsSource $source, FeedsFetcherResult $fetcher_result) {

    require_once 'Readability.php';
    $html = $fetcher_result->getRaw();
    //I use following code to convert encode, which is very usefull in Chinese.	
    $encode = mb_detect_encoding($html, array("ASCII","GB2312","GBK","UTF-8","BIG5"));	
    if($encode == 'UTF-8'){
      //if($tmp){
    }else{
      $html = iconv($encode, "UTF-8//IGNORE", $html);
    }	

    if (function_exists('tidy_parse_string')) {
      $tidy = tidy_parse_string($html, array(), 'UTF8');
      $tidy->cleanRepair();
      $html = $tidy->value;
    }
    $readability = new Readability($html);
    $result = $readability->init();

    $parser_result = new FeedsParserResult();
    $item = array();
    if($result){
      $item['mirror'] =  $html;
      $item['title'] =  $readability->getTitle()->textContent;
      $content = $readability->getContent()->innerHTML;
      if (function_exists('tidy_parse_string')) {
        $tidy = tidy_parse_string($content, array('indent'=>true, 'show-body-only' => true), 'UTF8');
        $tidy->cleanRepair();
        $content = $tidy->value;
      }
      $item['content'] = $content;
    }
    $parser_result->items[] = $item;

    return $parser_result;
  }

  /**
   * Implements FeedsParser::getMappingSources().
   */
  public function getMappingSources() {
    return array(
      'title' => array(
        'name' => t('Title'),
        'description' => t('Title of the html.'),
      ),
      'content' => array(
        'name' => t('Content'),
        'description' => t('Main content of the html.'),
      ),
      'mirror' => array(
        'name' => t('Mirror'),
        'description' => t('Mirror of the html.'),
      ),

    ) + parent::getMappingSources();
  }
}
