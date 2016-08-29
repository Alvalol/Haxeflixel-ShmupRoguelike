package lime.utils;


import haxe.io.Bytes;

#if !macro
@:build(lime.system.CFFI.build())
#end


class LZMA {
	
	
	public static function decode (bytes:Bytes):Bytes {
		
		#if ((cpp || neko || nodejs) && !macro)
		var data:Dynamic = lime_lzma_decode (bytes);
		return @:privateAccess new Bytes (data.length, data.b);
		#else
		return null;
		#end
		
	}
	
	
	public static function encode (bytes:Bytes):Bytes {
		
		#if ((cpp || neko || nodejs) && !macro)
		var data:Dynamic = lime_lzma_encode (bytes);
		return @:privateAccess new Bytes (data.length, data.b);
		#else
		return null;
		#end
		
	}
	
	
	
	
	// Native Methods
	
	
	
	
	#if ((cpp || neko || nodejs) && !macro)
	@:cffi private static function lime_lzma_decode (data:Dynamic):Dynamic;
	@:cffi private static function lime_lzma_encode (data:Dynamic):Dynamic;
	#end
	
	
}