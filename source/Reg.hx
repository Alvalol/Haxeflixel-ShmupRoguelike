package;

import states.PlayState;

class Reg
{
	public static var PS:PlayState;
	public static var levels:Array<String> = ["sandbox"];
	public static var currentLevel:Int = 0;
	
	public static var pause:Bool = false;
	public static var score:Int = 0;

	public function new() 
	{
		
	}
	
}