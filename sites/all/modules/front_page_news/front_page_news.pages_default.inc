<?php
/**
 * @file
 * front_page_news.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function front_page_news_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'Front Page';
  $page->admin_description = 'Front Page';
  $page->path = 'front';
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
  $handler->name = 'page_front_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'front-page',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Events Calendar',
        'keyword' => 'node',
        'name' => 'entity:node',
        'entity_id' => '105',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'What are we up to?';
  $display->uuid = '473351e7-6d31-44f8-986b-91ab04769d28';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-38225720-6f9c-4b51-a363-bb7dce3fdff5';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'homepage_news';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
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
    $pane->uuid = '38225720-6f9c-4b51-a363-bb7dce3fdff5';
    $display->content['new-38225720-6f9c-4b51-a363-bb7dce3fdff5'] = $pane;
    $display->panels['left'][0] = 'new-38225720-6f9c-4b51-a363-bb7dce3fdff5';
    $pane = new stdClass();
    $pane->pid = 'new-853f384d-567e-475d-a503-6301a8bf63b2';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'homepage_news-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '853f384d-567e-475d-a503-6301a8bf63b2';
    $display->content['new-853f384d-567e-475d-a503-6301a8bf63b2'] = $pane;
    $display->panels['left'][1] = 'new-853f384d-567e-475d-a503-6301a8bf63b2';
    $pane = new stdClass();
    $pane->pid = 'new-84827ad2-33cb-4752-aa5f-c5cb70fb0e37';
    $pane->panel = 'right';
    $pane->type = 'panels_mini';
    $pane->subtype = 'social_links_home';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
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
    $pane->uuid = '84827ad2-33cb-4752-aa5f-c5cb70fb0e37';
    $display->content['new-84827ad2-33cb-4752-aa5f-c5cb70fb0e37'] = $pane;
    $display->panels['right'][0] = 'new-84827ad2-33cb-4752-aa5f-c5cb70fb0e37';
    $pane = new stdClass();
    $pane->pid = 'new-b5ed622f-dcba-48fb-9258-d29f02ead6ed';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'teacher_student_of_the_month';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '2',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => 'Student and Teacher of the Month',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b5ed622f-dcba-48fb-9258-d29f02ead6ed';
    $display->content['new-b5ed622f-dcba-48fb-9258-d29f02ead6ed'] = $pane;
    $display->panels['right'][1] = 'new-b5ed622f-dcba-48fb-9258-d29f02ead6ed';
    $pane = new stdClass();
    $pane->pid = 'new-fe237dc8-d660-4b05-8417-437e35634f6c';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Nominate Student/Teacher',
      'title' => '',
      'body' => '<a href="../nominate">Nominate Next Month\'s Student or Teacher</a>',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'nominate',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fe237dc8-d660-4b05-8417-437e35634f6c';
    $display->content['new-fe237dc8-d660-4b05-8417-437e35634f6c'] = $pane;
    $display->panels['right'][2] = 'new-fe237dc8-d660-4b05-8417-437e35634f6c';
    $pane = new stdClass();
    $pane->pid = 'new-27b3da84-e76a-4e64-be15-3677e87a69aa';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Twitter Widget',
      'title' => '',
      'body' => '<div id="twitter-widget"><a class="twitter-timeline" href="https://twitter.com/ETNetwork" data-widget-id="369904150366003200">Tweets by @ETNetwork</a>
<script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0],p=/^http:/.test(d.location)?\'http\':\'https\';if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src=p+"://platform.twitter.com/widgets.js";fjs.parentNode.insertBefore(js,fjs);}}(document,"script","twitter-wjs");</script></div>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'tweets-custom-pane',
      'css_class' => 'sidebar-widget',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '27b3da84-e76a-4e64-be15-3677e87a69aa';
    $display->content['new-27b3da84-e76a-4e64-be15-3677e87a69aa'] = $pane;
    $display->panels['right'][3] = 'new-27b3da84-e76a-4e64-be15-3677e87a69aa';
    $pane = new stdClass();
    $pane->pid = 'new-f60e8648-2410-49ba-984d-1992043949a2';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Google calendar preview',
      'title' => 'Upcoming Community Events',
      'body' => '<iframe src="https://www.google.com/calendar/embed?title=Upcoming%20Events&amp;showTitle=0&amp;showNav=0&amp;showDate=0&amp;showPrint=0&amp;showTabs=0&amp;showCalendars=0&amp;showTz=0&amp;mode=AGENDA&amp;height=400&amp;wkst=1&amp;bgcolor=%23ffffff&amp;src=earthteam.net_9u5tf2nkf046663d5m41gdq33o%40group.calendar.google.com&amp;color=%232F6309&amp;ctz=America%2FLos_Angeles" style=" border-width:0 " width="341" height="300" frameborder="0" scrolling="no"></iframe>
<a href="events-calendar">See full calendar</a>',
      'format' => 'wysiwg',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'upcoming-events',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'f60e8648-2410-49ba-984d-1992043949a2';
    $display->content['new-f60e8648-2410-49ba-984d-1992043949a2'] = $pane;
    $display->panels['right'][4] = 'new-f60e8648-2410-49ba-984d-1992043949a2';
    $pane = new stdClass();
    $pane->pid = 'new-44b910c3-5996-400a-8465-c616d7d1632a';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'block-4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array(
      'css_id' => 'events-calendar',
      'css_class' => 'upcoming-events',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '44b910c3-5996-400a-8465-c616d7d1632a';
    $display->content['new-44b910c3-5996-400a-8465-c616d7d1632a'] = $pane;
    $display->panels['right'][5] = 'new-44b910c3-5996-400a-8465-c616d7d1632a';
    $pane = new stdClass();
    $pane->pid = 'new-7dd75d3a-8e5f-4d9c-b47f-4e80e1de91e9';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Full Calendar Link',
      'title' => '',
      'body' => '<a id="full-calendar-link" href="events-calendar">See full calendar</a>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '7dd75d3a-8e5f-4d9c-b47f-4e80e1de91e9';
    $display->content['new-7dd75d3a-8e5f-4d9c-b47f-4e80e1de91e9'] = $pane;
    $display->panels['right'][6] = 'new-7dd75d3a-8e5f-4d9c-b47f-4e80e1de91e9';
    $pane = new stdClass();
    $pane->pid = 'new-641020ce-4fa3-4434-ba78-99c6708be9d5';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Mailchimp',
      'title' => '',
      'body' => '<!-- Begin MailChimp Signup Form -->
<link href="//cdn-images.mailchimp.com/embedcode/classic-081711.css" rel="stylesheet" type="text/css">
<style type="text/css">
	#mc_embed_signup{background:#fff; clear:left; font:14px Helvetica,Arial,sans-serif; }
	/* Add your own MailChimp form style overrides in your site stylesheet or in this style block.
	   We recommend moving this block and the preceding CSS link to the HEAD of your HTML file. */
