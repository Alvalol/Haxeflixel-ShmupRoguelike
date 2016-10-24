package;

import flixel.input.gamepad.FlxGamepad;
import utils.controls.Keyboard;
import openfl.system.System;
import flixel.math.FlxRandom;
import flixel.FlxG;
import states.PlayState;

class Reg
{
	public static var PS:PlayState;
	public static var DEBUG = false; // set to TRUE if testing a new enemy or feature
	public static var currentLevel:Int = 1;
	
	public static var SEEDED:Bool = true; // if true will generate new levels
	public static var masterSeed:Int; // set seed to wtv from 0 to 2147483647.
	public static var pause:Bool = false;
	public static var CURRENT_SEED:FlxRandom;
	public static var score:Float = 0;
	public static var availableItems:Array<Int> = [2, 3, 4, 5]; // hacky af and not implemented
    public static var SCROLLER_ON = true;
	
	
	public static var CURSED:Bool = false;
	
	public static var itemDropMod:Float = 0;
	
	public static var SANDBOX = false; // fix pls
}