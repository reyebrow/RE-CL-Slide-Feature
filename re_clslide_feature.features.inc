<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function re_clslide_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function re_clslide_feature_imagecache_default_presets() {
  $items = array(
    're_clslide_node' => array(
      'presetname' => 're_clslide_node',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '600',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    're_clslide_slide_view' => array(
      'presetname' => 're_clslide_slide_view',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '600',
            'height' => '338',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function re_clslide_feature_node_info() {
  $items = array(
    're_clslide' => array(
      'name' => t('RE CL Slide'),
      'module' => 'features',
      'description' => t('Provides slides for the RE CL Slide feature.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function re_clslide_feature_views_api() {
  return array(
    'api' => '2',
  );
}
