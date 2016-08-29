package lime.tools.platforms;


import haxe.io.Path;
import haxe.Json;
import haxe.Template;
import lime.tools.helpers.AssetHelper;
import lime.tools.helpers.CPPHelper;
import lime.tools.helpers.DeploymentHelper;
import lime.tools.helpers.FileHelper;
import lime.tools.helpers.HTML5Helper;
import lime.tools.helpers.LogHelper;
import lime.tools.helpers.PathHelper;
import lime.tools.helpers.ProcessHelper;
import lime.project.AssetType;
import lime.project.Haxelib;
import lime.project.HXProject;
import lime.project.PlatformTarget;
import sys.io.File;
import sys.FileSystem;


class EmscriptenPlatform extends PlatformTarget {
	
	
	private var outputFile:String;
	
	
	public function new (command:String, _project:HXProject, targetFlags:Map <String, String>) {
		
		super (command, _project, targetFlags);
		
		targetDirectory = project.app.path + "/emscripten/" + buildType;
		outputFile = targetDirectory + "/bin/" + project.app.file + ".js";
		
	}
	
	
	public override function build ():Void {
		
		var hxml = targetDirectory + "/haxe/" + buildType + ".hxml";
		
		ProcessHelper.runCommand ("", "haxe", [ hxml, "-D", "emscripten", "-D", "webgl", "-D", "static_link" ] );
		CPPHelper.compile (project, targetDirectory + "/obj", [ "-Demscripten", "-Dwebgl", "-Dstatic_link" ]);
		
		if (project.environment.exists ("EMSCRIPTEN_SDK")) {
			
			project.path (project.environment.get ("EMSCRIPTEN_SDK"));
			
		}
		
		ProcessHelper.runCommand ("", "emcc", [ targetDirectory + "/obj/Main.cpp", "-o", targetDirectory + "/obj/Main.o" ], true, false, true);
		
		var args = [ "Main.o" ];
		
		for (ndll in project.ndlls) {
			
			var path = PathHelper.getLibraryPath (ndll, "Emscripten", "lib", ".a", project.debug);
			args.push (path);
			
		}
		
		var json = Json.parse (File.getContent (PathHelper.getHaxelib (new Haxelib ("hxcpp"), true) + "/haxelib.json"));
		var prefix = "";
		
		if (Std.parseFloat (json.version) > 3.1) {
			
			prefix = "lib";
			
		}
		
		args = args.concat ([ prefix + "ApplicationMain" + (project.debug ? "-debug" : "") + ".a", "-o", "ApplicationMain.o" ]);
		ProcessHelper.runCommand (targetDirectory + "/obj", "emcc", args, true, false, true);
		
		args = [ "ApplicationMain.o", "-s", "ASM_JS=1", "-s", "NO_EXIT_RUNTIME=1", "-s", "USE_SDL=2" ];
		
		if (!project.debug) {
			
			args.push ("-s");
			args.push ("DISABLE_EXCEPTION_CATCHING=0");
			//args.push ("-s");
			//args.push ("OUTLINING_LIMIT=70000");
			args.push ("-O2");
			
		} else {
			
			args.push ("-s");
			args.push ("DISABLE_EXCEPTION_CATCHING=2");
			args.push ("-s");
			args.push ("ASSERTIONS=1");
			args.push ("-O1");
			
		}
		
		args.push ("-s");
		args.push ("ALLOW_MEMORY_GROWTH=1");
		
		if (project.targetFlags.exists ("minify")) {
			
			//args.push ("--minify");
			//args.push ("1");
			//args.push ("--closure");
			//args.push ("1");
			
		}
		
		//args.push ("--memory-init-file");
		//args.push ("1");
		//args.push ("--jcache");
		//args.push ("-g");
		
		if (FileSystem.exists (targetDirectory + "/obj/assets")) {
			
			args.push ("--preload-file");
			args.push ("assets");
			
		}
		
		if (LogHelper.verbose) args.push ("-v");
		
		//if (project.targetFlags.exists ("compress")) {
			//
			//args.push ("--compression");
			//args.push (PathHelper.findTemplate (project.templatePaths, "bin/utils/lzma/compress.exe") + "," + PathHelper.findTemplate (project.templatePaths, "resources/lzma-decoder.js") + ",LZMA.decompress");
			//args.push ("haxelib run openfl compress," + PathHelper.findTemplate (project.templatePaths, "resources/lzma-decoder.js") + ",LZMA.decompress");
			//args.push ("-o");
			//args.push ("../bin/index.html");
			//
		//} else {
			
			args.push ("-o");
			args.push ("../bin/" + project.app.file + ".js");
			
		//}
		
		//args.push ("../bin/index.html");
		
		ProcessHelper.runCommand (targetDirectory + "/obj", "emcc", args, true, false, true);
		
		if (project.targetFlags.exists ("minify")) {
			
			HTML5Helper.minify (project, targetDirectory + "/bin/" + project.app.file + ".js");
			
		}
		
		if (project.targetFlags.exists ("compress")) {
			
			if (FileSystem.exists (targetDirectory + "/bin/" + project.app.file + ".data")) {
				
				//var byteArray = ByteArray.readFile (targetDirectory + "/bin/" + project.app.file + ".data");
				//byteArray.compress (CompressionAlgorithm.GZIP);
				//File.saveBytes (targetDirectory + "/bin/" + project.app.file + ".data.compress", byteArray);
				
			}
			
			//var byteArray = ByteArray.readFile (targetDirectory + "/bin/" + project.app.file + ".js");
			//byteArray.compress (CompressionAlgorithm.GZIP);
			//File.saveBytes (targetDirectory + "/bin/" + project.app.file + ".js.compress", byteArray);
			
		} else {
			
			File.saveContent (targetDirectory + "/bin/.htaccess", "SetOutputFilter DEFLATE");
			
		}
		
	}
	
	
	public override function clean ():Void {
		
		if (FileSystem.exists (targetDirectory)) {
			
			PathHelper.removeDirectory (targetDirectory);
			
		}
		
	}
	
	
	public override function deploy ():Void {
		
		DeploymentHelper.deploy (project, targetFlags, targetDirectory, "Emscripten");
		
	}
	
	
	public override function display ():Void {
		
		var hxml = PathHelper.findTemplate (project.templatePaths, "emscripten/hxml/" + buildType + ".hxml");
		
		var context = project.templateContext;
		context.OUTPUT_DIR = targetDirectory;
		context.OUTPUT_FILE = outputFile;
		
		var template = new Template (File.getContent (hxml));
		
		Sys.println (template.execute (context));
		Sys.println ("-D display");
		
	}
	
	
	public override function rebuild ():Void {
		
		CPPHelper.rebuild (project, [[ "-Demscripten", "-Dstatic_link" ]]);
		
	}
	
	
	public override function run ():Void {
		
		HTML5Helper.launch (project, targetDirectory + "/bin");
		
	}
	
	
	public override function update ():Void {
		
		project = project.clone ();
		
		for (asset in project.assets) {
			
			if (asset.embed && asset.sourcePath == "") {
				
				var path = PathHelper.combine (targetDirectory + "/obj/tmp", asset.targetPath);
				PathHelper.mkdir (Path.directory (path));
				FileHelper.copyAsset (asset, path);
				asset.sourcePath = path;
				
			}
			
		}
		
		for (asset in project.assets) {
			
			asset.resourceName = "assets/" + asset.resourceName;
			
		}
		
		var destination = targetDirectory + "/bin/";
		PathHelper.mkdir (destination);
		
		//for (asset in project.assets) {
			//
			//if (asset.type == AssetType.FONT) {
				//
				//project.haxeflags.push (HTML5Helper.generateFontData (project, asset));
				//
			//}
			//
		//}
		
		if (project.targetFlags.exists ("xml")) {
			
			project.haxeflags.push ("-xml " + targetDirectory + "/types.xml");
			
		}
		
		var context = project.templateContext;
		
		context.WIN_FLASHBACKGROUND = StringTools.hex (project.window.background, 6);
		context.OUTPUT_DIR = targetDirectory;
		context.OUTPUT_FILE = outputFile;
		context.CPP_DIR = targetDirectory + "/obj";
		context.USE_COMPRESSION = project.targetFlags.exists ("compress");
		
		for (asset in project.assets) {
			
			var path = PathHelper.combine (targetDirectory + "/obj/assets", asset.targetPath);
			
			if (asset.type != AssetType.TEMPLATE) {
				
				//if (asset.type != AssetType.FONT) {
					
					PathHelper.mkdir (Path.directory (path));
					FileHelper.copyAssetIfNewer (asset, path);
					
				//}
				
			}
			
		}
		
		FileHelper.recursiveCopyTemplate (project.templatePaths, "emscripten/template", destination, context);
		FileHelper.recursiveCopyTemplate (project.templatePaths, "haxe", targetDirectory + "/haxe", context);
		FileHelper.recursiveCopyTemplate (project.templatePaths, "emscripten/hxml", targetDirectory + "/haxe", context);
		FileHelper.recursiveCopyTemplate (project.templatePaths, "emscripten/cpp", targetDirectory + "/obj", context);
		
		for (asset in project.assets) {
			
			var path = PathHelper.combine (destination, asset.targetPath);
			
			if (asset.type == AssetType.TEMPLATE) {
				
				PathHelper.mkdir (Path.directory (path));
				FileHelper.copyAsset (asset, path, context);
				
			}
			
		}
		
		AssetHelper.createManifest (project, PathHelper.combine (targetDirectory + "/obj/assets", "manifest"));
		
	}
	
	
	@ignore public override function install ():Void {}
	@ignore public override function trace ():Void {}
	@ignore public override function uninstall ():Void {}
	
	
}