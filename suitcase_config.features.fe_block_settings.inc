<?php
/**
 * @file
 * suitcase_config.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function suitcase_config_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'suitcase' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'suitcase',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['tb_megamenu-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'tb_megamenu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'suitcase' => array(
        'region' => 'branding',
        'status' => 1,
        'theme' => 'suitcase',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
