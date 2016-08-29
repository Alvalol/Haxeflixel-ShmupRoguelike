package lime.tools.platforms;


import haxe.io.Path;
import haxe.Template;
import lime.project.Icon;
import lime.tools.helpers.AssetHelper;
import lime.tools.helpers.CPPHelper;
import lime.tools.helpers.DeploymentHelper;
import lime.tools.helpers.FileHelper;
import lime.tools.helpers.IconHelper;
import lime.tools.helpers.LogHelper;
import lime.tools.helpers.NekoHelper;
import lime.tools.helpers.NodeJSHelper;
import lime.tools.helpers.PathHelper;
import lime.tools.helpers.PlatformHelper;
import lime.tools.helpers.ProcessHelper;
import lime.project.Asset;
import lime.project.AssetType;
import lime.project.Haxelib;
import lime.project.HXProject;
import lime.project.Platform;
import lime.project.PlatformTarget;
import sys.io.File;
import sys.FileSystem;


class WindowsPlatform extends PlatformTarget {
	
	
	private var applicationDirectory:String;
	private var executablePath:String;
	private var targetType:String;
	
	
	public function new (command:String, _project:HXProject, targetFlags:Map <String, String> ) {
		
		super (command, _project, targetFlags);
		
		if (project.targetFlags.exists ("neko") || project.target != PlatformHelper.hostPlatform) {
			
			targetType = "neko";
			
		} else if (project.targetFlags.exists ("nodejs")) {
		
			targetType = "nodejs";
			
		} else {
			
			targetType = "cpp";
			
		}
		
		targetDirectory = project.app.path + "/windows/" + targetType;
		applicationDirectory = targetDirectory + "/bin/";
		executablePath = applicationDirectory + project.app.file + ".exe";
		
	}
	
	
	public override function build ():Void {
		
		var type = "release";
		
		if (project.debug) {
			
			type = "debug";
			
		} else if (project.targetFlags.exists ("final")) {
			
			type = "final";
			
		}
		
		var hxml = targetDirectory + "/haxe/" + type + ".hxml";
		
		PathHelper.mkdir (targetDirectory);
		
		for (dependency in project.dependencies) {
			
			if (StringTools.endsWith (dependency.path, ".dll")) {
				
				var fileName = Path.withoutDirectory (dependency.path);
				FileHelper.copyIfNewer (dependency.path, applicationDirectory + "/" + fileName);
				
			}
			
		}
		
		if (!project.targetFlags.exists ("static") || targetType != "cpp") {
			
			for (ndll in project.ndlls) {
				
				FileHelper.copyLibrary (project, ndll, "Windows", "", (ndll.haxelib != null && (ndll.haxelib.name == "hxcpp" || ndll.haxelib.name == "hxlibc")) ? ".dll" : ".ndll", applicationDirectory, project.debug);
				
			}
			
		}
		
		var icons = project.icons;
		
		if (icons.length == 0) {
			
			icons = [ new Icon (PathHelper.findTemplate (project.templatePaths, "default/icon.svg")) ];
			
		}
		
		//IconHelper.createIcon (project.icons, 32, 32, PathHelper.combine (applicationDirectory, "icon.png"));
		
		if (targetType == "neko") {
			
			ProcessHelper.runCommand ("", "haxe", [ hxml ]);
			
			var iconPath = PathHelper.combine (applicationDirectory, "icon.ico");
			
			if (!IconHelper.createWindowsIcon (icons, iconPath)) {
				
				iconPath = null;
				
			}
			
			NekoHelper.createWindowsExecutable (project.templatePaths, targetDirectory + "/obj/ApplicationMain.n", executablePath, iconPath);
			NekoHelper.copyLibraries (project.templatePaths, "windows", applicationDirectory);
			
		} else if (targetType == "nodejs") {
			
			ProcessHelper.runCommand ("", "haxe", [ hxml ]);
			//NekoHelper.createExecutable (project.templatePaths, "windows", targetDirectory + "/obj/ApplicationMain.n", executablePath);
			NekoHelper.copyLibraries (project.templatePaths, "windows", applicationDirectory);
			
		} else {
			
			var haxeArgs = [ hxml ];
			var flags = [];
			
			flags.push ("-DHXCPP_M32");
			
			if (!project.environment.exists ("SHOW_CONSOLE")) {
				
				haxeArgs.push ("-D");
				haxeArgs.push ("no_console");
				flags.push ("-Dno_console");
				
			}
			
			if (!project.targetFlags.exists ("static")) {
				
				ProcessHelper.runCommand ("", "haxe", haxeArgs);
				CPPHelper.compile (project, targetDirectory + "/obj", flags);
				
				FileHelper.copyFile (targetDirectory + "/obj/ApplicationMain" + (project.debug ? "-debug" : "") + ".exe", executablePath);
				
			} else {
				
				ProcessHelper.runCommand ("", "haxe", haxeArgs.concat ([ "-D", "static_link" ]));
				CPPHelper.compile (project, targetDirectory + "/obj", flags.concat ([ "-Dstatic_link" ]));
				CPPHelper.compile (project, targetDirectory + "/obj", flags, "BuildMain.xml");
				
				FileHelper.copyFile (targetDirectory + "/obj/Main" + (project.debug ? "-debug" : "") + ".exe", executablePath);
				
			}
			
			var iconPath = PathHelper.combine (applicationDirectory, "icon.ico");
			
			if (IconHelper.createWindowsIcon (icons, iconPath) && PlatformHelper.hostPlatform == Platform.WINDOWS) {
				
				var templates = [ PathHelper.getHaxelib (new Haxelib ("lime")) + "/templates" ].concat (project.templatePaths);
				ProcessHelper.runCommand ("", PathHelper.findTemplate (templates, "bin/ReplaceVistaIcon.exe"), [ executablePath, iconPath, "1" ], true, true);
				
			}
			
		}
		
	}
	
	
	public override function clean ():Void {
		
		if (FileSystem.exists (targetDirectory)) {
			
			PathHelper.removeDirectory (targetDirectory);
			
		}
		
	}
	
	
	public override function deploy ():Void {
		
		DeploymentHelper.deploy (project, targetFlags, targetDirectory, "Windows");
		
	}
	
	
	public override function display ():Void {
		
		var type = "release";
		
		if (project.debug) {
			
			type = "debug";
			
		} else if (project.targetFlags.exists ("final")) {
			
			type = "final";
			
		}
		
		var hxml = PathHelper.findTemplate (project.templatePaths, targetType + "/hxml/" + type + ".hxml");
		var template = new Template (File.getContent (hxml));
		
		Sys.println (template.execute (generateContext ()));
		Sys.println ("-D display");
		
	}
	
	
	private function generateContext ():Dynamic {
		
		var context = project.templateContext;
		
		context.NEKO_FILE = targetDirectory + "/obj/ApplicationMain.n";
		context.NODE_FILE = targetDirectory + "/bin/ApplicationMain.js";
		context.CPP_DIR = targetDirectory + "/obj";
		context.BUILD_DIR = project.app.path + "/windows";
		
		return context;
		
	}
	
	
	public override function rebuild ():Void {
		
		if (project.environment.exists ("VS110COMNTOOLS") && project.environment.exists ("VS100COMNTOOLS")) {
			
			project.environment.set ("HXCPP_MSVC", project.environment.get ("VS100COMNTOOLS"));
			Sys.putEnv ("HXCPP_MSVC", project.environment.get ("VS100COMNTOOLS"));
			
		}
		
		CPPHelper.rebuild (project, [[ "-Dwindows" ]]);
		
	}
	
	
	public override function run ():Void {
		
		var arguments = additionalArguments.copy ();
		
		if (LogHelper.verbose) {
			
			arguments.push ("-verbose");
			
		}
		
		if (targetType == "nodejs") {
			
			NodeJSHelper.run (project, targetDirectory + "/bin/ApplicationMain.js", arguments);
			
		} else if (project.target == PlatformHelper.hostPlatform) {
			
			arguments = arguments.concat ([ "-livereload" ]);
			ProcessHelper.runCommand (applicationDirectory, Path.withoutDirectory (executablePath), arguments);
			
		}
		
	}
	
	
	public override function update ():Void {
		
		project = project.clone ();
		
		if (project.targetFlags.exists ("xml")) {
			
			project.haxeflags.push ("-xml " + targetDirectory + "/types.xml");
			
		}
		
		for (asset in project.assets) {
			
			if (asset.embed && asset.sourcePath == "") {
				
				var path = PathHelper.combine (targetDirectory + "/obj/tmp", asset.targetPath);
				PathHelper.mkdir (Path.directory (path));
				FileHelper.copyAsset (asset, path);
				asset.sourcePath = path;
				
			}
			
		}
		
		var context = generateContext ();
		
		if (targetType == "cpp" && project.targetFlags.exists ("static")) {
			
			for (i in 0...project.ndlls.length) {
				
				var ndll = project.ndlls[i];
				
				if (ndll.path == null || ndll.path == "") {
					
					context.ndlls[i].path = PathHelper.getLibraryPath (ndll, "Windows", "lib", ".lib", project.debug);
					
				}
				
			}
			
		}
		
		PathHelper.mkdir (targetDirectory);
		PathHelper.mkdir (targetDirectory + "/obj");
		PathHelper.mkdir (targetDirectory + "/haxe");
		PathHelper.mkdir (applicationDirectory);
		
		//SWFHelper.generateSWFClasses (project, targetDirectory + "/haxe");
		
		FileHelper.recursiveCopyTemplate (project.templatePaths, "haxe", targetDirectory + "/haxe", context);
		FileHelper.recursiveCopyTemplate (project.templatePaths, targetType + "/hxml", targetDirectory + "/haxe", context);
		
		if (targetType == "cpp" && project.targetFlags.exists ("static")) {
			
			FileHelper.recursiveCopyTemplate (project.templatePaths, "cpp/static", targetDirectory + "/obj", context);
			
		}
		
		/*if (IconHelper.createIcon (project.icons, 32, 32, PathHelper.combine (applicationDirectory, "icon.png"))) {
			
			context.HAS_ICON = true;
			context.WIN_ICON = "icon.png";
			
		}*/
		
		for (asset in project.assets) {
			
			if (asset.embed != true) {
				
				var path = PathHelper.combine (applicationDirectory, asset.targetPath);
				
				if (asset.type != AssetType.TEMPLATE) {
					
					PathHelper.mkdir (Path.directory (path));
					FileHelper.copyAssetIfNewer (asset, path);
					
				} else {
					
					PathHelper.mkdir (Path.directory (path));
					FileHelper.copyAsset (asset, path, context);
					
				}
				
			}
			
		}
		
		AssetHelper.createManifest (project, PathHelper.combine (applicationDirectory, "manifest"));
		
	}
	
	
	@ignore public override function install ():Void {}
	@ignore public override function trace ():Void {}
	@ignore public override function uninstall ():Void {}
	
	
}
