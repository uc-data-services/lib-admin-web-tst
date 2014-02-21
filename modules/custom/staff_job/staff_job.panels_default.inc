<?php
/**
 * @file
 * staff_job.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function staff_job_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'lhrd_howtoapply_staff';
  $mini->category = 'LHRD';
  $mini->admin_title = 'LHRD HowToApply Staff';
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
    $display->content['new-1'] = $pane;
    $display->panels['middle'][0] = 'new-1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1';
  $mini->display = $display;
  $export['lhrd_howtoapply_staff'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'lhrd_staff_index';
  $mini->category = 'LHRD';
  $mini->admin_title = 'LHRD Staff Index';
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
    $display->content['new-2'] = $pane;
    $display->panels['middle'][0] = 'new-2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2';
  $mini->display = $display;
  $export['lhrd_staff_index'] = $mini;

  return $export;
}
