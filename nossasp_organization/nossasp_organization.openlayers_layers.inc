<?php

/**
 * Implementation of hook_openlayers_layers().
 */
function nossasp_organization_openlayers_layers() {
  $export = array();

  $openlayers_layers = new stdClass;
  $openlayers_layers->disabled = FALSE; /* Edit this to true to make a default openlayers_layers disabled initially */
  $openlayers_layers->api_version = 1;
  $openlayers_layers->name = 'nossasp_districts';
  $openlayers_layers->title = 'NossaSP Distritos';
  $openlayers_layers->description = 'Camada de Distritos da cidade de São Paulo';
  $openlayers_layers->data = array(
    'url' => '/profiles/nossasp/modules/nossasp_features/nossasp_organization/distritos.kml',
    'formatOptions' => array(
      'extractStyles' => 1,
      'extractAttributes' => 1,
    ),
    'layer_type' => 'openlayers_layer_type_kml',
  );
  $export['nossasp_districts'] = $openlayers_layers;

  $openlayers_layers = new stdClass;
  $openlayers_layers->disabled = FALSE; /* Edit this to true to make a default openlayers_layers disabled initially */
  $openlayers_layers->api_version = 1;
  $openlayers_layers->name = 'spdistritos';
  $openlayers_layers->title = 'spdistritos';
  $openlayers_layers->description = 'spdistritos';
  $openlayers_layers->data = array(
    'url' => '/profiles/nossasp/modules/nossasp_features/nossasp_organization/spdistritos.kml',
    'formatOptions' => array(
      'extractStyles' => 0,
      'extractAttributes' => 1,
    ),
    'layer_type' => 'openlayers_layer_type_kml',
  );
  $export['spdistritos'] = $openlayers_layers;

  return $export;
}
