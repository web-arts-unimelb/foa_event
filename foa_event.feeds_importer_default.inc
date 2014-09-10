<?php
/**
 * @file
 * foa_event.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function foa_event_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'foa_event_importer';
  $feeds_importer->config = array(
    'name' => 'foa_event_importer',
    'description' => 'foa_event_importer',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:5' => 'id',
          'xpathparser:4' => 'title',
          'xpathparser:2' => 'event-type',
          'xpathparser:6' => 'has-livestream',
          'xpathparser:7' => 'host',
          'xpathparser:8' => 'start-time',
          'xpathparser:9' => 'end-time',
          'xpathparser:10' => 'public',
          'xpathparser:11' => 'sold-out',
          'xpathparser:12' => 'cancelled',
          'xpathparser:13' => 'presenter-name',
          'xpathparser:14' => 'presenter-link',
          'xpathparser:0' => 'description-html',
          'xpathparser:23' => 'location',
          'xpathparser:18' => 'info-email',
          'xpathparser:19' => 'info-phone',
          'xpathparser:20' => 'book-url',
          'xpathparser:21' => 'link',
          'xpathparser:22' => 'tag',
        ),
        'rawXML' => array(
          'xpathparser:5' => 0,
          'xpathparser:4' => 0,
          'xpathparser:2' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
          'xpathparser:10' => 0,
          'xpathparser:11' => 0,
          'xpathparser:12' => 0,
          'xpathparser:13' => 0,
          'xpathparser:14' => 0,
          'xpathparser:0' => 0,
          'xpathparser:23' => 0,
          'xpathparser:18' => 0,
          'xpathparser:19' => 0,
          'xpathparser:20' => 0,
          'xpathparser:21' => 0,
          'xpathparser:22' => 0,
        ),
        'context' => '//api-v1-entities-event-item',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'context' => 0,
            'xpathparser:5' => 0,
            'xpathparser:4' => 0,
            'xpathparser:2' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
            'xpathparser:9' => 0,
            'xpathparser:10' => 0,
            'xpathparser:11' => 0,
            'xpathparser:12' => 0,
            'xpathparser:13' => 0,
            'xpathparser:14' => 0,
            'xpathparser:0' => 0,
            'xpathparser:23' => 0,
            'xpathparser:18' => 0,
            'xpathparser:19' => 0,
            'xpathparser:20' => 0,
            'xpathparser:21' => 0,
            'xpathparser:22' => 0,
          ),
        ),
        'allow_override' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_foa_event_id',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:4',
            'target' => 'title',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_foa_event_type',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_foa_event_is_live_stream',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_foa_event_host',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_foa_event_time:start',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_foa_event_time:end',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_foa_event_is_public',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:11',
            'target' => 'field_foa_event_is_sold_out',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_foa_event_is_cancelled',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_foa_event_p_link:title',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_foa_event_p_link:url',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'xpathparser:0',
            'target' => 'body',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'xpathparser:23',
            'target' => 'field_foa_event_location',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'xpathparser:18',
            'target' => 'field_foa_event_info_email',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'xpathparser:19',
            'target' => 'field_foa_event_info_phone',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'xpathparser:20',
            'target' => 'field_foa_event_book_url',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'xpathparser:21',
            'target' => 'field_foa_event_url',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'xpathparser:22',
            'target' => 'field_foa_event_study_area',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'update_non_existent' => 'delete',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'foa_event',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['foa_event_importer'] = $feeds_importer;

  return $export;
}
