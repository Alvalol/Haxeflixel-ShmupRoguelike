package lime.system;


import lime.graphics.PixelFormat;


class DisplayMode {
	
	
	/**
	 * vertical resolution
	 **/
	public var height (default, null):Int;
	
	/**
	 * pixel format
	 **/
	public var pixelFormat (default, null):PixelFormat;
	
	/**
	 * refresh rate in Hz
	 **/
	public var refreshRate (default, null):Int;
	
	/**
	 * horizontal resolution
	 **/
	public var width (default, null):Int;
	
	
	private function new (width:Int, height:Int, refreshRate:Int, pixelFormat:PixelFormat) {
		
		this.width = width;
		this.height = height;
		this.refreshRate = refreshRate;
		this.pixelFormat = pixelFormat;
		
	}
	
	
}