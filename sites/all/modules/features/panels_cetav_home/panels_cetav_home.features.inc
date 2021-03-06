<?php
/**
 * @file
 * panels_cetav_home.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panels_cetav_home_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "fieldable_panels_panes" && $api == "fieldable_panels_pane_type") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function panels_cetav_home_paragraphs_info() {
  $items = array(
    'actualizaci_n_profesional_home' => array(
      'name' => 'actualización-profesional-home',
      'bundle' => 'actualizaci_n_profesional_home',
      'locked' => '1',
    ),
    'cetav_carreras_home' => array(
      'name' => 'cetav-carreras-home',
      'bundle' => 'cetav_carreras_home',
      'locked' => '1',
    ),
    'consejo_asesor' => array(
      'name' => 'consejo-asesor',
      'bundle' => 'consejo_asesor',
      'locked' => '1',
    ),
    'skills' => array(
      'name' => 'icono-texto',
      'bundle' => 'skills',
      'locked' => '1',
    ),
  );
  return $items;
}
