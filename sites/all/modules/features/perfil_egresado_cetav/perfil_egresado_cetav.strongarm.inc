<?php
/**
 * @file
 * perfil_egresado_cetav.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function perfil_egresado_cetav_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_perfil_egresado';
  $strongarm->value = 0;
  $export['comment_anonymous_perfil_egresado'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_perfil_egresado';
  $strongarm->value = 1;
  $export['comment_default_mode_perfil_egresado'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_perfil_egresado';
  $strongarm->value = '50';
  $export['comment_default_per_page_perfil_egresado'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_perfil_egresado';
  $strongarm->value = 1;
  $export['comment_form_location_perfil_egresado'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_perfil_egresado';
  $strongarm->value = '2';
  $export['comment_perfil_egresado'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_perfil_egresado';
  $strongarm->value = '1';
  $export['comment_preview_perfil_egresado'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_perfil_egresado';
  $strongarm->value = 1;
  $export['comment_subject_field_perfil_egresado'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__perfil_egresado';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '16',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__perfil_egresado'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_perfil_egresado';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_perfil_egresado'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_perfil_egresado';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_perfil_egresado'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_perfil_egresado';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_perfil_egresado'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_perfil_egresado';
  $strongarm->value = '1';
  $export['node_preview_perfil_egresado'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_perfil_egresado';
  $strongarm->value = 1;
  $export['node_submitted_perfil_egresado'] = $strongarm;

  return $export;
}
