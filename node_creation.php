<?php
$file1=fopen("C:/Documents and Settings/nandigamS/Desktop/htmlimport.txt","r");//format of the derived variable. Can change as needed the "Label" field in the file.
$buffer1="";        
while (!feof($file1)){
  $buffer1 .= fgets($file1);
}
$file_name=basename("C:/Documents and Settings/nandigamS/Desktop/htmlimport.txt", ".d").PHP_EOL;
if(strstr($file_name,".")){
    $offset=0;
    $a=strpos($file_name,".");
    $file_name= substr($file_name,$offset,$a);
}
define('DRUPAL_ROOT', getcwd());
$_SERVER['REMOTE_ADDR'] = "localhost"; // Necessary if running from command line
require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);

$bodytext = $buffer1;

$node = new stdClass(); // Create a new node object
$node->type = "basic page"; // Or page, or whatever content type you like
node_object_prepare($node); // Set some default values
// If you update an existing node instead of creating a new one,
// comment out the three lines above and uncomment the following:
// $node = node_load($nid); // ...where $nid is the node id

$node->title    = $file_name;
$node->language = en; // Or e.g. 'en' if locale is enabled
$node->status = 1;  //Published(1) or not(0)
$node->promote = 0; //Prompted to front page
$node->sticky = 0;  //Sticky at top of list
$node->comment = 1; //Comments on=2, comments off=1

$node->uid = 14; // UID of the author of the node; or use $node->name
$node->body[$node->language][0]['value']   = $bodytext;
$node->body[$node->language][0]['summary'] = text_summary($bodytext);
$node->body[$node->language][0]['format']  = 'full_html';

// I prefer using pathauto, which would override the below path
//$path = 'node_created_on' . date('YmdHis');
$path= $nid ;
$node->path = array('alias' => $path);

if($node = node_submit($node)) { // Prepare node for saving
    node_save($node);
    echo "Node with nid " . $node->nid . " saved!\n";
}

?>
