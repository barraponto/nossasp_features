<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function nossasp_organization_user_default_permissions() {
  $permissions = array();

  // Exported permission: create nossasp_organization content
  $permissions['create nossasp_organization content'] = array(
    'name' => 'create nossasp_organization content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: delete own nossasp_organization content
  $permissions['delete own nossasp_organization content'] = array(
    'name' => 'delete own nossasp_organization content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit own nossasp_organization content
  $permissions['edit own nossasp_organization content'] = array(
    'name' => 'edit own nossasp_organization content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