</style>
<div id="mc_embed_signup">
<form action="http://earthteam.us7.list-manage1.com/subscribe/post?u=82748fabb5077dfb87363a328&amp;id=c66378b527" method="post" id="mc-embedded-subscribe-form" name="mc-embedded-subscribe-form" class="validate" target="_blank" novalidate>
	<h2>Subscribe to our Newsletter</h2>
<div class="mc-field-group">
	<label for="mce-EMAIL">Email Address </label>
	<input type="email" value="" name="EMAIL" class="required email" id="mce-EMAIL">
</div>
	<div id="mce-responses" class="clear">
		<div class="response" id="mce-error-response" style="display:none"></div>
		<div class="response" id="mce-success-response" style="display:none"></div>
	</div>	<div class="clear"><input type="submit" value="Subscribe" name="subscribe" id="mc-embedded-subscribe" class="button"></div>
</form>
</div>
<script type="text/javascript">
var fnames = new Array();var ftypes = new Array();fnames[0]=\'EMAIL\';ftypes[0]=\'email\';fnames[1]=\'FNAME\';ftypes[1]=\'text\';fnames[2]=\'LNAME\';ftypes[2]=\'text\';fnames[4]=\'MMERGE4\';ftypes[4]=\'text\';fnames[5]=\'MMERGE5\';ftypes[5]=\'text\';fnames[6]=\'MMERGE6\';ftypes[6]=\'text\';fnames[8]=\'MMERGE8\';ftypes[8]=\'text\';fnames[9]=\'MMERGE9\';ftypes[9]=\'text\';fnames[10]=\'MMERGE10\';ftypes[10]=\'text\';fnames[3]=\'MMERGE3\';ftypes[3]=\'text\';fnames[13]=\'MMERGE13\';ftypes[13]=\'text\';fnames[14]=\'MMERGE14\';ftypes[14]=\'text\';fnames[15]=\'MMERGE15\';ftypes[15]=\'text\';fnames[16]=\'MMERGE16\';ftypes[16]=\'text\';fnames[17]=\'MMERGE17\';ftypes[17]=\'text\';fnames[18]=\'MMERGE18\';ftypes[18]=\'text\';fnames[19]=\'MMERGE19\';ftypes[19]=\'text\';fnames[20]=\'MMERGE20\';ftypes[20]=\'text\';
try {
    var jqueryLoaded=jQuery;
    jqueryLoaded=true;
} catch(err) {
    var jqueryLoaded=false;
}
var head= document.getElementsByTagName(\'head\')[0];
if (!jqueryLoaded) {
    var script = document.createElement(\'script\');
    script.type = \'text/javascript\';
    script.src = \'//ajax.googleapis.com/ajax/libs/jquery/1.4.4/jquery.min.js\';
    head.appendChild(script);
    if (script.readyState && script.onload!==null){
        script.onreadystatechange= function () {
              if (this.readyState == \'complete\') mce_preload_check();
        }    
    }
}

var err_style = \'\';
try{
    err_style = mc_custom_error_style;
} catch(e){
    err_style = \'#mc_embed_signup input.mce_inline_error{border-color:#6B0505;} #mc_embed_signup div.mce_inline_error{margin: 0 0 1em 0; padding: 5px 10px; background-color:#6B0505; font-weight: bold; z-index: 1; color:#fff;}\';
}
var head= document.getElementsByTagName(\'head\')[0];
var style= document.createElement(\'style\');
style.type= \'text/css\';
if (style.styleSheet) {
  style.styleSheet.cssText = err_style;
} else {
  style.appendChild(document.createTextNode(err_style));
}
head.appendChild(style);
setTimeout(\'mce_preload_check();\', 250);

var mce_preload_checks = 0;
function mce_preload_check(){
    if (mce_preload_checks>40) return;
    mce_preload_checks++;
    try {
        var jqueryLoaded=jQuery;
    } catch(err) {
        setTimeout(\'mce_preload_check();\', 250);
        return;
    }
    var script = document.createElement(\'script\');
    script.type = \'text/javascript\';
    script.src = \'http://downloads.mailchimp.com/js/jquery.form-n-validate.js\';
    head.appendChild(script);
    try {
        var validatorLoaded=jQuery("#fake-form").validate({});
    } catch(err) {
        setTimeout(\'mce_preload_check();\', 250);
        return;
    }
    mce_init_form();
}
function mce_init_form(){
    jQuery(document).ready( function($) {
      var options = { errorClass: \'mce_inline_error\', errorElement: \'div\', onkeyup: function(){}, onfocusout:function(){}, onblur:function(){}  };
      var mce_validator = $("#mc-embedded-subscribe-form").validate(options);
      $("#mc-embedded-subscribe-form").unbind(\'submit\');//remove the validator so we can get into beforeSubmit on the ajaxform, which then calls the validator
      options = { url: \'http://earthteam.us7.list-manage1.com/subscribe/post-json?u=82748fabb5077dfb87363a328&id=c66378b527&c=?\', type: \'GET\', dataType: \'json\', contentType: "application/json; charset=utf-8",
                    beforeSubmit: function(){
                        $(\'#mce_tmp_error_msg\').remove();
                        $(\'.datefield\',\'#mc_embed_signup\').each(
                            function(){
                                var txt = \'filled\';
                                var fields = new Array();
                                var i = 0;
                                $(\':text\', this).each(
                                    function(){
                                        fields[i] = this;
                                        i++;
                                    });
                                $(\':hidden\', this).each(
                                    function(){
                                        var bday = false;
                                        if (fields.length == 2){
                                            bday = true;
                                            fields[2] = {\'value\':1970};//trick birthdays into having years
                                        }
                                    	if ( fields[0].value==\'MM\' && fields[1].value==\'DD\' && (fields[2].value==\'YYYY\' || (bday && fields[2].value==1970) ) ){
                                    		this.value = \'\';
									    } else if ( fields[0].value==\'\' && fields[1].value==\'\' && (fields[2].value==\'\' || (bday && fields[2].value==1970) ) ){
                                    		this.value = \'\';
									    } else {
									        if (/\\[day\\]/.test(fields[0].name)){
    	                                        this.value = fields[1].value+\'/\'+fields[0].value+\'/\'+fields[2].value;									        
									        } else {
    	                                        this.value = fields[0].value+\'/\'+fields[1].value+\'/\'+fields[2].value;
	                                        }
	                                    }
                                    });
                            });
                        $(\'.phonefield-us\',\'#mc_embed_signup\').each(
                            function(){
                                var fields = new Array();
                                var i = 0;
                                $(\':text\', this).each(
                                    function(){
                                        fields[i] = this;
                                        i++;
                                    });
                                $(\':hidden\', this).each(
                                    function(){
                                        if ( fields[0].value.length != 3 || fields[1].value.length!=3 || fields[2].value.length!=4 ){
                                    		this.value = \'\';
									    } else {
									        this.value = \'filled\';
	                                    }
                                    });
                            });
                        return mce_validator.form();
                    }, 
                    success: mce_success_cb
                };
      $(\'#mc-embedded-subscribe-form\').ajaxForm(options);
      
      
    });
}
function mce_success_cb(resp){
    $(\'#mce-success-response\').hide();
    $(\'#mce-error-response\').hide();
    if (resp.result=="success"){
        $(\'#mce-\'+resp.result+\'-response\').show();
        $(\'#mce-\'+resp.result+\'-response\').html(resp.msg);
        $(\'#mc-embedded-subscribe-form\').each(function(){
            this.reset();
    	});
    } else {
        var index = -1;
        var msg;
        try {
            var parts = resp.msg.split(\' - \',2);
            if (parts[1]==undefined){
                msg = resp.msg;
            } else {
                i = parseInt(parts[0]);
                if (i.toString() == parts[0]){
                    index = parts[0];
                    msg = parts[1];
                } else {
                    index = -1;
                    msg = resp.msg;
                }
            }
        } catch(e){
            index = -1;
            msg = resp.msg;
        }
        try{
            if (index== -1){
                $(\'#mce-\'+resp.result+\'-response\').show();
                $(\'#mce-\'+resp.result+\'-response\').html(msg);            
            } else {
                err_id = \'mce_tmp_error_msg\';
                html = \'<div id="\'+err_id+\'" style="\'+err_style+\'"> \'+msg+\'</div>\';
                
                var input_id = \'#mc_embed_signup\';
                var f = $(input_id);
                if (ftypes[index]==\'address\'){
                    input_id = \'#mce-\'+fnames[index]+\'-addr1\';
                    f = $(input_id).parent().parent().get(0);
                } else if (ftypes[index]==\'date\'){
                    input_id = \'#mce-\'+fnames[index]+\'-month\';
                    f = $(input_id).parent().parent().get(0);
                } else {
                    input_id = \'#mce-\'+fnames[index];
                    f = $().parent(input_id).get(0);
                }
                if (f){
                    $(f).append(html);
                    $(input_id).focus();
                } else {
                    $(\'#mce-\'+resp.result+\'-response\').show();
                    $(\'#mce-\'+resp.result+\'-response\').html(msg);
                }
            }
        } catch(e){
            $(\'#mce-\'+resp.result+\'-response\').show();
            $(\'#mce-\'+resp.result+\'-response\').html(msg);
        }
    }
}

</script>
<!--End mc_embed_signup-->',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'upcoming-events-custom-pane',
      'css_class' => 'sidebar-widget',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '641020ce-4fa3-4434-ba78-99c6708be9d5';
    $display->content['new-641020ce-4fa3-4434-ba78-99c6708be9d5'] = $pane;
    $display->panels['right'][7] = 'new-641020ce-4fa3-4434-ba78-99c6708be9d5';
    $pane = new stdClass();
    $pane->pid = 'new-b857c290-bac8-4774-83f0-00be2d623833';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'front_page_slideshow';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => FALSE,
      'use_pager' => FALSE,
      'nodes_per_page' => 10,
      'pager_id' => 0,
      'offset' => 0,
      'more_link' => FALSE,
      'feed_icons' => FALSE,
      'panel_args' => FALSE,
      'link_to_view' => FALSE,
      'args' => '',
      'url' => '',
      'display' => 'default',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b857c290-bac8-4774-83f0-00be2d623833';
    $display->content['new-b857c290-bac8-4774-83f0-00be2d623833'] = $pane;
    $display->panels['top'][0] = 'new-b857c290-bac8-4774-83f0-00be2d623833';
    $pane = new stdClass();
    $pane->pid = 'new-b7627b3c-52e4-48b1-a5d3-368f3161e1b0';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'homepage_quote';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
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
    $pane->uuid = 'b7627b3c-52e4-48b1-a5d3-368f3161e1b0';
    $display->content['new-b7627b3c-52e4-48b1-a5d3-368f3161e1b0'] = $pane;
    $display->panels['top'][1] = 'new-b7627b3c-52e4-48b1-a5d3-368f3161e1b0';
    $pane = new stdClass();
    $pane->pid = 'new-1b949598-8214-48cf-829a-7699a64684e1';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_status',
          'settings' => NULL,
          'context' => 'context_entity:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
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
    $pane->uuid = '1b949598-8214-48cf-829a-7699a64684e1';
    $display->content['new-1b949598-8214-48cf-829a-7699a64684e1'] = $pane;
    $display->panels['top'][2] = 'new-1b949598-8214-48cf-829a-7699a64684e1';
    $pane = new stdClass();
    $pane->pid = 'new-4cbd8322-66a5-405d-9aaa-65a1195bc73d';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-green-multimedia';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'EarthTeam\'s Green Multimedia',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '4cbd8322-66a5-405d-9aaa-65a1195bc73d';
    $display->content['new-4cbd8322-66a5-405d-9aaa-65a1195bc73d'] = $pane;
    $display->panels['top'][3] = 'new-4cbd8322-66a5-405d-9aaa-65a1195bc73d';
    $pane = new stdClass();
    $pane->pid = 'new-15af454d-9a0d-4e4c-befe-a8cf04b34327';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'superfish-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '15af454d-9a0d-4e4c-befe-a8cf04b34327';
    $display->content['new-15af454d-9a0d-4e4c-befe-a8cf04b34327'] = $pane;
    $display->panels['top'][4] = 'new-15af454d-9a0d-4e4c-befe-a8cf04b34327';
    $pane = new stdClass();
    $pane->pid = 'new-7974f3c7-55dc-41f5-a138-9cadcbc6b51f';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'menu-toggle',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '7974f3c7-55dc-41f5-a138-9cadcbc6b51f';
    $display->content['new-7974f3c7-55dc-41f5-a138-9cadcbc6b51f'] = $pane;
    $display->panels['top'][5] = 'new-7974f3c7-55dc-41f5-a138-9cadcbc6b51f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-38225720-6f9c-4b51-a363-bb7dce3fdff5';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
