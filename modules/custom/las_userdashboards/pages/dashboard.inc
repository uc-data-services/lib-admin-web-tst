<?php

$page = new stdClass();
$page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
$page->api_version = 1;
$page->name = 'dashboard';
$page->task = 'page';
$page->admin_title = 'Total Control administrative dashboard';
$page->admin_description = '';
$page->path = 'admin/dashboard';
$page->access = array(
  'plugins' => array(
    0 => array(
      'name' => 'perm',
      'settings' => array(
        'perm' => 'have total control',
      ),
      'context' => 'logged-in-user',
      'not' => FALSE,
    ),
  ),
  'logic' => 'and',
);
$page->menu = array(
  'type' => 'normal',
  'title' => 'Dashboard',
  'name' => 'management',
  'weight' => '-100',
  'parent' => array(
    'type' => 'normal',
    'title' => 'Dashboard',
    'name' => 'management',
    'weight' => '0',
  ),
);
$page->arguments = array();
$page->conf = array(
  'admin_paths' => TRUE,
);
$page->default_handlers = array();
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_dashboard_panel_context';
$handler->task = 'page';
$handler->subtask = 'dashboard';
$handler->handler = 'panel_context';
$handler->weight = -30;
$handler->conf = array(
  'title' => 'Admin Dashboard',
  'no_blocks' => 0,
  'pipeline' => 'ipe',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'access' => array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  ),
);
$display = new panels_display();
$display->layout = 'twocol_stacked';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'middle' => NULL,
    'top' => NULL,
    'left' => NULL,
    'right' => NULL,
    'bottom' => NULL,
  ),
);
$display->cache = array();
$display->title = 'Dashboard';
$display->uuid = 'ace76163-aa81-4853-bbe6-c89f10d83ec5';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-45e054e8-c224-4669-a26c-31224fb3b7c2';
  $pane->panel = 'left';
  $pane->type = 'create';
  $pane->subtype = 'create';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'types' => array(
      'article' => 'article',
      'project' => 'project',
      'page' => 0,
    ),
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
  $pane->locks = '';
  $pane->uuid = '45e054e8-c224-4669-a26c-31224fb3b7c2';
  $display->content['new-45e054e8-c224-4669-a26c-31224fb3b7c2'] = $pane;
  $display->panels['left'][0] = 'new-45e054e8-c224-4669-a26c-31224fb3b7c2';
  $pane = new stdClass();
  $pane->pid = 'new-7105b1f1-5d63-4269-8b48-1b00fd7b7c02';
  $pane->panel = 'left';
  $pane->type = 'overview_content';
  $pane->subtype = 'overview_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'types' => array(
      'article' => 'article',
      'page' => 'page',
      'project' => 'project',
      'video' => 'video',
    ),
    'comments' => array(
      'article' => 'article',
      'page' => 0,
      'project' => 0,
      'video' => 0,
    ),
    'spam' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = '';
  $pane->uuid = '7105b1f1-5d63-4269-8b48-1b00fd7b7c02';
  $display->content['new-7105b1f1-5d63-4269-8b48-1b00fd7b7c02'] = $pane;
  $display->panels['left'][1] = 'new-7105b1f1-5d63-4269-8b48-1b00fd7b7c02';
  $pane = new stdClass();
  $pane->pid = 'new-47355254-3ab4-4060-abcc-e8cb38d679c5';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'control_users_panes-pane_tc_new_users';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '10',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '47355254-3ab4-4060-abcc-e8cb38d679c5';
  $display->content['new-47355254-3ab4-4060-abcc-e8cb38d679c5'] = $pane;
  $display->panels['left'][2] = 'new-47355254-3ab4-4060-abcc-e8cb38d679c5';
  $pane = new stdClass();
  $pane->pid = 'new-8051ca56-335d-462d-975e-47484b777dd6';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'control_content_panes-pane_tc_new';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '10',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = '';
  $pane->uuid = '8051ca56-335d-462d-975e-47484b777dd6';
  $display->content['new-8051ca56-335d-462d-975e-47484b777dd6'] = $pane;
  $display->panels['left'][3] = 'new-8051ca56-335d-462d-975e-47484b777dd6';
  $pane = new stdClass();
  $pane->pid = 'new-8d53ec91-b716-478e-93c1-ccdcb94c7bd3';
  $pane->panel = 'right';
  $pane->type = 'menus';
  $pane->subtype = 'menus';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'item1' => NULL,
    'item2' => NULL,
    'override_title' => 0,
    'override_title_text' => '',
    'menus' => array(
      'main-menu' => 'main-menu',
      'navigation' => 'navigation',
      'devel' => 0,
      'management' => 0,
      'user-menu' => 0,
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = '';
  $pane->uuid = '8d53ec91-b716-478e-93c1-ccdcb94c7bd3';
  $display->content['new-8d53ec91-b716-478e-93c1-ccdcb94c7bd3'] = $pane;
  $display->panels['right'][0] = 'new-8d53ec91-b716-478e-93c1-ccdcb94c7bd3';
  $pane = new stdClass();
  $pane->pid = 'new-c7ec05ed-66fd-43e6-a40c-eff749ec8da4';
  $pane->panel = 'right';
  $pane->type = 'node_types';
  $pane->subtype = 'node_types';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'types' => array(
      'article' => 'article',
      'page' => 'page',
      'project' => 'project',
      'video' => 'video',
    ),
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
  $pane->locks = '';
  $pane->uuid = 'c7ec05ed-66fd-43e6-a40c-eff749ec8da4';
  $display->content['new-c7ec05ed-66fd-43e6-a40c-eff749ec8da4'] = $pane;
  $display->panels['right'][1] = 'new-c7ec05ed-66fd-43e6-a40c-eff749ec8da4';
  $pane = new stdClass();
  $pane->pid = 'new-1154f0c5-d96e-43f8-9bc2-1eb272a01912';
  $pane->panel = 'right';
  $pane->type = 'taxonomy';
  $pane->subtype = 'taxonomy';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'vids' => array(
      0 => '2',
      1 => '1',
    ),
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
  $pane->locks = '';
  $pane->uuid = '1154f0c5-d96e-43f8-9bc2-1eb272a01912';
  $display->content['new-1154f0c5-d96e-43f8-9bc2-1eb272a01912'] = $pane;
  $display->panels['right'][2] = 'new-1154f0c5-d96e-43f8-9bc2-1eb272a01912';
  $pane = new stdClass();
  $pane->pid = 'new-ba22cc72-c160-45c4-9365-1b47869c5ba0';
  $pane->panel = 'right';
  $pane->type = 'panel_pages';
  $pane->subtype = 'panel_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'item1' => NULL,
    'item2' => NULL,
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = '';
  $pane->uuid = 'ba22cc72-c160-45c4-9365-1b47869c5ba0';
  $display->content['new-ba22cc72-c160-45c4-9365-1b47869c5ba0'] = $pane;
  $display->panels['right'][3] = 'new-ba22cc72-c160-45c4-9365-1b47869c5ba0';
  $pane = new stdClass();
  $pane->pid = 'new-0b75894d-8992-4571-b348-6c60ad2f0f54';
  $pane->panel = 'top';
  $pane->type = 'welcome';
  $pane->subtype = 'welcome';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = '';
  $pane->uuid = '0b75894d-8992-4571-b348-6c60ad2f0f54';
  $display->content['new-0b75894d-8992-4571-b348-6c60ad2f0f54'] = $pane;
  $display->panels['top'][0] = 'new-0b75894d-8992-4571-b348-6c60ad2f0f54';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = '0';
$handler->conf['display'] = $display;
$page->default_handlers[$handler->name] = $handler;
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_dashboard_panel_context_4';
$handler->task = 'page';
$handler->subtask = 'dashboard';
$handler->handler = 'panel_context';
$handler->weight = -28;
$handler->conf = array(
  'title' => 'LBSAnalyst Dashboard',
  'no_blocks' => 0,
  'pipeline' => 'ipe',
  'css_id' => '',
  'css' => '',
  'contexts' => array(
    0 => array(
      'identifier' => 'User',
      'keyword' => 'user',
      'name' => 'user',
      'type' => 'current',
      'uid' => '',
      'id' => 1,
    ),
  ),
  'relationships' => array(),
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'access' => array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  ),
);
$display = new panels_display();
$display->layout = 'twocol_stacked';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'middle' => NULL,
    'top' => NULL,
    'left' => NULL,
    'right' => NULL,
    'bottom' => NULL,
  ),
);
$display->cache = array();
$display->title = 'My Dashboard';
$display->uuid = '6fae6620-1148-43fb-902e-7a4263ff6c25';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ddf243c0-4d04-4491-913d-5cad15f53d52';
  $pane->panel = 'left';
  $pane->type = 'create';
  $pane->subtype = 'create';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'types' => array(
      'job_academic' => 'job_academic',
      'job_staff' => 'job_staff',
      'job_student' => 'job_student',
      'travel_form' => 'travel_form',
      'travel_training_development_reim' => 'travel_training_development_reim',
      'unit' => 0,
      'panel' => 0,
      'article' => 0,
      'book' => 0,
      'lhrd_news' => 0,
      'lhrd_resource' => 0,
      'lhrd_student_position' => 0,
      'page' => 0,
    ),
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
  $pane->locks = '';
  $pane->uuid = 'ddf243c0-4d04-4491-913d-5cad15f53d52';
  $display->content['new-ddf243c0-4d04-4491-913d-5cad15f53d52'] = $pane;
  $display->panels['left'][0] = 'new-ddf243c0-4d04-4491-913d-5cad15f53d52';
  $pane = new stdClass();
  $pane->pid = 'new-212e6255-817d-41e5-b810-1ffea16b0200';
  $pane->panel = 'top';
  $pane->type = 'token';
  $pane->subtype = 'user:name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'sanitize' => 1,
    'context' => 'context_user_1',
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
  $pane->uuid = '212e6255-817d-41e5-b810-1ffea16b0200';
  $display->content['new-212e6255-817d-41e5-b810-1ffea16b0200'] = $pane;
  $display->panels['top'][0] = 'new-212e6255-817d-41e5-b810-1ffea16b0200';
  $pane = new stdClass();
  $pane->pid = 'new-fe23e7b8-2122-41ef-a09d-9859d36e9bfd';
  $pane->panel = 'top';
  $pane->type = 'token';
  $pane->subtype = 'user:field_user_department';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'sanitize' => 1,
    'context' => 'context_user_1',
    'override_title' => 1,
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
  $pane->uuid = 'fe23e7b8-2122-41ef-a09d-9859d36e9bfd';
  $display->content['new-fe23e7b8-2122-41ef-a09d-9859d36e9bfd'] = $pane;
  $display->panels['top'][1] = 'new-fe23e7b8-2122-41ef-a09d-9859d36e9bfd';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = '0';
