package lime.graphics.utils;


import haxe.format.JsonParser;
import haxe.io.Bytes;
import lime.graphics.Image;
import lime.graphics.ImageBuffer;
import lime.graphics.PixelFormat;
import lime.math.ColorMatrix;
import lime.math.Rectangle;
import lime.math.Vector2;
import lime.utils.UInt8Array;

#if (js && html5)
import js.Browser;
#end

@:access(lime.graphics.ImageBuffer)


class ImageCanvasUtil {
	
	
	public static function colorTransform (image:Image, rect:Rectangle, colorMatrix:ColorMatrix):Void {
		
		convertToData (image);
		
		ImageDataUtil.colorTransform (image, rect, colorMatrix);
		
	}
	
	
	public static function convertToCanvas (image:Image, clear:Bool = false):Void {
		
		var buffer = image.buffer;
		
		#if (js && html5)
		if (buffer.__srcImage != null) {
			
			if (buffer.__srcCanvas == null) {
				
				createCanvas (image, buffer.__srcImage.width, buffer.__srcImage.height);
				buffer.__srcContext.drawImage (buffer.__srcImage, 0, 0);
				
			}
			
			buffer.__srcImage = null;
			
		} else if (buffer.__srcCanvas == null && buffer.data != null) {
			
			image.transparent = true;
			createCanvas (image, buffer.width, buffer.height);
			createImageData (image);
			
			buffer.__srcContext.putImageData (buffer.__srcImageData, 0, 0);
			
		} else {
			
			if (image.type == DATA && buffer.__srcImageData != null && image.dirty) {
				
				buffer.__srcContext.putImageData (buffer.__srcImageData, 0, 0);
				image.dirty = false;
				
			}
			
		}
		
		if (clear) {
			
			buffer.data = null;
			buffer.__srcImageData = null;
			
		} else {
			
			if (buffer.data == null && buffer.__srcImageData != null) {
				
				buffer.data = cast buffer.__srcImageData.data;
				
			}
			
		}
		#end
		
		image.type = CANVAS;
		
	}
	
	
	public static function convertToData (image:Image, clear:Bool = false):Void {
		
		var buffer = image.buffer;
		
		#if (js && html5)
		if (buffer.__srcImage != null) {
			
			convertToCanvas (image);
			
		}
		
		if (buffer.__srcCanvas != null && buffer.data == null) {
			
			createImageData (image);
			if (image.type == CANVAS) image.dirty = false;
			
		} else if (image.type == CANVAS && buffer.__srcCanvas != null && image.dirty) {
			
			if (buffer.__srcImageData == null) {
				
				createImageData (image);
				
			} else {
				
				buffer.__srcImageData = buffer.__srcContext.getImageData (0, 0, buffer.width, buffer.height);
				buffer.data = new UInt8Array (cast buffer.__srcImageData.data.buffer);
				
			}
			
			image.dirty = false;
			
		}
		
		if (clear) {
			
			image.buffer.__srcCanvas = null;
			image.buffer.__srcContext = null;
			
		}
		#end
		
		image.type = DATA;
		
	}
	
	
	public static function copyChannel (image:Image, sourceImage:Image, sourceRect:Rectangle, destPoint:Vector2, sourceChannel:ImageChannel, destChannel:ImageChannel):Void {
		
		convertToData (sourceImage);
		convertToData (image);
		
		ImageDataUtil.copyChannel (image, sourceImage, sourceRect, destPoint, sourceChannel, destChannel);
		
	}
	
	
	public static function copyPixels (image:Image, sourceImage:Image, sourceRect:Rectangle, destPoint:Vector2, alphaImage:Image = null, alphaPoint:Vector2 = null, mergeAlpha:Bool = false):Void {
		
		if (destPoint == null || destPoint.x >= image.width || destPoint.y >= image.height || sourceRect == null || sourceRect.width < 1 || sourceRect.height < 1) {
			
			return;
			
		}
		
		if (alphaImage != null && alphaImage.transparent) {
			
			if (alphaPoint == null) alphaPoint = new Vector2 ();
			
			// TODO: use faster method
			
			var tempData = image.clone ();
			tempData.copyChannel (alphaImage, new Rectangle (alphaPoint.x, alphaPoint.y, sourceRect.width, sourceRect.height), new Vector2 (sourceRect.x, sourceRect.y), ImageChannel.ALPHA, ImageChannel.ALPHA);
			sourceImage = tempData;
			
		}
		
		convertToCanvas (image, true);
		
		if (!mergeAlpha) {
			
			if (image.transparent && sourceImage.transparent) {
				
				image.buffer.__srcContext.clearRect (destPoint.x + image.offsetX, destPoint.y + image.offsetY, sourceRect.width + image.offsetX, sourceRect.height + image.offsetY);
				
			}
			
		}
		
		convertToCanvas (sourceImage);
		
		if (sourceImage.buffer.src != null) {
			
			image.buffer.__srcContext.drawImage (sourceImage.buffer.src, Std.int (sourceRect.x + sourceImage.offsetX), Std.int (sourceRect.y + sourceImage.offsetY), Std.int (sourceRect.width), Std.int (sourceRect.height), Std.int (destPoint.x + image.offsetX), Std.int (destPoint.y + image.offsetY), Std.int (sourceRect.width), Std.int (sourceRect.height));
			
		}
		
		image.dirty = true;
		image.version++;
		
	}
	
	
	public static function createCanvas (image:Image, width:Int, height:Int):Void {
		
		#if (js && html5)
		var buffer = image.buffer;
		
		if (buffer.__srcCanvas == null) {
			
			buffer.__srcCanvas = cast Browser.document.createElement ("canvas");
			buffer.__srcCanvas.width = width;
			buffer.__srcCanvas.height = height;
			
			if (!image.transparent) {
				
				if (!image.transparent) buffer.__srcCanvas.setAttribute ("moz-opaque", "true");
				buffer.__srcContext = untyped __js__ ('buffer.__srcCanvas.getContext ("2d", { alpha: false })');
				
			} else {
				
				buffer.__srcContext = buffer.__srcCanvas.getContext ("2d");
				
			}
			
			untyped (buffer.__srcContext).mozImageSmoothingEnabled = false;
			//untyped (buffer.__srcContext).webkitImageSmoothingEnabled = false;
			untyped (buffer.__srcContext).msImageSmoothingEnabled = false;
			untyped (buffer.__srcContext).imageSmoothingEnabled = false;
			
		}
		#end
		
	}
	
	
	public static function createImageData (image:Image):Void {
		
		#if (js && html5)
		
		var buffer = image.buffer;
		
		if (buffer.__srcImageData == null) {
			
			if (buffer.data == null) {
				
				buffer.__srcImageData = buffer.__srcContext.getImageData (0, 0, buffer.width, buffer.height);
				
			} else {
				
				buffer.__srcImageData = buffer.__srcContext.createImageData (buffer.width, buffer.height);
				buffer.__srcImageData.data.set (cast buffer.data);
				
			}
			
			buffer.data = new UInt8Array (cast buffer.__srcImageData.data.buffer);
			
		}
		
		#end
		
	}
	
	
	public static function fillRect (image:Image, rect:Rectangle, color:Int, format:PixelFormat):Void {
		
		convertToCanvas (image);
		
		var r, g, b, a;
		
		if (format == ARGB32) {
			
			r = (color >> 16) & 0xFF;
			g = (color >> 8) & 0xFF;
			b = color & 0xFF;
			a = (image.transparent) ? (color >> 24) & 0xFF : 0xFF;
			
		} else {
			
			r = (color >> 24) & 0xFF;
			g = (color >> 16) & 0xFF;
			b = (color >> 8) & 0xFF;
			a = (image.transparent) ? color & 0xFF : 0xFF;
			
		}
		
		if (rect.x == 0 && rect.y == 0 && rect.width == image.width && rect.height == image.height) {
			
			if (image.transparent && a == 0) {
				
				image.buffer.__srcCanvas.width = image.buffer.width;
				return;
				
			}
			
		}
		
		image.buffer.__srcContext.fillStyle = 'rgba(' + r + ', ' + g + ', ' + b + ', ' + (a / 255) + ')';
		image.buffer.__srcContext.fillRect (rect.x + image.offsetX, rect.y + image.offsetY, rect.width + image.offsetX, rect.height + image.offsetY);
		
		image.dirty = true;
		image.version++;
		
	}
	
	
	public static function floodFill (image:Image, x:Int, y:Int, color:Int, format:PixelFormat):Void {
		
		convertToData (image);
		
		ImageDataUtil.floodFill (image, x, y, color, format);
		
	}
	
	
	public static function getPixel (image:Image, x:Int, y:Int, format:PixelFormat):Int {
		
		convertToData (image);
		
		return ImageDataUtil.getPixel (image, x, y, format);
		
	}
	
	
	public static function getPixel32 (image:Image, x:Int, y:Int, format:PixelFormat):Int {
		
		convertToData (image);
		
		return ImageDataUtil.getPixel32 (image, x, y, format);
		
	}
	
	
	public static function getPixels (image:Image, rect:Rectangle, format:PixelFormat):Bytes {
		
		convertToData (image);
		
		return ImageDataUtil.getPixels (image, rect, format);
		
	}
	
	
	public static function merge (image:Image, sourceImage:Image, sourceRect:Rectangle, destPoint:Vector2, redMultiplier:Int, greenMultiplier:Int, blueMultiplier:Int, alphaMultiplier:Int):Void {
		
		convertToData (sourceImage);
		convertToData (image);
		
		ImageDataUtil.merge (image, sourceImage, sourceRect, destPoint, redMultiplier, greenMultiplier, blueMultiplier, alphaMultiplier);
		
	}
	
	
	public static function resize (image:Image, newWidth:Int, newHeight:Int):Void {
		
		var buffer = image.buffer;
		
		if (buffer.__srcCanvas == null) {
			
			createCanvas (image, newWidth, newHeight);
			buffer.__srcContext.drawImage (buffer.src, 0, 0, newWidth, newHeight);
			
		} else {
			
			convertToCanvas (image, true);
			var sourceCanvas = buffer.__srcCanvas;
			buffer.__srcCanvas = null;
			createCanvas (image, newWidth, newHeight);
			buffer.__srcContext.drawImage (sourceCanvas, 0, 0, newWidth, newHeight);
			
		}
		
		buffer.__srcImageData = null;
		buffer.data = null;
		
		image.dirty = true;
		image.version++;
		
	}
	
	
	public static function scroll (image:Image, x:Int, y:Int):Void {
		
		if ((x % image.width == 0) && (y % image.height == 0)) return;
		
		convertToCanvas (image, true);
		
		image.buffer.__srcContext.clearRect (x, y, image.width, image.height);
		image.buffer.__srcContext.drawImage (image.buffer.__srcCanvas, x, y);
		
		image.dirty = true;
		image.version++;
		
	}
	
	
	public static function setPixel (image:Image, x:Int, y:Int, color:Int, format:PixelFormat):Void {
		
		convertToData (image);
		
		ImageDataUtil.setPixel (image, x, y, color, format);
		
	}
	
	
	public static function setPixel32 (image:Image, x:Int, y:Int, color:Int, format:PixelFormat):Void {
		
		convertToData (image);
		
		ImageDataUtil.setPixel32 (image, x, y, color, format);
		
	}
	
	
	public static function setPixels (image:Image, rect:Rectangle, bytes:Bytes, format:PixelFormat):Void {
		
		convertToData (image);
		
		ImageDataUtil.setPixels (image, rect, bytes, format);
		
	}
	
	
	public static function sync (image:Image, clear:Bool):Void {
		
		#if (js && html5)
		if (image.type == CANVAS) {
			
			convertToCanvas (image, clear);
			
		} else {
			
			convertToData (image, clear);
			
		}
		#end
		
	}
	
	
}