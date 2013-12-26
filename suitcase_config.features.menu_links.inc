<?php
/**
 * @file
 * suitcase_config.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function suitcase_config_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_home:node/41
  $menu_links['main-menu_home:node/41'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41',
    'router_path' => 'node/%',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_home:node/41',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Home');


  return $menu_links;
}
