<?php
	if ($handle = opendir('C:/Documents and Settings/nandigamS/Desktop/htmlfiles')) {
		    while (false !== ($file = readdir($handle))) {
				$buffer1="";
				if ($file != "." && $file != "..") {   //    strip out . and ..
					$buffer1=file_get_contents("C:/Documents and Settings/nandigamS/Desktop/htmlfiles/$file");        
					if(strstr($file,".")){
						$file_name="";
    					$offset=0;
    					$a=strpos($file,".");
    					$file_name= substr($file,$offset,$a);
					}
					mysql_connect('localhost','root','root')or die("Could not connect: " . mysql_error());
                    mysql_select_db('drupaldb');
					$result = mysql_query("select title,nid from scratch_node where title='$file_name'");
                	$row = mysql_fetch_array($result);
                    $Title= $row['title'];
					//*********************************Node_Update******************************
					if($Title==$file_name){ // Comparing filename with existing node name
						echo "Node Found<br/>";
						$file_timestamp=filemtime("C:/Documents and Settings/nandigamS/Desktop/htmlfiles/$file");
						echo $file_timestamp."Timestamp<br/>";
						define('DRUPAL_ROOT', getcwd());
						$_SERVER['REMOTE_ADDR'] = "localhost"; // Necessary if running from command line
						require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
						drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);
						$bodytext = $buffer1; // Body part of the html file
						$nid = $row['nid']; // The node to update
						$node = node_load($nid); // ...where $nid is the node id
						//$node->title    = "Let's set a new title for this node HTML import";
						$node->title = $file_name;
						$node->body[$node->language][0]['value']   = $bodytext;
						if($node = node_submit($node)) { // Prepare node for saving
							node_save($node);
							echo "Node with nid " . $node->nid . " updated!<br/>";
						}
					//*********************************New_Node_Creation******************************	
					}elseif(!($Title==$file_name)){
						echo "Node not Found<br/>New node created<br/>";
						define('DRUPAL_ROOT', getcwd());
						$_SERVER['REMOTE_ADDR'] = "localhost"; // Necessary if running from command line
						require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
						drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);
						$bodytext = $buffer1; // Body part of the html file
						$node = new stdClass(); // Create a new node object
						$node->type = "page"; // or page, or whatever content type you like
						node_object_prepare($node); // Set some default values
						// If you update an existing node instead of creating a new one,
						// comment out the three lines above and uncomment the following:
						// $node = node_load($nid); // ...where $nid is the node id
						$node->title    = $file_name;  // Assigning node title = file name
						$node->language = 'en'; // Or e.g. 'en' if locale is enabled (en =English)
						$node->status = 1;  //Published(1) or not(0)
						$node->promote = 0; //Prompted to front page
						$node->sticky = 0;  //Sticky at top of list
						$node->comment = 1; //Comments on=2, comments off=1
						$node->uid = 14; // UID of the author of the node; or use $node->name
						$node->body[$node->language][0]['value']   = $bodytext;
						//$node->body[$node->language][0]['summary'] = text_summary($bodytext);
						$node->body[$node->language][0]['format']  = 'full_html';
						// I prefer using pathauto, which would override the below path
						//$path = 'node_created_on' . date('YmdHis');
						//$nid = $node->nid;
						//$path= $nid;
						$path = $file_name;
						$node->path = array('alias' => $path);   //alias path
						if($node = node_submit($node)) { // Prepare node for saving
							node_save($node);
							echo "Node with nid " . $node->nid . " saved!<br/>";
						}
				 }//end elseif
			}//end if
		}//end while
		@mysql_close();
		closedir($handle);
     }
?>
