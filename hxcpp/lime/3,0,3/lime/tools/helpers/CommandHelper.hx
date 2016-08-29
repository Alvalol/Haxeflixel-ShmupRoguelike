package lime.tools.helpers;


import lime.project.CLICommand;
import lime.project.Platform;


class CommandHelper {
	
	
	public static function executeCommands (commands:Array <CLICommand>):Void {
		
		for (c in commands) {
			
			Sys.command(c.command, c.args);
			
		}
		
	}
	
	public static function openFile (file:String):CLICommand {
		
		if (PlatformHelper.hostPlatform == Platform.WINDOWS) {
			
			return new CLICommand ("start", [ file ]);
			
		} else if (PlatformHelper.hostPlatform == Platform.MAC) {
			
			return new CLICommand ("/usr/bin/open", [ file ]);
			
		} else {
			
			return new CLICommand ("/usr/bin/xdg-open", [ file ]);
			
		}
		
	}
	
	
	public static function interpretHaxe (mainFile:String):CLICommand {
		
		return new CLICommand ("haxe", [ "-main", mainFile, "--interp" ]);
		
	}
	
	
	public static function fromSingleString (command:String):CLICommand {
		
		var args:Array<String> = command.split (" ");
		command = args.shift ();
		return new CLICommand (command, args);
		
	}
	
	
}
