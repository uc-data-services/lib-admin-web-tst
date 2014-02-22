<div id="wrap">
  <?php if ($page['topbar']){?>
  <div id="topbar">
    <div id="topbar-inner">
      <?php print render($page['topbar'])?>
    </div>
  </div>
  <?php }?>
  <div class="container">
    <div class="sixteen columns clearfix" id="header">
      <div class="inner">
        <?php if ($logo){?>
        <a href="<?php print $front_page?>" id="logo" rel="home" title="<?php print t('Home')?>">
          <img src="<?php print $logo?>" alt="<?php print t('Home')?>" />
        </a>
        <?php }?>
      </div>
    </div>
    <div class="sixteen columns clearfix" id="navigation">
      <div class="menu-header">
        <?php if($page['header']){?>
        <?php print drupal_render($page['header'])?>
        <?php }else{?>
        <?php
        if(module_exists('i18n_menu')){
          $main_menu_tree=i18n_menu_translated_tree(variable_get('menu_main_links_source', 'main-menu'));
        }else{
          $main_menu_tree=menu_tree(variable_get('menu_main_links_source', 'main-menu'));
        }?>
        <div class="content"><?php print drupal_render($main_menu_tree)?></div>
      <?php }?>
      </div>
    </div>
    <div class="sixteen columns clearfix" id="turkeywrap">
      <?php if($page['sidebar_first']){?>
      <div class="eleven columns" id="content">
      <?php }else{?>
      <div class="sixteen columns clearfix" id="content">
      <?php }?>
        <?php if($messages){?>
        <div id="messages"><?php print $messages?></div>
        <?php }?>
        <?php if($breadcrumb){?>
        <div id="breadcrumb"><?php print $breadcrumb?></div>
        <?php }?>
        <div id="main">
          <?php if($page['highlighted']){?>
          <div class="clearfix" id="highlighted"><?php print render($page['highlighted'])?></div>
          <?php }?>
          <?php print render($title_prefix)?>
          <?php if($title){?>
          <h1 class="title" id="page-title"><?php print $title?></h1>
          <?php }?>
          <?php print render($title_suffix)?>
          <?php if($tabs){?>
          <div class="tabs"><?php print render($tabs)?></div>
          <?php }?>
          <?php print render($page['help'])?>
          <?php if($action_links){?>
          <ul class="action-links"><?php print render($action_links)?></ul>
          <?php }?>
          <?php print render($page['content'])?>
          <?php print $feed_icons?>
        </div>
      </div>
      <?php if($page['sidebar_first']){?>
      <div class="five columns" id="sidebar"><?php print render($page['sidebar_first'])?></div>
      <?php }?>
    </div>
    <div class="clear"></div>
    <?php if($page['featured_left'] || $page['featured_right']){?>
    <div class="sixteen columns clearfix" id="featured">
      <?php if($page['featured_left'] && $page['featured_right']){?>
      <div class="one_half"><?php print render($page['featured_left'])?></div>
      <div class="one_half last"><?php print render($page['featured_right'])?></div>
      <?php }else{?>
      <?php print render($page['featured_left'])?>
      <?php print render($page['featured_right'])?>
      <?php }?>
    </div>
    <?php }?>
  </div>
  <?php if($page['footer']){?>
  <div class="sixteen columns clearfix" id="footer">
    <div id="footerwrap">
      <div class="one_third"><?php print render($page['footer_first'])?></div>
      <div class="one_third"><?php print render($page['footer_second'])?></div>
      <div class="one_third"><?php print render($page['footer_third'])?></div>
      <div class="one_third last"><?php print render($page['footer'])?></div>
    </div>
  </div>
  <?php }?>
</div>
