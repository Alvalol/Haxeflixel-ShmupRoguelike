package lime.tools.helpers;


import haxe.io.Bytes;
import haxe.io.Path;
import haxe.Template;
import lime.tools.helpers.PlatformHelper;
import lime.tools.helpers.StringHelper;
import lime.project.Asset;
import lime.project.AssetEncoding;
import lime.project.HXProject;
import lime.project.NDLL;
import lime.project.Platform;
import sys.io.File;
import sys.io.FileOutput;
import sys.FileSystem;

#if neko
import neko.Lib;
#elseif cpp
import cpp.Lib;
#end


class FileHelper {
	
	
	private static var binaryExtensions = [ "jpg", "jpeg", "png", "exe", "gif", "ini", "zip", "tar", "gz", "fla", "swf" ];
	private static var textExtensions = [ "xml", "java", "hx", "hxml", "html", "ini", "gpe", "pch", "pbxproj", "plist", "json", "cpp", "mm", "properties", "hxproj", "nmml", "lime" ];
	
	
	public static function copyAsset (asset:Asset, destination:String, context:Dynamic = null) {
		
		if (asset.sourcePath != "") {
			
			copyFile (asset.sourcePath, destination, context);
			
		} else {
			
			try {
				
				if (asset.encoding == AssetEncoding.BASE64) {
					
					File.saveBytes (destination, StringHelper.base64Decode (asset.data));
					
				} else if (Std.is (asset.data, Bytes)) {
					
					File.saveBytes (destination, cast asset.data);
					
				} else {
					
					File.saveContent (destination, Std.string (asset.data));
					
				}
				
			} catch (e:Dynamic) {
				
				LogHelper.error ("Cannot write to file \"" + destination + "\"");
				
			}
			
		}
		
	}
	
	
	public static function copyAssetIfNewer (asset:Asset, destination:String) {
		
		if (asset.sourcePath != "") {
			
			if (isNewer (asset.sourcePath, destination)) {
				
				copyFile (asset.sourcePath, destination, null, false);
				
			}
			
		} else {
			
			PathHelper.mkdir (Path.directory (destination));
			
			try {
				
				if (asset.encoding == AssetEncoding.BASE64) {
					
					File.saveBytes (destination, StringHelper.base64Decode (asset.data));
					
				} else if (Std.is (asset.data, Bytes)) {
					
					File.saveBytes (destination, cast asset.data);
					
				} else {
					
					File.saveContent (destination, Std.string (asset.data));
					
				}
				
			} catch (e:Dynamic) {
				
				LogHelper.error ("Cannot write to file \"" + destination + "\"");
				
			}
			
		}
		
	}
	
	
	public static function copyFile (source:String, destination:String, context:Dynamic = null, process:Bool = true) {
		
		var extension = Path.extension (source);
		
		if (process && context != null) {
			
			for (binary in binaryExtensions) {
				
				if (extension == binary) {
					
					copyIfNewer (source, destination);
					return;
					
				}
				
			}
			
			var match = false;
			
			for (text in textExtensions) {
				
				if (extension == text) {
					
					match = true;
					break;
					
				}
				
			}
			
			if (!match) {
				
				match = isText (source);
				
			}
			
			if (match) {
				
				LogHelper.info ("", " - \x1b[1mCopying template file:\x1b[0m " + source + " \x1b[3;37m->\x1b[0m " + destination);
				
				var fileContents:String = File.getContent (source);
				var template:Template = new Template (fileContents);
				var result:String = template.execute (context, { 
					toJSON: function(_, s) return haxe.Json.stringify(s),
					upper: function (_, s) return s.toUpperCase (),
					replace: function (_, s, sub, by) return StringTools.replace(s, sub, by)
				});
				
				try {
					
					var fileOutput:FileOutput = File.write (destination, true);
					fileOutput.writeString (result);
					fileOutput.close ();
					
				} catch (e:Dynamic) {
					
					LogHelper.error ("Cannot write to file \"" + destination + "\"");
					
				}
				
				return;
				
			}
			
		}
		
		copyIfNewer (source, destination);
		
	}
	
	
	public static function copyFileTemplate (templatePaths:Array <String>, source:String, destination:String, context:Dynamic = null, process:Bool = true) {
		
		var path = PathHelper.findTemplate (templatePaths, source);
		
		if (path != null) {
			
			copyFile (path, destination, context, process);
			
		}
		
	}
	
	
	public static function copyIfNewer (source:String, destination:String) {
      
		//allFiles.push (destination);
		
		if (!isNewer (source, destination)) {
			
			return;
			
		}
		
		PathHelper.mkdir (Path.directory (destination));
		
		LogHelper.info ("", " - \x1b[1mCopying file:\x1b[0m " + source + " \x1b[3;37m->\x1b[0m " + destination);
		
		try {
			
			File.copy (source, destination);
			
		} catch (e:Dynamic) {
			
			try {
				
				if (FileSystem.exists (destination)) {
					
					LogHelper.error ("Cannot copy to \"" + destination + "\", is the file in use?");
					return;
					
				} else {}
				
			} catch (e:Dynamic) {}
			
			LogHelper.error ("Cannot open \"" + destination + "\" for writing, do you have correct access permissions?");
			
		}
		
	}
	
	
	public static function copyLibrary (project:HXProject, ndll:NDLL, directoryName:String, namePrefix:String, nameSuffix:String, targetDirectory:String, allowDebug:Bool = false, targetSuffix:String = null) {
		
		var path = PathHelper.getLibraryPath (ndll, directoryName, namePrefix, nameSuffix, allowDebug);
		
		if (FileSystem.exists (path)) {
			
			var targetPath = PathHelper.combine (targetDirectory, namePrefix + ndll.name);
			
			if (targetSuffix != null) {
				
				targetPath += targetSuffix;
				
			} else {
				
				targetPath += nameSuffix;
				
			}
			
			if (project.config.getBool ("tools.copy-ndlls")) {
				
				LogHelper.info ("", " - \x1b[1mCopying library file:\x1b[0m " + path + " \x1b[3;37m->\x1b[0m " + targetPath);
				
				PathHelper.mkdir (targetDirectory);
				
				try {
					
					File.copy (path, targetPath);
					
				} catch (e:Dynamic) {
					
					LogHelper.error ("Cannot copy to \"" + targetPath + "\", is the file in use?");
					
				}
				
			} else {
				
				LogHelper.info ("", " - \x1b[1mSkipping library file:\x1b[0m " + path + " \x1b[3;37m->\x1b[0m " + targetPath);
				
			}
			
		} else {
			
			LogHelper.error ("Source path \"" + path + "\" does not exist");
			
		}
		
	}
	
	
	public static function getLastModified (source:String):Float {
		
		if (FileSystem.exists (source)) {
			
			return FileSystem.stat (source).mtime.getTime ();
			
		}
		
		return -1;
		
	}
	
	
	public static function linkFile (source:String, destination:String, symbolic:Bool = true, overwrite:Bool = false) {
		
		if (!isNewer (source, destination)) {
			
			return;
			
		}
		
		if (FileSystem.exists (destination)) {
			
			FileSystem.deleteFile (destination);
			
		}
		
		if (!FileSystem.exists (destination)) {
			
			try {
				
				var command = "/bin/ln";
				var args = [];
				
				if (symbolic) {
					
					args.push ("-s");
					
				}
				
				if(overwrite){
					
					args.push("-f");
					
				}
				
				args.push (source);
				args.push (destination);
				
				ProcessHelper.runCommand (".", command, args);
				
			} catch (e:Dynamic) {}
			
		}
		
	}
	
	
	public static function recursiveCopy (source:String, destination:String, context:Dynamic = null, process:Bool = true) {
		
		PathHelper.mkdir (destination);
		
		var files:Array <String> = null;
		
		try {
			
			files = FileSystem.readDirectory (source);
			
		} catch (e:Dynamic) {
			
			LogHelper.error ("Could not find source directory \"" + source + "\"");
			
		}
		
		for (file in files) {
			
			if (file.substr (0, 1) != ".") {
				
				var itemDestination:String = destination + "/" + file;
				var itemSource:String = source + "/" + file;
				
				if (FileSystem.isDirectory (itemSource)) {
					
					recursiveCopy (itemSource, itemDestination, context, process);
					
				} else {
					
					copyFile (itemSource, itemDestination, context, process);
					
				}
				
			}
			
		}
		
	}
	
	
	public static function recursiveCopyTemplate (templatePaths:Array <String>, source:String, destination:String, context:Dynamic = null, process:Bool = true, warnIfNotFound:Bool = true) {
		
		var paths = PathHelper.findTemplates (templatePaths, source, warnIfNotFound);
		
		for (path in paths) {
			
			recursiveCopy (path, destination, context, process);
			
		}
		
	}
	
	
	public static function isNewer (source:String, destination:String):Bool {
		
		if (source == null || !FileSystem.exists (source)) {
			
			LogHelper.error ("Source path \"" + source + "\" does not exist");
			return false;
			
		}
		
		if (FileSystem.exists (destination)) {
			
			if (FileSystem.stat (source).mtime.getTime () < FileSystem.stat (destination).mtime.getTime ()) {
				
				return false;
				
			}
			
		}
		
		return true;
		
	}
	
	
	public static function isText (source:String):Bool {
		
		if (!FileSystem.exists (source)) {
			
			return false;
			
		}
		
		var input = File.read (source, true);
		
		var numChars = 0;
		var numBytes = 0;
		var byteHeader = [];
		var zeroBytes = 0;
		
		try {
			
			while (numBytes < 512) {
				
				var byte = input.readByte ();
				
				if (numBytes < 3) {
					
					byteHeader.push (byte);
					
				} else if (byteHeader != null) {
					
					if (byteHeader[0] == 0xFF && byteHeader[1] == 0xFE) return true; // UCS-2LE or UTF-16LE
					if (byteHeader[0] == 0xFE && byteHeader[1] == 0xFF) return true; // UCS-2BE or UTF-16BE
					if (byteHeader[0] == 0xEF && byteHeader[1] == 0xBB && byteHeader[2] == 0xBF) return true; // UTF-8
					byteHeader = null;
					
				}
				
				numBytes++;
				
				if (byte == 0) {
					
					zeroBytes++;
					
				}
				
				if ((byte > 8 && byte < 16) || (byte > 32 && byte < 256) || byte > 287) {
					
					numChars++;
					
				}
				
			}
			
		} catch (e:Dynamic) { }
		
		input.close ();
		
		if (numBytes == 0 || (numChars / numBytes) > 0.9 || ((zeroBytes / numBytes) < 0.015 && (numChars / numBytes) > 0.5)) {
			
			return true;
			
		}
		
		return false;
		
	}
	
	
}