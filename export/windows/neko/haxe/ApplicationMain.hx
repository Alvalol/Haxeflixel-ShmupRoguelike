#if !lime_hybrid


import openfl.Assets;


#if (!macro && !display && !waxe)


@:access(openfl._legacy.Assets)


class ApplicationMain {
	
	
	private static var barA:flash.display.Sprite;
	private static var barB:flash.display.Sprite;
	private static var container:flash.display.Sprite;
	private static var forceHeight:Int;
	private static var forceWidth:Int;
	
	#if hxtelemetry
	public static var telemetryConfig:hxtelemetry.HxTelemetry.Config;
	#end
	
	
	public static function main () {
		
		flash.Lib.setPackage ("Alvarop", "untitled shmup", "com.example.myapp", "0.0.1");
		
		
		#if ios
		flash.display.Stage.shouldRotateInterface = function (orientation:Int):Bool {
			return (orientation == flash.display.Stage.OrientationLandscapeLeft || orientation == flash.display.Stage.OrientationLandscapeRight);
			
		}
		#end
		
		#if hxtelemetry
		telemetryConfig = new hxtelemetry.HxTelemetry.Config ();
		telemetryConfig.allocations = true;
		telemetryConfig.host = "localhost";
		telemetryConfig.app_name = "untitled shmup";
		#end
		
		
		
		#if tizen
		flash.display.Stage.setFixedOrientation (flash.display.Stage.OrientationLandscapeRight);
		#end
		
		flash.Lib.create (function () {
				
				flash.Lib.current.stage.align = flash.display.StageAlign.TOP_LEFT;
				flash.Lib.current.stage.scaleMode = flash.display.StageScaleMode.NO_SCALE;
				flash.Lib.current.loaderInfo = flash.display.LoaderInfo.create (null);
				
				#if mobile
				
				forceWidth = 1024;
				forceHeight = 576;
				
				container = new flash.display.Sprite ();
				barA = new flash.display.Sprite ();
				barB = new flash.display.Sprite ();
				
				flash.Lib.current.stage.addChild (container);
				container.addChild (flash.Lib.current);
				container.addChild (barA);
				container.addChild (barB);
				
				applyScale ();
				flash.Lib.current.stage.addEventListener (flash.events.Event.RESIZE, applyScale);
				
				#end
				
				#if windows
				try {
					
					var currentPath = haxe.io.Path.directory (Sys.executablePath ());
					Sys.setCwd (currentPath);
					
				} catch (e:Dynamic) {}
				#elseif linux
				try {
					
					if (!sys.FileSystem.exists (Sys.getCwd () + "/lime-legacy.ndll")) {
						
						Sys.setCwd (haxe.io.Path.directory (Sys.executablePath ()));
						
					}
					
				} catch (e:Dynamic) {}
				#end
				
				
				
				openfl.Assets.initialize ();
				
				var hasMain = false;
				
				for (methodName in Type.getClassFields (Main)) {
					
					if (methodName == "main") {
						
						hasMain = true;
						break;
						
					}
					
				}
				
				if (hasMain) {
					
					Reflect.callMethod (Main, Reflect.field (Main, "main"), []);
					
				} else {
					
					var instance:DocumentClass = Type.createInstance (DocumentClass, []);
					
					if (Std.is (instance, flash.display.DisplayObject)) {
						
						flash.Lib.current.addChild (cast instance);
						
					}
					
				}
				
			},
			1024, 576, 
			60, 
			0,
			(true ? flash.Lib.HARDWARE : 0) |
			(true ? flash.Lib.ALLOW_SHADERS : 0) |
			(false ? flash.Lib.REQUIRE_SHADERS : 0) |
			(false ? flash.Lib.DEPTH_BUFFER : 0) |
			(false ? flash.Lib.STENCIL_BUFFER : 0) |
			(true ? flash.Lib.RESIZABLE : 0) |
			(false ? flash.Lib.BORDERLESS : 0) |
			(true ? flash.Lib.VSYNC : 0) |
			(false ? flash.Lib.FULLSCREEN : 0) |
			(0 == 4 ? flash.Lib.HW_AA_HIRES : 0) |
			(0 == 2 ? flash.Lib.HW_AA : 0),
			"untitled shmup",
			null
			#if mobile, ScaledStage #end
		);
		
	}
	
