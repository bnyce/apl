<?php
    $path="C:/Documents and Settings/nandigamS/My Documents/cityclerck/";  //Path to get the required folder
    if($handle=opendir($path)){
        $time_stamp="";
         while (false !== ($file0 = readdir($handle))) {
            $recent_dir="";
            if ($file0 != "." && $file0 != "..") {   //    strip out . and .. 
                echo $file0."<br/>";
				$file_name=explode("_",$file0);
                $seconds=substr($file_name[1],0,2);
                $minuts=substr($file_name[1],2,2);
                $hours=substr($file_name[1],4,2);
                $file_name[1]=$hours.$minuts.$seconds;
                $time_stamp[]=strtotime($file_name[0].$file_name[1]);
             }
		}
		$recent_dir= max($time_stamp);
        $recent_dir_date=date('Ymd_siH',$recent_dir);
        $new_path=$path.$recent_dir_date;
		echo $new_path."<br/>";
		closedir($handle);
        if($handle1=opendir($new_path)){
			while (false !== ($file1 = readdir($handle1))) {
              if ($file1 != "." && $file1 != "..") {   //    strip out . and .. 
			  	  //echo $file1."<br/>";
                  $new_path1=$new_path.'/'.$file1;
				  echo $new_path1."<br/>";
                  if($handle2=opendir($new_path1)){
                      while (false !== ($file2 = readdir($handle2))) {
						  if ($file2 != "." && $file2 != "..") {   //    strip out . and .. 
                                echo $file2."   ---Folder_name<br/>";
								$new_path2=$new_path1.'/'.$file2;
								echo $new_path2."<br/>";
								if($file2=="meetings"){ // $file2=="boards" or 
									if($handle3=opendir($new_path2)){	
				    					while (false !== ($file = readdir($handle3))) {
											$buffer1="";
											if ($file != "." && $file != "..") {   //    strip out . and ..
				    							$new_path3=$new_path2.'/'.$file;
												$buffer1=file_get_contents($new_path3);        
												$file_name=$file;
												mysql_connect('localhost','root','root')or die("Could not connect: " . mysql_error());
                    							mysql_select_db('drupaldb');
												$result = mysql_query("select title,nid,created from scratch_node where title='$file_name'");
                								$row = mysql_fetch_array($result);
                    							$Title= $row['title'];
						//*********************************Node_Update******************************
												if($Title==$file_name){ // Comparing filename with existing node name
													echo "Node Found<br/>";
													$file_timestamp=filemtime($new_path3);
													echo $file_timestamp."  ----file created or modified time<br/>";
													echo $row['created']."  ----created time in database<br/>";
													if($row['created']==$file_timestamp){
														echo "<span style='color:red'>There is no change in timestamp,So no need to update</span><br/>";
													}else{
														define('DRUPAL_ROOT', getcwd());
														$_SERVER['REMOTE_ADDR'] = "localhost"; // Necessary if running from command line
														require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
														drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);
														$bodytext = $buffer1; // Body part of the html file
														$nid = $row['nid']; // The node to update
														$node = node_load($nid); // ...where $nid is the node id
														$node->title = $file_name; //Creating a node with file_name
														$node->body[$node->language][0]['value']   = $bodytext;//node body
														if($node = node_submit($node)) { // Prepare node for saving
															node_save($node);
															echo "<span style='color:red'>Node with nid " . $node->nid . " updated!</span><br/>";
														}
														@mysql_query("UPDATE scratch_node SET created=$file_timestamp WHERE 		  title='$file_name'")or die(mysql_error());
													}
													echo $file_name."----File Name....<br/><br/>";
					//*********************************New_Node_Creation******************************	
												}elseif(!($Title==$file_name)){
													echo "<span style='color:red'>Node not Found</span><br/><span style='color:green'>New node created</span><br/>";
													define('DRUPAL_ROOT', getcwd());
													$_SERVER['REMOTE_ADDR'] = "localhost"; // Necessary if running from command line
													require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
													drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);
													$file_timestamp=filemtime($new_path3);
													$bodytext = $buffer1; // Body part of the html file
													$node = new stdClass(); // Create a new node object
													$node->type = "city_clerk_content"; // or page, or whatever content type you like
													node_object_prepare($node); // Set some default values
													$node->title    = $file_name;  // Assigning node title = file name
													$node->language = 'en'; // Or e.g. 'en' if locale is enabled (en =English)
													$node->status = 1;  //Published(1) or not(0)
													$node->promote = 0; //Prompted to front page
													$node->sticky = 0;  //Sticky at top of list
													$node->comment = 1; //Comments on=2, comments off=1
													$node->uid = 65; // UID of the author of the node; or use $node->name...65
													$node->body[$node->language][0]['value']   = $bodytext;
													$node->body[$node->language][0]['format']  = 'full_html';
													$node->remote_timestamp = $file_timestamp;
													echo "Node Timestamp===".$node->remote_timestamp."<br/>";
													// I prefer using pathauto, which would override the below path
													//$path = 'node_created_on' . date('YmdHis');
													//$nid = $node->nid;
													$path = $file_name;
													$node->path = array('alias' => $path);   //alias path
													if($node = node_submit($node)) { // Prepare node for saving
														node_save($node);
														echo "Node with nid " . $node->nid . " saved!<br/>";
													}
													@mysql_query("UPDATE scratch_node SET created=$file_timestamp WHERE 		  title='$file_name'")or die(mysql_error());
													echo "Success...<br/>";
													echo $file_name."----Node name-----<br/><br/>";
											}//end elseif
									}//end if
								}//end while
								mysql_close();
								
							}
							
						}
						
					}
			 	}
		 	}
	 	}
 	}
  }
  closedir($handle1);
  closedir($handle2);
  closedir($handle3);
}
?>
