<?php
/**
 * @file
 * feature_master.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function feature_master_user_default_roles() {
  $roles = array();

  // Exported role: admin
  $roles['admin'] = array(
    'name' => 'admin',
    'weight' => '2',
  );

  // Exported role: gestor
  $roles['gestor'] = array(
    'name' => 'gestor',
    'weight' => '3',
  );

  return $roles;
}
