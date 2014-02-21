<?php
/**
 * @file
 * student_job.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function student_job_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'lhrd_howtoapply_student';
  $mini->category = 'LHRD';
  $mini->admin_title = 'LHRD HowToApply Student';
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
  $display->uuid = 'cf6718aa-9f12-4741-b4b9-4d9aa0a092ea';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1778d633-5127-4321-91df-1e58f5e25555';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'How to Apply',
      'body' => '<ol>
	<li>Choose the job you\'d like to apply for by clicking on the job title.</li>
	<li>Click the \'Apply\' button to download an application.</li>
	<li>Fill out the application and bring it to 110 Doe Library to arrange an interview with Judy Deliramich, Student Recruitment Coordinator.</li>
</ol>

<p>If you have any questions, <a href="../contact">contact the Student Employment Coordinator</a>.</p>
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
    $pane->uuid = '1778d633-5127-4321-91df-1e58f5e25555';
    $display->content['new-1778d633-5127-4321-91df-1e58f5e25555'] = $pane;
    $display->panels['middle'][0] = 'new-1778d633-5127-4321-91df-1e58f5e25555';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-1778d633-5127-4321-91df-1e58f5e25555';
  $mini->display = $display;
  $export['lhrd_howtoapply_student'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'lhrd_student_index';
  $mini->category = 'LHRD';
  $mini->admin_title = 'LHRD Student Index';
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
  $display->title = 'How to Apply';
  $display->uuid = '0fa5ebe4-56ca-4fb3-9899-e6d4aaad0e4f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bf806111-9bcd-4692-8407-ba201d7a1681';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec posuere eros vitae lobortis interdum. Duis blandit tellus ac ligula feugiat, eu tristique erat mattis. Donec lacus velit, gravida et mauris semper, elementum viverra massa. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer vestibulum, enim sit amet laoreet ultrices, lacus purus pharetra odio, a lacinia neque nisi id quam. Aenean at aliquet tellus, ut placerat nunc. Suspendisse quis metus consectetur, rhoncus justo et, ullamcorper enim. Praesent congue eros at augue dapibus, eget varius velit dignissim. Cras facilisis eros a orci pulvinar mollis. Etiam euismod arcu vitae diam iaculis, porta faucibus erat ultricies. Nam suscipit non neque sed fermentum. Vivamus id risus at purus egestas sagittis placerat eget nulla. Quisque ac elementum urna. Donec eu ante nulla. Phasellus semper adipiscing augue, sit amet fringilla lectus aliquet id.</p>

<p>Vivamus ultricies eget arcu et vestibulum. Aenean pulvinar dui et erat dictum rutrum. Nam venenatis feugiat dolor ut consequat. Curabitur in pellentesque tellus. Cras porta dolor leo, id mattis ligula pulvinar non. Sed magna nulla, laoreet in massa vel, eleifend vulputate massa. Vestibulum congue dui id dui molestie venenatis et non diam. Donec ac libero in tellus condimentum placerat non in erat. Proin nibh purus, facilisis sit amet tortor sed, commodo accumsan erat. Nunc eu purus scelerisque, convallis sapien quis, rhoncus augue. Quisque nunc sem, congue mattis ante nec, imperdiet semper justo.</p>

<p>Ut luctus non metus eu viverra. Nam sagittis semper quam nec hendrerit. Morbi egestas pellentesque urna, sit amet interdum turpis vulputate ut. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Nunc dignissim in arcu sit amet iaculis. Donec at dolor non nibh bibendum iaculis. Nulla suscipit consequat justo, nec dapibus ipsum porta sed. Donec suscipit semper augue luctus pretium. Cras nec gravida justo, vel venenatis velit. Aenean scelerisque consectetur odio, ut porta leo iaculis eu. Nulla facilisi.</p>

<p>Etiam non aliquet lectus. Ut turpis dolor, malesuada quis nulla id, mattis consequat sem. Ut pharetra pretium ligula. Praesent in semper nibh, eget auctor tortor. Cras ultrices id dui ut feugiat. Suspendisse a risus eget eros dictum interdum in in orci. Pellentesque eleifend vehicula risus nec commodo. Nunc tempus adipiscing odio, in consequat diam. Mauris consequat placerat nunc, et fringilla orci. Ut dictum risus sed felis laoreet, consequat suscipit libero adipiscing. Nunc varius nibh ligula, eu elementum urna posuere feugiat. Suspendisse mollis sollicitudin nunc eu blandit. Donec dignissim, ante ac euismod molestie, felis eros iaculis sem, at adipiscing leo mauris id felis. Praesent scelerisque placerat justo, at accumsan ipsum venenatis eu. Aenean feugiat iaculis lacinia. Cras molestie risus vel elit blandit, eu congue metus gravida.</p>

<p>Mauris ac lectus nec lectus lacinia tincidunt eget at lectus. Sed at enim ornare, eleifend ipsum vitae, gravida mauris. Nulla eu pretium urna. Maecenas in lacinia libero, eget interdum velit. Vivamus mattis et lorem quis iaculis. Aenean vehicula, tortor ac tincidunt hendrerit, ipsum nibh luctus massa, quis accumsan urna magna non mi. Donec non lorem in ligula interdum vehicula vitae in magna. Nullam euismod neque id leo aliquet, et semper lorem pulvinar. Sed accumsan lacinia egestas. In vel metus aliquam, vehicula nisi a, aliquam diam. Praesent sollicitudin adipiscing varius.</p>
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
    $pane->uuid = 'bf806111-9bcd-4692-8407-ba201d7a1681';
    $display->content['new-bf806111-9bcd-4692-8407-ba201d7a1681'] = $pane;
    $display->panels['middle'][0] = 'new-bf806111-9bcd-4692-8407-ba201d7a1681';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-bf806111-9bcd-4692-8407-ba201d7a1681';
  $mini->display = $display;
  $export['lhrd_student_index'] = $mini;

  return $export;
}
