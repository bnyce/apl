
(function ($) {
  $(document).ready(function() {

    var yt_max_results = 20;
    // click search button
    $('#channelSearchBtn').live('click', function() {
      //alert('search button clicked' + $('#channelSearchText').val());
      //if ($('#channelSearchText').val().length > 0 && $('#channelSearchText').val() != 'Search') {
      if ($('#channelSearchText').val() != 'Search') {
        var srcVal = $('#channelSearchText').val();
        $.ajax ({
          url: "https://gdata.youtube.com/feeds/api/users/austintexasgov/uploads",
          data: "q=" + srcVal + "&orderby=published&start-index=1&max-results=" + yt_max_results + "&v=2&alt=json",
          dataType: "jsonp",
          success: function(data){
            listVideos(data);
          }
        });
      } else {
        alert('Not a valid search term!');
      }
    });
    // click video items
/*    $('.mediaListBlock').each(function(index){
      $(this).click(function(event) {
        console.log($(this).attr('id'));
        var clkID = $(this).attr('id');
        $('#ck_selYouTubeVid').val(clkID);
        $('.mediaListBlock').css('border', 'none');
        $('#'+clkID).css('border', '1px solid black');
      });
    });  */
    //show selected video id textfield below title (AustinTexasGov Youtube Channel) for troubleshooting
    $('#channelTitle').live('click', function() {
      $('#ck_selYouTubeVid').css('display', 'inline');
    });
    // youtube pagination
    $('#yt_prev').live('click', function() {
      //alert($('#pageCount').text());
      // https://gdata.youtube.com/feeds/api/users/austintexasgov/uploads?orderby=published&start-index=1&max-results=20&v=2&alt=json
      var pageIdx = (parseInt($('#pageCount').text(),10) - yt_max_results );
      if (pageIdx < 0) { pageIdx = 1; }
      console.log("pageIndex:" + pageIdx);
      $.ajax ({
        url: "https://gdata.youtube.com/feeds/api/users/austintexasgov/uploads",
        data: "orderby=published&start-index=" + pageIdx + "&max-results=" + yt_max_results + "&v=2&alt=json",
        dataType: "jsonp",
        success: function(data){
          listVideos(data);
        }
      });
    });
    $('#yt_next').live('click', function() {
      //alert($('#pageCount').text());
      var pageIdx = (parseInt($('#pageCount').text(),10) + yt_max_results );
      console.log("pageIndex:" + pageIdx);
      $.ajax ({
        url: "https://gdata.youtube.com/feeds/api/users/austintexasgov/uploads",
        data: "orderby=published&start-index=" + pageIdx + "&max-results=" + yt_max_results + "&v=2&alt=json",
        dataType: "jsonp",
        success: function(data){
          listVideos(data);
        }
      });
    });

  });
})(jQuery);

function listVideos(root) {
  var feed = root.feed;
  var entries = feed.entry || [];
  var pageCnt = feed.openSearch$startIndex.$t;
  var perPageCnt = feed.openSearch$itemsPerPage.$t;
  var totalVidCnt = feed.openSearch$totalResults.$t;
  var totalPageCnt = Math.ceil(totalVidCnt/perPageCnt);

  var html = ['<input type="text" name="selVideo" id="ck_selYouTubeVid" value="" /><ul id="ck_YouTubeTab">'];

  for (var i = 0; i < entries.length; ++i) {
    var entry = entries[i];
    var title = entry.title.$t;
    var thumbnails = entry.media$group.media$thumbnail;
    var ytVideoID = entry.media$group.yt$videoid.$t;
    var desc = entry.media$group.media$description.$t;
    for (var ii = 0; ii < thumbnails.length; ++ii) {
      var thumbnail = thumbnails[ii];
      if(thumbnail.yt$name == 'default'){
        var thumbnailImg = thumbnail.url;
        break;
      }
    }
    html.push('<li><div id="', ytVideoID, '" class="mediaListBlock"><img src="', thumbnailImg, '" /> <div class="mediaContent">', title, '<div class="mediaDesc">', desc, '</div></div></div></li>');
  }

  html.push('</ul>');
  var toVidCnt = (parseInt(pageCnt + perPageCnt)-1);
  if (toVidCnt > totalVidCnt) { toVidCnt = totalVidCnt; }
  html.push('Videos: <span id="pageCount">' + pageCnt + '</span> to ' + toVidCnt + ' of ' + totalVidCnt);
  html.push('<div id="navigation">');
  if (pageCnt > 1) {
    html.push(  '<div id="yt_prev">prev</div>');
  }
  if ((pageCnt + perPageCnt) < totalVidCnt) {
    html.push(  '<div id="yt_next">next</div>');
  }
  html.push('</div>');
  document.getElementById("channelList").innerHTML = html.join("");
  // apply click object to all videos for selection.
  $('.mediaListBlock').each(function(index){
    $(this).click(function(event) {
      console.log($(this).attr('id'));
      var clkID = $(this).attr('id');
      $('#ck_selYouTubeVid').val(clkID);
      $('.mediaListBlock').css('border', 'none');
      $('#'+clkID).css('border', '1px solid black');
    });
  });
}
