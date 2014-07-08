<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function landing_pages_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function landing_pages_node_info() {
  $items = array(
    'landing_page_map' => array(
      'name' => t('Landing Page Map'),
      'module' => 'features',
      'description' => t('Custom landing page node with map and call to action'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function landing_pages_views_api() {
  return array(
    'api' => '3.0',
  );
}
