package openfl._legacy.gl; #if openfl_legacy


class GLBuffer extends GLObject {
	
	
	public function new (version:Int, id:Dynamic) {
		
		super (version, id);
		
	}
	
	
	override function getType ():String {
		
		return "Buffer";
		
	}
	
	
}


#end