<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function nossasp_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nossasp_search_results';
  $context->description = 'Resultados de busca do NossaSP';
  $context->tag = 'search';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'nossasp_organizations_map' => 'nossasp_organizations_map',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-ac1d059bc0aeabb5015c2d28f61ba744' => array(
          'module' => 'views',
          'delta' => 'ac1d059bc0aeabb5015c2d28f61ba744',
          'region' => 'sidebar_first',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Resultados de busca do NossaSP');
  t('search');
  $export['nossasp_search_results'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nossasp_sitewide';
  $context->description = 'Blocos sempre ativos no projeto NossaSP';
  $context->tag = 'sitewide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-2' => array(
          'module' => 'block',
          'delta' => 2,
          'region' => 'sidebar_first',
          'weight' => 0,
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => 3,
          'region' => 'sidebar_first',
          'weight' => 1,
        ),
        'views-e4d64b6a71c9049b9bdd1225e0da8e25' => array(
          'module' => 'views',
          'delta' => 'e4d64b6a71c9049b9bdd1225e0da8e25',
          'region' => 'header',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocos sempre ativos no projeto NossaSP');
  t('sitewide');
  $export['nossasp_sitewide'] = $context;

  return $export;
}
