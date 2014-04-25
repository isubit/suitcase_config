<?php
/**
 * @file
 * suitcase_ckeditor_overrides.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function suitcase_ckeditor_overrides_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: ckeditor_profile
  $overrides["ckeditor_profile.WYSIWYG.settings|css_mode"] = 'self';
  $overrides["ckeditor_profile.WYSIWYG.settings|css_path"] = '%t/css/suitcase.css';
  $overrides["ckeditor_profile.WYSIWYG.settings|toolbar"] = '[
      [\'PasteText\',\'PasteFromWord\'],
      [\'Table\',\'HorizontalRule\'],
      [\'SpecialChar\',\'Subscript\',\'Superscript\'],
      [\'Bold\',\'Italic\',\'Underline\'],
      [\'Blockquote\',\'BulletedList\',\'NumberedList\'],
      [\'JustifyLeft\',\'JustifyCenter\',\'JustifyRight\'],
      [\'Unlink\',\'Link\'],
      [\'Format\'],
      [\'Image\']
  ]';

 return $overrides;
}