$handler->conf['display'] = $display;
$page->default_handlers[$handler->name] = $handler;
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_dashboard_panel_context_3';
$handler->task = 'page';
$handler->subtask = 'dashboard';
$handler->handler = 'panel_context';
$handler->weight = -26;
$handler->conf = array(
  'title' => 'HRAnalyst Dashboard',
  'no_blocks' => 0,
  'pipeline' => 'ipe',
  'css_id' => '',
  'css' => '',
  'contexts' => array(
    0 => array(
      'identifier' => 'User',
      'keyword' => 'user',
      'name' => 'user',
      'type' => 'current',
      'uid' => '',
      'id' => 1,
    ),
  ),
  'relationships' => array(),
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'access' => array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 6,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  ),
);
$display = new panels_display();
$display->layout = 'twocol_stacked';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'middle' => NULL,
    'top' => NULL,
    'left' => NULL,
    'right' => NULL,
    'bottom' => NULL,
  ),
);
$display->cache = array();
$display->title = 'My Dashboard';
$display->uuid = '6fae6620-1148-43fb-902e-7a4263ff6c25';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ddf243c0-4d04-4491-913d-5cad15f53d52';
  $pane->panel = 'left';
  $pane->type = 'create';
  $pane->subtype = 'create';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'types' => array(
      'job_academic' => 'job_academic',
      'job_staff' => 'job_staff',
      'job_student' => 'job_student',
      'travel_form' => 'travel_form',
      'travel_training_development_reim' => 'travel_training_development_reim',
      'unit' => 0,
      'panel' => 0,
      'article' => 0,
      'book' => 0,
      'lhrd_news' => 0,
      'lhrd_resource' => 0,
      'lhrd_student_position' => 0,
      'page' => 0,
    ),
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
  $pane->locks = '';
  $pane->uuid = 'ddf243c0-4d04-4491-913d-5cad15f53d52';
  $display->content['new-ddf243c0-4d04-4491-913d-5cad15f53d52'] = $pane;
  $display->panels['left'][0] = 'new-ddf243c0-4d04-4491-913d-5cad15f53d52';
  $pane = new stdClass();
  $pane->pid = 'new-212e6255-817d-41e5-b810-1ffea16b0200';
  $pane->panel = 'top';
  $pane->type = 'token';
  $pane->subtype = 'user:name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'sanitize' => 1,
    'context' => 'context_user_1',
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
  $pane->uuid = '212e6255-817d-41e5-b810-1ffea16b0200';
  $display->content['new-212e6255-817d-41e5-b810-1ffea16b0200'] = $pane;
  $display->panels['top'][0] = 'new-212e6255-817d-41e5-b810-1ffea16b0200';
  $pane = new stdClass();
  $pane->pid = 'new-fe23e7b8-2122-41ef-a09d-9859d36e9bfd';
  $pane->panel = 'top';
  $pane->type = 'token';
  $pane->subtype = 'user:field_user_department';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'sanitize' => 1,
    'context' => 'context_user_1',
    'override_title' => 1,
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
  $pane->uuid = 'fe23e7b8-2122-41ef-a09d-9859d36e9bfd';
  $display->content['new-fe23e7b8-2122-41ef-a09d-9859d36e9bfd'] = $pane;
  $display->panels['top'][1] = 'new-fe23e7b8-2122-41ef-a09d-9859d36e9bfd';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = '0';
