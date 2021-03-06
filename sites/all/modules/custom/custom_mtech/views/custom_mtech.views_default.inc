<?php

/**
 * @file
 * Bulk export of views_default objects generated by Bulk export module.
 */

/**
 * Implements hook_views_default_views().
 */
function custom_mtech_views_default_views() {
  $files = file_scan_directory(drupal_get_path('module', 'custom_mtech'). '/views/view', '/inc$/');
  foreach ($files as $filename => $file) {
    require $filename;
    $views[$file->name] = $view;
  }
  
  return $views;
}
