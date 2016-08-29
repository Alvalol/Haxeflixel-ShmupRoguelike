package;


import format.swf.exporters.SWFLiteExporter;
import format.swf.lite.symbols.BitmapSymbol;
import format.swf.lite.symbols.ButtonSymbol;
import format.swf.lite.symbols.DynamicTextSymbol;
import format.swf.lite.symbols.ShapeSymbol;
import format.swf.lite.symbols.SpriteSymbol;
import format.swf.lite.symbols.StaticTextSymbol;
import format.swf.lite.SWFLiteLibrary;
import format.swf.lite.SWFLite;
import format.swf.tags.TagDefineBits;
import format.swf.tags.TagDefineBitsLossless;
import format.swf.tags.TagDefineButton2;
import format.swf.tags.TagDefineEditText;
import format.swf.tags.TagDefineMorphShape;
import format.swf.tags.TagDefineShape;
import format.swf.tags.TagDefineSprite;
import format.swf.tags.TagDefineText;
import format.swf.tags.TagPlaceObject;
import format.swf.SWFLibrary;
import format.swf.SWFTimelineContainer;
import format.SWF;
import haxe.io.Path;
import haxe.Json;
import haxe.Serializer;
import haxe.Template;
import haxe.Unserializer;
import lime.tools.helpers.LogHelper;
import lime.tools.helpers.PathHelper;
import lime.tools.helpers.PlatformHelper;
import lime.tools.helpers.StringHelper;
import lime.project.Architecture;
import lime.project.Asset;
import lime.project.AssetEncoding;
import lime.project.AssetType;
import lime.project.Haxelib;
import lime.project.HXProject;
import lime.project.Platform;
import openfl.display.PNGEncoderOptions;
import openfl.utils.ByteArray;
import sys.io.File;
import sys.io.Process;
import sys.FileSystem;


