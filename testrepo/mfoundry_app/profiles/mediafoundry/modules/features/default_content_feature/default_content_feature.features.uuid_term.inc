<?php
/**
 * @file
 * default_content_feature.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function default_content_feature_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Sports',
    'description' => '',
    'format' => 'custom_text_format',
    'weight' => 7,
    'uuid' => '2dc887d0-16c7-4adb-919b-d67f532f7207',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'media-category/sports',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Entertainment',
    'description' => '',
    'format' => 'custom_text_format',
    'weight' => 9,
    'uuid' => '375b7b50-ec9e-4131-b1d9-3f58206f8b77',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'media-category/entertainment',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Cricket',
    'description' => '',
    'format' => 'blog_text_format',
    'weight' => 0,
    'uuid' => '415ee6cb-f3dc-4574-8536-c76c64dc0716',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'media-category/cricket',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '2dc887d0-16c7-4adb-919b-d67f532f7207',
    ),
  );
  $terms[] = array(
    'name' => 'Elearning',
    'description' => '',
    'format' => 'custom_text_format',
    'weight' => 8,
    'uuid' => '444db60b-b65c-4137-ab92-7e4adfc2c133',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'media-category/elearning',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Drama',
    'description' => '',
    'format' => 'blog_text_format',
    'weight' => 3,
    'uuid' => '5e309fc0-9967-42bf-a58d-8ab409958040',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'media-category/drama',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '375b7b50-ec9e-4131-b1d9-3f58206f8b77',
    ),
  );
  $terms[] = array(
    'name' => 'Street Play',
    'description' => '',
    'format' => 'blog_text_format',
    'weight' => 0,
    'uuid' => '71633e56-a4de-4b02-b3cc-e22ffc194abd',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'media-category/street-play',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '375b7b50-ec9e-4131-b1d9-3f58206f8b77',
    ),
  );
  $terms[] = array(
    'name' => 'TV Serial',
    'description' => '',
    'format' => 'blog_text_format',
    'weight' => 2,
    'uuid' => '890fe2d0-51d6-42d1-b6e2-d150f1982a7c',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'media-category/tv-serial',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '375b7b50-ec9e-4131-b1d9-3f58206f8b77',
    ),
  );
  $terms[] = array(
    'name' => 'Movie',
    'description' => '',
    'format' => 'blog_text_format',
    'weight' => 1,
    'uuid' => 'd6b6baa2-dd61-41dd-a1d5-19eebf832886',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'media-category/movie',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '375b7b50-ec9e-4131-b1d9-3f58206f8b77',
    ),
  );
  $terms[] = array(
    'name' => 'Social',
    'description' => '',
    'format' => 'custom_text_format',
    'weight' => 10,
    'uuid' => 'e7c1cc88-348f-48d3-9a86-efa5b6f4546c',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'media-category/social',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Football',
    'description' => '',
    'format' => 'blog_text_format',
    'weight' => 1,
    'uuid' => 'ecaa0c36-3168-4d65-b661-568d0bd12aa6',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'media-category/football',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '2dc887d0-16c7-4adb-919b-d67f532f7207',
    ),
  );
  $terms[] = array(
    'name' => 'Tennis',
    'description' => '',
    'format' => 'blog_text_format',
    'weight' => 2,
    'uuid' => 'f8898159-0362-4eb5-89d9-a90c7db05327',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'media-category/tennis',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '2dc887d0-16c7-4adb-919b-d67f532f7207',
    ),
  );
  return $terms;
}
