<?php
/**
 * @file
 * ruokalista.features.inc
 */

/**
 * Implements hook_node_info().
 */
function ruokalista_node_info() {
  $items = array(
    'ruokalista' => array(
      'name' => t('Ruokalista'),
      'base' => 'node_content',
      'description' => t('Tähän lisätään ruokalista'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
