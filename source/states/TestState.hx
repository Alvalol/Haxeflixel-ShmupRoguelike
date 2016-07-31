package states;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.addons.effects.FlxTrail;
import flixel.group.FlxGroup;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.FlxCamera;
import flixel.group.FlxSpriteGroup;
import flixel.math.FlxPoint;
import flixel.util.FlxColor;
import flixel.text.FlxText;
import flixel.tile.FlxTilemap;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import flixel.util.FlxSpriteUtil;
import objects.hazards.Hazard;
import objects.hazards.HazardBullet;
import objects.items.Item;
import utils.testing.StaticLevelLoader;
import flixel.addons.effects.FlxTrail;
import openfl.system.System;

import objects.enemies.EnemyBullet;
import objects.Player;
import objects.PlayerBullet;
import objects.gamesys.Scroller;
import objects.enemies.Enemy;
import objects.items.CoinItem;
import objects.hazards.HazardBlock;
import objects.enemies.enemyobjects.EnemyExplosiveExplosion;

import flixel.FlxG;
import utils.pcg.LevelLoaderProc;
import utils.pcg.LevelEnemies;


class TestState extends FlxState
{
	private var _gameCamera:FlxCamera;
    public var player(default, null):Player; 
	
	override public function create():Void
	{
		Reg.PS = cast this;
		Reg.pause = false;
		
		StaticLevelLoader.loadLevel(this, "sandboxtmx");
		
		FlxG.mouse.visible = false; // must always be set to false pls
		 
		player = new Player(100, 100);
		add(player);
      	cameraSetup();
		
		addGameplayElements();

		super.create();
	}
	
	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);

		gameControls();

	}
	
	private function addGameplayElements()
	{		
	}
	
	private function cameraSetup()
	{	
		_gameCamera = new FlxCamera();
		
		FlxG.cameras.reset(_gameCamera);
		FlxCamera.defaultCameras = [_gameCamera];
		//FlxG.camera.antialiasing = false;
		_gameCamera.pixelPerfectRender = false;	

	}
	
	private function gameControls()
	{
		if (FlxG.keys.justPressed.P) Reg.pause = !Reg.pause;
		if (FlxG.keys.justPressed.ESCAPE) System.exit(0);	
		if (FlxG.keys.justPressed.R) FlxG.resetState();
	}
	
}

