<?php 

if (arg(0) == 'node' && is_numeric(arg(1))) {
	$nodeid = arg(1);
	if($nodeid == 26659) {	
		print $styles;
	}
	if($nodeid == 26660) {	
		print $scripts;
	}
}

print $page; 

?>