class Tools {
	
	
	private static var targetDirectory:String;
	
	
	#if neko
	public static function __init__ () {
		
		var haxePath = Sys.getEnv ("HAXEPATH");
		var command = (haxePath != null && haxePath != "") ? haxePath + "/haxelib" : "haxelib";
		
		var process = new Process (command, [ "path", "lime" ]);
		var path = "";
		
		try {
			
			var lines = new Array <String> ();
			
			while (true) {
				
				var length = lines.length;
				var line = StringTools.trim (process.stdout.readLine ());
				
				if (length > 0 && (line == "-D lime" || StringTools.startsWith (line, "-D lime="))) {
					
					path = StringTools.trim (lines[length - 1]);
					
				}
				
				lines.push (line);
				
			}
			
		} catch (e:Dynamic) {
			
			process.close ();
			
		}
		
		path += "/ndll/";
		
		switch (PlatformHelper.hostPlatform) {
			
			case WINDOWS:
				
				untyped $loader.path = $array (path + "Windows/", $loader.path);
				
			case MAC:
				
				untyped $loader.path = $array (path + "Mac/", $loader.path);
				untyped $loader.path = $array (path + "Mac64/", $loader.path);
				
			case LINUX:
				
				var arguments = Sys.args ();
				var raspberryPi = false;
				
				for (argument in arguments) {
					
					if (argument == "-rpi") raspberryPi = true;
					
				}
				
				if (raspberryPi) {
					
					untyped $loader.path = $array (path + "RPi/", $loader.path);
					
				} else if (PlatformHelper.hostArchitecture == Architecture.X64) {
					
					untyped $loader.path = $array (path + "Linux64/", $loader.path);
					
				} else {
					
					untyped $loader.path = $array (path + "Linux/", $loader.path);
					
				}
			
			default:
			
		}
		
	}
	#end
	
	
	private static function generateSWFClasses (project:HXProject, output:HXProject, swfAsset:Asset, prefix:String = ""):Void {
		
		var movieClipTemplate = File.getContent (PathHelper.getHaxelib (new Haxelib ("swf")) + "/templates/swf/MovieClip.mtt");
		var simpleButtonTemplate = File.getContent (PathHelper.getHaxelib (new Haxelib ("swf")) + "/templates/swf/SimpleButton.mtt");
		
		var swf = new SWF (ByteArray.fromBytes (File.getBytes (swfAsset.sourcePath)));
		
		for (className in swf.symbols.keys ()) {
			
			var lastIndexOfPeriod = className.lastIndexOf (".");
			
			var packageName = "";
			var name = "";
			
			if (lastIndexOfPeriod == -1) {
				
				name = className;
				
			} else {
				
				packageName = className.substr (0, lastIndexOfPeriod);
				name = className.substr (lastIndexOfPeriod + 1);
				
			}
			
			packageName = packageName.toLowerCase ();
			name = name.substr (0, 1).toUpperCase () + name.substr (1);
			
			if (prefix != "" && prefix != null) {
				
				prefix = prefix.substr (0, 1).toUpperCase () + prefix.substr (1);
				
			}
			
			var packageNameDot = packageName;
			if (packageNameDot.length > 0) packageNameDot += ".";
			
			var symbolID = swf.symbols.get (className);
			var templateData = null;
			var symbol = swf.data.getCharacter (symbolID);
			
			if (Std.is (symbol, TagDefineButton2)) {
				
				templateData = simpleButtonTemplate;
				
			} else if (Std.is (symbol, SWFTimelineContainer)) {
				
				templateData = movieClipTemplate;
				
			}
			
			if (templateData != null) {
				
				var classProperties = [];
				
				if (Std.is (symbol, SWFTimelineContainer)) {
					
					var timelineContainer:SWFTimelineContainer = cast symbol;
					
					if (timelineContainer.frames.length > 0) {
						
						for (frameObject in timelineContainer.frames[0].objects) {
							
							var placeObject:TagPlaceObject = cast timelineContainer.tags[frameObject.placedAtIndex];
							
							if (placeObject != null && placeObject.instanceName != null) {
								
								var childSymbol = timelineContainer.getCharacter (frameObject.characterId);
								var className = null;
								
								if (childSymbol != null) {
									
									if (Std.is (childSymbol, TagDefineSprite)) {
										
										className = "openfl.display.MovieClip";
										
									} else if (Std.is (childSymbol, TagDefineBitsLossless) || Std.is (childSymbol, TagDefineBits)) {
										
										className = "openfl.display.Bitmap";
										
									} else if (Std.is (childSymbol, TagDefineShape) || Std.is (childSymbol, TagDefineMorphShape)) {
										
										className = "openfl.display.Shape";
										
									} else if (Std.is (childSymbol, TagDefineText) || Std.is (childSymbol, TagDefineEditText)) {
										
										className = "openfl.text.TextField";
										
									} else if (Std.is (childSymbol, TagDefineButton2)) {
										
										className = "openfl.display.SimpleButton";
										
									}
									
									if (className != null) {
										
										classProperties.push ( { name: placeObject.instanceName, type: className } );
										
									}
									
								}
								
							}
							
						}
						
					}
					
				}
				
				var context = { PACKAGE_NAME: packageName, PACKAGE_NAME_DOT: packageNameDot, CLASS_NAME: name, SWF_ID: swfAsset.id, SYMBOL_ID: symbolID, PREFIX: prefix, CLASS_PROPERTIES: classProperties };
				var template = new Template (templateData);
				var targetPath;
				
				if (project.target == IOS) {
					
					targetPath = PathHelper.tryFullPath (targetDirectory) + "/" + project.app.file + "/" + "/haxe";
					
				} else {
					
					targetPath = PathHelper.tryFullPath (targetDirectory) + "/haxe";
					
				}
				
				var templateFile = new Asset ("", PathHelper.combine (targetPath, Path.directory (className.split (".").join ("/"))) + "/" + prefix + name + ".hx", AssetType.TEMPLATE);
				templateFile.data = template.execute (context);
				output.assets.push (templateFile);
				
			}
			
		}
		
	}
	
	
	private static function generateSWFLiteClasses (project:HXProject, output:HXProject, swfLite:SWFLite, swfLiteAsset:Asset, prefix:String = ""):Void {
		
		var movieClipTemplate = File.getContent (PathHelper.getHaxelib (new Haxelib ("swf")) + "/templates/swf/lite/MovieClip.mtt");
		var simpleButtonTemplate = File.getContent (PathHelper.getHaxelib (new Haxelib ("swf")) + "/templates/swf/lite/SimpleButton.mtt");
		
		for (symbolID in swfLite.symbols.keys ()) {
			
			var symbol = swfLite.symbols.get (symbolID);
			var templateData = null;
			
			if (Std.is (symbol, SpriteSymbol)) {
				
				templateData = movieClipTemplate;
				
			} else if (Std.is (symbol, ButtonSymbol)) {
				
				templateData = simpleButtonTemplate;
				
			}
			
			if (templateData != null && symbol.className != null) {
				
				var lastIndexOfPeriod = symbol.className.lastIndexOf (".");
				
				var packageName = "";
				var name = "";
				
				if (lastIndexOfPeriod == -1) {
					
					name = prefix + symbol.className;
					
				} else {
					
					packageName = symbol.className.substr (0, lastIndexOfPeriod);
					name = prefix + symbol.className.substr (lastIndexOfPeriod + 1);
					
				}
				
				packageName = packageName.toLowerCase ();
				name = name.substr (0, 1).toUpperCase () + name.substr (1);
				
				var classProperties = [];
				
				if (Std.is (symbol, SpriteSymbol)) {
					
					var spriteSymbol:SpriteSymbol = cast symbol;
					
					if (spriteSymbol.frames.length > 0) {
						
						for (object in spriteSymbol.frames[0].objects) {
							
							if (object.name != null) {
								
								if (swfLite.symbols.exists (object.symbol)) {
									
									var childSymbol = swfLite.symbols.get (object.symbol);
									//var className = childSymbol.className;
									var className = null;
									
									if (className == null) {
										
										if (Std.is (childSymbol, SpriteSymbol)) {
											
											className = "openfl.display.MovieClip";
											
										} else if (Std.is (childSymbol, ShapeSymbol)) {
											
											className = "openfl.display.Shape";
											
										} else if (Std.is (childSymbol, BitmapSymbol)) {
											
											className = "openfl.display.Bitmap";
											
										} else if (Std.is (childSymbol, DynamicTextSymbol) || Std.is (childSymbol, StaticTextSymbol)) {
											
											className = "openfl.text.TextField";
											
										} else if (Std.is (childSymbol, ButtonSymbol)) {
											
											className = "openfl.display.SimpleButton";
											
										}
										
									}
									
									if (className != null) {
										
										classProperties.push ( { name: object.name, type: className } );
										
									}
									
								}
								
							}
							
						}
						
					}
					
				}
				
				var context = { PACKAGE_NAME: packageName, CLASS_NAME: name, SWF_ID: swfLiteAsset.id, SYMBOL_ID: symbolID, CLASS_PROPERTIES: classProperties };
				var template = new Template (templateData);
				var targetPath;
				
				if (project.target == IOS) {
					
					targetPath = PathHelper.tryFullPath (targetDirectory) + "/" + project.app.file + "/" + "/haxe";
					
				} else {
					
					targetPath = PathHelper.tryFullPath (targetDirectory) + "/haxe";
					
				}
				
				var templateFile = new Asset ("", PathHelper.combine (targetPath, Path.directory (symbol.className.split (".").join ("/"))) + "/" + name + ".hx", AssetType.TEMPLATE);
				templateFile.data = template.execute (context);
				output.assets.push (templateFile);
				
			}
			
		}
		
	}
	
	
	public static function main () {
		
		var arguments = Sys.args ();
		
		if (arguments.length > 0) {
			
			// When the command-line tools are called from haxelib, 
			// the last argument is the project directory and the
			// path SWF is the current working directory 
			
			var lastArgument = "";
			
			for (i in 0...arguments.length) {
				
				lastArgument = arguments.pop ();
				if (lastArgument.length > 0) break;
				
			}
			
			lastArgument = new Path (lastArgument).toString ();
			
			if (((StringTools.endsWith (lastArgument, "/") && lastArgument != "/") || StringTools.endsWith (lastArgument, "\\")) && !StringTools.endsWith (lastArgument, ":\\")) {
				
				lastArgument = lastArgument.substr (0, lastArgument.length - 1);
				
			}
			
			if (FileSystem.exists (lastArgument) && FileSystem.isDirectory (lastArgument)) {
				
				Sys.setCwd (lastArgument);
				
			}
			
		}
		
		var words = new Array<String> ();
		
		for (arg in arguments) {
			
			if (arg == "-verbose") {
				
				LogHelper.verbose = true;
				
			} else if (arg.substr (0, 2) == "--") {
				
				var equals = arg.indexOf ("=");
				
				if (equals > -1) {
					
					var field = arg.substr (2, equals - 2);
					var argValue = arg.substr (equals + 1);
					
					switch (field) {
						
						case "targetDirectory":
							
							targetDirectory = argValue;
							
						default:
						
					}
					
				}
				
			} else {
				
				words.push (arg);
				
			}
			
		}
		
		if (words.length > 2 && words[0] == "process") {
			
			try {
				
				var inputPath = words[1];
				var outputPath = words[2];
				
				var projectData = File.getContent (inputPath);
				
				var unserializer = new Unserializer (projectData);
				unserializer.setResolver (cast { resolveEnum: Type.resolveEnum, resolveClass: resolveClass });
				var project:HXProject = unserializer.unserialize ();
				
				var output = processLibraries (project);
				
				if (output != null) {
					
					File.saveContent (outputPath, Serializer.run (output));
					
				}
				
			} catch (e:Dynamic) {
				
				LogHelper.error (e);
				
			}
			
		}
		
	}
	
	
	private static function processLibraries (project:HXProject):HXProject {
		
		var output = new HXProject ();
		var embeddedSWF = false;
		var embeddedSWFLite = false;
		//var filterClasses = [];
		
		for (library in project.libraries) {
			
			var type = library.type;
			
			if (type == null) {
				
				type = Path.extension (library.sourcePath).toLowerCase ();
				
				if (type == "swf" && (project.target != Platform.FLASH && !project.defines.exists ("openfl-legacy"))) {
					
					type = "swflite";
					
				}
				
			}
			
			if (type == "swf" && project.target == Platform.HTML5) {
				
				type = "swflite";
				
			}
			
			if (type == "swf" && project.target != Platform.HTML5) {
				
				if (!FileSystem.exists (library.sourcePath)) {
					
					LogHelper.warn ("Could not find library file: " + library.sourcePath);
					continue;
					
				}
				
				LogHelper.info ("", " - \x1b[1mProcessing library:\x1b[0m " + library.sourcePath + " [SWF]");
				
				var swf = new Asset (library.sourcePath, "lib/" + library.name + "/" + library.name + ".swf", AssetType.BINARY);
				
				if (library.embed != null) {
					
					swf.embed = library.embed;
					
				}
				
				output.assets.push (swf);
				
				var data:Dynamic = {};
				data.version = 0.1;
				data.type = "format.swf.SWFLibrary";
				data.args = [ "lib/" + library.name + "/" + library.name + ".swf" ];
				
				var asset = new Asset ("", "lib/" + library.name + ".json", AssetType.TEXT);
				asset.id = "libraries/" + library.name + ".json";
				asset.data = Json.stringify (data);
				
				if (library.embed != null) {
					
					asset.embed = library.embed;
					
				}
				
				output.assets.push (asset);
				
				if (library.generate) {
					
					generateSWFClasses (project, output, swf, library.prefix);
					
				}
				
				embeddedSWF = true;
				//project.haxelibs.push (new Haxelib ("swf"));
				//output.assets.push (new Asset (library.sourcePath, "libraries/" + library.name + ".swf", AssetType.BINARY));
				
			} else if (type == "swf_lite" || type == "swflite") {
				
				if (!FileSystem.exists (library.sourcePath)) {
					
					LogHelper.warn ("Could not find library file: " + library.sourcePath);
					continue;
					
				}
				
				LogHelper.info ("", " - \x1b[1mProcessing library:\x1b[0m " + library.sourcePath + " [SWFLite]");
				
				//project.haxelibs.push (new Haxelib ("swf"));
				
				var cacheAvailable = false;
				var cacheDirectory = null;
				
				if (targetDirectory != null) {
					
					cacheDirectory = targetDirectory + "/obj/libraries/" + library.name;
					var cacheFile = cacheDirectory + "/" + library.name + ".dat";
					
					if (FileSystem.exists (cacheFile)) {
						
						var cacheDate = FileSystem.stat (cacheFile).mtime;
						var swfToolDate = FileSystem.stat (PathHelper.getHaxelib (new Haxelib ("swf")) + "/run.n").mtime;
						var sourceDate = FileSystem.stat (library.sourcePath).mtime;
						
						if (sourceDate.getTime () < cacheDate.getTime () && swfToolDate.getTime () < cacheDate.getTime ()) {
							
							cacheAvailable = true;
							
						}
						
					}
					
				}
				
				if (cacheAvailable) {
					
					for (file in FileSystem.readDirectory (cacheDirectory)) {
						
						if (Path.extension (file) == "png" || Path.extension (file) == "jpg") {
							
							var asset = new Asset (cacheDirectory + "/" + file, "lib/" + library.name + "/" + file, AssetType.IMAGE);
							
							if (library.embed != null) {
								
								asset.embed = library.embed;
								
							}
							
							output.assets.push (asset);
							
						}
						
					}
					
					var swfLiteAsset = new Asset (cacheDirectory + "/" + library.name + ".dat", "lib/" + library.name + "/" + library.name + ".dat", AssetType.TEXT);
					
					if (library.embed != null) {
						
						swfLiteAsset.embed = library.embed;
						
					}
					
					output.assets.push (swfLiteAsset);
					
					embeddedSWFLite = true;
					
				} else {
					
					if (cacheDirectory != null) {
						
						PathHelper.mkdir (cacheDirectory);
						
					}
					
					var bytes:ByteArray = File.getBytes (library.sourcePath);
					var swf = new SWF (bytes);
					var exporter = new SWFLiteExporter (swf.data);
					var swfLite = exporter.swfLite;
					
					for (id in exporter.bitmaps.keys ()) {
						
						var type = exporter.bitmapTypes.get (id) == BitmapType.PNG ? "png" : "jpg";
						var symbol:BitmapSymbol = cast swfLite.symbols.get (id);
						symbol.path = "lib/" + library.name + "/" + id + "." + type;
						swfLite.symbols.set (id, symbol);
						
						var asset = new Asset ("", symbol.path, AssetType.IMAGE);
						var assetData = exporter.bitmaps.get (id);
						
						if (cacheDirectory != null) {
							
							asset.sourcePath = cacheDirectory + "/" + id + "." + type;
							asset.format = type;
							File.saveBytes (asset.sourcePath, assetData);
							
						} else {
							
							asset.data = StringHelper.base64Encode (cast assetData);
							//asset.data = bitmapData.encode ("png");
							asset.encoding = AssetEncoding.BASE64;
							
						}
						
						if (library.embed != null) {
							
							asset.embed = library.embed;
							
						}
						
						output.assets.push (asset);
						
						if (exporter.bitmapTypes.get (id) == BitmapType.JPEG_ALPHA) {
							
							symbol.alpha = "lib/" + library.name + "/" + id + "a.png";
							
							var asset = new Asset ("", symbol.alpha, AssetType.IMAGE);
							var assetData = exporter.bitmapAlpha.get (id);
							
							if (cacheDirectory != null) {
								
								asset.sourcePath = cacheDirectory + "/" + id + "a.png";
								asset.format = "png";
								File.saveBytes (asset.sourcePath, assetData);
								
							} else {
								
								asset.data = StringHelper.base64Encode (cast assetData);
								//asset.data = bitmapData.encode ("png");
								asset.encoding = AssetEncoding.BASE64;
								
							}
							
							if (library.embed != null) {
								
								asset.embed = library.embed;
								
							}
							
							output.assets.push (asset);
							
						}
						
					}
					
					//for (filterClass in exporter.filterClasses.keys ()) {
						
						//filterClasses.remove (filterClass);
						//filterClasses.push (filterClass);
						
					//}
					
					var swfLiteAsset = new Asset ("", "lib/" + library.name + "/" + library.name + ".dat", AssetType.TEXT);
					var swfLiteAssetData = swfLite.serialize ();
					
					if (cacheDirectory != null) {
						
						swfLiteAsset.sourcePath = cacheDirectory + "/" + library.name + ".dat";
						File.saveContent (swfLiteAsset.sourcePath, swfLiteAssetData);
						
					} else {
						
						swfLiteAsset.data = swfLiteAssetData;
						
					}
					
					if (library.embed != null) {
						
						swfLiteAsset.embed = library.embed;
						
					}
					
					output.assets.push (swfLiteAsset);
					
					if (library.generate) {
						
						generateSWFLiteClasses (project, output, swfLite, swfLiteAsset, library.prefix);
						
					}
					
					embeddedSWFLite = true;
					
				}
				
				var data:Dynamic = {};
				data.version = 0.1;
				data.type = "format.swf.lite.SWFLiteLibrary";
				data.args = [ "lib/" + library.name + "/" + library.name + ".dat" ];
				
				var asset = new Asset ("", "lib/" + library.name + ".json", AssetType.TEXT);
				asset.id = "libraries/" + library.name + ".json";
				asset.data = Json.stringify (data);
				
				if (library.embed != null) {
					
					asset.embed = library.embed;
					
				}
				
				output.assets.push (asset);
				
			}
			
		}
		
		if (embeddedSWF) {
			
			output.haxelibs.push (new Haxelib ("format"));
			output.haxeflags.push ("format.swf.SWFLibrary");
			
		}
		
		if (embeddedSWFLite) {
			
			output.haxeflags.push ("format.swf.lite.SWFLiteLibrary");
			
			//for (filterClass in filterClasses) {
				
				//output.haxeflags.push (StringTools.replace (filterClass, "._v2", ""));
				
			//}
			
		}
		
		if (embeddedSWF || embeddedSWFLite) {
			
			return output;
			
		}
		
		return null;
		
	}
	
	
	private static function resolveClass (name:String):Class <Dynamic> {
		
		var result = Type.resolveClass (name);
		
		if (result == null) {
			
			result = HXProject;
			
		}
		
		return result;
		
	}
	
	
}