<?php
echo "inside";
?>
<html>
<head>
<title>JW Player 6</title>

<script type="text/javascript" src="jwplayer.js"></script>
<script type="text/javascript">jwplayer.key="jBmfNDGjXLBvISv8CkP+qG4DI74orlj4YP2dDuhS9IQ=";</script>

</head>

<body>

<div id="mediaplayer"></div>
<div id="mediaplayer1"></div>
<script type="text/javascript">
   /* jwplayer("player").setup({
        sources: [{
            file: "rtmp://172.27.141.64:1935/vod/mp4:sample.mp4"
        },{
            file: "http://172.27.141.64:1935/vod/sample.mp4/playlist.m3u8"
        }],
        rtmp: {
            bufferlength: 3
        },
        fallback: false
    }); */
    $path = "http://192.168.254.93:1935/live/myStream/playlist.m3u8";
    jwplayer('mediaplayer1').setup({
    	    wmode: "transparent",
    		width: "640",
    		height: "360",
    		autostart: 'true',
    		playlist: [{
				sources: [{file: $path}]
			}],

    });

</script>
</body>
</html>
