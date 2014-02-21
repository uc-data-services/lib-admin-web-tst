<?php
/**
 * @file
 * index_panels.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function index_panels_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'lhrd_indexpanels_announcements';
  $mini->category = 'LHRD';
  $mini->admin_title = 'LHRD IndexPanels Announcements';
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
    ),
  );
  $display->cache = array();
  $display->title = 'Announcements';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Announcements.&nbsp;Announcements.&nbsp;Announcements.&nbsp;Announcements.&nbsp;Announcements.&nbsp;Announcements.&nbsp;Announcements.&nbsp;Announcements.&nbsp;Announcements.&nbsp;Announcements.&nbsp;Announcements.&nbsp;Announcements.&nbsp;Announcements.&nbsp;Announcements.&nbsp;Announcements.&nbsp;Announcements.</p>
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
      'css_class' => 'honzi-index-box',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['middle'][0] = 'new-1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1';
  $mini->display = $display;
  $export['lhrd_indexpanels_announcements'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'lhrd_indexpanels_img';
  $mini->category = 'LHRD';
  $mini->admin_title = 'LHRD IndexPanels Image';
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
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'honzi-index-box',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['middle'][0] = 'new-2';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-2';
  $mini->display = $display;
  $export['lhrd_indexpanels_img'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'lhrd_indexpanels_news';
  $mini->category = 'LHRD';
  $mini->admin_title = 'LHRD IndexPanels News';
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
  $display->title = 'News';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.&nbsp;News.</p>
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
      'css_class' => 'honzi-index-box',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['middle'][0] = 'new-3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3';
  $mini->display = $display;
  $export['lhrd_indexpanels_news'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'lhrd_indexpanels_welcome';
  $mini->category = 'LHRD';
  $mini->admin_title = 'LHRD IndexPanels Welcome';
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
    ),
  );
  $display->cache = array();
  $display->title = 'Library Human Resources';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p><strong>at University of California: Berkeley</strong></p>

<p>Welcome to Human Resources!&nbsp;Welcome to Human Resources!&nbsp;Welcome to Human Resources!&nbsp;Welcome to Human Resources!&nbsp;Welcome to Human Resources!&nbsp;Welcome to Human Resources!&nbsp;Welcome to Human Resources!&nbsp;Welcome to Human Resources!&nbsp;Welcome to Human Resources!&nbsp;Welcome to Human Resources!&nbsp;Welcome to Human Resources!&nbsp;Welcome to Human Resources!&nbsp;Welcome to Human Resources!&nbsp;Welcome to Human Resources!&nbsp;Welcome to Human Resources!</p>
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
      'css_class' => 'honzi-index-box',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['middle'][0] = 'new-4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4';
  $mini->display = $display;
  $export['lhrd_indexpanels_welcome'] = $mini;

  return $export;
}
