<?php

/**
 * Implements hook_preprocess_maintenance_page().
 */
function assinfra_preprocess_maintenance_page(&$vars) { 
  unset($vars['site_name']);
  unset($vars['site_slogan']);
  unset($vars['title']);
  drupal_add_css(drupal_get_path('theme', 'assinfra') . '/css/maintenance.css');
}