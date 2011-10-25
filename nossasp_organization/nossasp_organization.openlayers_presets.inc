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
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_normal' => 'google_normal',
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
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_normal' => 'google_normal',
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

  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'nossasp_search';
  $openlayers_presets->title = 'NossaSP Resultados da Busca';
  $openlayers_presets->description = 'Mapa para exibição das organizações do NossaSP';
  $openlayers_presets->data = array(
    'width' => '100%',
    'height' => '100%',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-46.634469861376, -23.550680663281',
        'zoom' => '13',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '-5229543.951796,-2732995.183112,-5149437.946167,-2680406.507661',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'nossasp_organizations_search_openlayers_1' => 'nossasp_organizations_search_openlayers_1',
          'nossasp_organizations_search_all_openlayers_1' => 0,
          'nossasp_districts' => 0,
        ),
      ),
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'nossasp_organizations_search_openlayers_1',
        'point_zoom_level' => '15',
      ),
    ),
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_normal' => 'google_normal',
      'nossasp_organizations_search_openlayers_1' => 'nossasp_organizations_search_openlayers_1',
      'nossasp_organizations_search_all_openlayers_1' => 'nossasp_organizations_search_all_openlayers_1',
      'nossasp_districts' => 'nossasp_districts',
    ),
    'layer_styles' => array(
      'nossasp_organizations_layer_openlayers_1' => array(
        'default' => 'default',
        'select' => 'default',
        'temporary' => 'default',
      ),
      'nossasp_organizations_search_openlayers_1' => array(
        'default' => 'nossasp_organization_icons',
        'select' => 'nossasp_organization_icons_hover',
        'temporary' => 'nossasp_organization_icons',
      ),
      'nossasp_organizations_search_all_openlayers_1' => array(
        'default' => 'default',
      ),
    ),
    'layer_activated' => array(
      'nossasp_organizations_search_openlayers_1' => 'nossasp_organizations_search_openlayers_1',
      'nossasp_organizations_search_all_openlayers_1' => 'nossasp_organizations_search_all_openlayers_1',
      'nossasp_districts' => 'nossasp_districts',
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
  $export['nossasp_search'] = $openlayers_presets;

  return $export;
}
