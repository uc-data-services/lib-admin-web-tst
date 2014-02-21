<?php
/**
 * @file
 * lhrd_configuration.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function lhrd_configuration_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'lhrd_contactpageinfo';
  $mini->category = 'LHRD';
  $mini->admin_title = 'LHRD ContactPageInfo';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a77018d7-405e-4eea-945d-5d512d5b6808';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6d48d25d-2c4b-4279-bc7d-6836a03ff746';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Address:',
      'body' => 'Library Human Resources Department<br>
110 Doe Library #6000
Berkeley, CA 94720-6000',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'contact-address',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6d48d25d-2c4b-4279-bc7d-6836a03ff746';
    $display->content['new-6d48d25d-2c4b-4279-bc7d-6836a03ff746'] = $pane;
    $display->panels['middle'][0] = 'new-6d48d25d-2c4b-4279-bc7d-6836a03ff746';
    $pane = new stdClass();
    $pane->pid = 'new-9020168a-d632-4739-ade4-6a476de1b88f';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Location:',
      'body' => '<iframe width="300" height="300" frameborder="0" scrolling="no" marginheight="0" marginwidth="0" src="https://maps.google.com/maps?f=q&amp;source=s_q&amp;hl=en&amp;geocode=&amp;q=Doe+Library,+Berkeley,+CA&amp;aq=0&amp;oq=doe+library+&amp;sll=37.0625,-95.677068&amp;sspn=52.240038,107.138672&amp;t=m&amp;ie=UTF8&amp;hq=&amp;hnear=&amp;ll=37.872042,-122.259443&amp;spn=0.002541,0.003219&amp;z=17&amp;output=embed"></iframe><br /><small><a href="https://maps.google.com/maps?f=q&amp;source=embed&amp;hl=en&amp;geocode=&amp;q=Doe+Library,+Berkeley,+CA&amp;aq=0&amp;oq=doe+library+&amp;sll=37.0625,-95.677068&amp;sspn=52.240038,107.138672&amp;t=m&amp;ie=UTF8&amp;hq=&amp;hnear=&amp;ll=37.872042,-122.259443&amp;spn=0.002541,0.003219&amp;z=17" style="color:#0000FF;text-align:left">View Larger Map</a></small>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'contact-location',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9020168a-d632-4739-ade4-6a476de1b88f';
    $display->content['new-9020168a-d632-4739-ade4-6a476de1b88f'] = $pane;
    $display->panels['middle'][1] = 'new-9020168a-d632-4739-ade4-6a476de1b88f';
    $pane = new stdClass();
    $pane->pid = 'new-22552d0f-d528-444d-9aad-45d2bf46f520';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Email:',
      'body' => '<a href="mailto:hrd@library.berkeley.edu">hrd@library.berkeley.edu</a>',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'contact-email',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '22552d0f-d528-444d-9aad-45d2bf46f520';
    $display->content['new-22552d0f-d528-444d-9aad-45d2bf46f520'] = $pane;
    $display->panels['middle'][2] = 'new-22552d0f-d528-444d-9aad-45d2bf46f520';
    $pane = new stdClass();
    $pane->pid = 'new-75d100c9-0eb0-49da-8028-6aceda9cc2d6';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Phone:',
      'body' => '<a href="tel:5106423778">510-642-3778</a>',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'contact-phone',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '75d100c9-0eb0-49da-8028-6aceda9cc2d6';
    $display->content['new-75d100c9-0eb0-49da-8028-6aceda9cc2d6'] = $pane;
    $display->panels['middle'][3] = 'new-75d100c9-0eb0-49da-8028-6aceda9cc2d6';
    $pane = new stdClass();
    $pane->pid = 'new-0990d6a7-d50d-46dd-850a-1adf2ed59a4f';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Fax:',
      'body' => '<a href="fax:5106428765">510-642-8765</a>',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'contact-fax',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '0990d6a7-d50d-46dd-850a-1adf2ed59a4f';
    $display->content['new-0990d6a7-d50d-46dd-850a-1adf2ed59a4f'] = $pane;
    $display->panels['middle'][4] = 'new-0990d6a7-d50d-46dd-850a-1adf2ed59a4f';
    $pane = new stdClass();
    $pane->pid = 'new-d7f40a77-b4d0-4ca8-b02a-12d261418fe2';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Hours:',
      'body' => 'Monday through Friday, 8 a.m. to 5 p.m.<br>
(closed daily for lunch from noon to 1 p.m.)<br><br>

Student Employment is open<br>
Monday through Friday, 8 a.m. to 4 p.m.',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'contact-hours',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'd7f40a77-b4d0-4ca8-b02a-12d261418fe2';
    $display->content['new-d7f40a77-b4d0-4ca8-b02a-12d261418fe2'] = $pane;
    $display->panels['middle'][5] = 'new-d7f40a77-b4d0-4ca8-b02a-12d261418fe2';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['lhrd_contactpageinfo'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'lhrd_footer_info';
  $mini->category = 'LHRD';
  $mini->admin_title = 'LHRD Footer Info';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'library human resources department';
  $display->uuid = 'ed7f3644-3895-465a-9f51-63fa2f97f2bd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4360318e-b264-4e28-bbe7-c0d0a685f94b';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>101 Doe Library<br />
Berkeley, CA 94720-6000</p>

<p>(510) 642-3778<br />
hrd@library.berkeley.edu</p>

<p><a href="#">Library</a>&nbsp;|&nbsp;<a href="#">Home</a>&nbsp;|&nbsp;<a href="#">Contact Webmaster</a><br />
Copyright © 2012<br />
The Regents of the University of California.<br />
All rights reserved.</p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4360318e-b264-4e28-bbe7-c0d0a685f94b';
    $display->content['new-4360318e-b264-4e28-bbe7-c0d0a685f94b'] = $pane;
    $display->panels['middle'][0] = 'new-4360318e-b264-4e28-bbe7-c0d0a685f94b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4360318e-b264-4e28-bbe7-c0d0a685f94b';
  $mini->display = $display;
  $export['lhrd_footer_info'] = $mini;

  return $export;
}
