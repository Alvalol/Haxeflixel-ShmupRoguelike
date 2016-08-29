package utils;


import lime.tools.helpers.FileHelper;
import lime.tools.helpers.LogHelper;
import lime.tools.helpers.PathHelper;
import lime.project.Haxelib;
import lime.project.HXProject;
import sys.FileSystem;

@:access(lime.project.HXProject)


class CreateTemplate {
	
	
	public static function createExtension (words:Array <String>, userDefines:Map<String, Dynamic>):Void {
		
		var title = "SampleExtension";
		
		if (words.length > 1) {
			
			title = words[1];
			
		}
		
		var file = StringTools.replace (title, " ", "");
		var extension = StringTools.replace (file, "-", "_");
		var className = extension.substr (0, 1).toUpperCase () + extension.substr (1);
		
		var context:Dynamic = { };
		context.file = file;
		context.extension = extension;
		context.className = className;
		context.extensionLowerCase = extension.toLowerCase ();
		context.extensionUpperCase = extension.toUpperCase ();
		context.ANDROID_TARGET_SDK_VERSION = "::ANDROID_TARGET_SDK_VERSION::";
		
		PathHelper.mkdir (title);
		FileHelper.recursiveCopyTemplate ([ PathHelper.getHaxelib (new Haxelib ("lime"), true)  + "/templates" ], "extension", title, context);
		
		if (FileSystem.exists (title + "/Extension.hx")) {
			
			FileSystem.rename (title + "/Extension.hx", title + "/" + className + ".hx");
			
		}
		
		if (FileSystem.exists (title + "/project/common/Extension.cpp")) {
			
			FileSystem.rename (title + "/project/common/Extension.cpp", title + "/project/common/" + file + ".cpp");
			
		}
		
		if (FileSystem.exists (title + "/project/include/Extension.h")) {
			
			FileSystem.rename (title + "/project/include/Extension.h", title + "/project/include/" + file + ".h");
			
		}
		
		if (FileSystem.exists (title + "/dependencies/android/src/org/haxe/extension/Extension.java")) {
			
			FileSystem.rename (title + "/dependencies/android/src/org/haxe/extension/Extension.java", title + "/dependencies/android/src/org/haxe/extension/" + file + ".java");
			
		}
		
		if (FileSystem.exists (title)) {
			
			PathHelper.mkdir (title + "/ndll");
			PathHelper.mkdir (title + "/ndll/Linux");
			PathHelper.mkdir (title + "/ndll/Linux64");
			PathHelper.mkdir (title + "/ndll/Mac");
			PathHelper.mkdir (title + "/ndll/Mac64");
			PathHelper.mkdir (title + "/ndll/Windows");
			
		}
		
	}
	
	
	public static function createProject (words:Array <String>, userDefines:Map<String, Dynamic>, overrides:HXProject):Void {
		
		var colonIndex = words[0].indexOf (":");
		
		var projectName = null;
		var sampleName = null;
		var outputName = "SampleProject";
		
		if (colonIndex == -1) {
			
			projectName = words[0];
			
			if (words.length > 1) {
				
				sampleName = words[1];
				
			}
			
			if (words.length > 2) {
				
				outputName = words[2];
				
			}
			
		} else {
			
			projectName = words[0].substring (0, colonIndex);
			sampleName = words[0].substr (colonIndex + 1);
			
			if (words.length > 1) {
				
				outputName = words[1];
				
			}
			
		}
		
		if (projectName == "project") {
			
			projectName = CommandLineTools.defaultLibrary;
			
			if (sampleName != null) {
				
				outputName = sampleName;
				
			}
			
		}
		
		if (projectName == null || projectName == "") {
			
			projectName = CommandLineTools.defaultLibrary;
			
		}
		
		if (projectName != null && projectName != "") {
			
			var defines = new Map <String, Dynamic> ();
			defines.set ("create", 1);
			var project = HXProject.fromHaxelib (new Haxelib (projectName), defines);
			
			if (project != null) {
				
				var company = "Company Name";
				
				/*if (words.length > 2) {
					
					company = words[2];
					
				}*/
				
				var context:Dynamic = { };
				
				var name = outputName;
				//var name = words[1].split (".").pop ();
				var alphaNumeric = new EReg ("[a-zA-Z0-9]", "g");
				var title = "";
				var capitalizeNext = true;
				
				for (i in 0...name.length) {
					
					if (alphaNumeric.match (name.charAt (i))) {
						
						if (capitalizeNext) {
							
							title += name.charAt (i).toUpperCase ();
							
						} else {
							
							title += name.charAt (i);
							
						}
						
						capitalizeNext = false;
						
					} else {
						
						capitalizeNext = true;
						
					}
					
				}
				
				var file = StringTools.replace (title, " ", "");
				
				var id = [ "com", "sample", file.toLowerCase () ];
				
				/*if (colonIndex != -1 && words.length > 1 || ) {
					
					var name = words[1];
					name = new EReg ("[^a-zA-Z0-9.]", "g").replace (name, "");
					id = name.split (".");
					
					if (id.length < 3) {
						
						id = [ "com", "example" ].concat (id);
						
					}
					
				}*/
				
				var packageName = id.join (".").toLowerCase ();
				var version = "1.0.0";
				
				if (overrides != null) {
					
					if (overrides.meta.packageName != overrides.defaultMeta.packageName) {
						
						packageName = overrides.meta.packageName;
						
					}
					
					if (overrides.meta.title != overrides.defaultMeta.title) {
						
						title = overrides.meta.title;
						
					}
					
					if (overrides.meta.version != overrides.defaultMeta.version) {
						
						version = overrides.meta.version;
						
					}
					
					if (overrides.meta.company != overrides.defaultMeta.company) {
						
						company = overrides.meta.company;
						
					}
					
					if (overrides.app.file != overrides.defaultApp.file) {
						
						file = overrides.app.file;
						
					}
					
				}
				
				context.title = title;
				context.packageName = packageName;
				context.version = version;
				context.company = company;
				context.file = file;
				
				for (define in userDefines.keys ()) {
					
					Reflect.setField (context, define, userDefines.get (define));
					
				}
				
				var folder = name;
				
				if (colonIndex > -1) {
					
					if (words.length > 1) {
						
						folder = PathHelper.tryFullPath (words[1]);
						
					}
					
				} else {
					
					if (words.length > 2) {
						
						folder = PathHelper.tryFullPath (words[2]);
						
					}
					
				}
				
				/*if (words.length > 2) {
					
					folder = PathHelper.tryFullPath (words[2]);
					
				}*/
				
				PathHelper.mkdir (folder);
				FileHelper.recursiveCopyTemplate (project.templatePaths, "project", folder, context);
				
				try {
					
					if (FileSystem.exists (folder + "/Project.hxproj")) {
						
						if (FileSystem.exists (folder + "/" + title + ".hxproj")) {
							
							FileSystem.deleteFile (folder + "/" + title + ".hxproj");
							
						}
						
						FileSystem.rename (folder + "/Project.hxproj", folder + "/" + title + ".hxproj");
						
					}
					
				} catch (e:Dynamic) {}
				
				return;
				
			}
			
		}
		
		LogHelper.error ("Could not find project \"" + projectName + "\"");
	
	}
	
	
	public static function createSample (words:Array <String>, userDefines:Map<String, Dynamic>) {
		
		var colonIndex = words[0].indexOf (":");
		
		var projectName = null;
		var sampleName = null;
		var outputPath = null;
		
		if (colonIndex == -1 && words.length > 1) {
			
			projectName = words[0];
			sampleName = words[1];
			
			if (words.length > 2) {
				
				outputPath = words[2];
				
			}
			
		} else {
			
			projectName = words[0].substring (0, colonIndex);
			sampleName = words[0].substr (colonIndex + 1);
			
			if (words.length > 1) {
				
				outputPath = words[1];
				
			}
			
		}
		
		if (projectName == null || projectName == "") {
			
			projectName = CommandLineTools.defaultLibrary;
			
		}
		
		if (sampleName == null || sampleName == "") {
			
			LogHelper.error ("You must specify a sample name to copy when using \"" + CommandLineTools.commandName + " create\"");
			return;
			
		}
		
		var defines = new Map <String, Dynamic> ();
		defines.set ("create", 1);
		var project = HXProject.fromHaxelib (new Haxelib (projectName), defines);
		
		if (project == null && outputPath == null) {
			
			outputPath = sampleName;
			sampleName = projectName;
			projectName = CommandLineTools.defaultLibrary;
			project = HXProject.fromHaxelib (new Haxelib (projectName), defines);
			
		}
		
		if (project != null) {
			
			if (outputPath == null) {
				
				outputPath = sampleName;
				
			}
			
			var samplePaths = project.samplePaths.copy ();
			samplePaths.reverse ();
			
			for (samplePath in samplePaths) {
				
				var sourcePath = PathHelper.combine (samplePath, sampleName);
				
				if (FileSystem.exists (sourcePath)) {
					
					PathHelper.mkdir (outputPath);
					FileHelper.recursiveCopy (sourcePath, PathHelper.tryFullPath (outputPath));
					return;
					
				}
				
			}
			
		}
		
		LogHelper.error ("Could not find sample \"" + sampleName + "\" in project \"" + projectName + "\"");
		
	}
	
	
	public static function listSamples (projectName:String, userDefines:Map<String, Dynamic>) {
		
		var templates = [];
		
		if (projectName != null && projectName != "") {
			
			var defines = new Map <String, Dynamic> ();
			defines.set ("create", 1);
			var project = HXProject.fromHaxelib (new Haxelib (projectName), defines);
			
			if (project != null) {
				
				var samplePaths = project.samplePaths.copy ();
				
				if (samplePaths.length > 0) {
					
					samplePaths.reverse ();
					
					for (samplePath in samplePaths) {
						
						var path = PathHelper.tryFullPath (samplePath);
						if (!FileSystem.exists (path)) continue;
						
						for (name in FileSystem.readDirectory (path)) {
							
							if (!StringTools.startsWith (name, ".") && FileSystem.isDirectory (path + "/" + name)) {
								
								templates.push (name);
								
							}
							
						}
						
					}
					
				}
				
				/*templates.push ("extension");
				
				var projectTemplate = PathHelper.findTemplate (project.templatePaths, "project", false);
				
				if (projectTemplate != null) {
					
					templates.push ("project");
					
				}*/
				
			}
			
		}
		
		if (templates.length == 0) {
			
			projectName = CommandLineTools.defaultLibrary;
			
		}
		
		LogHelper.println ("\x1b[1mYou must specify a template when using the 'create' command.\x1b[0m");
		LogHelper.println ("");
		
		if (projectName == CommandLineTools.commandName) {
			
			LogHelper.println (" " + LogHelper.accentColor + "Usage:\x1b[0m \x1b[1m" + CommandLineTools.commandName + "\x1b[0m create project (directory)");
			LogHelper.println (" " + LogHelper.accentColor + "Usage:\x1b[0m \x1b[1m" + CommandLineTools.commandName + "\x1b[0m create extension (directory)");
			
		}
		
		LogHelper.println (" " + LogHelper.accentColor + "Usage:\x1b[0m \x1b[1m" + CommandLineTools.commandName + "\x1b[0m create " + (projectName != CommandLineTools.commandName ? projectName : "") + "<sample> (directory)");
		
		
		
		if (templates.length > 0) {
			
			LogHelper.println ("");
			LogHelper.println (" " + LogHelper.accentColor + "Available samples:\x1b[0m");
			LogHelper.println ("");
			
			for (template in templates) {
				
				Sys.println ("  * " + template);
				
			}
			
		}
		
		Sys.println ("");
		
	}
	
	
}