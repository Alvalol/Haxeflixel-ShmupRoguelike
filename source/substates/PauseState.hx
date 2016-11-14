package substates;
import flixel.FlxSubState;
import flixel.text.FlxText;
import flixel.FlxG;
import flixel.util.FlxColor;
import utils.controls.Gamepad;
import utils.controls.Keyboard;
import flixel.FlxCamera;
import openfl.system.System;
import flixel.FlxSprite;
import flash.display.BitmapData;


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
		var seed = new FlxText(FlxG.width / 2 - 80, FlxG.height / 2 + 20, "Current Seed is  " + Reg.CURRENT_SEED.initialSeed);
		var percentage = new FlxText(FlxG.width /2 - 80, FlxG.height/ 2 + 40, "COMPLETED : " + Std.int((Reg.PS.player.x * 100) / Reg.PS.map.width) + "%");
		add(messageText);
		add(pauseText);
		add(percentage);
		add(seed);
		percentage.scrollFactor.set(0, 0);
		pauseText.scrollFactor.set(0, 0);
		messageText.scrollFactor.set(0, 0);
		seed.scrollFactor.set(0, 0);
		pauseText.setFormat(AssetPaths.smallfont__ttf, 8, FlxColor.fromRGB(255,255,255,5) ,
			                FlxTextBorderStyle.OUTLINE, FlxColor.fromRGB(0, 0, 0, 250));
	    messageText.setFormat(AssetPaths.smallfont__ttf, 8, FlxColor.fromRGB(255,255,255,5) ,
			                FlxTextBorderStyle.OUTLINE, FlxColor.fromRGB(0, 0, 0, 250));
		seed.setFormat(AssetPaths.smallfont__ttf, 8, FlxColor.fromRGB(255,255,255,5) ,
			                FlxTextBorderStyle.OUTLINE, FlxColor.fromRGB(0, 0, 0, 250));
		pauseText.setFormat(AssetPaths.smallfont__ttf, 8, FlxColor.fromRGB(255,255,255,5) ,
			                FlxTextBorderStyle.OUTLINE, FlxColor.fromRGB(0, 0, 0, 250));
		
	    getMiniMap();
	}	
	
	
		public function getMiniMap(wallColor:Int = 0xFF000000, openColor:Int = 0xFFFFFFFF, playerColor:Int = 0xFFFF00FF):Void
	{
		var minimap:FlxSprite = new FlxSprite();
		var bData:BitmapData;
		
		minimap.makeGraphic(Reg.PS.map.widthInTiles, Reg.PS.map.heightInTiles, 0xFFFFFFFF);
		bData = new BitmapData(Reg.PS.map.widthInTiles, Reg.PS.map.heightInTiles);
		for (i in 0...Reg.PS.map.widthInTiles)
		{
			for (j in 0...Reg.PS.map.heightInTiles)
			{
				if (Reg.PS.map.getTile(i, j) > 0) // Is collision tile
				{
					bData.setPixel(i, j, openColor);
				}
				else bData.setPixel(i, j, wallColor); // Else
				
				if (j == 0 || i == 0 || j == Reg.PS.map.heightInTiles-1 || i == Reg.PS.map.widthInTiles-1)
				{
					bData.setPixel(i, j, openColor);
				}

			}
			
		}
		
		minimap.pixels = bData;
		
		minimap.setGraphicSize(250);
		minimap.screenCenter();
		minimap.visible = true;
		minimap.scale.set(0.25,0.25);
		minimap.setPosition(-180, 0);
		minimap.scrollFactor.set(0, 0);
		
		add(minimap);
	}
}