<?php

/**
 * Implementation of hook_openlayers_presets().
 */
function nossasp_organization_openlayers_presets() {
  $export = array();

  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'entry_map';
  $openlayers_presets->title = 'Entry Map';
  $openlayers_presets->description = 'Map to enter points';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-46.6342982, -23.5505233',
        'zoom' => '13',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_attribution' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
      ),
      'openlayers_behavior_panzoom' => array(),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'osm_mapnik' => 'osm_mapnik',
    ),
    'layer_styles' => array(
      'nossasp_organizations_layer_openlayers_1' => array(
        'default' => 'default',
        'select' => 'default',
        'temporary' => 'default',
      ),
    ),
    'layer_activated' => array(),
    'layer_switcher' => array(),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['entry_map'] = $openlayers_presets;

  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'nossasp';
  $openlayers_presets->title = 'NossaSP';
  $openlayers_presets->description = 'Mapa para exibição das organizações do NossaSP';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-46.6342982, -23.5505233',
        'zoom' => '13',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_attribution' => array(),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'nossasp_organizations_layer_openlayers_1' => 'nossasp_organizations_layer_openlayers_1',
        ),
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
      ),
      'openlayers_behavior_panzoom' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'nossasp_organizations_layer_openlayers_1',
        'point_zoom_level' => '13',
      ),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'osm_mapnik' => 'osm_mapnik',
      'nossasp_organizations_layer_openlayers_1' => 'nossasp_organizations_layer_openlayers_1',
    ),
    'layer_styles' => array(
      'nossasp_organizations_layer_openlayers_1' => array(
        'default' => 'default',
        'select' => 'default',
        'temporary' => 'default',
      ),
    ),
    'layer_activated' => array(
      'nossasp_organizations_layer_openlayers_1' => 'nossasp_organizations_layer_openlayers_1',
    ),
    'layer_switcher' => array(),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['nossasp'] = $openlayers_presets;

  return $export;
}
