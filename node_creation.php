<?php

define('DRUPAL_ROOT', getcwd());
$_SERVER['REMOTE_ADDR'] = "localhost"; // Necessary if running from command line
require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);

$bodytext = "Foo m bar fnord?";

$node = new stdClass(); // Create a new node object
$node->type = "article"; // Or page, or whatever content type you like
node_object_prepare($node); // Set some default values
// If you update an existing node instead of creating a new one,
// comment out the three lines above and uncomment the following:
// $node = node_load($nid); // ...where $nid is the node id

$node->title    = "A new node sees the light of day";
$node->language = en; // Or e.g. 'en' if locale is enabled

$node->uid = 1; // UID of the author of the node; or use $node->name

$node->body[$node->language][0]['value']   = $bodytext;
$node->body[$node->language][0]['summary'] = text_summary($bodytext);
$node->body[$node->language][0]['format']  = 'full_html';

// I prefer using pathauto, which would override the below path
$path = 'node_created_on' . date('YmdHis');
$node->path = array('alias' => $path);

if($node = node_submit($node)) { // Prepare node for saving
    node_save($node);
    echo "Node with nid " . $node->nid . " saved!\n";
}

?>
