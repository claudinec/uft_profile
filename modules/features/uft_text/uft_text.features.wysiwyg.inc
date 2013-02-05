<?php
/**
 * @file
 * uft_text.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function uft_text_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: html
  $profiles['html'] = array(
    'format' => 'html',
    'editor' => 'ckeditor',
    'settings' => FALSE,
  );

  return $profiles;
}
