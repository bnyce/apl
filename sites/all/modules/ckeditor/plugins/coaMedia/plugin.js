
( function() {
  CKEDITOR.plugins.add( 'coamedia',
  {
    requires : [ 'fakeobjects', 'htmlwriter', 'iframedialog' ],
    init: function(editor)
    {
      /*editor.addCss(
          '#ck_YouTubeTab' +
          '{' +
              'list-style-image: none;' +
              'list-style-position: outside;' +
              'list-style-type: none;' +
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
} )();
