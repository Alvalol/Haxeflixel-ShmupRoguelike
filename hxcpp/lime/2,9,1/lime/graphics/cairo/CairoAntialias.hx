package lime.graphics.cairo;


@:enum abstract CairoAntialias(Int) from Int to Int from UInt to UInt {
	
	public var DEFAULT = 0;
	public var NONE = 1;
	public var GRAY = 2;
	public var SUBPIXEL = 3;
	public var FAST = 4;
	public var GOOD = 5;
	public var BEST = 6;
	
}