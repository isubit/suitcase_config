<?php
/**
 * @file
 * suitcase_config.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function suitcase_config_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_expanded_category';
  $strongarm->value = 1;
  $export['taxonomy_menu_expanded_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_sync_category';
  $strongarm->value = 1;
  $export['taxonomy_menu_sync_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_vocab_menu_category';
  $strongarm->value = 'menu-categories-mega-menu';
  $export['taxonomy_menu_vocab_menu_category'] = $strongarm;

  return $export;
}
