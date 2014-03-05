<?php

/**
* Implementation of hook_default_page_manager_pages().
*/
function las_userdashboards_default_page_manager_pages() {
  $pages = array();

  include_once 'pages/dashboard.inc';
  $pages[$page->name] = $page;

  return $pages;
}

?>
