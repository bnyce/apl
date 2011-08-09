CKEDITOR.dialog.add( 'coamediaDialog', function( editor )
{
  console.log(editor.plugins.coamedia.path);
  var thisPluginPath = editor.plugins.coamedia.path;
  return {
    title : 'City of Austin - Media',
    minWidth : 600,
    minHeight : 400,
    contents : [
      {
        id : 'tab1',
        label : 'Embed Code',
        title : 'Embed Code',
        elements :
        [
          {
            id : 'input1',
            type : 'text',
            label : 'Input 1'
          }
        ]
      },
      {
        id : 'tab2',
        label : 'YouTube',
        title : 'YouTube',
        elements :
        [
          {
            id : 'input2',
            type : 'text',
            label : 'Input 2'
          }
        ]
      },
      {
        id : 'tab3',
        label : 'Swagit',
        title : 'Swagit',
        elements :
        [
          {
            id : 'input3',
            type : 'text',
            label : 'Input 3'
          }
        ]
      },
      {
        id : 'tab4',
        label : 'Flickr',
        title : 'Flickr',
        elements :
        [
          {
            id : 'input4',
            type : 'text',
            label : 'Input 4'
          }
        ]
      }
    ]
  };
} );