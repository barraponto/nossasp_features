<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function nossasp_mantainer_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: set-mantainer:admin/nossasp/update
  $menu_links['set-mantainer:admin/nossasp/update'] = array(
    'menu_name' => 'set-mantainer',
    'link_path' => 'admin/nossasp/update',
    'router_path' => 'admin/nossasp/update',
    'link_title' => 'Atualizar Organizações Cadastradas',
    'options' => array(),
    'module' => 'toolbar',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
  );
  // Exported menu link: set-mantainer:node/add/nossasp-organization
  $menu_links['set-mantainer:node/add/nossasp-organization'] = array(
    'menu_name' => 'set-mantainer',
    'link_path' => 'node/add/nossasp-organization',
    'router_path' => 'node/add/nossasp-organization',
    'link_title' => 'Cadastrar Organização',
    'options' => array(),
    'module' => 'toolbar',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Atualizar Organizações Cadastradas');
  t('Cadastrar Organização');


  return $menu_links;
}
