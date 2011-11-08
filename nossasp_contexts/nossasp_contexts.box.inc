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
    'body' => 'O Mapa da Participação Cidadã é uma plataforma que permite ao usuário buscar ou cadastrar organizações que proporcionam diversas formas de participação cidadã no município de São Paulo.

Se você é responsável por uma iniciativa como esta, também pode fazer parte do Mapa. Para cadastrar sua organização basta criar uma conta com nome de usuário e senha. A adesão é totalmente gratuita e você poderá editar as informações sempre que quiser.

Participe! Assim poderemos oferecer um conjunto cada vez maior de informações para estimular a mobilização da sociedade e  fortalecer as organizações sociais.',
    'format' => '1',
  );
  $export['nossasp_contexts_about'] = $box;

  return $export;
}
