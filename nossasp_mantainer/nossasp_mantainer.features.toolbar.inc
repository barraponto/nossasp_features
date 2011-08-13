<?php

/**
 * Implementation of hook_toolbar_default_toolbars().
 */
function nossasp_mantainer_toolbar_default_toolbars() {
  $toolbars = array();
  // Exported toolbar: set-mantainer
  $toolbars['set-mantainer'] = array(
    'name' => 'set-mantainer',
    'title' => 'Mantainer toolbar',
  );
  return $toolbars;
}
