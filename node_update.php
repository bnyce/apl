<?php
define('DRUPAL_ROOT', getcwd());
$_SERVER['REMOTE_ADDR'] = "localhost"; // Necessary if running from command line
require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);

$nid = 1362; // The node to update
//$nid=$node->nid;

$node = node_load($nid); // ...where $nid is the node id

$node->title    = "Let's set a new title for this node";
$node->body[$node->language][0]['value']   = "And a new body text, too.";

if($node = node_submit($node)) { // Prepare node for saving
    node_save($node);
    echo "Node with nid " . $node->nid . " updated!\n";
}




?>
