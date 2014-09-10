<?php
/**
 * @file
 * foa_event.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function foa_event_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'foa_event_importer-xpathparser_10-convert_boolean';
  $feeds_tamper->importer = 'foa_event_importer';
  $feeds_tamper->source = 'xpathparser:10';
  $feeds_tamper->plugin_id = 'convert_boolean';
  $feeds_tamper->settings = array(
    'true_value' => 'true',
    'false_value' => 'false',
    'match_case' => 0,
    'no_match' => 'false',
    'other_text' => '',
    'no_match_value' => FALSE,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert to boolean';
  $export['foa_event_importer-xpathparser_10-convert_boolean'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'foa_event_importer-xpathparser_11-convert_boolean';
  $feeds_tamper->importer = 'foa_event_importer';
  $feeds_tamper->source = 'xpathparser:11';
  $feeds_tamper->plugin_id = 'convert_boolean';
  $feeds_tamper->settings = array(
    'true_value' => 'true',
    'false_value' => 'false',
    'match_case' => 0,
    'no_match' => 'false',
    'other_text' => '',
    'no_match_value' => FALSE,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert to boolean';
  $export['foa_event_importer-xpathparser_11-convert_boolean'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'foa_event_importer-xpathparser_12-convert_boolean';
  $feeds_tamper->importer = 'foa_event_importer';
  $feeds_tamper->source = 'xpathparser:12';
  $feeds_tamper->plugin_id = 'convert_boolean';
  $feeds_tamper->settings = array(
    'true_value' => 'true',
    'false_value' => 'false',
    'match_case' => 0,
    'no_match' => 'false',
    'other_text' => '',
    'no_match_value' => FALSE,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert to boolean';
  $export['foa_event_importer-xpathparser_12-convert_boolean'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'foa_event_importer-xpathparser_13-explode';
  $feeds_tamper->importer = 'foa_event_importer';
  $feeds_tamper->source = 'xpathparser:13';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '|',
    'limit' => '',
    'real_separator' => '|',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['foa_event_importer-xpathparser_13-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'foa_event_importer-xpathparser_14-explode';
  $feeds_tamper->importer = 'foa_event_importer';
  $feeds_tamper->source = 'xpathparser:14';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '|',
    'limit' => '',
    'real_separator' => '|',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['foa_event_importer-xpathparser_14-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'foa_event_importer-xpathparser_22-explode';
  $feeds_tamper->importer = 'foa_event_importer';
  $feeds_tamper->source = 'xpathparser:22';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '|',
    'limit' => '',
    'real_separator' => '|',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['foa_event_importer-xpathparser_22-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'foa_event_importer-xpathparser_6-convert_boolean';
  $feeds_tamper->importer = 'foa_event_importer';
  $feeds_tamper->source = 'xpathparser:6';
  $feeds_tamper->plugin_id = 'convert_boolean';
  $feeds_tamper->settings = array(
    'true_value' => 'true',
    'false_value' => 'false',
    'match_case' => 0,
    'no_match' => 'false',
    'other_text' => '',
    'no_match_value' => FALSE,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert to boolean';
  $export['foa_event_importer-xpathparser_6-convert_boolean'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'foa_event_importer-xpathparser_8-strtotime';
  $feeds_tamper->importer = 'foa_event_importer';
  $feeds_tamper->source = 'xpathparser:8';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['foa_event_importer-xpathparser_8-strtotime'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'foa_event_importer-xpathparser_9-strtotime';
  $feeds_tamper->importer = 'foa_event_importer';
  $feeds_tamper->source = 'xpathparser:9';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['foa_event_importer-xpathparser_9-strtotime'] = $feeds_tamper;

  return $export;
}
