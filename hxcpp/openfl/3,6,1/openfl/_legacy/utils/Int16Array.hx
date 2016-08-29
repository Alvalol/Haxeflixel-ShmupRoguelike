package openfl._legacy.utils; #if openfl_legacy


#if neko
import haxe.ds.Vector;
import openfl._legacy.Vector.VectorData;
#end


class Int16Array extends ArrayBufferView implements ArrayAccess<Int> {
	
	
	static public inline var SBYTES_PER_ELEMENT = 2;
	
	public var BYTES_PER_ELEMENT (default, null):Int;
	public var length (default, null):Int;
	
	
	public function new (bufferOrArray:Dynamic, start:Int = 0, elements:Null<Int> = null) {
		
		BYTES_PER_ELEMENT = 2;
		
		if (Std.is (bufferOrArray, Int)) {
			
			super (Std.int (bufferOrArray) << 1);
			this.length = Std.int(bufferOrArray);
			
		} else if (Std.is (bufferOrArray, Array)) {
			
			var ints:Array<Int> = bufferOrArray;
			
			if (elements != null) {
				
				this.length = elements;
				
			} else {
				
				this.length = ints.length - start;
				
			}
			
			super (this.length << 1);
			
			#if !cpp
			buffer.position = 0;
			#end
			
			for (i in 0...this.length) {
				
				#if cpp
				untyped __global__.__hxcpp_memory_set_i16 (bytes, (i << 1), ints[i]);
				#else
				buffer.writeShort (ints[i + start]);
				#end
				
			}
		
		#if neko
		
		} else if (Std.is (bufferOrArray, VectorData)) {
			
			var ints:Vector<Int> = bufferOrArray.data;
			
			if (elements != null) {
				
				this.length = elements;
				
			} else {
				
				this.length = ints.length - start;
				
			}
			
			super (this.length << 2);
			
			#if !cpp
			buffer.position = 0;
			#end
			
			for (i in 0...this.length) {
				
				#if cpp
				untyped __global__.__hxcpp_memory_set_i16 (bytes, (i << 1), ints[i]);
				#else
				buffer.writeShort (ints[i + start]);
				#end
				
			}
		
		#end
			
		} else {
			
			super (bufferOrArray, start, elements != null ? elements * 2 : null);
			
			if ((byteLength & 0x01) > 0) {
				
				throw ("Invalid array size");
				
			}
			
			this.length = byteLength >> 1;
			
			if ((this.length << 1) != byteLength) {
				
				throw "Invalid length multiple";
				
			}
			
		}
		
	}
	
	
	@:noCompletion @:keep inline public function __get (index:Int):Int { return getInt16 (index << 1); }
	@:noCompletion @:keep inline public function __set (index:Int, value:Int):Void { setInt16 (index << 1, value); }
	
	
}


#end