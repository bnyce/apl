
( function() {
  CKEDITOR.plugins.add( 'coamedia',
  {
    requires : [ 'fakeobjects', 'htmlwriter', 'iframedialog' ],
    init: function( editor )
    {
      editor.addCss(
          '#cke_dialog_tabs_134 { border: 1px black solid; }'
        );
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
