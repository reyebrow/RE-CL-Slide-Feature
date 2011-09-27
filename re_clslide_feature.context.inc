<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function re_clslide_feature_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 're_clslide';
  $context->description = 'Provides block, context library for RE CL Slide module';
  $context->tag = 'Slideshow';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-re_clslide-block_1' => array(
          'module' => 'views',
          'delta' => 're_clslide-block_1',
          'region' => 'header',
          'weight' => 0,
        ),
      ),
    ),
    'includelibraries' => array(
      'library_name' => array(
        're_clslide' => 're_clslide',
      ),
      'library_only' => 0,
      'library_custom' => '',
      'library_debug' => 0,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Provides block, context library for RE CL Slide module');
  t('Slideshow');

  $export['re_clslide'] = $context;
  return $export;
}
