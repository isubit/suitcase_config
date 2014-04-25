<?php
/**
 * @file
 * suitcase_ckeditor_overrides.features.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults_alter().
 */
function suitcase_ckeditor_overrides_ckeditor_profile_defaults_alter(&$data) {
  if (isset($data['WYSIWYG'])) {
    $data['WYSIWYG']['settings']['css_mode'] = 'self'; /* WAS: 'theme' */
    $data['WYSIWYG']['settings']['css_path'] = '%t/css/suitcase.css'; /* WAS: '' */
    $data['WYSIWYG']['settings']['toolbar'] = '[
        [\'PasteText\',\'PasteFromWord\'],
        [\'Table\',\'HorizontalRule\'],
        [\'SpecialChar\',\'Subscript\',\'Superscript\'],
        [\'Bold\',\'Italic\',\'Underline\'],
        [\'Blockquote\',\'BulletedList\',\'NumberedList\'],
        [\'JustifyLeft\',\'JustifyCenter\',\'JustifyRight\'],
        [\'Unlink\',\'Link\'],
        [\'Format\'],
        [\'Image\']
    ]'; /* WAS: '[
        [\'PasteText\',\'PasteFromWord\'],
        [\'Table\',\'HorizontalRule\'],
        [\'SpecialChar\',\'Subscript\',\'Superscript\'],
        [\'Bold\',\'Italic\',\'Underline\'],
        [\'Blockquote\',\'BulletedList\',\'NumberedList\'],
        [\'JustifyLeft\',\'JustifyCenter\',\'JustifyRight\'],
        [\'Unlink\',\'Link\'],
        [\'Format\'],
        [\'Image\']
    ]' */
  }
}
