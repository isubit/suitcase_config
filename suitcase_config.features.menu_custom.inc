<?php
/**
 * @file
 * suitcase_config.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function suitcase_config_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-categories-mega-menu.
  $menus['menu-categories-mega-menu'] = array(
    'menu_name' => 'menu-categories-mega-menu',
    'title' => 'Categories Mega Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Categories Mega Menu');

  return $menus;
}
