CKEDITOR.dialog.add( 'coamediaDialog', function( editor )
{
  console.log(editor.plugins.coamedia.path);
  var thisPluginPath = editor.plugins.coamedia.path;
  return {
    title : 'City of Austin - Media',
    minWidth : 600,
    minHeight : 400,
    buttons:[{
      type:'button',
      id:'someButtonID', /* note: this is not the CSS ID attribute! */
      label: 'Selected Tab',
      onClick: function(){
        var CurrObj = CKEDITOR.dialog.getCurrent();
        console.log(CurrObj);
        alert(CurrObj.definition.dialog._.currentTabId);
        var currIndex = CurrObj.definition.dialog._.currentFocusIndex;
        console.log(CurrObj.definition.dialog._.focusList[currIndex]);

      }
    },CKEDITOR.dialog.okButton, CKEDITOR.dialog.cancelButton],
    contents : [
      {  //tab1
        id : 'tab1',
        label : 'Embed Code',
        title : 'Embed Code',
        elements :
        [{
            id : 'input1',
            type : 'textarea',
            rows : 9,
            label : Drupal.t('Paste embed code here')
        }]
      },
      { //tab2
        id : 'tab2',
        label : 'YouTube',
        title : 'YouTube',
        elements :
        [{
            id : 'input2',
            type : 'iframe',
            src: thisPluginPath + 'dialogs/youTubeChannel.php',
            width: 550, height: 350 - (CKEDITOR.env.ie ? 10 : 0)
        }]
      },
      { //tab3
        id : 'tab3',
        label : 'Swagit',
        title : 'Swagit',
        elements :
        [{
            id : 'input3',
            type : 'text',
            label : 'Input 3'
        }]
      }
    ],
    onOk : function() {
      var editor = this.getParentEditor();
      var CurrObj = CKEDITOR.dialog.getCurrent();
      console.log(CurrObj);
      alert(CurrObj.definition.dialog._.currentTabId);
      var currIndex = CurrObj.definition.dialog._.currentFocusIndex;
      console.log(CurrObj.definition.dialog._.focusList[currIndex]);
      var content = this.getValueOf( 'tab1', 'input1' );
      if ( content.length>0 ) {
        var realElement = CKEDITOR.dom.element.createFromHtml('<div class="media_embed"></div>');
        realElement.setHtml(content);
        var fakeElement = editor.createFakeElement( realElement , 'cke_mediaembed', 'div', true);
        var matches = content.match(/width=(["']?)(\d+)\1/i);
        if (matches && matches.length == 3) {
          fakeElement.setStyle('width', cssifyLength(matches[2]));
        }
        matches = content.match(/height=([\"\']?)(\d+)\1/i);
        if (matches && matches.length == 3) {
          fakeElement.setStyle('height', cssifyLength(matches[2]));
        }
        editor.insertElement(fakeElement);
      }
      //return false;
    }
  };
  var numberRegex = /^\d+(?:\.\d+)?$/;
  function cssifyLength( length )
  {
    var numberRegex = /^\d+(?:\.\d+)?$/;
    if ( numberRegex.test( length ) )
      return length + 'px';
    return length;
  }
} );