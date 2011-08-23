(function ($) {

CKEDITOR.dialog.add( 'coamediaDialog', function( editor )
{
  //console.log(editor.plugins.coamedia.path);
  var thisPluginPath = editor.plugins.coamedia.path;
  return {
    title : 'City of Austin - Media',
    minWidth : 600,
    minHeight : 400,
    buttons:[
      /*{
        type:'button',
        id:'someButtonID',
        label: 'Selected Tab',
        onClick: function(){
          var CurrObj = CKEDITOR.dialog.getCurrent();
          console.log(CurrObj.definition.dialog._.currentTabId);
          var ytVideoId = $('div[name="tab2"] iframe').contents().find('#ck_selYouTubeVid').val();
          var ytVideoIdLink = '<iframe width="560" height="349" src="http://www.youtube.com/embed/' + ytVideoId + '?rel=0" frameborder="0" allowfullscreen></iframe>';
          $('div[name="tab1"] textarea').val(ytVideoIdLink);
        }
      },*/
      CKEDITOR.dialog.okButton,
      CKEDITOR.dialog.cancelButton
    ],
    contents : [
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
      },
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
            //onClick: function( data ) {
            //  alert('clicked');
            //}
        }]
      }
      ],
    onOk : function() {
      var editor = this.getParentEditor();
      var CurrObj = CKEDITOR.dialog.getCurrent();
      var currTab = CurrObj.definition.dialog._.currentTabId;
      if (currTab == 'tab2'){  //if it's the youtube tab, copy the video id to tab1 and format accordingly
        var ytVideoId = $('div[name="tab2"] iframe').contents().find('#ck_selYouTubeVid').val();
        var ytVideoIdLink = '<iframe width="560" height="349" src="http://www.youtube.com/embed/' + ytVideoId + '?rel=0" frameborder="0" allowfullscreen></iframe>';
        if (ytVideoId.length > 0){
          $('div[name="tab1"] textarea').val(ytVideoIdLink);
        }
      }
      var content = this.getValueOf( 'tab1', 'input1' );
      if ( content.length > 0 ) {
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
      }else{
        alert('nothing selected!');
        return false;
      }
    },
    onLoad: function( data ) {
      $('div[role="tablist"] .cke_dialog_tab').css('margin', '0 3px');
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

})(jQuery);