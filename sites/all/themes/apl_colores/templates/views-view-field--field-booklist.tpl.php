<?php 
$booklist = $row->_field_data['nid']['entity']->field_booklist['und'][0]['value'];
?>
<iframe title="Booklist" width="580" height="350" 
src="http://austin.bibliocommons.com/list/list_browse/user/<?php print $booklist; ?>" frameborder="0"></iframe>
