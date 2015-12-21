<?php

function hardware_sync_admin_form($form, &$form_state) {
$form['hardware_sync_json_state_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Json | Hardware state identifier'),
    '#description' => t('Column name for state id'),
    '#default_value' => variable_get('inc_json_HARDWARE_STATE', 'HARDWARE_STATE'),
    '#size' => 60,
    '#maxlength' => 120,
    '#required' => TRUE,
  );

$form['hardware_sync_json_id_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Json | Hardware full id identifier'),
    '#description' => t('Column name for full id'),
    '#default_value' => variable_get('inc_json_HARDWARE_ID', 'HARDWARE_ID'),
    '#size' => 60,
    '#maxlength' => 120,
    '#required' => TRUE,
  );

$form['hardware_sync_json_name_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Json | Hardware name id identifier'),
    '#description' => t('Column name for hardware name id'),
    '#default_value' => variable_get('inc_json_HARDWARE_NAME', 'HARDWARE_NAME'),
    '#size' => 60,
    '#maxlength' => 120,
    '#required' => TRUE,
  );

$form['hardware_sync_json_last_sync_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Json | Hardware last sync id identifier'),
    '#description' => t('Column name for last sync id'),
    '#default_value' => variable_get('inc_json_HARDWARE_LAST_SYNC', 'HARDWARE_LAST_SYNC'),
    '#size' => 60,
    '#maxlength' => 120,
    '#required' => TRUE,
  );

$form['hardware_sync_json_unit_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Json | Hardware unit id identifier'),
    '#description' => t('Post field for unit id'),
    '#default_value' => variable_get('inc_json_UNIT', 'UNIT'),
    '#size' => 60,
    '#maxlength' => 120,
    '#required' => TRUE,
  );

$form['hardware_sync_json_type_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Json | Hardware type id identifier'),
    '#description' => t('Post field for type id'),
    '#default_value' => variable_get('inc_json_HARDWARE_TYPE', 'HARDWARE_TYPE'),
    '#size' => 60,
    '#maxlength' => 120,
    '#required' => TRUE,
  );

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save settings'),
    '#weight' => 40,
  );
return $form;

}

function hardware_sync_admin_form_submit(&$form, &$form_state) {
    variable_set('inc_json_HARDWARE_NAME', $form_state['values']['hardware_sync_json_name_id']);
    variable_set('inc_json_HARDWARE_ID', $form_state['values']['hardware_sync_json_id_id']);
    variable_set('inc_json_HARDWARE_STATE', $form_state['values']['hardware_sync_json_state_id']);  
    variable_set('inc_json_HARDWARE_TYPE', $form_state['values']['hardware_sync_json_type_id']);    
    variable_set('inc_json_HARDWARE_LAST_SYNC', $form_state['values']['hardware_sync_json_last_sync_id']);  
    variable_set('inc_json_UNIT', $form_state['values']['hardware_sync_json_unit_id']); 
}