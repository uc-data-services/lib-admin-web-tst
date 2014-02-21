<?php
/**
 * @file
 * student_job.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function student_job_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'lhrd_student_gradstudents';
  $page->task = 'page';
  $page->admin_title = 'LHRD Student GradStudents';
  $page->admin_description = '';
  $page->path = 'student/grad-students';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_lhrd_student_gradstudents_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'lhrd_student_gradstudents';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Student
Graduate Students',
    'panels_breadcrumbs_paths' => 'student
<none>',
    'panels_breadcrumbs_home' => 0,
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Graduate Students';
  $display->uuid = '14c13d4b-0c7e-420c-a0a5-7014fc5126fb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1fcbee1c-3f44-416f-b772-126a057f7d2d';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Graduate Students',
      'body' => '<p>Graduate Students</p>
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
      'css_class' => 'honzi-page-header honzi-header-student',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1fcbee1c-3f44-416f-b772-126a057f7d2d';
    $display->content['new-1fcbee1c-3f44-416f-b772-126a057f7d2d'] = $pane;
    $display->panels['middle'][0] = 'new-1fcbee1c-3f44-416f-b772-126a057f7d2d';
    $pane = new stdClass();
    $pane->pid = 'new-12ce71fe-c9a6-4c42-9f60-2bc1d7b6e74e';
    $pane->panel = 'middle';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'panels_breadcrumbs_admin_title' => '',
      'panels_breadcrumbs_state' => 0,
      'panels_breadcrumbs_titles' => '',
      'panels_breadcrumbs_paths' => '',
      'panels_breadcrumbs_home' => 0,
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
    $pane->uuid = '12ce71fe-c9a6-4c42-9f60-2bc1d7b6e74e';
    $display->content['new-12ce71fe-c9a6-4c42-9f60-2bc1d7b6e74e'] = $pane;
    $display->panels['middle'][1] = 'new-12ce71fe-c9a6-4c42-9f60-2bc1d7b6e74e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['lhrd_student_gradstudents'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'lhrd_student_handbook';
  $page->task = 'page';
  $page->admin_title = 'LHRD Student Handbook';
  $page->admin_description = '';
  $page->path = 'student/handbook';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_lhrd_student_handbook_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'lhrd_student_handbook';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Student
Student Handbook',
    'panels_breadcrumbs_paths' => 'student
<none>',
    'panels_breadcrumbs_home' => 0,
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Student Handbook';
  $display->uuid = 'd2cfc529-d252-4082-a46c-dc8b4a0618ac';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-611e2403-2e08-4a08-851f-7221c1654f5a';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Student Handbook',
      'body' => '<p>Student Handbook</p>
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
      'css_class' => 'honzi-page-header honzi-header-student',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '611e2403-2e08-4a08-851f-7221c1654f5a';
    $display->content['new-611e2403-2e08-4a08-851f-7221c1654f5a'] = $pane;
    $display->panels['middle'][0] = 'new-611e2403-2e08-4a08-851f-7221c1654f5a';
    $pane = new stdClass();
    $pane->pid = 'new-0a7ad281-c940-4865-8acb-888091ada7c6';
    $pane->panel = 'middle';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'panels_breadcrumbs_admin_title' => '',
      'panels_breadcrumbs_state' => 0,
      'panels_breadcrumbs_titles' => '',
      'panels_breadcrumbs_paths' => '',
      'panels_breadcrumbs_home' => 0,
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
    $pane->uuid = '0a7ad281-c940-4865-8acb-888091ada7c6';
    $display->content['new-0a7ad281-c940-4865-8acb-888091ada7c6'] = $pane;
    $display->panels['middle'][1] = 'new-0a7ad281-c940-4865-8acb-888091ada7c6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['lhrd_student_handbook'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'lhrd_student_hiringprocess';
  $page->task = 'page';
  $page->admin_title = 'LHRD Student HiringProcess';
  $page->admin_description = '';
  $page->path = 'student/hiring-process';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_lhrd_student_hiringprocess_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'lhrd_student_hiringprocess';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Student
Hiring Process',
    'panels_breadcrumbs_paths' => 'student
<none>',
    'panels_breadcrumbs_home' => 0,
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Hiring Process';
  $display->uuid = '218f3b10-2fe9-473d-a505-5f4d96c5132a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b1da1008-6614-4dc7-bcff-25ffe8e2116d';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Student Hiring Process',
      'body' => '<p>Student Hiring Process</p>
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
      'css_class' => 'honzi-page-header honzi-header-student',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b1da1008-6614-4dc7-bcff-25ffe8e2116d';
    $display->content['new-b1da1008-6614-4dc7-bcff-25ffe8e2116d'] = $pane;
    $display->panels['middle'][0] = 'new-b1da1008-6614-4dc7-bcff-25ffe8e2116d';
    $pane = new stdClass();
    $pane->pid = 'new-9fb05f5d-7a81-4648-97e6-d32bf3031445';
    $pane->panel = 'middle';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'panels_breadcrumbs_admin_title' => '',
      'panels_breadcrumbs_state' => 0,
      'panels_breadcrumbs_titles' => '',
      'panels_breadcrumbs_paths' => '',
      'panels_breadcrumbs_home' => 0,
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
    $pane->uuid = '9fb05f5d-7a81-4648-97e6-d32bf3031445';
    $display->content['new-9fb05f5d-7a81-4648-97e6-d32bf3031445'] = $pane;
    $display->panels['middle'][1] = 'new-9fb05f5d-7a81-4648-97e6-d32bf3031445';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['lhrd_student_hiringprocess'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'lhrd_student_managerssupervisors';
  $page->task = 'page';
  $page->admin_title = 'LHRD Student ManagersSupervisors';
  $page->admin_description = '';
  $page->path = 'student/managers-supervisors';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_lhrd_student_managerssupervisors_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'lhrd_student_managerssupervisors';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Student
Managers & Supervisors',
    'panels_breadcrumbs_paths' => 'student
<none>',
    'panels_breadcrumbs_home' => 0,
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Managers & Supervisors';
  $display->uuid = 'b002cccd-8085-403c-9db2-97ebe10fd273';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2e6f5a73-2497-4ee4-907e-8d0e25f80ce7';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Managers & Supervisors',
      'body' => '<p>Managers &amp; Supervisors</p>
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
      'css_class' => 'honzi-page-header honzi-header-student',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2e6f5a73-2497-4ee4-907e-8d0e25f80ce7';
    $display->content['new-2e6f5a73-2497-4ee4-907e-8d0e25f80ce7'] = $pane;
    $display->panels['middle'][0] = 'new-2e6f5a73-2497-4ee4-907e-8d0e25f80ce7';
    $pane = new stdClass();
    $pane->pid = 'new-ef085c43-7daf-4910-b4e9-f64c07c20ea4';
    $pane->panel = 'middle';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'panels_breadcrumbs_admin_title' => '',
      'panels_breadcrumbs_state' => 0,
      'panels_breadcrumbs_titles' => '',
      'panels_breadcrumbs_paths' => '',
      'panels_breadcrumbs_home' => 0,
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
    $pane->uuid = 'ef085c43-7daf-4910-b4e9-f64c07c20ea4';
    $display->content['new-ef085c43-7daf-4910-b4e9-f64c07c20ea4'] = $pane;
    $display->panels['middle'][1] = 'new-ef085c43-7daf-4910-b4e9-f64c07c20ea4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['lhrd_student_managerssupervisors'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'lhrd_student_paytime';
  $page->task = 'page';
  $page->admin_title = 'LHRD Student PayTime';
  $page->admin_description = '';
  $page->path = 'student/pay-time';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_lhrd_student_paytime_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'lhrd_student_paytime';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Student
Payroll & Timekeeping',
    'panels_breadcrumbs_paths' => 'student
<none>',
    'panels_breadcrumbs_home' => 0,
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Payroll & Timekeeping';
  $display->uuid = '50ce4211-4033-47e9-a646-2f63077f334f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-495dbea7-cad3-4679-9438-37af1efc3f24';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Payroll & Timekeeping',
      'body' => '<p>Payroll &amp; Timekeeping</p>
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
      'css_class' => 'honzi-page-header honzi-header-student',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '495dbea7-cad3-4679-9438-37af1efc3f24';
    $display->content['new-495dbea7-cad3-4679-9438-37af1efc3f24'] = $pane;
    $display->panels['middle'][0] = 'new-495dbea7-cad3-4679-9438-37af1efc3f24';
    $pane = new stdClass();
    $pane->pid = 'new-7c00d8c4-5dca-461e-b3a8-5938e06d1dc3';
    $pane->panel = 'middle';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'panels_breadcrumbs_admin_title' => '',
      'panels_breadcrumbs_state' => 0,
      'panels_breadcrumbs_titles' => '',
      'panels_breadcrumbs_paths' => '',
      'panels_breadcrumbs_home' => 0,
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
    $pane->uuid = '7c00d8c4-5dca-461e-b3a8-5938e06d1dc3';
    $display->content['new-7c00d8c4-5dca-461e-b3a8-5938e06d1dc3'] = $pane;
    $display->panels['middle'][1] = 'new-7c00d8c4-5dca-461e-b3a8-5938e06d1dc3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['lhrd_student_paytime'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'lhrd_student_workstudy';
  $page->task = 'page';
  $page->admin_title = 'LHRD Student WorkStudy';
  $page->admin_description = '';
  $page->path = 'student/work-study';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_lhrd_student_workstudy_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'lhrd_student_workstudy';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Student
Work Study',
    'panels_breadcrumbs_paths' => 'student
<none>',
    'panels_breadcrumbs_home' => 0,
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Work Study';
  $display->uuid = 'dc4a29cb-7f36-42b8-b1de-f36e1d49ca09';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fde0a73f-08d1-46e4-9da3-b1c89cb77d9c';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Work Study',
      'body' => '<p>Work Study</p>
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
      'css_class' => 'honzi-page-header honzi-header-student',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fde0a73f-08d1-46e4-9da3-b1c89cb77d9c';
    $display->content['new-fde0a73f-08d1-46e4-9da3-b1c89cb77d9c'] = $pane;
    $display->panels['middle'][0] = 'new-fde0a73f-08d1-46e4-9da3-b1c89cb77d9c';
    $pane = new stdClass();
    $pane->pid = 'new-b1720d17-aff3-46a5-9da2-6695f31563e5';
    $pane->panel = 'middle';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'panels_breadcrumbs_admin_title' => '',
      'panels_breadcrumbs_state' => 0,
      'panels_breadcrumbs_titles' => '',
      'panels_breadcrumbs_paths' => '',
      'panels_breadcrumbs_home' => 0,
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
    $pane->uuid = 'b1720d17-aff3-46a5-9da2-6695f31563e5';
    $display->content['new-b1720d17-aff3-46a5-9da2-6695f31563e5'] = $pane;
    $display->panels['middle'][1] = 'new-b1720d17-aff3-46a5-9da2-6695f31563e5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['lhrd_student_workstudy'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'student_employees_index_page';
  $page->task = 'page';
  $page->admin_title = 'Student Employees Index Page';
  $page->admin_description = '';
  $page->path = 'student';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_student_employees_index_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'student_employees_index_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
          1 => 1,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
        'class' => 'honzi-page-menu',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'no_title__',
        ),
        'parent' => 'main',
      ),
      1 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
          1 => 3,
        ),
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'no_title',
        ),
        'parent' => '1',
        'class' => 'honzi-page-header honzi-header-student',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'no_title_',
        ),
        'parent' => '1',
        'class' => 'honzi-page-content',
      ),
      'no_title' => array(
        'type' => 'region',
        'title' => 'No Title',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'no_title_' => array(
        'type' => 'region',
        'title' => 'No Title',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      'no_title__' => array(
        'type' => 'region',
        'title' => 'No Title',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'no_title' => NULL,
      'no_title_' => NULL,
      'no_title__' => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Student Employees';
  $display->uuid = 'd295f0b1-b15c-4247-ae0b-ece37dbb4099';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-22272129-1fa9-4175-b93c-66dcf6ca351d';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Student Employees',
      'body' => '<p>Student Employees</p>
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
      'css_class' => 'honzi-page-header honzi-header-student',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '22272129-1fa9-4175-b93c-66dcf6ca351d';
    $display->content['new-22272129-1fa9-4175-b93c-66dcf6ca351d'] = $pane;
    $display->panels['middle'][0] = 'new-22272129-1fa9-4175-b93c-66dcf6ca351d';
    $pane = new stdClass();
    $pane->pid = 'new-8accde88-dce9-473b-a650-7bce48d8d099';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'lhrd_student_index';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'honzi-page-content',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8accde88-dce9-473b-a650-7bce48d8d099';
    $display->content['new-8accde88-dce9-473b-a650-7bce48d8d099'] = $pane;
    $display->panels['middle'][1] = 'new-8accde88-dce9-473b-a650-7bce48d8d099';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['student_employees_index_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'student_job_listings';
  $page->task = 'page';
  $page->admin_title = 'Student Job Listings';
  $page->admin_description = '';
  $page->path = 'job-seekers/student-jobs';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_student_job_listings_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'student_job_listings';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Job Seekers
Student Jobs',
    'panels_breadcrumbs_paths' => 'job-seekers
<none>',
    'panels_breadcrumbs_home' => 0,
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
          1 => 1,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
        'class' => 'honzi-page-menu',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'no_title__',
        ),
        'parent' => 'main',
      ),
      1 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
          1 => 3,
        ),
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'no_title',
        ),
        'parent' => '1',
        'class' => 'honzi-page-header honzi-header-student',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'no_title_',
        ),
        'parent' => '1',
        'class' => 'honzi-page-content-table',
      ),
      'no_title' => array(
        'type' => 'region',
        'title' => 'No Title',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'no_title_' => array(
        'type' => 'region',
        'title' => 'No Title',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      'no_title__' => array(
        'type' => 'region',
        'title' => 'No Title',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'no_title' => NULL,
      'no_title_' => NULL,
      'no_title__' => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Student Jobs';
  $display->uuid = '5aaed960-4825-4481-80a7-03e37787a751';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-74fce0bb-3682-4046-ad24-1cfd6cff2839';
    $pane->panel = 'middle';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'panels_breadcrumbs_admin_title' => '',
      'panels_breadcrumbs_state' => 0,
      'panels_breadcrumbs_titles' => '',
      'panels_breadcrumbs_paths' => '',
      'panels_breadcrumbs_home' => 0,
      'override_title' => 0,
      'override_title_text' => '',
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
    $pane->uuid = '74fce0bb-3682-4046-ad24-1cfd6cff2839';
    $display->content['new-74fce0bb-3682-4046-ad24-1cfd6cff2839'] = $pane;
    $display->panels['middle'][0] = 'new-74fce0bb-3682-4046-ad24-1cfd6cff2839';
    $pane = new stdClass();
    $pane->pid = 'new-b57902d4-f527-4e48-ab95-d7758e4409ff';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Student Library Job Postings',
      'body' => '<p>Student Library Job Postings</p>
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
      'css_class' => 'honzi-page-content-table honzi-joblistings-big',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b57902d4-f527-4e48-ab95-d7758e4409ff';
    $display->content['new-b57902d4-f527-4e48-ab95-d7758e4409ff'] = $pane;
    $display->panels['middle'][1] = 'new-b57902d4-f527-4e48-ab95-d7758e4409ff';
    $pane = new stdClass();
    $pane->pid = 'new-9f29844c-4e77-407f-9018-88abf0ade459';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'lhrd_howtoapply_student';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'honzi-page-content-table',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9f29844c-4e77-407f-9018-88abf0ade459';
    $display->content['new-9f29844c-4e77-407f-9018-88abf0ade459'] = $pane;
    $display->panels['middle'][2] = 'new-9f29844c-4e77-407f-9018-88abf0ade459';
    $pane = new stdClass();
    $pane->pid = 'new-87ecdccb-43dd-48d8-ad28-59d8900a180f';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'view_student_jobs';
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
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 1,
      'override_title_text' => 'Job Postings',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'honzi-page-content-table',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '87ecdccb-43dd-48d8-ad28-59d8900a180f';
    $display->content['new-87ecdccb-43dd-48d8-ad28-59d8900a180f'] = $pane;
    $display->panels['middle'][3] = 'new-87ecdccb-43dd-48d8-ad28-59d8900a180f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['student_job_listings'] = $page;

  return $pages;

}
