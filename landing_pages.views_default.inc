<?php

/**
 * Implementation of hook_views_default_views().
 */
function landing_pages_views_default_views() {
  $views = array();

  // Exported view: landing_page_node
  $view = new view;
  $view->name = 'landing_page_node';
  $view->description = 'Landing page node';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Landing Page Node';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Node: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  /* Argument: Page ID */
  $handler->display->display_options['arguments']['field_landing_page_id_value']['id'] = 'field_landing_page_id_value';
  $handler->display->display_options['arguments']['field_landing_page_id_value']['table'] = 'node_data_field_landing_page_id';
  $handler->display->display_options['arguments']['field_landing_page_id_value']['field'] = 'field_landing_page_id_value';
  $handler->display->display_options['arguments']['field_landing_page_id_value']['ui_name'] = 'Page ID';
  $handler->display->display_options['arguments']['field_landing_page_id_value']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_landing_page_id_value']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['field_landing_page_id_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_landing_page_id_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_landing_page_id_value']['glossary'] = 0;
  $handler->display->display_options['arguments']['field_landing_page_id_value']['ignorecase'] = 0;
  $handler->display->display_options['arguments']['field_landing_page_id_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_landing_page_id_value']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['field_landing_page_id_value']['break_phrase'] = 0;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'field_landing_page_id_value' => array(
      'type' => 'panel',
      'context' => 'user.location-additional_N',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Page ID',
    ),
  );

  $views[$view->name] = $view;

  return $views;
}
