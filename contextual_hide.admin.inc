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
  // This will be improved in future versions; there should be a way to get the
  // list of modules that integrate with Contextual Links, so we don't have to
  // hardcode everything. However, the code below will cover most use-cases.
  //
  // If you see this and it's not fixed yet, feel free to contribute a patch!

  // Get the list of entities for which contextual filters will be added.
  //
  // Note: we don't have the "menu" type here, because the menu contextual links
  // are provided only when the menu is displayed as a block, meaning that if we
  // hide menu contextual links, it will not be consistent because it will also
  // remove contextual links for some of the blocks.
  $entities = array(
    'node' => t('Nodes')
    'block' => t('Blocks'),
    'views' => t('Views'),
  );

  // Build the settings form.
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
