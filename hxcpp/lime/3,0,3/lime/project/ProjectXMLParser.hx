package lime.project;


import haxe.io.Path;
import haxe.xml.Fast;
import lime.tools.helpers.ArrayHelper;
import lime.tools.helpers.CommandHelper;
import lime.tools.helpers.LogHelper;
import lime.tools.helpers.ObjectHelper;
import lime.tools.helpers.PathHelper;
import lime.tools.helpers.PlatformHelper;
import lime.tools.helpers.StringMapHelper;
import lime.project.Asset;
import lime.project.AssetType;
import lime.project.Dependency;
import lime.project.Haxelib;
import lime.project.HXProject;
import sys.io.File;
import sys.FileSystem;


class ProjectXMLParser extends HXProject {
	
	
	public var includePaths:Array <String>;
	
	private static var doubleVarMatch = new EReg ("\\$\\${(.*?)}", "");
	private static var varMatch = new EReg ("\\${(.*?)}", "");
	
	
	public function new (path:String = "", defines:Map <String, Dynamic> = null, includePaths:Array <String> = null, useExtensionPath:Bool = false) {
		
		super ();
		
		if (defines != null) {
			
			this.defines = StringMapHelper.copy (defines);
			
		}
		
		if (includePaths != null) {
			
			this.includePaths = includePaths;
			
		} else {
			
			this.includePaths = new Array <String> ();
			
		}
		
		initialize ();
		
		if (path != "") {
			
			process (path, useExtensionPath);
			
		}
		
	}
	
	
	private function initialize ():Void {
		
		switch (platformType) {
			
			case MOBILE:
				
				defines.set ("mobile", "1");
			
			case DESKTOP:
				
				defines.set ("desktop", "1");
			
			case WEB:
				
				defines.set ("web", "1");
			
			case CONSOLE:
				
				defines.set ("console", "1");
			
		}
		
		if (targetFlags.exists ("neko")) {
			
			defines.set ("native", "1");
			defines.set ("neko", "1");
			
		} else if (targetFlags.exists ("java")) {
			
			defines.set ("native", "1");
			defines.set ("java", "1");
			
		} else if (targetFlags.exists ("nodejs")) {
			
			defines.set ("native", "1");
			defines.set ("nodejs", "1");
			
		} else if (target == Platform.FIREFOX) {
			
			defines.set ("html5", "1");
			
		} else if (platformType == DESKTOP && target != PlatformHelper.hostPlatform) {
			
			defines.set ("native", "1");
			
			if (target == Platform.WINDOWS) {
				
				defines.set ("cpp", "1");
				defines.set ("mingw", "1");
				
			} else {
				
				defines.set ("neko", "1");
				
			}
			
		} else if (targetFlags.exists ("cpp") || ((platformType != PlatformType.WEB) && !targetFlags.exists ("html5")) || target == Platform.EMSCRIPTEN) {
			
			defines.set ("native", "1");
			defines.set ("cpp", "1");
			
		}
		
		defines.set ("haxe3", "1");
		
		if (debug) {
			
			defines.set ("debug", "1");
			
		} else {
			
			defines.set ("release", "1");
			
		}
		
		if (targetFlags.exists ("static")) {
			
			defines.set ("static_link", "1");
			
		}
		
		if (defines.exists ("SWF_PLAYER")) {
			
			environment.set ("SWF_PLAYER", defines.get ("SWF_PLAYER"));
			
		} else if (defines.exists ("FLASH_PLAYER_EXE")) {
			
			environment.set ("FLASH_PLAYER_EXE", defines.get ("SWF_PLAYER"));
			
		}
		
		defines.set (Std.string (target).toLowerCase (), "1");
		defines.set ("target", Std.string (target).toLowerCase ());
		
	}
	
	
	private function isValidElement (element:Fast, section:String):Bool {
		
		if (element.x.get ("if") != null) {
			
			var value = element.x.get ("if");
			var optionalDefines = value.split ("||");
			var matchOptional = false;
			
			for (optional in optionalDefines) {
				
				optional = substitute (optional);
				var requiredDefines = optional.split (" ");
				var matchRequired = true;
				
				for (required in requiredDefines) {
					
					required = substitute (required);
					var check = StringTools.trim (required);
					
					if (check != "" && !defines.exists (check) && (environment == null || !environment.exists (check)) && check != command) {
						
						matchRequired = false;
						
					}
					
				}
				
				if (matchRequired) {
					
					matchOptional = true;
					
				}
				
			}
			
			if (optionalDefines.length > 0 && !matchOptional) {
				
				return false;
				
			}
			
		}
		
		if (element.has.unless) {
			
			var value = substitute (element.att.unless);
			var optionalDefines = value.split ("||");
			var matchOptional = false;
			
			for (optional in optionalDefines) {
				
				optional = substitute (optional);
				var requiredDefines = optional.split (" ");
				var matchRequired = true;
				
				for (required in requiredDefines) {
					
					required = substitute (required);
					var check = StringTools.trim (required);
					if (check != "" && !defines.exists (check) && (environment == null || !environment.exists (check)) && check != command) {
						
						matchRequired = false;
						
					}
					
				}
				
				if (matchRequired) {
					
					matchOptional = true;
					
				}
				
			}
			
			if (optionalDefines.length > 0 && matchOptional) {
				
				return false;
				
			}
			
		}
		
		if (section != "") {
			
			if (element.name != "section") {
				
				return false;
				
			}
			
			if (!element.has.id) {
				
				return false;
				
			}
			
			if (substitute (element.att.id) != section) {
				
				return false;
				
			}
			
		}
		
		return true;
		
	}
	
	
	private function findIncludeFile (base:String):String {
		
		if (base == "") {
			
			return "";
			
		}
		
		if (base.substr (0, 1) != "/" && base.substr (0, 1) != "\\" && base.substr (1, 1) != ":" && base.substr (0, 1) != "." && !FileSystem.exists (base)) {
			
			for (path in includePaths) {
				
				var includePath = path + "/" + base;
				
				if (FileSystem.exists (includePath)) {
					
					if (FileSystem.exists (includePath + "/include.lime")) {
						
						return includePath + "/include.lime";
						
					} else if (FileSystem.exists (includePath + "/include.nmml")) {
						
						return includePath + "/include.nmml";
						
					} else if (FileSystem.exists (includePath + "/include.xml")) {
						
						return includePath + "/include.xml";
						
					} else {
						
						return includePath;
						
					}
					
				}
				
			}
			
		} else {
			
			if (base.substr ( -1, 1) == "/") {
				
				base = base.substr (0, base.length - 1);
				
			} else if (base.substr ( -1, 1) == "\\") {
				
				base = base.substring (0, base.length - 1);
				
			}
			
			if (FileSystem.exists (base)) {
				
				if (FileSystem.exists (base + "/include.lime")) {
					
					return base + "/include.lime";
					
				} else if (FileSystem.exists (base + "/include.nmml")) {
					
					return base + "/include.nmml";
					
				} else if (FileSystem.exists (base + "/include.xml")) {
					
					return base + "/include.xml";
					
				} else {
					
					return base;
					
				}
				
			}
			
		}
		
		return "";
		
	}
	
	
	private function formatAttributeName (name:String):String {
		
		var segments = name.toLowerCase ().split ("-");
		
		for (i in 1...segments.length) {
			
			segments[i] = segments[i].substr (0, 1).toUpperCase () + segments[i].substr (1);
			
		}
		
		return segments.join ("");
		
	}
	
	
	private function parseAppElement (element:Fast):Void {
		
		for (attribute in element.x.attributes ()) {

			switch (attribute) {
				
				case "path":
					
					app.path = substitute (element.att.path);
				
				case "min-swf-version":
					
					var version = Std.parseFloat (substitute (element.att.resolve ("min-swf-version")));
					
					if (version > app.swfVersion) {
						
						app.swfVersion = version;
						
					}
				
				case "swf-version":
					
					app.swfVersion = Std.parseFloat (substitute (element.att.resolve ("swf-version")));
				
				case "preloader":
					
					app.preloader = substitute (element.att.preloader);
				
				default:
					
					// if we are happy with this spec, we can tighten up this parsing a bit, later
					
					var name = formatAttributeName (attribute);
					var value = substitute (element.att.resolve (attribute));
					
					if (attribute == "package") {
						
						name = "packageName";
						
					}
					
					if (Reflect.hasField (app, name)) {
						
						Reflect.setField (app, name, value);
						
					} else if (Reflect.hasField (meta, name)) {
						
						Reflect.setField (meta, name, value);
						
					}
				
			}
			
		}
		
	}
	
	
	private function parseAssetsElement (element:Fast, basePath:String = "", isTemplate:Bool = false):Void {
		
		var path = "";
		var embed:Null<Bool> = null;
		var targetPath = "";
		var glyphs = null;
		var type = null;
		
		if (element.has.path) {
			
			path = PathHelper.combine (basePath, substitute (element.att.path));
			
		}
		
		if (element.has.embed) {
			
			embed = parseBool (element.att.embed);
			
		}
		
		if (element.has.rename) {
			
			targetPath = substitute (element.att.rename);
			
		} else if (element.has.path) {
			
			targetPath = substitute (element.att.path);
			
		}
		
		if (element.has.glyphs) {
			
			glyphs = substitute (element.att.glyphs);
			
		}
		
		if (isTemplate) {
			
			type = AssetType.TEMPLATE;
			
		} else if (element.has.type) {
			
			type = Reflect.field (AssetType, substitute (element.att.type).toUpperCase ());
			
		}
		
		if (path == "" && (element.has.include || element.has.exclude || type != null )) {
			
			LogHelper.error ("In order to use 'include' or 'exclude' on <asset /> nodes, you must specify also specify a 'path' attribute");
			return;
			
		} else if (!element.elements.hasNext ()) {
			
			// Empty element
			
			if (path == "") {
				
				return;
				
			}
			
			if (!FileSystem.exists (path)) {
				
				LogHelper.error ("Could not find asset path \"" + path + "\"");
				return;
				
			}
			
			if (!FileSystem.isDirectory (path)) {
				
				var asset = new Asset (path, targetPath, type, embed);
				
				if (element.has.id) {
					
					asset.id = substitute (element.att.id);
					
				}
				
				if (glyphs != null) {
					
					asset.glyphs = glyphs;
					
				}
				
				assets.push (asset);
				
			} else {
				
				var exclude = ".*|cvs|thumbs.db|desktop.ini|*.fla|*.hash";
				var include = "";
				
				if (element.has.exclude) {
					
					exclude += "|" + substitute (element.att.exclude);
					
				}
				
				if (element.has.include) {
					
					include = substitute (element.att.include);
					
				} else {
					
					//if (type == null) {
						
						include = "*";
						
					/*} else {
						
						switch (type) {
							
							case IMAGE:
								
								include = "*.jpg|*.jpeg|*.png|*.gif";
							
							case SOUND:
								
								include = "*.wav|*.ogg";
							
							case MUSIC:
								
								include = "*.mp2|*.mp3|*.ogg";
							
							case FONT:
								
								include = "*.otf|*.ttf";
							
							case TEMPLATE:
								
								include = "*";
							
							default:
								
								include = "*";
							
						}
						
					}*/
					
				}
				
				parseAssetsElementDirectory (path, targetPath, include, exclude, type, embed, glyphs, true);
				
			}
			
		} else {
			
			if (path != "") {
				
				path += "/";
				
			}
			
			if (targetPath != "") {
				
				targetPath += "/";
				
			}
			
			for (childElement in element.elements) {
				
				var isValid = isValidElement (childElement, "");
				
				if (isValid) {
					
					var childPath = substitute (childElement.has.name ? childElement.att.name : childElement.att.path);
					var childTargetPath = childPath;
					var childEmbed:Null<Bool> = embed;
					var childType = type;
					var childGlyphs = glyphs;
					
					if (childElement.has.rename) {
						
						childTargetPath = substitute (childElement.att.rename);
						
					}
					
					if (childElement.has.embed) {
						
						childEmbed = parseBool (childElement.att.embed);
						
					}
					
					if (childElement.has.glyphs) {
						
						childGlyphs = substitute (childElement.att.glyphs);
						
					}
					
					switch (childElement.name) {
						
						case "image", "sound", "music", "font", "template":
							
							childType = Reflect.field (AssetType, childElement.name.toUpperCase ());
						
						default:
							
							if (childElement.has.type) {
								
								childType = Reflect.field (AssetType, substitute (childElement.att.type).toUpperCase ());
								
							}
						
					}
					
					var id = "";
					
					if (childElement.has.id) {
						
						id = substitute (childElement.att.id);
						
					}
					else if (childElement.has.name) {
						
						id = substitute (childElement.att.name);
						
					}
					
					var asset = new Asset (path + childPath, targetPath + childTargetPath, childType, childEmbed);
					asset.id = id;
					
					if (childGlyphs != null) {
						
						asset.glyphs = childGlyphs;
						
					}
					
					assets.push (asset);
					
				}
				
			}
			
		}
		
	}
	
	
	private function parseAssetsElementDirectory (path:String, targetPath:String, include:String, exclude:String, type:AssetType, embed:Null<Bool>, glyphs:String, recursive:Bool):Void {
		
		if (StringTools.endsWith (path, ".bundle")) {
			
			var includePath = findIncludeFile (path);
			
			if (includePath != null && includePath != "" && FileSystem.exists (includePath) && !FileSystem.isDirectory (includePath)) {
				
				var includeProject = new ProjectXMLParser (includePath, defines);
				merge (includeProject);
				return;
				
			}
			
		}
		
		var files = FileSystem.readDirectory (path);
		
		if (targetPath != "") {
			
			targetPath += "/";
			
		}
		
		for (file in files) {
			
			if (FileSystem.isDirectory (path + "/" + file) && recursive) {
				
				if (filter (file, [ "*" ], exclude.split ("|"))) {
					
					parseAssetsElementDirectory (path + "/" + file, targetPath + file, include, exclude, type, embed, glyphs, true);
					
				}
				
			} else {
				
				if (filter (file, include.split ("|"), exclude.split ("|"))) {
					
					var asset = new Asset (path + "/" + file, targetPath + file, type, embed);
					
					if (glyphs != null) {
						
						asset.glyphs = glyphs;
						
					}
					
					assets.push (asset);
					
				}
				
			}
			
		}
		
	}
	
	
	private function parseBool (attribute:String):Bool {
		
		return substitute (attribute) == "true";
		
	}
	
	
	private function parseMetaElement (element:Fast):Void {
		
		for (attribute in element.x.attributes ()) {
			
			switch (attribute) {
				
				case "title", "description", "package", "version", "company", "company-id", "build-number", "company-url":
					
					var value = substitute (element.att.resolve (attribute));
					
					defines.set ("APP_" + StringTools.replace (attribute, "-", "_").toUpperCase (), value);
					
					var name = formatAttributeName (attribute);
					
					if (attribute == "package") {
						
						name = "packageName";
						
					}
					
					if (Reflect.hasField (meta, name)) {
						
						Reflect.setField (meta, name, value);
						
					}
				
			}
			
		}
		
	}
	
	
	private function parseOutputElement (element:Fast):Void {
		
		if (element.has.name) {
			
			app.file = substitute (element.att.name);
			
		}
		
		if (element.has.path) {
			
			app.path = substitute (element.att.path);
			
		}
		
		if (element.has.resolve ("swf-version")) {
			
			app.swfVersion = Std.parseFloat (substitute (element.att.resolve ("swf-version")));
			
		}
		
	}
	
	
	private function parseCommandElement (element:Fast, commandList:Array<CLICommand>):Void {
		
		var command:CLICommand = null;
		
		if (element.has.haxe) {
			
			command = CommandHelper.interpretHaxe (substitute (element.att.haxe));
			
		}
		
		if (element.has.open) {
			
			command = CommandHelper.openFile (substitute (element.att.open));
			
		}
		
		if (element.has.command) {
			
			command = CommandHelper.fromSingleString (substitute (element.att.command));
			
		}
		
		if (element.has.cmd) {
			
			command = CommandHelper.fromSingleString (substitute (element.att.cmd));
			
		}
		
		if (command != null) {
			
			for (arg in element.elements) {
				
				if (arg.name == "arg") {
					
					command.args.push (arg.innerData);
					
				}
				
			}
			
			commandList.push (command);
			
		}
		
	}
	
	
	private function parseXML (xml:Fast, section:String, extensionPath:String = ""):Void {
		
		for (element in xml.elements) {
			
			var isValid = isValidElement (element, section);
			if (isValid) {
				
				switch (element.name) {
					
					case "set":
						
						var name = element.att.name;
						var value = "";
						
						if (element.has.value) {
							
							value = substitute (element.att.value);
							
						}
						
						switch (name) {
							
							case "BUILD_DIR": app.path = value;
							case "SWF_VERSION": app.swfVersion = Std.parseFloat (value);
							case "PRERENDERED_ICON": config.set ("ios.prerenderedIcon", value);
							case "ANDROID_INSTALL_LOCATION": config.set ("android.install-location", value);
							
						}
						
						defines.set (name, value);
						environment.set (name, value);
					
					case "unset":
						
						defines.remove (element.att.name);
						environment.remove (element.att.name);
					
					case "setenv":
						
						var value = "";
						
						if (element.has.value) {
							
							value = substitute (element.att.value);
							
						} else {
							
							value = "1";
							
						}
						
						var name = substitute (element.att.name);
						
						defines.set (name, value);
						environment.set (name, value);
						setenv (name, value);
					
					case "error":
						
						LogHelper.error (substitute (element.att.value));
					
					case "echo":
						
						Sys.println (substitute (element.att.value));
					
					case "path":
						
						var value = "";
						
						if (element.has.value) {
							
							value = substitute (element.att.value);
							
						} else {
							
							value = substitute (element.att.name);
							
						}
						
						/*if (defines.get ("HOST") == "windows") {
							
							Sys.putEnv ("PATH", value + ";" + Sys.getEnv ("PATH"));
							
						} else {
							
							Sys.putEnv ("PATH", value + ":" + Sys.getEnv ("PATH"));
							
						}*/
						
						path (value);
					
					case "include":
						
						var path = "";
						var addSourcePath = true;
						var haxelib = null;
						
						if (element.has.haxelib) {
							
							haxelib = new Haxelib (substitute (element.att.haxelib));
							path = findIncludeFile (PathHelper.getHaxelib (haxelib, true));
							addSourcePath = false;
							
						} else if (element.has.path) {
							
							var subPath = substitute (element.att.path);
							if (subPath == "") subPath = element.att.path;
							
							path = findIncludeFile (PathHelper.combine (extensionPath, subPath));
							
						} else {
							
							path = findIncludeFile (PathHelper.combine (extensionPath, substitute (element.att.name)));
							
						}
						
						if (path != null && path != "" && FileSystem.exists (path) && !FileSystem.isDirectory (path)) {
							
							var includeProject = new ProjectXMLParser (path, defines);
							
							if (includeProject != null && haxelib != null) {
								
								for (ndll in includeProject.ndlls) {
									
									if (ndll.haxelib == null) {
										
										ndll.haxelib = haxelib;
										
									}
									
								}
								
							}
							
							if (addSourcePath) {
								
								var dir = Path.directory (path);
								
								if (dir != "") {
									
									includeProject.sources.push (dir);
									
								}
								
							}
							
							merge (includeProject);
							
						} else if (!element.has.noerror) {
							
							if (path == "" || FileSystem.isDirectory (path)) {
								
								var errorPath = "";
								
								if (element.has.path) {
									
									errorPath = element.att.path;
									
								} else if (element.has.name) {
									
									errorPath = element.att.name;
									
								} else {
									
									errorPath = Std.string (element);
									
								}
								
								LogHelper.error ("\"" + errorPath + "\" does not appear to be a valid <include /> path");
								
							} else {
								
								LogHelper.error ("Could not find include file \"" + path + "\"");
								
							}	
							
						}
					
					case "meta":
						
						parseMetaElement (element);
					
					case "app":
						
						parseAppElement (element);
					
					case "java":
						
						javaPaths.push (PathHelper.combine (extensionPath, substitute (element.att.path)));
					
					case "haxelib":
						
						var name = substitute (element.att.name);
						var version = "";
						var optional = false;
						var path = null;
						
						if (element.has.version) {
							
							version = substitute (element.att.version);
							
						}
						
						if (element.has.optional) {
							
							optional = parseBool (element.att.optional);
							
						}
						
						if (element.has.path) {
							
							path = substitute (element.att.path);
							
						}
						
						/*if (name == "nme" && defines.exists ("openfl")) {
							
							name = "openfl-nme-compatibility";
							version = "";
							
						}*/
						
						var haxelib = new Haxelib (name, version);
						
						if (path == null) {
							
							if (defines.exists ("setup")) {
								
								path = PathHelper.getHaxelib (haxelib);
								
							} else {
								
								path = PathHelper.getHaxelib (haxelib, !optional);
								
								if (optional && path == "") {
									
									continue;
									
								}
								
							}
							
						} else {
							
							PathHelper.haxelibOverrides.set (name, path);
							
						}
						
						haxelibs.push (haxelib);
						
						var includeProject = HXProject.fromHaxelib (haxelib, defines);
						
						if (includeProject != null) {
							
							for (ndll in includeProject.ndlls) {
								
								if (ndll.haxelib == null) {
									
									ndll.haxelib = haxelib;
									
								}
								
							}
							
							merge (includeProject);
							
						}
					
					case "ndll":
						
						var name = substitute (element.att.name);
						var haxelib = null;
						var type = NDLLType.AUTO;
						var registerStatics = true;
						var subdirectory = null;
						
						if (element.has.haxelib) {
							
							haxelib = new Haxelib (substitute (element.att.haxelib));
							
						}
						
						if (element.has.dir) {
							
							subdirectory = substitute (element.att.dir);
							
						}
						
						if (haxelib == null && (name == "std" || name == "regexp" || name == "zlib")) {
							
							haxelib = new Haxelib (config.getString ("cpp.buildLibrary", "hxcpp"));
							
						}
						
						/*if (haxelib != null && haxelib.name == "nme" && !defines.exists ("nme")) {
							
							haxelib = new Haxelib ("lime");
							
						}
						
						if (name == "nme" && !defines.exists ("nme")) {
							
							name = "lime";
							
						}*/
						
						if (element.has.type) {
							
							type = Reflect.field (NDLLType, substitute (element.att.type).toUpperCase ());
							
						}
						
						if (element.has.register) {
							
							registerStatics = parseBool (element.att.register);
							
						}
						
						var ndll = new NDLL (name, haxelib, type, registerStatics);
						ndll.extensionPath = extensionPath;
						ndll.subdirectory = subdirectory;
						
						ndlls.push (ndll);
						
					case "architecture":
						
						if (element.has.name) {
							
							var name = substitute (element.att.name);
							
							if (Reflect.hasField (Architecture, name.toUpperCase ())) {
								
								ArrayHelper.addUnique (architectures, Reflect.field (Architecture, name.toUpperCase ()));
								
							}
							
						}
						
						if (element.has.exclude) {
							
							var exclude = substitute (element.att.exclude);
							
							if (Reflect.hasField (Architecture, exclude.toUpperCase ())) {
								
								architectures.remove (Reflect.field (Architecture, exclude.toUpperCase ()));
								
							}
							
						}
					
					case "launchImage", "splashscreen", "splashScreen":
						
						var name:String = "";
						
						if (element.has.path) {
							
							name = substitute (element.att.path);
							
						} else {
							
							name = substitute (element.att.name);
							
						}
						
						var splashScreen = new SplashScreen (name);
						
						if (element.has.width) {
							
							splashScreen.width = Std.parseInt (substitute (element.att.width));
							
						}
						
						if (element.has.height) {
							
							splashScreen.height = Std.parseInt (substitute (element.att.height));
							
						}
						
						splashScreens.push (splashScreen);
					
					case "icon":
						
						var path = "";
						
						if (element.has.path) {
							
							path = PathHelper.combine (extensionPath, substitute (element.att.path));
							
						} else {
							
							path = PathHelper.combine (extensionPath, substitute (element.att.name));
							
						}
						
						var icon = new Icon (path);
						
						if (element.has.size) {
							
							icon.size = icon.width = icon.height = Std.parseInt (substitute (element.att.size));
							
						}
						
						if (element.has.width) {
							
							icon.width = Std.parseInt (substitute (element.att.width));
							
						}
						
						if (element.has.height) {
							
							icon.height = Std.parseInt (substitute (element.att.height));
							
						}
						
						icons.push (icon);
					
					case "source", "classpath":
						
						var path = "";
						
						if (element.has.path) {
							
							path = PathHelper.combine (extensionPath, substitute (element.att.path));
							
						} else {
							
							path = PathHelper.combine (extensionPath, substitute (element.att.name));
							
						}
						
						sources.push (path);
					
					case "extension":
						
						// deprecated
					
					case "haxedef":
						
						if (element.has.remove) {
							
							haxedefs.remove (substitute (element.att.remove));
							
						} else {
							
							var name = substitute (element.att.name);
							var value = "";
							
							if (element.has.value) {
								
								value = substitute (element.att.value);
								
							}
							
							haxedefs.set (name, value);
							
						}
					
					case "haxeflag", "compilerflag":
						
						var flag = substitute (element.att.name);
						
						if (element.has.value) {
							
							flag += " " + substitute (element.att.value);
							
						}
						
						haxeflags.push (substitute (flag));
					
					case "window":
						
						parseWindowElement (element);
					
					case "assets":
						
						parseAssetsElement (element, extensionPath);
					
					case "library", "swf":
						
						if (element.has.handler) {
							
							if (element.has.type) {
								
								libraryHandlers.set (substitute (element.att.type), substitute (element.att.handler));
								
							}
							
						} else {
							
							var path = PathHelper.combine (extensionPath, substitute (element.att.path));
							var name = "";
							var type = null;
							var embed:Null<Bool> = null;
							var preload = false;
							var generate = false;
							var prefix = "";
							
							if (element.has.name) {
								
								name = substitute (element.att.name);
								
							}
							
							if (element.has.id) {
								
								name = substitute (element.att.id);
								
							}
							
							if (element.has.type) {
								
								type = substitute (element.att.type);
								
							}
							
							if (element.has.embed) {
								
								embed = parseBool (element.att.embed);
								
							}
							
							if (element.has.preload) {
								
								preload = parseBool (element.att.preload);
								
							}
							
							if (element.has.generate) {
								
								generate = parseBool (element.att.generate);
								
							}
							
							if (element.has.prefix) {
								
								prefix = substitute (element.att.prefix);
								
							}
							
							libraries.push (new Library (path, name, type, embed, preload, generate, prefix));
							
						}
					
					case "ssl":
						
						//if (wantSslCertificate())
						   //parseSsl (element);
					
					case "sample":
						
						samplePaths.push (PathHelper.combine (extensionPath, substitute (element.att.path)));
					
					case "target":
						
						if (element.has.handler) {
							
							if (element.has.name) {
								
								targetHandlers.set (substitute (element.att.name), substitute (element.att.handler));
								
							}
							
						}
					
					case "template":
						
						if (element.has.path) {
							
							if (element.has.haxelib) {
								
								var haxelibPath = PathHelper.getHaxelib (new Haxelib (substitute (element.att.haxelib)), true);
								var path = PathHelper.combine (haxelibPath, substitute (element.att.path));
								templatePaths.push (path);
								
							} else {
								
								var path = PathHelper.combine (extensionPath, substitute (element.att.path));
								
								if (FileSystem.exists (path) && !FileSystem.isDirectory (path)) {
									
									parseAssetsElement (element, extensionPath, true);
									
								} else {
									
									templatePaths.push (path);
									
								}
								
							}
							
						} else {
							
							parseAssetsElement (element, extensionPath, true);
							
						}
					
					case "templatePath":
						
						templatePaths.push (PathHelper.combine (extensionPath, substitute (element.att.name)));
					
					case "preloader":
						
						// deprecated
						
						app.preloader = substitute (element.att.name);
					
					case "output":
						
						parseOutputElement (element);
					
					case "section":
						
						parseXML (element, "", extensionPath);
					
					case "certificate":
						
						if (element.has.path) {
							
							certificate = new Keystore (PathHelper.combine (extensionPath, substitute (element.att.path)));
							
							if (element.has.type) {
								
								certificate.type = substitute (element.att.type);
								
							}
							
							if (element.has.password) {
								
								certificate.password = substitute (element.att.password);
								
							}
							
							if (element.has.alias) {
								
								certificate.alias = substitute (element.att.alias);
								
							}
							
							if (element.has.resolve ("alias-password")) {
								
								certificate.aliasPassword = substitute (element.att.resolve ("alias-password"));
								
							} else if (element.has.alias_password) {
								
								certificate.aliasPassword = substitute (element.att.alias_password);
								
							}
							
						} else if (element.has.identity) {
							
							certificate = new Keystore ();
							certificate.identity = substitute (element.att.identity);
							
						}
					
					case "dependency":
						
						var name = "";
						var path = "";
						
						if (element.has.path) {
							
							path = PathHelper.combine (extensionPath, substitute (element.att.path));
							
						}
						
						if (element.has.name) {
							
							var foundName = substitute (element.att.name);
							
							if (StringTools.endsWith (foundName, ".a") || StringTools.endsWith (foundName, ".dll")) {
								
								path = PathHelper.combine (extensionPath, foundName);
								
							} else {
								
								name = foundName;
								
							}
							
						}
						
						var i = dependencies.length;
						
						while (i-- > 0) {
							
							if ((name != "" && dependencies[i].name == name) || (path != "" && dependencies[i].path == path)) {
								
								dependencies.splice (i, 1);
								
							}
							
						}
						
						dependencies.push (new Dependency (name, path));
					
					case "android":
						
						for (attribute in element.x.attributes ()) {
							
							var name = attribute;
							var value = substitute (element.att.resolve (attribute));
							
							switch (name) {
								
								case "minimum-sdk-version":
									
									config.set ("android.minimum-sdk-version", Std.parseInt (value));
								
								case "target-sdk-version":
									
									config.set ("android.target-sdk-version", Std.parseInt (value));
								
								case "install-location":
									
									config.set ("android.install-location", value);
								
								case "extension":
									
									var extensions = config.getArrayString ("android.extension");
									
									if (extensions == null || extensions.indexOf (value) == -1) {
										
										config.push ("android.extension", value);
										
									}
									
									//ArrayHelper.addUnique (config.android.extensions, value);
								
								case "permission":
									
									var permissions = config.getArrayString ("android.permission");
									
									if (permissions == null || permissions.indexOf (value) == -1) {
										
										config.push ("android.permission", value);
										
									}
									
									//ArrayHelper.addUnique (config.android.permissions, value);
								
								default:
									
									name = formatAttributeName (attribute);
									
									//if (Reflect.hasField (config.android, name)) {
										
										//Reflect.setField (config.android, name, value);
										
									//}
								
							}
							
						}
					
					case "cpp":
						
						for (attribute in element.x.attributes ()) {
							
							var name = attribute;
							var value = substitute (element.att.resolve (attribute));
							
							switch (name) {
								
								case "build-library":
									
									config.set ("cpp.buildLibrary", value);
									
								default:
									
									name = formatAttributeName (attribute);
									
									///if (Reflect.hasField (config.android, name)) {
										
										//Reflect.setField (config.android, name, value);
										
									//}
								
							}
							
						}
					
					case "ios":
						
						if (target == Platform.IOS) {
							
							if (element.has.deployment) {
								
								var deployment = Std.parseFloat (substitute (element.att.deployment));
								
								// If it is specified, assume the dev knows what he is doing!
								config.set ("ios.deployment", deployment);
							}
							
							if (element.has.binaries) {
								
								var binaries = substitute (element.att.binaries);
								
								switch (binaries) {
									
									case "fat":
										
										ArrayHelper.addUnique (architectures, Architecture.ARMV6);
										ArrayHelper.addUnique (architectures, Architecture.ARMV7);
									
									case "armv6":
										
										ArrayHelper.addUnique (architectures, Architecture.ARMV6);
										architectures.remove (Architecture.ARMV7);
									
									case "armv7":
										
										ArrayHelper.addUnique (architectures, Architecture.ARMV7);
										architectures.remove (Architecture.ARMV6);
									
								}
								
							}
							
							if (element.has.devices) {
								
								config.set ("ios.device", substitute (element.att.devices).toLowerCase ());
								
							}
							
							if (element.has.compiler) {
								
								config.set ("ios.compiler", substitute (element.att.compiler));
								
							}
							
							if (element.has.resolve ("prerendered-icon")) {
								
								config.set ("ios.prerenderedIcon",  substitute (element.att.resolve ("prerendered-icon")));
								
							}
							
							if (element.has.resolve ("linker-flags")) {
								
								config.push ("ios.linker-flags", substitute (element.att.resolve ("linker-flags")));
								//config.ios.linkerFlags.push (substitute (element.att.resolve ("linker-flags")));
								
							}
							
						}

					case "tvos":
						
						if (target == Platform.TVOS) {
							
							if (element.has.deployment) {
								
								var deployment = Std.parseFloat (substitute (element.att.deployment));
								
								// If it is specified, assume the dev knows what he is doing!
								config.set ("tvos.deployment", deployment);
							}
							
							if (element.has.binaries) {
								
								var binaries = substitute (element.att.binaries);
								
								switch (binaries) {
									
									case "arm64":
										
										ArrayHelper.addUnique (architectures, Architecture.ARM64);
									
								}
								
							}
							
							if (element.has.devices) {
								
								config.set ("tvos.device", substitute (element.att.devices).toLowerCase ());
								
							}
							
							if (element.has.compiler) {
								
								config.set ("tvos.compiler", substitute (element.att.compiler));
								
							}
							
							if (element.has.resolve ("prerendered-icon")) {
								
								config.set ("tvos.prerenderedIcon",  substitute (element.att.resolve ("prerendered-icon")));
								
							}
							
							if (element.has.resolve ("linker-flags")) {
								
								config.push ("tvos.linker-flags", substitute (element.att.resolve ("linker-flags")));
								//config.ios.linkerFlags.push (substitute (element.att.resolve ("linker-flags")));
								
							}
							
						}
					
					case "config": 
						
						config.parse (element);
					
					case "prebuild":
						
						parseCommandElement (element, preBuildCallbacks);
					
					case "postbuild":
						
						parseCommandElement (element, postBuildCallbacks);
					
					default :
						
						if (StringTools.startsWith (element.name, "config:")) {
							
							config.parse (element);
							
						}
					
				}
				
			}
			
		}
		
	}
	
	
	private function parseWindowElement (element:Fast):Void {
		
		var id = 0;
		
		if (element.has.id) {
			
			id = Std.parseInt (substitute (element.att.id));
			
		}
		
		while (id >= windows.length) {
			
			windows.push (ObjectHelper.copyFields (defaultWindow, {}));
			
		}
		
		for (attribute in element.x.attributes ()) {
			
			var name = formatAttributeName (attribute);
			var value = substitute (element.att.resolve (attribute));
			
			switch (name) {
				
				case "background":
					
					value = StringTools.replace (value, "#", "");
					
					if (value.indexOf ("0x") == -1) {
						
						value = "0x" + value;
						
					}
					
					if (value == "0x" || (value.length == 10 && StringTools.startsWith (value, "0x00"))) {
						
						windows[id].background = null;
						
					} else {
						
						windows[id].background = Std.parseInt (value);
						
					}
				
				case "orientation":
					
					var orientation = Reflect.field (Orientation, Std.string (value).toUpperCase ());
					
					if (orientation != null) {
						
						windows[id].orientation = orientation;
						
					}
				
				case "height", "width", "fps", "antialiasing":
					
					if (Reflect.hasField (windows[id], name)) {
						
						Reflect.setField (windows[id], name, Std.parseInt (value));
						
					}
				
				case "parameters":
					
					if (Reflect.hasField (windows[id], name)) {
						
						Reflect.setField (windows[id], name, Std.string (value));
						
					}
				
				case "allow-high-dpi":
					
					if (Reflect.hasField (windows[id], "allowHighDPI")) {
						
						Reflect.setField (windows[id], "allowHighDPI", value == "true");
						
					}
				
				default:
					
					if (Reflect.hasField (windows[id], name)) {
						
						Reflect.setField (windows[id], name, value == "true");
						
					} else if (Reflect.hasField (windows[id], formatAttributeName (name))) {
						
						Reflect.setField (windows[id], formatAttributeName (name), value == "true");
						
					}
				
			}
			
		}
		
	}
	
	
	public function process (projectFile:String, useExtensionPath:Bool):Void {
		
		var xml = null;
		var extensionPath = "";
		
		try {
			
			xml = new Fast (Xml.parse (File.getContent (projectFile)).firstElement ());
			extensionPath = Path.directory (projectFile);
			
		} catch (e:Dynamic) {
			
			LogHelper.error ("\"" + projectFile + "\" contains invalid XML data", e);
			
		}
		
		parseXML (xml, "", extensionPath);
		
	}
	
	
	private function substitute (string:String):String {
		
		var newString = string;
		
		while (doubleVarMatch.match (newString)) {
			
			var substring = doubleVarMatch.matched (1);
			
			if (substring.substr (0, 8) == "haxelib:") {
				
				var path = PathHelper.getHaxelib (new Haxelib (substring.substr (8)), true);
				substring = PathHelper.standardize (path);
				
			} else if (defines.exists (substring)) {
				
				substring = defines.get (substring);
				
			} else if (environment != null && environment.exists (substring)) {
				
				substring = environment.get (substring);
				
			}
			
			newString = doubleVarMatch.matchedLeft () + "${" + substring + "}" + doubleVarMatch.matchedRight ();
			
		}
		
		while (varMatch.match (newString)) {
			
			var substring = varMatch.matched (1);
			
			if (substring.substr (0, 8) == "haxelib:") {
				
				var path = PathHelper.getHaxelib (new Haxelib (substring.substr (8)), true);
				substring = PathHelper.standardize (path);
				
			} else if (defines.exists (substring)) {
				
				substring = defines.get (substring);
				
			} else if (environment != null && environment.exists (substring)) {
				
				substring = environment.get (substring);
				
			}
			
			newString = varMatch.matchedLeft () + substring + varMatch.matchedRight ();
			
		}
		
		return newString;
		
	}
	
	
	
}