	#if mobile
	public static function applyScale (?_) {
		var scaledStage:ScaledStage = cast flash.Lib.current.stage;
		
		var xScale:Float = scaledStage.__stageWidth / forceWidth;
		var yScale:Float = scaledStage.__stageHeight / forceHeight;
		
		if (xScale < yScale) {
			
			flash.Lib.current.scaleX = xScale;
			flash.Lib.current.scaleY = xScale;
			flash.Lib.current.x = (scaledStage.__stageWidth - (forceWidth * xScale)) / 2;
			flash.Lib.current.y = (scaledStage.__stageHeight - (forceHeight * xScale)) / 2;
			
		} else {
			
			flash.Lib.current.scaleX = yScale;
			flash.Lib.current.scaleY = yScale;
			flash.Lib.current.x = (scaledStage.__stageWidth - (forceWidth * yScale)) / 2;
			flash.Lib.current.y = (scaledStage.__stageHeight - (forceHeight * yScale)) / 2;
			
		}
		
		if (flash.Lib.current.x > 0) {
			
			barA.graphics.clear ();
			barA.graphics.beginFill (0x000000);
			barA.graphics.drawRect (0, 0, flash.Lib.current.x, scaledStage.__stageHeight);
			
			barB.graphics.clear ();
			barB.graphics.beginFill (0x000000);
			var x = flash.Lib.current.x + (forceWidth * flash.Lib.current.scaleX);
			barB.graphics.drawRect (x, 0, scaledStage.__stageWidth - x, scaledStage.__stageHeight);
			
		} else {
			
			barA.graphics.clear ();
			barA.graphics.beginFill (0x000000);
			barA.graphics.drawRect (0, 0, scaledStage.__stageWidth, flash.Lib.current.y);
			
			barB.graphics.clear ();
			barB.graphics.beginFill (0x000000);
			var y = flash.Lib.current.y + (forceHeight * flash.Lib.current.scaleY);
			barB.graphics.drawRect (0, y, scaledStage.__stageWidth, scaledStage.__stageHeight - y);
			
		}
		
	}
	#end
	
	
	#if neko
	@:noCompletion @:dox(hide) public static function __init__ () {
		
		untyped $loader.path = $array (haxe.io.Path.directory (Sys.executablePath ()), $loader.path);
		untyped $loader.path = $array ("./", $loader.path);
		untyped $loader.path = $array ("@executable_path/", $loader.path);
		
	}
	#end
	
	
}


@:build(DocumentClass.build())
@:keep class DocumentClass extends Main {}


#if mobile
class ScaledStage extends flash.display.Stage {
	
	
	public var __stageHeight (get, null):Int;
	public var __stageWidth (get, null):Int;
	
	
	public function new (inHandle:Dynamic, inWidth:Int, inHeight:Int) {
		
		super (inHandle, 0, 0);
		
	}
	
	
	private function get___stageHeight ():Int {
		
		return super.get_stageHeight ();
		
	}
	
	
	private function get___stageWidth():Int {
		
		return super.get_stageWidth ();
		
	}
	
	
	private override function get_stageHeight ():Int {
		
		return 576;
	
	}
	
	private override function get_stageWidth ():Int {
		
		return 1024;
	
	}
	
	
}
#end


#elseif macro


import haxe.macro.Context;
import haxe.macro.Expr;


class DocumentClass {
	
	
	macro public static function build ():Array<Field> {
		
		var classType = Context.getLocalClass ().get ();
		var searchTypes = classType;
		
		while (searchTypes.superClass != null) {
			
			if (searchTypes.pack.length >= 2 && (searchTypes.pack[1] == "display" || searchTypes.pack[2] == "display") && searchTypes.name == "DisplayObject") {
				
				var fields = Context.getBuildFields ();
				var method = macro { return flash.Lib.current.stage; }
				
				fields.push ({ name: "get_stage", access: [ APrivate, AOverride ], kind: FFun({ args: [], expr: method, params: [], ret: macro :flash.display.Stage }), pos: Context.currentPos () });
				return fields;
				
			}
			
			searchTypes = searchTypes.superClass.t.get ();
			
		}
		
		return null;
		
	}
	
	
}


#elseif waxe


class ApplicationMain {
	
	
	public static var autoShowFrame:Bool = true;
	public static var frame:wx.Frame;
	#if openfl
	static public var nmeStage:wx.NMEStage;
	#end
	
	
	public static function main () {
		
		#if openfl
		flash.Lib.setPackage ("Alvarop", "untitled shmup", "com.example.myapp", "0.0.1");
		
		#end
		
		wx.App.boot (function () {
			
			
			frame = wx.Frame.create (null, null, "untitled shmup", null, { width: 1024, height: 576 });
			
			
			#if openfl
			var stage = wx.NMEStage.create (frame, null, null, { width: 1024, height: 576 });
			#end
			
			var hasMain = false;
			for (methodName in Type.getClassFields (Main)) {
				if (methodName == "main") {
					hasMain = true;
					break;
				}
			}
			
			if (hasMain) {
				Reflect.callMethod (Main, Reflect.field (Main, "main"), []);
			}else {
				var instance = Type.createInstance (Main, []);
			}
			
			if (autoShowFrame) {
				wx.App.setTopWindow (frame);
				frame.shown = true;
			}
			
		});
		
	}
	
	#if neko
	@:noCompletion @:dox(hide) public static function __init__ () {
		
		untyped $loader.path = $array (haxe.io.Path.directory (Sys.executablePath ()), $loader.path);
		untyped $loader.path = $array ("./", $loader.path);
		untyped $loader.path = $array ("@executable_path/", $loader.path);
		
	}
	#end
	
	
}


#else


import Main;

class ApplicationMain {
	
	
	public static function main () {
		
		
		
	}
	
	
}


#end


#else


#if !macro


@:access(lime.app.Application)
@:access(lime.Assets)


