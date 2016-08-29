package lime.tools.platforms;


//import openfl.display.BitmapData;
import haxe.io.Path;
import haxe.Json;
import haxe.Template;
import lime.tools.helpers.ArrayHelper;
import lime.tools.helpers.AssetHelper;
import lime.tools.helpers.CPPHelper;
import lime.tools.helpers.DeploymentHelper;
import lime.tools.helpers.FileHelper;
import lime.tools.helpers.IconHelper;
import lime.tools.helpers.IOSHelper;
import lime.tools.helpers.LogHelper;
import lime.tools.helpers.PathHelper;
import lime.tools.helpers.PlatformHelper;
import lime.tools.helpers.ProcessHelper;
import lime.tools.helpers.StringHelper;
import lime.graphics.Image;
import lime.project.Architecture;
import lime.project.Asset;
import lime.project.AssetType;
import lime.project.Haxelib;
import lime.project.HXProject;
import lime.project.Icon;
import lime.project.Keystore;
import lime.project.NDLL;
import lime.project.Platform;
import lime.project.PlatformTarget;
import sys.io.File;
import sys.FileSystem;


class IOSPlatform extends PlatformTarget {
	
	
	public function new (command:String, _project:HXProject, targetFlags:Map <String, String> ) {
		
		super (command, _project, targetFlags);
		
		targetDirectory = PathHelper.combine (project.app.path, "ios/" + buildType);
		
	}
	
	
	public override function build ():Void {
		
		if (project.targetFlags.exists ("xcode") && PlatformHelper.hostPlatform == Platform.MAC) {
			
			ProcessHelper.runCommand ("", "open", [ targetDirectory + "/" + project.app.file + ".xcodeproj" ] );
			
		} else {
			
			IOSHelper.build (project, targetDirectory);
			
			if (!project.targetFlags.exists ("simulator")) {
				
				var entitlements = targetDirectory + "/" + project.app.file + "/" + project.app.file + "-Entitlements.plist";
				IOSHelper.sign (project, targetDirectory + "/bin", entitlements);
				
			}
			
		}
		
	}
	
	
	public override function clean ():Void {
		
		if (FileSystem.exists (targetDirectory)) {
			
			PathHelper.removeDirectory (targetDirectory);
			
		}
		
	}
	
	
	public override function deploy ():Void {
		
		DeploymentHelper.deploy (project, targetFlags, targetDirectory, "iOS");
		
	}
	
	
	public override function display ():Void {
		
		var hxml = PathHelper.findTemplate (project.templatePaths, "iphone/PROJ/haxe/Build.hxml");
		var template = new Template (File.getContent (hxml));
		
		var context = generateContext ();
		context.OUTPUT_DIR = targetDirectory;
		
		Sys.println (template.execute (context));
		Sys.println ("-D display");
		
	}
	
	
	private function generateContext ():Dynamic {
		
		project = project.clone ();
		
		project.sources.unshift ("");
		project.sources = PathHelper.relocatePaths (project.sources, PathHelper.combine (targetDirectory, project.app.file + "/haxe"));
		//project.dependencies.push ("stdc++");
		
		if (project.certificate == null || project.certificate.identity == null) {
			
			project.certificate = new Keystore ();
			project.certificate.identity = "iPhone Developer";
			
		}
		
		if (project.targetFlags.exists ("xml")) {
			
			project.haxeflags.push ("-xml " + targetDirectory + "/types.xml");
			
		}
		
		if (project.targetFlags.exists ("final")) {
			
			project.haxedefs.set ("final", "");
			
		}
		
		var context = project.templateContext;
		
		context.HAS_ICON = false;
		context.HAS_LAUNCH_IMAGE = false;
		context.OBJC_ARC = false;
		
		context.linkedLibraries = [];
		
		for (dependency in project.dependencies) {
			
			if (!StringTools.endsWith (dependency.name, ".framework") && !StringTools.endsWith (dependency.name, ".tbd") && !StringTools.endsWith (dependency.path, ".framework")) {
				
				if (dependency.path != "") {
					
					var name = Path.withoutDirectory (Path.withoutExtension (dependency.path));
					
					project.config.push ("ios.linker-flags", "-force_load $SRCROOT/$PRODUCT_NAME/lib/$CURRENT_ARCH/" + Path.withoutDirectory (dependency.path));
					//project.config.ios.linkerFlags.push ("-force_load $SRCROOT/$PRODUCT_NAME/lib/$ARCHS/" + Path.withoutDirectory (dependency.path));
					
					if (StringTools.startsWith (name, "lib")) {
						
						name = name.substring (3, name.length);
						
					}
					
					context.linkedLibraries.push (name);
					
				} else if (dependency.name != "") {
					
					context.linkedLibraries.push (dependency.name);
					
				}
				
			}
			
		}
		
		var valid_archs = new Array <String> ();
		var armv6 = false;
		var armv7 = false;
		var armv7s = false;
		var arm64 = false;
		var architectures = project.architectures;
		
		if (architectures == null || architectures.length == 0) {
			
			architectures = [ Architecture.ARMV7, Architecture.ARM64 ];
			
		}
		
		if (project.config.getString ("ios.device", "universal") == "universal" || project.config.getString ("ios.device") == "iphone") {
			
			if (project.config.getFloat ("ios.deployment", 5.1) < 5) {
				
				ArrayHelper.addUnique (architectures, Architecture.ARMV6);
				
			}
			
		}
		
		for (architecture in project.architectures) {
			
			switch (architecture) {
				
				case ARMV6: valid_archs.push ("armv6"); armv6 = true;
				case ARMV7: valid_archs.push ("armv7"); armv7 = true;
				case ARMV7S: valid_archs.push ("armv7s"); armv7s = true;
				case ARM64: valid_archs.push ("arm64"); arm64 = true;
				default:
				
			}
			
		}
		
		context.CURRENT_ARCHS = "( " + valid_archs.join(",") + ") ";
		
		valid_archs.push ("i386");
		
		context.VALID_ARCHS = valid_archs.join(" ");
		context.THUMB_SUPPORT = armv6 ? "GCC_THUMB_SUPPORT = NO;" : "";
		
		var requiredCapabilities = [];
		
		if (!armv6) {
			
			requiredCapabilities.push( { name: "armv7", value: true } );
			
		}
		
		context.REQUIRED_CAPABILITY = requiredCapabilities;
		context.ARMV6 = armv6;
		context.ARMV7 = armv7;
		context.ARMV7S = armv7s;
		context.ARM64 = arm64;
		context.TARGET_DEVICES = switch (project.config.getString ("ios.device", "universal")) { case "iphone": "1"; case "ipad": "2"; default: "1,2";  }
		context.DEPLOYMENT = project.config.getString ("ios.deployment", "5.1.1");
		
		if (project.config.getString ("ios.compiler") == "llvm" || project.config.getString ("ios.compiler", "clang") == "clang") {
			
			context.OBJC_ARC = true;
			
		}

		//context.ENABLE_BITCODE = (project.config.getFloat ("ios.deployment", 5.1) >= 6);
		context.ENABLE_BITCODE = project.config.getBool ("ios.enable-bitcode", false);
		context.IOS_COMPILER = project.config.getString ("ios.compiler", "clang");
		context.CPP_BUILD_LIBRARY = project.config.getString ("cpp.buildLibrary", "hxcpp");
		
		var json = Json.parse (File.getContent (PathHelper.getHaxelib (new Haxelib ("hxcpp"), true) + "/haxelib.json"));
		
		if (Std.parseFloat (json.version) > 3.1) {
			
			context.CPP_LIBPREFIX = "lib";
			
		} else {
			
			context.CPP_LIBPREFIX = "";
			
		}
		
		context.IOS_LINKER_FLAGS = ["-stdlib=libc++"].concat (project.config.getArrayString ("ios.linker-flags"));
		
		switch (project.window.orientation) {
			
			case PORTRAIT:
				context.IOS_APP_ORIENTATION = "<array><string>UIInterfaceOrientationPortrait</string><string>UIInterfaceOrientationPortraitUpsideDown</string></array>";
			case LANDSCAPE:
				context.IOS_APP_ORIENTATION = "<array><string>UIInterfaceOrientationLandscapeLeft</string><string>UIInterfaceOrientationLandscapeRight</string></array>";
			case ALL:
				context.IOS_APP_ORIENTATION = "<array><string>UIInterfaceOrientationLandscapeLeft</string><string>UIInterfaceOrientationLandscapeRight</string><string>UIInterfaceOrientationPortrait</string><string>UIInterfaceOrientationPortraitUpsideDown</string></array>";
			//case "allButUpsideDown":
				//context.IOS_APP_ORIENTATION = "<array><string>UIInterfaceOrientationLandscapeLeft</string><string>UIInterfaceOrientationLandscapeRight</string><string>UIInterfaceOrientationPortrait</string></array>";
			default:
				context.IOS_APP_ORIENTATION = "<array><string>UIInterfaceOrientationLandscapeLeft</string><string>UIInterfaceOrientationLandscapeRight</string><string>UIInterfaceOrientationPortrait</string><string>UIInterfaceOrientationPortraitUpsideDown</string></array>";
			
		}
		
		context.ADDL_PBX_BUILD_FILE = "";
		context.ADDL_PBX_FILE_REFERENCE = "";
		context.ADDL_PBX_FRAMEWORKS_BUILD_PHASE = "";
		context.ADDL_PBX_FRAMEWORK_GROUP = "";
		
		context.frameworkSearchPaths = [];
		
		for (dependency in project.dependencies) {
			
			var name = null;
			var path = null;
			var fileType = null;
			
			if (Path.extension (dependency.name) == "framework") {
				
				name = dependency.name;
				path = "/System/Library/Frameworks/" + dependency.name;
				fileType = "wrapper.framework";
				
			} else if (Path.extension (dependency.name) == "tbd") {
				
				name = dependency.name;
				path = "usr/lib/" + dependency.name;
				fileType = "sourcecode.text-based-dylib-definition";
				
			} else if (Path.extension (dependency.path) == "framework") {
				
				name = Path.withoutDirectory (dependency.path);
				path = PathHelper.tryFullPath (dependency.path);
				fileType = "wrapper.framework";
				
			}
			
			if (name != null) {
				
				var frameworkID = "11C0000000000018" + StringHelper.getUniqueID ();
				var fileID = "11C0000000000018" + StringHelper.getUniqueID ();
				
				ArrayHelper.addUnique (context.frameworkSearchPaths, Path.directory (path));
				
				context.ADDL_PBX_BUILD_FILE += "		" + frameworkID + " /* " + name + " in Frameworks */ = {isa = PBXBuildFile; fileRef = " + fileID + " /* " + name + " */; };\n";
				context.ADDL_PBX_FILE_REFERENCE += "		" + fileID + " /* " + name + " */ = {isa = PBXFileReference; lastKnownFileType = \"" + fileType + "\"; name = \"" + name + "\"; path = \"" + path + "\"; sourceTree = SDKROOT; };\n";
				context.ADDL_PBX_FRAMEWORKS_BUILD_PHASE += "				" + frameworkID + " /* " + name + " in Frameworks */,\n";
				context.ADDL_PBX_FRAMEWORK_GROUP += "				" + fileID + " /* " + name + " */,\n";
				
			}
			
		}
		
		context.HXML_PATH = PathHelper.findTemplate (project.templatePaths, "iphone/PROJ/haxe/Build.hxml");
		context.PRERENDERED_ICON = project.config.getBool ("ios.prerenderedIcon", false);
		
		/*var assets = new Array <Asset> ();
		
		for (asset in project.assets) {
			
			var newAsset = asset.clone ();
			
			assets.push ();
			
		}*/
		
		//updateIcon ();
		//updateLaunchImage ();
		
		return context;
		
	}
	
	
	public override function rebuild ():Void {
		
		var armv6 = (project.architectures.indexOf (Architecture.ARMV6) > -1 && !project.targetFlags.exists ("simulator"));
		var armv7 = (command == "rebuild" || (project.architectures.indexOf (Architecture.ARMV7) > -1 && !project.targetFlags.exists ("simulator")));
		var armv7s = (project.architectures.indexOf (Architecture.ARMV7S) > -1 && !project.targetFlags.exists ("simulator"));
		var arm64 = (command == "rebuild" || (project.architectures.indexOf (Architecture.ARM64) > -1 && !project.targetFlags.exists ("simulator")));
		var i386 = (command == "rebuild" || project.targetFlags.exists ("simulator"));
		var x86_64 = (command == "rebuild" || project.targetFlags.exists ("simulator"));
		
		var arc = (project.targetFlags.exists ("arc"));
		
		var commands = [];
		
		if (armv6) commands.push ([ "-Dios", "-DHXCPP_CPP11" ]);
		if (armv7) commands.push ([ "-Dios", "-DHXCPP_CPP11", "-DHXCPP_ARMV7" ]);
		if (armv7s) commands.push ([ "-Dios", "-DHXCPP_CPP11", "-DHXCPP_ARMV7S" ]);
		if (arm64) commands.push ([ "-Dios", "-DHXCPP_CPP11", "-DHXCPP_ARM64" ]);
		if (i386) commands.push ([ "-Dios", "-Dsimulator", "-DHXCPP_CPP11" ]);
		if (x86_64) commands.push ([ "-Dios", "-Dsimulator", "-DHXCPP_M64", "-DHXCPP_CPP11" ]);
		
		if (arc) {
			
			for (command in commands) {
				
				command.push ("-DOBJC_ARC");
				
			}
			
		}
		
		CPPHelper.rebuild (project, commands);
		
	}
	
	
	public override function run ():Void {
		
		if (project.targetFlags.exists ("xcode")) return;
		
		IOSHelper.launch (project, targetDirectory);
		
	}
	
	
	public override function update ():Void {
		
		project = project.clone ();
		
		for (asset in project.assets) {
			
			if (asset.embed && asset.sourcePath == "") {
				
				var path = PathHelper.combine (targetDirectory + "/" + project.app.file + "/obj/tmp", asset.targetPath);
				PathHelper.mkdir (Path.directory (path));
				FileHelper.copyAsset (asset, path);
				asset.sourcePath = path;
				
			}
			
		}
		
		var manifest = new Asset ();
		manifest.id = "__manifest__";
		manifest.data = AssetHelper.createManifest (project);
		manifest.resourceName = manifest.flatName = manifest.targetPath = "manifest";
		manifest.type = AssetType.TEXT;
		project.assets.push (manifest);
		
		var context = generateContext ();
		context.OUTPUT_DIR = targetDirectory;
		
		var projectDirectory = targetDirectory + "/" + project.app.file + "/";
		
		PathHelper.mkdir (targetDirectory);
		PathHelper.mkdir (projectDirectory);
		PathHelper.mkdir (projectDirectory + "/haxe");
		PathHelper.mkdir (projectDirectory + "/haxe/lime/installer");
		
		var iconSizes:Array<IconSize> = [
			{ name : "Icon-Small.png", size : 29 },
			{ name : "Icon-Small-40.png", size : 40 },
			{ name : "Icon-Small-50.png", size : 50 },
			{ name : "Icon.png", size : 57 },
			{ name : "Icon-Small@2x.png", size : 58 },
			{ name : "Icon-72.png", size : 72 },
			{ name : "Icon-76.png", size : 76 },
			{ name : "Icon-Small-40@2x.png", size : 80 },
			{ name : "Icon-Small-50@2x.png", size : 100 },
			{ name : "Icon@2x.png", size : 114 },
			{ name : "Icon-60@2x.png", size : 120 },
			{ name : "Icon-72@2x.png", size : 144 },
			{ name : "Icon-76@2x.png", size : 152 },
			{ name : "Icon-60@3x.png", size : 180 },
		];
		
		context.HAS_ICON = true;
		
		var iconPath = PathHelper.combine (projectDirectory, "Images.xcassets/AppIcon.appiconset");
		PathHelper.mkdir (iconPath);
		
		var icons = project.icons;
		
		if (icons.length == 0) {
			
			icons = [ new Icon (PathHelper.findTemplate (project.templatePaths, "default/icon.svg")) ];
			
		}
		
		for (iconSize in iconSizes) {
			
			if (!IconHelper.createIcon (icons, iconSize.size, iconSize.size, PathHelper.combine (iconPath, iconSize.name))) {
				
				context.HAS_ICON = false;
				
			}
			
		}
		
		var splashSizes:Array<SplashSize> = [
			{ name: "Default.png", w: 320, h: 480 }, // iPhone, portrait
			{ name: "Default@2x.png", w: 640, h: 960  }, // iPhone Retina, portrait
			{ name: "Default-568h@2x.png", w: 640, h: 1136 }, // iPhone 5, portrait
			{ name: "Default-Portrait.png", w: 768, h: 1024 }, // iPad, portrait
			{ name: "Default-Landscape.png", w: 1024, h: 768  }, // iPad, landscape
			{ name: "Default-Portrait@2x.png", w: 1536, h: 2048 }, // iPad Retina, portrait
			{ name: "Default-Landscape@2x.png", w: 2048, h: 1536 },	// iPad Retina, landscape
			{ name: "Default-667h@2x.png", w: 750, h: 1334 }, // iPhone 6, portrait
			{ name: "Default-736h@3x.png", w: 1242,	h: 2208 }, // iPhone 6 Plus, portrait
			{ name: "Default-736h-Landscape@3x.png", w: 2208, h: 1242 }, // iPhone 6 Plus, landscape
		];
		
		var splashScreenPath = PathHelper.combine (projectDirectory, "Images.xcassets/LaunchImage.launchimage");
		PathHelper.mkdir (splashScreenPath);
		
		for (size in splashSizes) {
			
			var match = false;
			
			for (splashScreen in project.splashScreens) {
				
				if (splashScreen.width == size.w && splashScreen.height == size.h && Path.extension (splashScreen.path) == "png") {
					
					FileHelper.copyFile (splashScreen.path, PathHelper.combine (splashScreenPath, size.name));
					match = true;
					
				}
				
			}
			
			if (!match) {
				
				var imagePath = PathHelper.combine (splashScreenPath, size.name);
				
				if (!FileSystem.exists (imagePath)) {
					
					LogHelper.info ("", " - \x1b[1mGenerating image:\x1b[0m " + imagePath);
					
					var image = new Image (null, 0, 0, size.w, size.h, (0xFF << 24) | (project.window.background & 0xFFFFFF));
					var bytes = image.encode ("png");
					
					File.saveBytes (imagePath, bytes);
					
				}
				
			}
			
		}
		
		context.HAS_LAUNCH_IMAGE = true;
		
		PathHelper.mkdir (projectDirectory + "/resources");
		PathHelper.mkdir (projectDirectory + "/haxe/build");
		
		FileHelper.recursiveCopyTemplate (project.templatePaths, "iphone/resources", projectDirectory + "/resources", context, true, false);
		FileHelper.recursiveCopyTemplate (project.templatePaths, "iphone/PROJ/haxe", projectDirectory + "/haxe", context);
		FileHelper.recursiveCopyTemplate (project.templatePaths, "haxe", projectDirectory + "/haxe", context);
		FileHelper.recursiveCopyTemplate (project.templatePaths, "iphone/PROJ/Classes", projectDirectory + "/Classes", context);
		FileHelper.recursiveCopyTemplate (project.templatePaths, "iphone/PROJ/Images.xcassets", projectDirectory + "/Images.xcassets", context);
		FileHelper.copyFileTemplate (project.templatePaths, "iphone/PROJ/PROJ-Entitlements.plist", projectDirectory + "/" + project.app.file + "-Entitlements.plist", context);
		FileHelper.copyFileTemplate (project.templatePaths, "iphone/PROJ/PROJ-Info.plist", projectDirectory + "/" + project.app.file + "-Info.plist", context);
		FileHelper.copyFileTemplate (project.templatePaths, "iphone/PROJ/PROJ-Prefix.pch", projectDirectory + "/" + project.app.file + "-Prefix.pch", context);
		FileHelper.recursiveCopyTemplate (project.templatePaths, "iphone/PROJ.xcodeproj", targetDirectory + "/" + project.app.file + ".xcodeproj", context);
		
		//SWFHelper.generateSWFClasses (project, projectDirectory + "/haxe");
		
		PathHelper.mkdir (projectDirectory + "/lib");
		
		for (archID in 0...6) {
			
			var arch = [ "armv6", "armv7", "armv7s", "arm64", "i386", "x86_64" ][archID];
			
			if (arch == "armv6" && !context.ARMV6)
				continue;
			
			if (arch == "armv7" && !context.ARMV7)
				continue;
			
			if (arch == "armv7s" && !context.ARMV7S)
				continue;
			
			if (arch == "arm64" && !context.ARM64)
				continue;
			
			var libExt = [ ".iphoneos.a", ".iphoneos-v7.a", ".iphoneos-v7s.a", ".iphoneos-64.a", ".iphonesim.a", ".iphonesim-64.a" ][archID];
			
			PathHelper.mkdir (projectDirectory + "/lib/" + arch);
			PathHelper.mkdir (projectDirectory + "/lib/" + arch + "-debug");
			
			for (ndll in project.ndlls) {
				
				//if (ndll.haxelib != null) {
					
					var releaseLib = PathHelper.getLibraryPath (ndll, "iPhone", "lib", libExt);
					var debugLib = PathHelper.getLibraryPath (ndll, "iPhone", "lib", libExt, true);
					var releaseDest = projectDirectory + "/lib/" + arch + "/lib" + ndll.name + ".a";
					var debugDest = projectDirectory + "/lib/" + arch + "-debug/lib" + ndll.name + ".a";
					
					if (!FileSystem.exists (releaseLib)) {
						
						releaseLib = PathHelper.getLibraryPath (ndll, "iPhone", "lib", ".iphoneos.a");
						debugLib = PathHelper.getLibraryPath (ndll, "iPhone", "lib", ".iphoneos.a", true);
						
					}
					
					FileHelper.copyIfNewer (releaseLib, releaseDest);
					
					if (FileSystem.exists (debugLib) && debugLib != releaseLib) {
						
						FileHelper.copyIfNewer (debugLib, debugDest);
						
					} else if (FileSystem.exists (debugDest)) {
						
						FileSystem.deleteFile (debugDest);
						
					}
					
				//}
				
			}
			
			for (dependency in project.dependencies) {
				
				if (StringTools.endsWith (dependency.path, ".a")) {
					
					var fileName = Path.withoutDirectory (dependency.path);
					
					if (!StringTools.startsWith (fileName, "lib")) {
						
						fileName = "lib" + fileName;
						
					}
					
					FileHelper.copyIfNewer (dependency.path, projectDirectory + "/lib/" + arch + "/" + fileName);
					
				}
				
			}
			
		}
		
		PathHelper.mkdir (projectDirectory + "/assets");
		
		for (asset in project.assets) {
			
			if (asset.type != AssetType.TEMPLATE) {
				
				var targetPath = PathHelper.combine (projectDirectory + "/assets/", asset.resourceName);
				
				//var sourceAssetPath:String = projectDirectory + "haxe/" + asset.sourcePath;
				
				PathHelper.mkdir (Path.directory (targetPath));
				FileHelper.copyAssetIfNewer (asset, targetPath);
				
				//PathHelper.mkdir (Path.directory (sourceAssetPath));
				//FileHelper.linkFile (flatAssetPath, sourceAssetPath, true, true);
				
			} else {
				
				var targetPath = PathHelper.combine (projectDirectory, asset.targetPath);
				
				PathHelper.mkdir (Path.directory (targetPath));
				FileHelper.copyAsset (asset, targetPath, context);
				
			}
			
		}
		
		if (project.targetFlags.exists ("xcode") && PlatformHelper.hostPlatform == Platform.MAC && command == "update") {
			
			ProcessHelper.runCommand ("", "open", [ targetDirectory + "/" + project.app.file + ".xcodeproj" ] );
			
		}
		
	}
	
	
	/*private function updateLaunchImage () {
		
		var destination = buildDirectory + "/ios";
		PathHelper.mkdir (destination);
		
		var has_launch_image = false;
		if (launchImages.length > 0) has_launch_image = true;
		
		for (launchImage in launchImages) {
			
			var splitPath = launchImage.name.split ("/");
			var path = destination + "/" + splitPath[splitPath.length - 1];
			FileHelper.copyFile (launchImage.name, path, context, false);
			
		}
		
		context.HAS_LAUNCH_IMAGE = has_launch_image;
		
	}*/
	
	
	@ignore public override function install ():Void {}
	@ignore public override function trace ():Void {}
	@ignore public override function uninstall ():Void {}
	
	
}


private typedef IconSize = {
	
	name:String,
	size:Int,
	
}


private typedef SplashSize = {
	
	name:String,
	w:Int,
	h:Int,
	
}