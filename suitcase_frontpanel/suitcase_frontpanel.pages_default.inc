<?php
/**
 * @file
 * suitcase_frontpanel.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function suitcase_frontpanel_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front';
  $page->task = 'page';
  $page->admin_title = 'front';
  $page->admin_description = 'front';
  $page->path = 'front';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => TRUE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'front';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'front-panel',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'omega_12_threecol_4_4_4_stacked';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
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
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
    'top' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8684b49f-f9dc-494a-bcf8-e00be0bdebdd';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f894acdd-586a-473f-8f3d-d3c6a6aec1e9';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'views-events-block_2';
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
    'css_class' => 'panel-pane-overflow',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f894acdd-586a-473f-8f3d-d3c6a6aec1e9';
  $display->content['new-f894acdd-586a-473f-8f3d-d3c6a6aec1e9'] = $pane;
  $display->panels['left'][0] = 'new-f894acdd-586a-473f-8f3d-d3c6a6aec1e9';
  $pane = new stdClass();
  $pane->pid = 'new-ab92fb28-bb69-47bb-bb6f-9fe175d4871e';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'views-news-block';
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
    'css_class' => 'panel-pane-overflow',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ab92fb28-bb69-47bb-bb6f-9fe175d4871e';
  $display->content['new-ab92fb28-bb69-47bb-bb6f-9fe175d4871e'] = $pane;
  $display->panels['middle'][0] = 'new-ab92fb28-bb69-47bb-bb6f-9fe175d4871e';
  $pane = new stdClass();
  $pane->pid = 'new-58b5acd2-8f0e-4a50-9508-1012c014d1f4';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'views-fb2fc43dce4ac8d1859576c2d1c70c5f';
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
    'css_class' => 'panel-pane-nostyle',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '58b5acd2-8f0e-4a50-9508-1012c014d1f4';
  $display->content['new-58b5acd2-8f0e-4a50-9508-1012c014d1f4'] = $pane;
  $display->panels['top'][0] = 'new-58b5acd2-8f0e-4a50-9508-1012c014d1f4';
  $pane = new stdClass();
  $pane->pid = 'new-1144a2fc-9c2b-4d46-aa13-2c8e39511f1e';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'search-form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'search',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'panel-pane-nostyle',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1144a2fc-9c2b-4d46-aa13-2c8e39511f1e';
  $display->content['new-1144a2fc-9c2b-4d46-aa13-2c8e39511f1e'] = $pane;
  $display->panels['top'][1] = 'new-1144a2fc-9c2b-4d46-aa13-2c8e39511f1e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front'] = $page;

  return $pages;

}
