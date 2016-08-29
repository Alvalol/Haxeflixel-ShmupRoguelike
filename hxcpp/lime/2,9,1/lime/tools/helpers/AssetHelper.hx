package lime.tools.helpers;


import haxe.io.Path;
import haxe.Serializer;
import haxe.Unserializer;
import lime.tools.helpers.PathHelper;
import lime.project.AssetType;
import lime.project.HXProject;
import sys.io.File;
import sys.FileSystem;


class AssetHelper {
	
	
	public static function createManifest (project:HXProject, targetPath:String = ""):String {
		
		var manifest = new Array <Dynamic> ();
		
		for (asset in project.assets) {
			
			if (asset.type != AssetType.TEMPLATE) {
				
				var data = {
					id : asset.id,
					path : asset.resourceName,
					type : Std.string (asset.type)
				}
				
				manifest.push (data);
				
			}
			
		}
		
		var data = Serializer.run (manifest);
		
		if (targetPath != "") {
			
			PathHelper.mkdir (Path.directory (targetPath));
			File.saveContent (targetPath, data);
			
		}
		
		return data;
		
	}
	
	
	public static function processLibraries (project:HXProject, targetDirectory:String = null):Void {
		
		var handlers = new Array <String> ();
		
		for (library in project.libraries) {
			
			var type = library.type;
			
			if (type == null) {
				
				type = Path.extension (library.sourcePath).toLowerCase ();
				
			}
			
			if (project.libraryHandlers.exists (type)) {
				
				var handler = project.libraryHandlers.get (type);
				
				handlers.remove (handler);
				handlers.push (handler);
				
			}
			
		}
		
		if (handlers.length > 0) {
			
			var projectData = Serializer.run (project);
			var temporaryFile = PathHelper.getTemporaryFile ();
			
			File.saveContent (temporaryFile, projectData);
			
			for (handler in handlers) {
				
				var outputFile = PathHelper.getTemporaryFile ();
				var args = [ "run", handler, "process", temporaryFile, outputFile ];
				
				if (LogHelper.verbose) {
					
					args.push ("-verbose");
					
				}
				
				if (targetDirectory != null) {
					
					args.push ("--targetDirectory=" + PathHelper.tryFullPath (targetDirectory));
					
				}
				
				ProcessHelper.runCommand ("", "haxelib", args);
				
				if (FileSystem.exists (outputFile)) {
					
					try {
						
						var output = File.getContent (outputFile);
						var data:HXProject = Unserializer.run (output);
						project.merge (data);
						
					} catch (e:Dynamic) {
						
						LogHelper.error (e);
						
					}
					
					try {
						
						FileSystem.deleteFile (outputFile);
						
					} catch (e:Dynamic) {}
					
				}
				
			}
			
			try {
				
				FileSystem.deleteFile (temporaryFile);
				
			} catch (e:Dynamic) {}
			
		}
		
	}
	

}