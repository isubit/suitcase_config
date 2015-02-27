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

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'suitcase_config_background_color';
  $strongarm->value = '#f4f3e8';
  $export['suitcase_config_background_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'suitcase_config_footer_color';
  $strongarm->value = '#CEC9BB';
  $export['suitcase_config_footer_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'suitcase_config_header_border_color';
  $strongarm->value = '#DFBD00';
  $export['suitcase_config_header_border_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'suitcase_config_header_color';
  $strongarm->value = '#CB1A2A';
  $export['suitcase_config_header_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'suitcase_config_primary_text_color';
  $strongarm->value = '#990000';
  $export['suitcase_config_primary_text_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'suitcase_config_secondary_text_color';
  $strongarm->value = '#ffffff';
  $export['suitcase_config_secondary_text_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'suitcase_config_isu_nameplate_display';
  $strongarm->value = 1;
  $export['suitcase_config_isu_nameplate_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'suitcase_config_blackbar_display';
  $strongarm->value = 1;
  $export['suitcase_config_blackbar_display'] = $strongarm;

  return $export;
}
