package lime.math;


import lime.utils.Float32Array;
import lime.utils.UInt8Array;

#if flash
import flash.geom.ColorTransform;
#end


abstract ColorMatrix(Float32Array) from Float32Array to Float32Array {
	
	
	private static var __identity = [ 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0 ];
	
	public var alphaMultiplier (get, set):Float;
	public var alphaOffset (get, set):Float;
	public var blueMultiplier (get, set):Float;
	public var blueOffset (get, set):Float;
	public var color (get, set):Int;
	public var greenMultiplier (get, set):Float;
	public var greenOffset (get, set):Float;
	public var redMultiplier (get, set):Float;
	public var redOffset (get, set):Float;
	
	
	public function new (data:Float32Array = null) {
		
		if (data != null && data.length == 20) {
			
			this = data;
			
		} else {
			
			this = new Float32Array (__identity);
			
		}
		
	}
	
	
	public function clone ():ColorMatrix {
		
		return new ColorMatrix (new Float32Array (this));
		
	}
	
	
	public function concat (second:ColorMatrix):Void {
		
		redMultiplier += second.redMultiplier;
		greenMultiplier += second.greenMultiplier;
		blueMultiplier += second.blueMultiplier;
		alphaMultiplier += second.alphaMultiplier;
		
	}
	
	
	public function copyFrom (other:ColorMatrix):Void {
		
		this.set (other);
		
	}
	
	
	public function identity () {
		
		this[0] = 1;
		this[1] = 0;
		this[2] = 0;
		this[3] = 0;
		this[4] = 0;
		this[5] = 0;
		this[6] = 1;
		this[7] = 0;
		this[8] = 0;
		this[9] = 0;
		this[10] = 0;
		this[11] = 0;
		this[12] = 1;
		this[13] = 0;
		this[14] = 0;
		this[15] = 0;
		this[16] = 0;
		this[17] = 0;
		this[18] = 1;
		this[19] = 0;
		
	}
	
	
	public function getAlphaTable ():UInt8Array {
		
		var table = new UInt8Array (256);
		var multiplier = alphaMultiplier;
		var offset = alphaOffset;
		var value:Int;
		
		for (i in 0...256) {
			
			value = Math.floor (i * multiplier + offset);
			if (value > 0xFF) value = 0xFF;
			if (value < 0) value = 0;
			table[i] = value;
			
		}
		
		return table;
		
	}
	
	
	public function getBlueTable ():UInt8Array {
		
		var table = new UInt8Array (256);
		var multiplier = blueMultiplier;
		var offset = blueOffset;
		var value:Int;
		
		for (i in 0...256) {
			
			value = Math.floor (i * multiplier + offset);
			if (value > 0xFF) value = 0xFF;
			if (value < 0) value = 0;
			table[i] = value;
			
		}
		
		return table;
		
	}
	
	
	public function getGreenTable ():UInt8Array {
		
		var table = new UInt8Array (256);
		var multiplier = greenMultiplier;
		var offset = greenOffset;
		var value:Int;
		
		for (i in 0...256) {
			
			value = Math.floor (i * multiplier + offset);
			if (value > 0xFF) value = 0xFF;
			if (value < 0) value = 0;
			table[i] = value;
			
		}
		
		return table;
		
	}
	
	
	public function getRedTable ():UInt8Array {
		
		var table = new UInt8Array (256);
		var multiplier = redMultiplier;
		var offset = redOffset;
		var value:Int;
		
		for (i in 0...256) {
			
			value = Math.floor (i * multiplier + offset);
			if (value > 0xFF) value = 0xFF;
			if (value < 0) value = 0;
			table[i] = value;
			
		}
		
		return table;
		
	}
	
	
	private function __toFlashColorTransform ():#if flash ColorTransform #else Dynamic #end {
		
		#if flash
		return new ColorTransform (redMultiplier, greenMultiplier, blueMultiplier, alphaMultiplier, redOffset, greenOffset, blueOffset, alphaOffset);
		#else
		return null;
		#end
		
	}
	
	
	
	
	// Get & Set Methods
	
	
	
	
	private inline function get_alphaMultiplier ():Float {
		
		return this[18];
		
	}
	
	
	private inline function set_alphaMultiplier (value:Float):Float {
		
		return this[18] = value;
		
	}
	
	
	private inline function get_alphaOffset ():Float {
		
		return this[19] * 255;
		
	}
	
	
	private inline function set_alphaOffset (value:Float):Float {
		
		return this[19] = value / 255;
		
	}
	
	
	private inline function get_blueMultiplier ():Float {
		
		return this[12];
		
	}
	
	
	private inline function set_blueMultiplier (value:Float):Float {
		
		return this[12] = value;
		
	}
	
	
	private inline function get_blueOffset ():Float {
		
		return this[14] * 255;
		
	}
	
	
	private inline function set_blueOffset (value:Float):Float {
		
		return this[14] = value / 255;
		
	}
	
	
	private function get_color ():Int {
		
		return ((Std.int (redOffset) << 16) | (Std.int (greenOffset) << 8) | Std.int (blueOffset));
		
	}
	
	
	private function set_color (value:Int):Int {
		
		redOffset = (value >> 16) & 0xFF;
		greenOffset = (value >> 8) & 0xFF;
		blueOffset = value & 0xFF;
		
		redMultiplier = 0;
		greenMultiplier = 0;
		blueMultiplier = 0;
		
		return color;
		
	}
	
	
	private inline function get_greenMultiplier ():Float {
		
		return this[6];
		
	}
	
	
	private inline function set_greenMultiplier (value:Float):Float {
		
		return this[6] = value;
		
	}
	
	
	private inline function get_greenOffset ():Float {
		
		return this[9] * 255;
		
	}
	
	
	private inline function set_greenOffset (value:Float):Float {
		
		return this[9] = value / 255;
		
	}
	
	
	private inline function get_redMultiplier ():Float {
		
		return this[0];
		
	}
	
	
	private inline function set_redMultiplier (value:Float):Float {
		
		return this[0] = value;
		
	}
	
	
	private inline function get_redOffset ():Float {
		
		return this[4] * 255;
		
	}
	
	
	private inline function set_redOffset (value:Float):Float {
		
		return this[4] = value / 255;
		
	}
	
	
	@:arrayAccess public function get (index:Int):Float {
		
		return this[index];
		
	}
	
	
	@:arrayAccess public function set (index:Int, value:Float):Float {
		
		return this[index] = value;
		
	}
	
	
}
