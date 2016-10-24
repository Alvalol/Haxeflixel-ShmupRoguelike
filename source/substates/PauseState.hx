package substates;
import flixel.FlxSubState;
import flixel.text.FlxText;
import flixel.FlxG;
import flixel.util.FlxColor;
import utils.controls.Gamepad;
import utils.controls.Keyboard;
import flixel.FlxCamera;
import openfl.system.System;


/**
 * ...
 * @author Alvarop
 */
class PauseState extends FlxSubState
{
	
	override public function create():Void 
	{
		super.create();
		set_bgColor(0xE6000000);
		var pauseText = new FlxText(FlxG.width / 2 - 50, FlxG.height / 2 - 20, 0, "PAUSED"); // offset 
		var messageText = new FlxText(FlxG.width / 2 - 80, FlxG.height / 2 + 5, "PRESS Q OR BACK TO QUIT");
		var seed = new FlxText(FlxG.width / 2 - 80, FlxG.height / 2 + 20, "Current Seed is  " + Reg.CURRENT_SEED.currentSeed);
		add(messageText);
		add(pauseText);
		add(seed);
		pauseText.scrollFactor.set(0, 0);
		messageText.scrollFactor.set(0, 0);
		seed.scrollFactor.set(0, 0);
		pauseText.setFormat(AssetPaths.pixel_font__ttf, 8, FlxColor.fromRGB(255,255,255,5) ,
			                FlxTextBorderStyle.OUTLINE, FlxColor.fromRGB(0, 0, 0, 250));
	    messageText.setFormat(AssetPaths.pixel_font__ttf, 8, FlxColor.fromRGB(255,255,255,5) ,
			                FlxTextBorderStyle.OUTLINE, FlxColor.fromRGB(0, 0, 0, 250));
		seed.setFormat(AssetPaths.pixel_font__ttf, 8, FlxColor.fromRGB(255,255,255,5) ,
			                FlxTextBorderStyle.OUTLINE, FlxColor.fromRGB(0, 0, 0, 250));
		
	}	
}