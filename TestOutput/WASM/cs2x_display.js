if (typeof mergeInto !== 'undefined') mergeInto(LibraryManager.library,
{
    JS_DisplayRenderData: function(data, dataLength)
	{
		var a = HEAPU8.subarray(data);

		var c = document.getElementById("canvas");
		c.width = "1280";
		c.height = "720";
		c.style.width = "1280px";
		c.style.height = "720px";

		var ctx = c.getContext("2d");
		var imgdata = ctx.getImageData(0, 0, 1280, 720);
		var imgdatalen = imgdata.data.length;
		for (var i = 0; i !== (1280 * 720); i++)
		{
			imgdata.data[(i * 4) + 0] = a[(i * 3)];
			imgdata.data[(i * 4) + 1] = a[(i * 3) + 1];
			imgdata.data[(i * 4) + 2] = a[(i * 3) + 2];
			imgdata.data[(i * 4) + 3] = 255;
		}
		ctx.putImageData(imgdata, 0, 0);
    }
});