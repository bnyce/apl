
<?php

print("<!-- begin: /sites/all/themes/apl_blanco/templates/field--field_gallery_image.tpl.php -->");

/*
template - drupal.org/node/1224106#comment-4969404
Photo title - drupal.org/node/432846#comment-4125056
used at: www.highrockphoto.com

change the column count to the number of photos 
you want to appear going across. (Adjust thumbnail size as needed) 
*/

$columns = 6;
$rows = array_chunk($items, $columns);

// print_r($items); 
// print_r($columns); 
// print_r($rows); 

?>

<table class="tab-gallery" align="center" cellspacing="2" cellpadding="3">
  <tbody>
    <?php foreach ($rows as $row_number => $columns): ?>
      <?php
        $row_class = 'row-' . ($row_number + 1);
        if ($row_number == 0) {
          $row_class .= ' row-first';
        }
        if (count($rows) == ($row_number + 1)) {
          $row_class .= ' row-last';
        }
      ?>
      <tr class="<?php print $row_class; ?> tr-gallery">
        <?php foreach ($columns as $column_number => $item):
			$item_filename=rtrim($item['#item']['filename']);
			$this_len=strlen($item_filename);
			$this_date= substr($item_filename,$this_len-24,8);
			$this_time=str_replace("-",":",substr($item_filename,$this_len-15,8));
			$this_hour=str_replace("-",":",substr($item_filename,$this_len-15,2));
			$this_min=str_replace("-",":",substr($item_filename,$this_len-12,2));
			$this_hhmm=$this_hour . ":" . $this_min;
			$this_title=$this_date & $this_time;		
		 ?>
          <td class="<?php print 'col-'. ($column_number + 1); ?> td-gallery">
      <div class="photo-image"><?php print render($item); ?></div>
      <div class="photo-title"><?php print("20".$this_date." ".$this_hhmm); ?> <div>
          </td>
        <?php endforeach; ?>
      </tr>
    <?php endforeach; ?>
  </tbody>
</table>

<?php print("<!-- end: /sites/all/themes/apl_blanco/templates/field--field_gallery_image.tpl.php -->"); ?>