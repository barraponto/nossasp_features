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
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: delete any nossasp_mantainer content
  $permissions['delete any nossasp_mantainer content'] = array(
    'name' => 'delete any nossasp_mantainer content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own nossasp_mantainer content
  $permissions['delete own nossasp_mantainer content'] = array(
    'name' => 'delete own nossasp_mantainer content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any nossasp_mantainer content
  $permissions['edit any nossasp_mantainer content'] = array(
    'name' => 'edit any nossasp_mantainer content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit own nossasp_mantainer content
  $permissions['edit own nossasp_mantainer content'] = array(
    'name' => 'edit own nossasp_mantainer content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  return $permissions;
}
