<?php

/**
 * Implementation of hook_openlayers_presets().
 */
function nossasp_organization_openlayers_presets() {
  $export = array();

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
    'hide_empty_map' => 1,
    'center' => array(
      'initial' => array(
        'centerpoint' => '',
        'zoom' => '15',
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
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'roundedCorner' => 1,
        'roundedCornerColor' => 'darkblue',
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
      ),
      'openlayers_behavior_panzoom' => array(),
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
