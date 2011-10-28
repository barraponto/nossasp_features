<?php

/**
 * Implementation of hook_default_box().
 */
function nossasp_contexts_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'nossasp_contexts_about';
  $box->plugin_key = 'simple';
  $box->title = 'O que é o Mapa da Participação Cidadã?';
  $box->description = 'Sobre o projeto';
  $box->options = array(
    'body' => 'Conheça as organizações que abrem espaços à participação cidadã para a construção de uma cidade de São Paulo mais justa, democrática e sustentável. 

A busca de organizações  pode ser feita por nome, por endereço, por tipo ou por áreas de atuação.  

Se você é responsável por uma iniciativa como esta, também pode fazer parte do mapa. Para cadastrar sua organização basta criar uma conta com nome de usuário e senha, assim você poderá editar as informações  fornecidas sempre que necessário (não há limite para cadastro de organizações por usuário). 

Participe!',
    'format' => '1',
  );
  $export['nossasp_contexts_about'] = $box;

  return $export;
}
