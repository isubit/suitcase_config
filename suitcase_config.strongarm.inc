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
  $strongarm->name = 'theme_default';
  $strongarm->value = 'suitcase';
  $export['theme_default'] = $strongarm;

  return $export;
}
