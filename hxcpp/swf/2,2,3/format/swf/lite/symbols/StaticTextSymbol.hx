package format.swf.lite.symbols;


import flash.geom.Matrix;


class StaticTextSymbol extends SWFSymbol {
	
	
	public var matrix:Matrix;
	public var records:Array<StaticTextRecord>;
	
	
	public function new () {
		
		super ();
		
	}
	
	
}


@:keep class StaticTextRecord {
	
	
	public var advances:Array<Int>;
	public var color:Null<Int>;
	public var fontHeight:Int;
	public var fontID:Null<Int>;
	public var glyphs:Array<Int>;
	public var offsetX:Null<Int>;
	public var offsetY:Null<Int>;
	
	
	public function new () {
		
		
		
	}
	
	
}