<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function nossasp_mantainer_user_default_permissions() {
  $permissions = array();

  // Exported permission: create nossasp_mantainer content
  $permissions['create nossasp_mantainer content'] = array(
    'name' => 'create nossasp_mantainer content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: delete own nossasp_mantainer content
  $permissions['delete own nossasp_mantainer content'] = array(
    'name' => 'delete own nossasp_mantainer content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit own nossasp_mantainer content
  $permissions['edit own nossasp_mantainer content'] = array(
    'name' => 'edit own nossasp_mantainer content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