class ApplicationMain {
	
	
	public static var config:lime.app.Config;
	public static var preloader:openfl.display.Preloader;
	
	
	public static function create ():Void {
		
		var app = new lime.app.Application ();
		app.create (config);
		openfl.Lib.application = app;
		
		#if !flash
		var stage = new openfl._legacy.display.HybridStage (app.window.width, app.window.height, app.window.config.background);
		stage.addChild (openfl.Lib.current);
		app.addModule (stage);
		#end
		
		var display = new flixel.system.FlxPreloader ();
		
		preloader = new openfl.display.Preloader (display);
		app.setPreloader (preloader);
		preloader.onComplete.add (init);
		preloader.create (config);
		
		#if (js && html5)
		var urls = [];
		var types = [];
		
		
		urls.push ("flixel/sounds/beep.ogg");
		types.push (lime.Assets.AssetType.SOUND);
		
		
		urls.push ("flixel/sounds/flixel.ogg");
		types.push (lime.Assets.AssetType.SOUND);
		
		
		urls.push ("Nokia Cellphone FC Small");
		types.push (lime.Assets.AssetType.FONT);
		
		
		urls.push ("Monsterrat");
		types.push (lime.Assets.AssetType.FONT);
		
		
		urls.push ("flixel/images/ui/button.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		
		if (config.assetsPrefix != null) {
			
			for (i in 0...urls.length) {
				
				if (types[i] != lime.Assets.AssetType.FONT) {
					
					urls[i] = config.assetsPrefix + urls[i];
					
				}
				
			}
			
		}
		
		preloader.load (urls, types);
		#end
		
		var result = app.exec ();
		
		#if (sys && !nodejs && !emscripten)
		Sys.exit (result);
		#end
		
	}
	
	
	public static function init ():Void {
		
		var loaded = 0;
		var total = 0;
		var library_onLoad = function (__) {
			
			loaded++;
			
			if (loaded == total) {
				
				start ();
				
			}
			
		}
		
		preloader = null;
		
		
		
		if (total == 0) {
			
			start ();
			
		}
		
	}
	
	
	public static function main () {
		
		config = {
			
			build: "685",
			company: "Alvarop",
			file: "untitled shmup",
			fps: 60,
			name: "untitled shmup",
			orientation: "landscape",
			packageName: "com.example.myapp",
			version: "0.0.1",
			windows: [
				
				{
					antialiasing: 0,
					background: 0,
					borderless: false,
					depthBuffer: false,
					display: 0,
					fullscreen: false,
					hardware: true,
					height: 576,
					parameters: "{}",
					resizable: true,
					stencilBuffer: false,
					title: "untitled shmup",
					vsync: true,
					width: 1024,
					x: null,
					y: null
				},
			]
			
		};
		
		#if (js && html5)
		#if (munit || utest)
		openfl.Lib.embed (null, 1024, 576, "null");
		#end
		#else
		create ();
		#end
		
	}
	
	
	public static function start ():Void {
		
		var hasMain = false;
		var entryPoint = Type.resolveClass ("Main");
		
		for (methodName in Type.getClassFields (entryPoint)) {
			
			if (methodName == "main") {
				
				hasMain = true;
				break;
				
			}
			
		}
		
		lime.Assets.initialize ();
		
		if (hasMain) {
			
			Reflect.callMethod (entryPoint, Reflect.field (entryPoint, "main"), []);
			
		} else {
			
			var instance:DocumentClass = Type.createInstance (DocumentClass, []);
			
			if (Std.is (instance, flash.display.DisplayObject)) {
				
				flash.Lib.current.addChild (cast instance);
				
			}
			
		}
		
		openfl.Lib.current.stage.dispatchEvent (new openfl.events.Event (openfl.events.Event.RESIZE, false, false));
		
	}
	
	
	#if neko
	@:noCompletion @:dox(hide) public static function __init__ () {
		
		var loader = new neko.vm.Loader (untyped $loader);
		loader.addPath (haxe.io.Path.directory (Sys.executablePath ()));
		loader.addPath ("./");
		loader.addPath ("@executable_path/");
		
	}
	#end
	
	
}


@:build(DocumentClass.build())
@:keep class DocumentClass extends Main {}


#else


import haxe.macro.Context;
import haxe.macro.Expr;


class DocumentClass {
	
	
	macro public static function build ():Array<Field> {
		
		var classType = Context.getLocalClass ().get ();
		var searchTypes = classType;
		
		while (searchTypes.superClass != null) {
			
			if (searchTypes.pack.length >= 2 && (searchTypes.pack[1] == "display" || searchTypes.pack[2] == "display") && searchTypes.name == "DisplayObject") {
				
				var fields = Context.getBuildFields ();
				var method = macro { return flash.Lib.current.stage; }
				
				fields.push ({ name: "get_stage", access: [ APrivate, AOverride ], kind: FFun({ args: [], expr: method, params: [], ret: macro :flash.display.Stage }), pos: Context.currentPos () });
				return fields;
				
			}
			
			searchTypes = searchTypes.superClass.t.get ();
			
		}
		
		return null;
		
	}
	
	
}


#end


#end
