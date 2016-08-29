/*package utils.controls;

import flixel.FlxG;
import flixel.input.gamepad.FlxGamepad;

class Gamepad
{
	
	public static var lastPressed;
	public var gamepad:FlxGamepad;
	private var gamepadID:Int;

	
	public function new(GamepadID:Int)
	{
		//gamepadID = gamepadID;
		gamepad = FlxG.gamepads.getByID(gamepadID);
	}
	
	public function update(elapsed:Float):Void
	{
		gamepad = FlxG.gamepads.lastActive;
		update(elapsed);
		
		if (gamepad == null)
		      return;
        else{
			
			updateGameInput(gamepad);
		}
		
		lastPressed = null;
	}
	
	public function updateGameInput(gamepad:FlxGamepad):Void
	{
	  if (gamepad.pressed.A || gamepad.pressed.RIGHT_TRIGGER)
	  {
		trace("Pressed A or RIGHT TRIGGER");
	  }
	  
	  if (gamepad.pressed.B || gamepad.pressed.LEFT_TRIGGER)
	  {
		  trace("Pressed B or LEFT TRIGGER");
	  }
	}
}*/