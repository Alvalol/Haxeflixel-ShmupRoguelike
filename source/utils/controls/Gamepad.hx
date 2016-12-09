package utils.controls;
import flixel.FlxG;
import flixel.input.gamepad.FlxGamepad;
import flixel.util.FlxTimer;
import openfl.system.System;
import states.MenuState;
import states.PlayState;
import utils.pcg.MapChunkMerger;

#if desktop
class Gamepad
{
	
public static var GAMEPAD:FlxGamepad;

// TODO : This needs to be re-implemented properly!!!

	public static function checkForGamepad()
	{
		GAMEPAD = FlxG.gamepads.lastActive;
		
		if (GAMEPAD != null)
		{
		GAMEPAD.deadZoneMode = FlxGamepadDeadZoneMode.INDEPENDENT_AXES;
		GAMEPAD.deadZone = 0.5;
		}
	}	
	
		
    public static function checkForExit()
	{
		if (Reg.PS.canQuit)
		{
			if (FlxG.keys.justPressed.Q)
			{
				System.exit(0);
			}
			if (GAMEPAD != null && GAMEPAD.justPressed.BACK)
			{//ugly but good until I rework on this whole mess.
				System.exit(0);
			}

		}
	}
	
	public static function updateGameInputs()
	{
		if (GAMEPAD != null)
		{
				
		if (GAMEPAD.justPressed.START)
		{
			Reg.pause = !Reg.pause;
		}
		
		if (GAMEPAD.pressed.A || GAMEPAD.pressed.RIGHT_SHOULDER)
		{
		 Reg.PS.player.shoot();
		}
		
		if (GAMEPAD.pressed.DPAD_UP || GAMEPAD.analog.value.LEFT_STICK_Y < 0)
		{
		if (!Reg.mirrorControls)
			Reg.PS.player.move_up();
		else
		    Reg.PS.player.move_down();
		}
		

		if (GAMEPAD.pressed.DPAD_DOWN || GAMEPAD.analog.value.LEFT_STICK_Y > 0)
		{
			if(!Reg.mirrorControls)
			Reg.PS.player.move_down();
			else
			Reg.PS.player.move_up();
		}


		if (GAMEPAD.pressed.DPAD_LEFT || GAMEPAD.analog.value.LEFT_STICK_X < 0)
		{
			if(!Reg.mirrorControls)
			Reg.PS.player.move_left();
			else
			Reg.PS.player.move_right();
		}
			
		
		if (GAMEPAD.pressed.DPAD_LEFT || GAMEPAD.analog.value.LEFT_STICK_X > 0)
		{
			if(!Reg.mirrorControls)
			Reg.PS.player.move_right();
			else
			Reg.PS.player.move_left();
		}
		
		if(GAMEPAD.justPressed.GUIDE)
		{
			Reg.pause = !Reg.pause;
		}
			
		
		if (GAMEPAD.anyJustReleased([A,RIGHT_SHOULDER]) || !(GAMEPAD.analog.value.LEFT_STICK_X < 0) )
		{
			Reg.PS.player.set_shooting(false);
		}
		}

		
		if (FlxG.keys.anyJustPressed(Keyboard.pauseKeys))
		{

			Reg.pause = !Reg.pause;
		}
		
		if (FlxG.keys.anyPressed(Keyboard.actionKeys))
		{
		    Reg.PS.player.shoot();
		}
		
		if (FlxG.keys.anyPressed(Keyboard.upKeys))
		{	
			if(!Reg.mirrorControls)
			Reg.PS.player.move_up();
			else
			Reg.PS.player.move_down();
		}

		if ( FlxG.keys.anyPressed(Keyboard.downKeys))
		{
			if(!Reg.mirrorControls)
			Reg.PS.player.move_down();
			else
			Reg.PS.player.move_up();
		}

		
		if ( FlxG.keys.anyPressed(Keyboard.leftKeys))
		{
			if(!Reg.mirrorControls)
			Reg.PS.player.move_left();
			else
			Reg.PS.player.move_right();
		}
		
		
		
		if ( FlxG.keys.anyPressed(Keyboard.rightKeys))
		{
			if(!Reg.mirrorControls)
			Reg.PS.player.move_right();
			else
			Reg.PS.player.move_left();
		}
		
		
		if (FlxG.keys.anyJustReleased(Keyboard.actionKeys))
		{
			Reg.PS.player.set_shooting(false);
		}
		
		
		if( FlxG.keys.justPressed.ESCAPE)
		{
			Reg.pause = !Reg.pause;
		}
		
		if (FlxG.keys.justPressed.R)
		{
			FlxG.switchState(new PlayState());
		}
		

	}
}
#end