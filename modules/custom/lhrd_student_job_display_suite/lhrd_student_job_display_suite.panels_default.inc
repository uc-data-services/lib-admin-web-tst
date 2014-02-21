<?php
/**
 * @file
 * lhrd_student_job_display_suite.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function lhrd_student_job_display_suite_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'lhrd_applybutton';
  $mini->category = '';
  $mini->admin_title = 'LHRD ApplyButton';
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
  $display->uuid = 'e2f6430e-b910-44ac-aaf5-bcbe4531c7a9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a6720c47-4c88-491a-83c9-a507647f16b5';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p><a href="http://www.lib.berkeley.edu/LHRD/student-application.pdf" target="_blank">APPLY</a></p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a6720c47-4c88-491a-83c9-a507647f16b5';
    $display->content['new-a6720c47-4c88-491a-83c9-a507647f16b5'] = $pane;
    $display->panels['middle'][0] = 'new-a6720c47-4c88-491a-83c9-a507647f16b5';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-a6720c47-4c88-491a-83c9-a507647f16b5';
  $mini->display = $display;
  $export['lhrd_applybutton'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'lhrd_howtoapply_student_jobpage';
  $mini->category = 'LHRD';
  $mini->admin_title = 'LHRD HowToApply Student JobPage';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
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
  $display->uuid = '5228708c-e591-4cd6-8c94-3afd021bd1b7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a70676a1-9f29-4f55-a580-683ef2f72580';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href="../../fillpdf?fid=15&nid=%node:nid">Apply</a>',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a70676a1-9f29-4f55-a580-683ef2f72580';
    $display->content['new-a70676a1-9f29-4f55-a580-683ef2f72580'] = $pane;
    $display->panels['middle'][0] = 'new-a70676a1-9f29-4f55-a580-683ef2f72580';
    $pane = new stdClass();
    $pane->pid = 'new-1fcb8bac-3ccb-4b34-8d2d-736a86dc734c';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<ol>
	<li>Click the \'Apply\' button to download an application.</li>
	<li>Fill out the application and bring it to 110 Doe Library to arrange an interview with Judy Deliramich, Student Recruitment Coordinator.</li>
</ol>

<p><strong>Questions?</strong> <a href="../../contact">Contact Student Employment</a></p>

<p><strong>Student Employment<br />
office hours:</strong><br />
8 a.m. to 4 p.m.<br />
(closed daily for lunch,<br />
noon to 1 p.m.)</p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1fcb8bac-3ccb-4b34-8d2d-736a86dc734c';
    $display->content['new-1fcb8bac-3ccb-4b34-8d2d-736a86dc734c'] = $pane;
    $display->panels['middle'][1] = 'new-1fcb8bac-3ccb-4b34-8d2d-736a86dc734c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-1fcb8bac-3ccb-4b34-8d2d-736a86dc734c';
  $mini->display = $display;
  $export['lhrd_howtoapply_student_jobpage'] = $mini;

  return $export;
}
