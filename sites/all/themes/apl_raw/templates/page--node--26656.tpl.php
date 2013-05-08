  <!-- ______________________ FOOTER _______________________ -->

  <?php if ($page['footer']): ?>
    <div id="footer">
      <?php print render($page['footer']); ?>
    </div> <!-- /footer -->
  <?php endif; ?>
  
  <?php if ($page['bottom']): ?>
    <div id="bottom">
      <?php print render($page['bottom']); ?>
    </div> <!-- /bottom -->
  <?php endif; ?>

</div> <!-- /page -->
