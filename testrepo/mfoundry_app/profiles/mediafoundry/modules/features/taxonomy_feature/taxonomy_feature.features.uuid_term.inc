<?php
/**
 * @file
 * taxonomy_feature.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function taxonomy_feature_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'France',
    'description' => '',
    'format' => 'blog_text_format',
    'weight' => 0,
    'uuid' => '0a553703-6083-41e7-ab8b-ecee3c33356a',
    'vocabulary_machine_name' => 'country',
    'metatags' => array(),
  );
  /*$terms[] = array(
    'name' => 'Views Based',
    'description' => '',
    'format' => 'custom_text_format',
    'weight' => 0,
    'uuid' => '20b7de73-0284-4ca9-8cac-7d603749a88b',
    'vocabulary_machine_name' => 'subscription_type',
    'metatags' => array(),
  );*/
  $terms[] = array(
    'name' => 'Belgium',
    'description' => '',
    'format' => 'blog_text_format',
    'weight' => 0,
    'uuid' => '295eb216-43a0-4528-abeb-8597c3b910e6',
    'vocabulary_machine_name' => 'country',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Sports',
    'description' => '',
    'format' => 'custom_text_format',
    'weight' => 7,
    'uuid' => '2dc887d0-16c7-4adb-919b-d67f532f7207',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Hungary',
    'description' => '',
    'format' => 'blog_text_format',
    'weight' => 0,
    'uuid' => '2f44fe84-8e5a-4cba-a77f-6df72b4cf256',
    'vocabulary_machine_name' => 'country',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Entertainment',
    'description' => '',
    'format' => 'custom_text_format',
    'weight' => 9,
    'uuid' => '375b7b50-ec9e-4131-b1d9-3f58206f8b77',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Bulgaria',
    'description' => '',
    'format' => 'blog_text_format',
    'weight' => 0,
    'uuid' => '3f26ae73-13d6-4f0e-905e-ccbcf9dcc785',
    'vocabulary_machine_name' => 'country',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Bangladesh',
    'description' => '',
    'format' => 'blog_text_format',
    'weight' => 0,
    'uuid' => '408a17e3-7fbe-4174-8b0c-46c0771b683e',
    'vocabulary_machine_name' => 'country',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Cricket',
    'description' => '',
    'format' => 'blog_text_format',
    'weight' => 0,
    'uuid' => '415ee6cb-f3dc-4574-8536-c76c64dc0716',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'parent' => array(
      0 => '2dc887d0-16c7-4adb-919b-d67f532f7207',
    ),
  );
  $terms[] = array(
    'name' => 'Mobile',
    'description' => '',
    'format' => 'blog_text_format',
    'weight' => 0,
    'uuid' => '44466d93-c488-4ff1-b865-5a1ed40fadd5',
    'vocabulary_machine_name' => 'devices',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Elearning',
    'description' => '',
    'format' => 'custom_text_format',
    'weight' => 8,
    'uuid' => '444db60b-b65c-4137-ab92-7e4adfc2c133',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'One Time',
    'description' => '',
    'format' => 'custom_text_format',
    'weight' => 0,
    'uuid' => '466fca30-7bbe-4ff2-98e8-cae9eb6b4f0b',
    'vocabulary_machine_name' => 'subscription_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Australia',
    'description' => '',
    'format' => 'blog_text_format',
    'weight' => 0,
    'uuid' => '57d52565-2e50-49f6-8079-6f8d5e3ca36f',
    'vocabulary_machine_name' => 'country',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Drama',
    'description' => '',
    'format' => 'blog_text_format',
    'weight' => 3,
    'uuid' => '5e309fc0-9967-42bf-a58d-8ab409958040',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'parent' => array(
      0 => '375b7b50-ec9e-4131-b1d9-3f58206f8b77',
    ),
  );
  $terms[] = array(
    'name' => 'United Kingdom',
    'description' => '',
    'format' => 'blog_text_format',
    'weight' => 0,
    'uuid' => '6146eab4-d03c-42c5-a09c-9e8840be67c1',
    'vocabulary_machine_name' => 'country',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'FRANCE',
    'description' => '',
    'format' => 'blog_text_format',
    'weight' => 0,
    'uuid' => '6d53b378-6c7d-42ea-a642-5062422e29a4',
    'vocabulary_machine_name' => 'country',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Street Play',
    'description' => '',
    'format' => 'blog_text_format',
    'weight' => 0,
    'uuid' => '71633e56-a4de-4b02-b3cc-e22ffc194abd',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'parent' => array(
      0 => '375b7b50-ec9e-4131-b1d9-3f58206f8b77',
    ),
  );
  $terms[] = array(
    'name' => 'India',
    'description' => '',
    'format' => 'blog_text_format',
    'weight' => 0,
    'uuid' => '7217be50-6bc1-454c-9f45-bd7b30c228cf',
    'vocabulary_machine_name' => 'country',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Tablet',
    'description' => '',
    'format' => 'blog_text_format',
    'weight' => 0,
    'uuid' => '72cfbd78-bf4c-4d77-8471-83f56c29ba96',
    'vocabulary_machine_name' => 'devices',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Georgia',
    'description' => '',
    'format' => 'blog_text_format',
    'weight' => 0,
    'uuid' => '863c8420-9817-4390-a1fb-064e2af15ae9',
    'vocabulary_machine_name' => 'country',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'TV Serial',
    'description' => '',
    'format' => 'blog_text_format',
    'weight' => 2,
    'uuid' => '890fe2d0-51d6-42d1-b6e2-d150f1982a7c',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'parent' => array(
      0 => '375b7b50-ec9e-4131-b1d9-3f58206f8b77',
    ),
  );
  $terms[] = array(
    'name' => 'Time Based',
    'description' => '',
    'format' => 'custom_text_format',
    'weight' => 0,
    'uuid' => 'a2e18e6a-89d0-46ef-b591-d292de73010c',
    'vocabulary_machine_name' => 'subscription_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'UNITED STATES',
    'description' => '',
    'format' => 'blog_text_format',
    'weight' => 0,
    'uuid' => 'b16f56b5-3853-4861-a520-81476b23def6',
    'vocabulary_machine_name' => 'country',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Bahrain',
    'description' => '',
    'format' => 'blog_text_format',
    'weight' => 0,
    'uuid' => 'c5d26d02-4c0c-4acf-8340-7883bc89834d',
    'vocabulary_machine_name' => 'country',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Movie',
    'description' => '',
    'format' => 'blog_text_format',
    'weight' => 1,
    'uuid' => 'd6b6baa2-dd61-41dd-a1d5-19eebf832886',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
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
  );
  $terms[] = array(
    'name' => 'Indonesia',
    'description' => '',
    'format' => 'blog_text_format',
    'weight' => 0,
    'uuid' => 'e90893e5-ed73-4671-af0e-5549588f6fa2',
    'vocabulary_machine_name' => 'country',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Football',
    'description' => '',
    'format' => 'blog_text_format',
    'weight' => 1,
    'uuid' => 'ecaa0c36-3168-4d65-b661-568d0bd12aa6',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'parent' => array(
      0 => '2dc887d0-16c7-4adb-919b-d67f532f7207',
    ),
  );
  $terms[] = array(
    'name' => 'Greece',
    'description' => '',
    'format' => 'blog_text_format',
    'weight' => 0,
    'uuid' => 'f2252321-1323-4a54-9258-eaac2f080d3b',
    'vocabulary_machine_name' => 'country',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Tennis',
    'description' => '',
    'format' => 'blog_text_format',
    'weight' => 2,
    'uuid' => 'f8898159-0362-4eb5-89d9-a90c7db05327',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'parent' => array(
      0 => '2dc887d0-16c7-4adb-919b-d67f532f7207',
    ),
  );
  return $terms;
}