$handler->conf['display'] = $display;
$page->default_handlers[$handler->name] = $handler;
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_dashboard_panel_context_2';
$handler->task = 'page';
$handler->subtask = 'dashboard';
$handler->handler = 'panel_context';
$handler->weight = -24;
$handler->conf = array(
  'title' => 'StudentSupervisor Dashboard',
  'no_blocks' => 0,
  'pipeline' => 'ipe',
  'css_id' => '',
  'css' => '',
  'contexts' => array(
    0 => array(
      'identifier' => 'User',
      'keyword' => 'user',
      'name' => 'user',
      'type' => 'current',
      'uid' => '',
      'id' => 1,
    ),
  ),
  'relationships' => array(),
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'access' => array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  ),
);
$display = new panels_display();
$display->layout = 'twocol_stacked';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'middle' => NULL,
    'top' => NULL,
    'left' => NULL,
    'right' => NULL,
    'bottom' => NULL,
  ),
);
$display->cache = array();
$display->title = 'My Dashboard';
$display->uuid = '524511a5-496e-4b54-aad0-3536ecea0661';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-bb446b4f-9eb4-4067-bf6f-018b04ec3869';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'view_student_jobs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'override_title' => 1,
    'override_title_text' => 'Currently Posted Jobs',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'bb446b4f-9eb4-4067-bf6f-018b04ec3869';
  $display->content['new-bb446b4f-9eb4-4067-bf6f-018b04ec3869'] = $pane;
  $display->panels['left'][0] = 'new-bb446b4f-9eb4-4067-bf6f-018b04ec3869';
  $pane = new stdClass();
  $pane->pid = 'new-571db449-1342-4dad-8c6f-9d3525ccafe3';
  $pane->panel = 'right';
  $pane->type = 'create';
  $pane->subtype = 'create';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'types' => array(
      'job_student' => 'job_student',
      'job_academic' => 0,
      'job_staff' => 0,
      'travel_form' => 0,
      'travel_training_development_reim' => 0,
      'unit' => 0,
      'panel' => 0,
      'article' => 0,
      'book' => 0,
      'lhrd_news' => 0,
      'lhrd_resource' => 0,
      'lhrd_student_position' => 0,
      'page' => 0,
    ),
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
  $pane->uuid = '571db449-1342-4dad-8c6f-9d3525ccafe3';
  $display->content['new-571db449-1342-4dad-8c6f-9d3525ccafe3'] = $pane;
  $display->panels['right'][0] = 'new-571db449-1342-4dad-8c6f-9d3525ccafe3';
  $pane = new stdClass();
  $pane->pid = 'new-0dff1f9e-aa44-4ca3-8d85-98d3f7ea95a9';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'view_student_jobs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_2',
    'override_title' => 1,
    'override_title_text' => 'My Student Job Requests',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0dff1f9e-aa44-4ca3-8d85-98d3f7ea95a9';
  $display->content['new-0dff1f9e-aa44-4ca3-8d85-98d3f7ea95a9'] = $pane;
  $display->panels['right'][1] = 'new-0dff1f9e-aa44-4ca3-8d85-98d3f7ea95a9';
  $pane = new stdClass();
  $pane->pid = 'new-c59e3138-7ce1-48c3-b6d4-92cf17def4a0';
  $pane->panel = 'top';
  $pane->type = 'token';
  $pane->subtype = 'user:name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'sanitize' => 1,
    'context' => 'context_user_1',
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
  $pane->uuid = 'c59e3138-7ce1-48c3-b6d4-92cf17def4a0';
  $display->content['new-c59e3138-7ce1-48c3-b6d4-92cf17def4a0'] = $pane;
  $display->panels['top'][0] = 'new-c59e3138-7ce1-48c3-b6d4-92cf17def4a0';
  $pane = new stdClass();
  $pane->pid = 'new-6f963a61-7464-4898-9813-51cefd2f8db9';
  $pane->panel = 'top';
  $pane->type = 'token';
  $pane->subtype = 'user:field_user_department';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'sanitize' => 1,
    'context' => 'context_user_1',
    'override_title' => 1,
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
  $pane->uuid = '6f963a61-7464-4898-9813-51cefd2f8db9';
  $display->content['new-6f963a61-7464-4898-9813-51cefd2f8db9'] = $pane;
  $display->panels['top'][1] = 'new-6f963a61-7464-4898-9813-51cefd2f8db9';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = '0';
$handler->conf['display'] = $display;
$page->default_handlers[$handler->name] = $handler;


?>
