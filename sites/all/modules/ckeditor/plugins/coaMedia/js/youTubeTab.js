
(function ($) {
  $(document).ready(function() {

    // click search button
    $('#channelSearchBtn').live('click', function() {
      alert('search button clicked');
    });


  });
})(jQuery);

function listVideos(root) {
  var feed = root.feed;
  var entries = feed.entry || [];
  var html = ['<ul id="ck_YouTubeTab">'];

  for (var i = 0; i < entries.length; ++i) {
    var entry = entries[i];
    var title = entry.title.$t;
    var thumbnails = entry.media$group.media$thumbnail;
    var desc = entry.media$group.media$description.$t;
    for (var ii = 0; ii < thumbnails.length; ++ii) {
      var thumbnail = thumbnails[ii];
      if(thumbnail.yt$name == 'default'){
        var thumbnailImg = thumbnail.url;
        break;
      }
    }
    html.push('<li><div class="mediaListBlock"><img src="', thumbnailImg, '" /> <div class="mediaContent">', title, '<div class="mediaDesc">', desc, '</div></div></div></li>');
  }

  html.push('</ul>');
  html.push('<div id="navigation">prev | next</div>');
  document.getElementById("channelList").innerHTML = html.join("");
}
