
( function() {
  CKEDITOR.plugins.add( 'coamedia',
  {
    init: function(editor)
    {
      /*editor.addCss(
        'img.cke_mediaembed' +
        '{' +
          'background-image: url(' + CKEDITOR.getUrl( this.path + 'images/placeholder.gif' ) + ');' +
          'background-position: center center;' +
          'background-repeat: no-repeat;' +
          'border: 1px solid #a9a9a9;' +
          'width: 80px;' +
          'height: 80px;' +
        '}'
        );*/
      var pluginName = 'coamedia';
      var pluginDialogName = 'coamediaDialog';
      CKEDITOR.dialog.add( pluginDialogName, this.path + 'dialogs/coaMedia.js');
      editor.addCommand( pluginName, new CKEDITOR.dialogCommand( pluginDialogName ) );
      editor.ui.addButton( pluginName,
      {
        label: 'Embed Media',
        command: pluginName,
        icon: this.path + 'images/icon.png'
      });
    }
  } );
  var numberRegex = /^\d+(?:\.\d+)?$/;
  function cssifyLength( length )
  {
    if ( numberRegex.test( length ) )
      return length + 'px';
    return length;
  }
} )();
