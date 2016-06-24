package states;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.addons.effects.FlxTrail;
import flixel.group.FlxGroup;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.FlxCamera;
import flixel.util.FlxColor;
import flixel.text.FlxText;
import flixel.tile.FlxTilemap;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import flixel.util.FlxSpriteUtil;

import objects.Player;


import utils.LevelLoaderProc;


class ProcState extends FlxState
{
	
	public var player(default, null):Player;
	public var LevelLoader:LevelLoaderProc;
	
	
	override public function create():Void
	{
		
		player = new Player();
	   
		FlxG.mouse.visible = false;
        FlxG.camera.follow(player, LOCKON, 0.5); 
		LevelLoader = new LevelLoaderProc();
		add(LevelLoader.loadedMap);

		add(player);
		
		super.create();
	}
	
	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
    }
}