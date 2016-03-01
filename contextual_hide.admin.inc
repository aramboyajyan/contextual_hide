<?php

/**
 * @file
 * Administrative pages provided by the module.
 *
 * Created by: Topsitemakers
 * http://www.topsitemakers.com/
 */

/**
 * Main administrative form.
 */
function contextual_hide_admin_form() {
  $entities = array(
    'node'  => t('Nodes')
    'block' => t('Blocks'),
    'views' => t('Views'),
  );

  $form['contextual_hide_contextual_links_entities'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Hide contextual links for'),
    '#description' => t('Choose for which entities the contextual links should be hidden.'),
    '#default_value' => variable_get('contextual_hide_contextual_links_entities', array()),
    '#multiple' => TRUE,
    '#options' => $entities,
  );

  return system_settings_form($form);
}
