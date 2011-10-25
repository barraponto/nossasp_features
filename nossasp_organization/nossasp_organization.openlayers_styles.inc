<?php

/**
 * Implementation of hook_openlayers_styles().
 */
function nossasp_organization_openlayers_styles() {
  $export = array();

  $openlayers_styles = new stdClass;
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'nossasp_organization_big_icons';
  $openlayers_styles->title = 'NossaSP Icones Grandes';
  $openlayers_styles->description = 'Icones para as Organizações do Nossa São Paulo';
  $openlayers_styles->data = array(
    'externalGraphic' => '/profiles/nossasp/modules/nossasp_features/nossasp_organization/icons/${field_tipo_value}-${tid}.png',
    'pointRadius' => 24,
    'fillColor' => '#EE9900',
    'strokeColor' => '#EE9900',
    'strokeWidth' => 1,
    'fillOpacity' => 1,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['nossasp_organization_big_icons'] = $openlayers_styles;

  $openlayers_styles = new stdClass;
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'nossasp_organization_icons';
  $openlayers_styles->title = 'NossaSP Icones';
  $openlayers_styles->description = 'Icones para as Organizações do Nossa São Paulo';
  $openlayers_styles->data = array(
    'externalGraphic' => '/profiles/nossasp/modules/nossasp_features/nossasp_organization/icons/${field_tipo_value}-${tid}.png',
    'pointRadius' => 16,
    'fillColor' => '#EE9900',
    'strokeColor' => '#EE9900',
    'strokeWidth' => 1,
    'fillOpacity' => 1,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['nossasp_organization_icons'] = $openlayers_styles;

  return $export;
}
