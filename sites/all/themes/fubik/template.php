<?php

/**
 * Preprocessor for theme('page').
 */
function fubik_preprocess_html(&$vars) {

  $vars['classes_array'][] = 'fubik';
  
  if(isset($vars['page']['sidebar_first'])) {
    $vars['classes_array'][] = 'fubik-sidebar-first';
  }
  if(isset($vars['page']['sidebar_second'])) {
    $vars['classes_array'][] = 'fubik-sidebar-second';
  }
  if(isset($vars['page']['sidebar_first']) && isset($vars['page']['sidebar_second'])) {
    $vars['classes_array'][] = 'fubik-two-sidebars';
  }
  if((!isset($vars['page']['sidebar_first']) && isset($vars['page']['sidebar_second'])) || (isset($vars['page']['sidebar_first']) && !isset($vars['page']['sidebar_second']))) {
    $vars['classes_array'][] = 'fubik-one-sidebar';
  }
  if(!isset($vars['page']['sidebar_first']) && !isset($vars['page']['sidebar_second'])) {
    $vars['classes_array'][] = 'fubik-no-sidebars';
  }
}

