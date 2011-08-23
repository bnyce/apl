<link media="all" href="/sites/all/modules/ckeditor/plugins/coaMedia/css/youTubeTab.css" rel="stylesheet" type="text/css">
<script type="text/javascript" src="https://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js"></script>
<script type="text/javascript" src="/sites/all/modules/ckeditor/plugins/coaMedia/js/youTubeTab.js"></script>

<div id='channelSearch'>
  <input type="text" id='channelSearchText' width="50px" value="Search" onfocus="this.value=''" />
  <a href='javascript:void(0);' id='channelSearchBtn'><span class='cke_label'>X</span></a>
</div>
<div id='channelTitle'>AustinTexasGov Youtube Channel</div>

<!-- content DIV -->
<div id="channelList"></div>

<script src="https://gdata.youtube.com/feeds/api/users/austintexasgov/uploads?orderby=published&start-index=1&max-results=20&v=2&alt=json-in-script&callback=listVideos">
</script>