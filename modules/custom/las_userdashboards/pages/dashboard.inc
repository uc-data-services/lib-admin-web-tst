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
        'name' => 'perm',
        'settings' => array(
          'perm' => 'have total control',
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
  $pane->pid = 'new-d5480466-359c-4381-a0b0-19700df39afb';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'las_dashboard_user_views-panel_pane_1';
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
  $pane->locks = array();
  $pane->uuid = 'd5480466-359c-4381-a0b0-19700df39afb';
  $display->content['new-d5480466-359c-4381-a0b0-19700df39afb'] = $pane;
  $display->panels['left'][0] = 'new-d5480466-359c-4381-a0b0-19700df39afb';
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
  $pane->position = 1;
  $pane->locks = '';
  $pane->uuid = '45e054e8-c224-4669-a26c-31224fb3b7c2';
  $display->content['new-45e054e8-c224-4669-a26c-31224fb3b7c2'] = $pane;
  $display->panels['left'][1] = 'new-45e054e8-c224-4669-a26c-31224fb3b7c2';
  $pane = new stdClass();
  $pane->pid = 'new-594b51b0-be2a-42c7-8d5b-30e5f23d7511';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'las_dashboard_views-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 6,
            1 => 3,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '594b51b0-be2a-42c7-8d5b-30e5f23d7511';
  $display->content['new-594b51b0-be2a-42c7-8d5b-30e5f23d7511'] = $pane;
  $display->panels['left'][2] = 'new-594b51b0-be2a-42c7-8d5b-30e5f23d7511';
  $pane = new stdClass();
  $pane->pid = 'new-1843217b-88bc-4c6c-98e4-5b71d0439981';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'las_dashboard_views-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 4,
            1 => 5,
            2 => 3,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '1843217b-88bc-4c6c-98e4-5b71d0439981';
  $display->content['new-1843217b-88bc-4c6c-98e4-5b71d0439981'] = $pane;
  $display->panels['left'][3] = 'new-1843217b-88bc-4c6c-98e4-5b71d0439981';
  $pane = new stdClass();
  $pane->pid = 'new-7105b1f1-5d63-4269-8b48-1b00fd7b7c02';
  $pane->panel = 'left';
  $pane->type = 'overview_content';
  $pane->subtype = 'overview_content';
  $pane->shown = TRUE;
  $pane->access = array(
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
  );
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
  $pane->position = 4;
  $pane->locks = '';
  $pane->uuid = '7105b1f1-5d63-4269-8b48-1b00fd7b7c02';
  $display->content['new-7105b1f1-5d63-4269-8b48-1b00fd7b7c02'] = $pane;
  $display->panels['left'][4] = 'new-7105b1f1-5d63-4269-8b48-1b00fd7b7c02';
  $pane = new stdClass();
  $pane->pid = 'new-47355254-3ab4-4060-abcc-e8cb38d679c5';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'control_users_panes-pane_tc_new_users';
  $pane->shown = TRUE;
  $pane->access = array(
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
  );
  $pane->configuration = array(
    'items_per_page' => '10',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '47355254-3ab4-4060-abcc-e8cb38d679c5';
  $display->content['new-47355254-3ab4-4060-abcc-e8cb38d679c5'] = $pane;
  $display->panels['left'][5] = 'new-47355254-3ab4-4060-abcc-e8cb38d679c5';
  $pane = new stdClass();
  $pane->pid = 'new-8051ca56-335d-462d-975e-47484b777dd6';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'control_content_panes-pane_tc_new';
  $pane->shown = TRUE;
  $pane->access = array(
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
  );
  $pane->configuration = array(
    'items_per_page' => '10',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = '';
  $pane->uuid = '8051ca56-335d-462d-975e-47484b777dd6';
  $display->content['new-8051ca56-335d-462d-975e-47484b777dd6'] = $pane;
  $display->panels['left'][6] = 'new-8051ca56-335d-462d-975e-47484b777dd6';
  $pane = new stdClass();
  $pane->pid = 'new-d01a6f6d-6486-4c2c-9698-680023c886f0';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'las_dashboard_views-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 6,
            1 => 3,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd01a6f6d-6486-4c2c-9698-680023c886f0';
  $display->content['new-d01a6f6d-6486-4c2c-9698-680023c886f0'] = $pane;
  $display->panels['right'][0] = 'new-d01a6f6d-6486-4c2c-9698-680023c886f0';
  $pane = new stdClass();
  $pane->pid = 'new-a28adeec-259e-4f2e-bfc9-3477f199410d';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'las_dashboard_views-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 4,
            1 => 5,
            2 => 3,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a28adeec-259e-4f2e-bfc9-3477f199410d';
  $display->content['new-a28adeec-259e-4f2e-bfc9-3477f199410d'] = $pane;
  $display->panels['right'][1] = 'new-a28adeec-259e-4f2e-bfc9-3477f199410d';
  $pane = new stdClass();
  $pane->pid = 'new-89e1c1b0-79e4-4bb3-9f74-c60b0c587052';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'las_dashboard_views-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 4,
            1 => 5,
            2 => 3,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '89e1c1b0-79e4-4bb3-9f74-c60b0c587052';
  $display->content['new-89e1c1b0-79e4-4bb3-9f74-c60b0c587052'] = $pane;
  $display->panels['right'][2] = 'new-89e1c1b0-79e4-4bb3-9f74-c60b0c587052';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = '0';
$handler->conf['display'] = $display;
$page->default_handlers[$handler->name] = $handler;

