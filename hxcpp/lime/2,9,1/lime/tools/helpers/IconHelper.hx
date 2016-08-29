package lime.tools.helpers;


//import openfl.display.Bitmap;
//import openfl.display.BitmapData;
//import openfl.display.Shape;
//import openfl.geom.Rectangle;
//import openfl.utils.ByteArray;
//import format.SVG;
import haxe.io.Bytes;
import haxe.io.BytesOutput;
import haxe.io.Path;
import lime.tools.helpers.FileHelper;
import lime.tools.helpers.ImageHelper;
import lime.tools.helpers.LogHelper;
import lime.tools.helpers.PathHelper;
import lime.graphics.format.BMP;
import lime.graphics.Image;
import lime.math.Rectangle;
import lime.project.Icon;
import sys.io.File;
import sys.FileSystem;


class IconHelper {
	
	
	private static function canUseCache (targetPath:String, icons:Array<Icon>):Bool {
		
		if (FileSystem.exists (targetPath)) {
			
			var cacheTime = FileHelper.getLastModified (targetPath);
			
			for (icon in icons) {
				
				if (FileHelper.getLastModified (icon.path) > cacheTime) {
					
					return false;
					
				}
				
			}
			
			return true;
			
		}
		
		return false;
		
	}
	
	
	public static function createIcon (icons:Array<Icon>, width:Int, height:Int, targetPath:String):Bool {
		
		var icon = findMatch (icons, width, height);
		
		if (icon != null && icon.size > 0 && Path.extension (icon.path) == "png") {
			
			if (canUseCache (targetPath, [ icon ])) {
				
				return true;
				
			}
			
			PathHelper.mkdir (Path.directory (targetPath));
			FileHelper.copyFile (icon.path, targetPath);
			return true;
			
		} else {
			
			if (canUseCache (targetPath, icons)) {
				
				return true;
				
			}
			
			var image = getIconImage (icons, width, height);
			
			if (image != null) {
				
				var bytes = image.encode ("png");
				
				if (bytes != null) {
					
					PathHelper.mkdir (Path.directory (targetPath));
					File.saveBytes (targetPath, bytes);
					return true;
					
				}
				
			}
			
		}
		
		return false;
		
	}
	
	
	public static function createMacIcon (icons:Array<Icon>, targetPath:String):Bool {
		
		if (canUseCache (targetPath, icons)) {
			
			return true;
			
		}
		
		var out = new BytesOutput ();
		out.bigEndian = true;
		
		// Not sure why the 128x128 icon is not saving properly. Disabling for now
		
		for (i in 0...3) {
			
			var s =  ([ 16, 32, 48, 128 ])[i];
			var code =  ([ "is32", "il32", "ih32", "it32" ])[i];
			var image = getIconImage (icons, s, s);
			
			if (image != null) {
				
				for (c in 0...4) out.writeByte (code.charCodeAt(c));
				
				var n = s * s;
				var pixels = image.getPixels (new Rectangle (0, 0, s, s), ARGB32);
				
				var bytes_r = packBits (pixels, 1, s * s);
				var bytes_g = packBits (pixels, 2, s * s);
				var bytes_b = packBits (pixels, 3, s * s);
				
				out.writeInt32 (bytes_r.length + bytes_g.length + bytes_b.length + 8);
				out.writeBytes (bytes_r, 0, bytes_r.length);
				out.writeBytes (bytes_g, 0, bytes_g.length);
				out.writeBytes (bytes_b, 0, bytes_b.length);
				
				var code =  ([ "s8mk", "l8mk", "h8mk", "t8mk" ])[i];
				
				for (c in 0...4) out.writeByte (code.charCodeAt (c));
				
				var bytes_a = extractBits (pixels, 0, s * s);
				out.writeInt32 (bytes_a.length + 8);
				out.writeBytes (bytes_a, 0, bytes_a.length);
				
			}
			
		}
		
		for (i in 0...5) {
			
			var s =  ([ 32, 64, 256, 512, 1024 ])[i];
			var code =  ([ "ic11", "ic12", "ic08", "ic09", "ic10" ])[i];
			var image = getIconImage (icons, s, s);
			
			if (image != null) {
				
				var bytes = image.encode ("png");
				
				if (bytes != null) {
					
					for (c in 0...4) out.writeByte (code.charCodeAt(c));
					
					out.writeInt32 (bytes.length + 8);
					out.writeBytes (bytes, 0, bytes.length);
					
				}
				
			}
			
		}
		
		var bytes = out.getBytes ();
		
		if (bytes.length > 0) {
			
			var file = File.write (targetPath, true);
			file.bigEndian = true;
			
			for (c in 0...4) file.writeByte ("icns".charCodeAt (c));
			
			file.writeInt32 (bytes.length + 8);
			file.writeBytes (bytes, 0, bytes.length);
			file.close ();
			
			return true;
			
		}
		
		return false;
		
	}
	
	
	public static function createWindowsIcon (icons:Array <Icon>, targetPath:String):Bool {
		
		if (canUseCache (targetPath, icons)) {
			
			return true;
			
		}
		
		var sizes = [ 16, 24, 32, 40, 48, 64, 96, 128, 256, 512, 768 ];
		
		var images = new Array<Image> ();
		var imageData = new Array<Bytes> ();
		
		for (size in sizes) {
			
			var image = getIconImage (icons, size, size);
			
			if (image != null) {
				
				var data = null;
				
				if (size < 256) {
					
					data = BMP.encode (image, ICO);
					
				} else {
					
					data = image.encode ("png");
					
				}
				
				if (data != null) {
					
					imageData.push (data);
					images.push (image);
					
				}
				
			}
			
		}
		
		var length = 6 + (16 * images.length);
		
		for (data in imageData) {
			
			length += data.length;
			
		}
		
		var icon = Bytes.alloc (length);
		var position = 0;
		icon.setUInt16 (position, 0); position += 2;
		icon.setUInt16 (position, 1); position += 2;
		icon.setUInt16 (position, images.length); position += 2;
		
		var dataOffset = 6 + (16 * images.length);
		
		for (i in 0...images.length) {
			
			var size = images[i].width;
			
			icon.set (position++, size > 255 ? 0 : size);
			icon.set (position++, size > 255 ? 0 : size);
			icon.set (position++, 0);
			icon.set (position++, 0);
			icon.setUInt16 (position, 1); position += 2;
			icon.setUInt16 (position, 32); position += 2;
			icon.setInt32 (position, imageData[i].length); position += 4;
			icon.setInt32 (position, dataOffset); position += 4;
			
			dataOffset += imageData[i].length;
			
		}
		
		for (data in imageData) {
			
			icon.blit (position, data, 0, data.length);
			position += data.length;
			
		}
		
		if (images.length > 0) {
			
			File.saveBytes (targetPath, icon);
			return true;
			
		}
		
		return false;
		
	}
	
	
	private static function extractBits (data:Bytes, offset:Int, len:Int):Bytes {
		
		var out = new BytesOutput ();
		
		for (i in 0...len) {
			
			out.writeByte (data.get (i * 4 + offset));
			
		}
		
		return out.getBytes ();
		
	}
	
	
	public static function findMatch (icons:Array <Icon>, width:Int, height:Int):Icon {
		
		var match = null;
		
		for (icon in icons) {
			
			if ((icon.width == 0 && icon.height == 0) || (icon.width == width && icon.height == height)) {
				
				match = icon;
				
			}
			
		}
		
		return match;
		
	}
	
	
	public static function findNearestMatch (icons:Array <Icon>, width:Int, height:Int):Icon {
		
		var match = null;
		
		for (icon in icons) {
			
			if (icon.width > width / 2 && icon.height > height / 2) {
				
				if (match == null) {
					
					match = icon;
					
				} else {
					
					if (icon.width > match.width && icon.height > match.height) {
						
						if (match.width < width || match.height < height) {
							
							match = icon;
							
						}
						
					} else {
						
						if (icon.width > width && icon.height > height) {
							
							match = icon;
							
						}
						
					}
					
				}
				
			}
			
		}
		
		return match;
		
	}
	
	
	private static function getIconImage (icons:Array <Icon>, width:Int, height:Int, backgroundColor:Int = null):Image {
		
		var icon = findMatch (icons, width, height);
		
		if (icon == null) {
			
			icon = findNearestMatch (icons, width, height);
			
		}
		
		if (icon == null) {
			
			return null;
			
		}
		
		if (!FileSystem.exists (icon.path)) {
			
			LogHelper.warn ("Could not find icon path: " + icon.path);
			return null;
			
		}
		
		var extension = Path.extension (icon.path);
		var image = null;
		
		switch (extension) {
			
			case "png", "jpg", "jpeg":
				
				image = ImageHelper.resizeImage (Image.fromFile (icon.path), width, height);
			
			case "svg":
				
				//image = ImageHelper.rasterizeSVG (null /*new SVG (File.getContent (icon.path))*/, width, height, backgroundColor);
				image = ImageHelper.rasterizeSVG (icon.path, width, height, backgroundColor);
			
		}
		
		return image;
		
	}
   
   
	private static function packBits (data:Bytes, offset:Int, len:Int):Bytes {
		
		var out = new BytesOutput ();
		var idx = 0;
		
		while (idx < len) {
			
			var val = data.get (idx * 4 + offset);
			var same = 1;
			
			/*
			Hmmmm...
			while( ((idx+same) < len) && (data[ (idx+same)*4 + offset ]==val) && (same < 2) )
			same++;
			*/
			
			if (same == 1) {
				
				var raw = idx + 120 < len ? 120 : len - idx;
				out.writeByte (raw - 1);
				
				for (i in 0...raw) {
					
					out.writeByte (data.get (idx * 4 + offset));
					idx++;
					
				}
				
			} else {
				
				out.writeByte (257 - same);
				out.writeByte (val);
				idx += same;
				
			}
			
		}
		
		return out.getBytes ();
		
	}
	
	
}