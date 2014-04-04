<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN"
  "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd">
<html lang="en" xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language; ?>" version="XHTML+RDFa 1.0" dir="<?php print $language->dir; ?>"
  <?php print $rdf_namespaces; ?>>

<head profile="<?php print $grddl_profile; ?>">

<!-- begin check to see if the node is a webform, if it is print a meta refresh tag to fix an IE issue with webform css -->
<?php 
if (strstr($classes, "node-type-webform")){ 
	print('<meta content="IE=EmulateIE7" http-equiv="X-UA-Compatible" />');
}	
elseif (strstr($classes, "page-node-add")){ 
	print('<meta content="IE=EmulateIE7" http-equiv="X-UA-Compatible" />');
};	
?>
<!-- end check to see if node is a webform bap 10-8-12  -->

<link rel="icon" href="<?php
global $base_path, $base_url;

 print $base_url; ?>/favicon.png" />
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $scripts; ?>
  
 

</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <div id="skip">
    <a href="#main-menu"><?php print t('Jump to Navigation'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>
