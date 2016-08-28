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


class PlayState extends FlxState
{
	public var map:FlxTilemap;
	public var hazards:FlxTypedGroup<Hazard>;
	public var player(default, null):Player;
	public var PBullets:FlxTypedGroup<PlayerBullet>;
	public var EBullets:FlxTypedGroup<EnemyBullet>;
	public var blocks:FlxTypedGroup<HazardBlock>;
	public var effects:FlxSpriteGroup;
	public var EExplosions:FlxTypedGroup<EnemyExplosiveExplosion>;
	public var HBullets:FlxTypedGroup<HazardBullet>;
	public var enemies(default, null):FlxTypedGroup<Enemy>;
	public var items(default, null):FlxTypedGroup<Item>;
	public var coins:FlxTypedGroup <CoinItem>;
	private var _entities:FlxGroup;

	private var _scroller(default, null):Scroller;
	
	private var _hud:HUD;
	private var _gameCamera:FlxCamera;
	private var _hudCamera:FlxCamera;

	private var tracers:Bool = false;
	
	override public function create():Void
	{
		Reg.PS = this;
		Reg.pause = false;
	

		// init gameplay elements

		player = new Player(10, FlxG.height / 2);
		enemies = new FlxTypedGroup<Enemy>();
		hazards = new FlxTypedGroup<Hazard>();
		blocks = new FlxTypedGroup<HazardBlock>();
		effects = new FlxSpriteGroup();
		coins = new FlxTypedGroup<CoinItem>();
		items = new FlxTypedGroup<Item>();
        PBullets = new FlxTypedGroup<PlayerBullet>();
		EBullets = new FlxTypedGroup<EnemyBullet>();
		EExplosions = new FlxTypedGroup<EnemyExplosiveExplosion>();
		HBullets= new FlxTypedGroup<HazardBullet>();
		_entities = new FlxGroup();
		
		FlxG.mouse.visible = false; // must always be set to false pls
		map = LevelLoaderProc.loadGeneratedLevel();

		addGameplayElements();


      	cameraSetup();
		super.create();
	}
	
	override public function update(elapsed:Float):Void
	{
		if(!Reg.pause)
		super.update(elapsed);

		displayTracers();
		gameControls();

//		LevelEnemies.populateEnemies(map.loadedMap);

		FlxSpriteUtil.bound(player, 
		                    FlxG.camera.scroll.x, 
							FlxG.camera.scroll.x + FlxG.camera.width * 2,
							FlxG.camera.scroll.y,
							FlxG.camera.scroll.y + FlxG.camera.height);	
	}
	
	private function addGameplayElements()
	{		
		add(map);
		_entities.add(EExplosions);
		_entities.add(blocks);	
		_entities.add(coins);
		_entities.add(items);
		_entities.add(effects);
		_entities.add(EBullets);
		_entities.add(hazards);
		_entities.add(enemies);
		_entities.add(PBullets);
		_entities.add(HBullets);
		add(_entities);
		add(player);	
	}
	
	private function cameraSetup()
	{	
		_gameCamera = new FlxCamera();
		_hudCamera = new FlxCamera();
		_scroller = new Scroller(player.x + 120, player.y);
		
		FlxG.cameras.reset(_gameCamera);
		FlxG.cameras.add(_hudCamera);
		_hudCamera.bgColor = FlxColor.TRANSPARENT;
		FlxCamera.defaultCameras = [_gameCamera];
		_hud = new HUD();
		_hud.setCamera(_hudCamera);
		_gameCamera.setScrollBoundsRect(0, 0, map.width, map.height, true);
		//FlxG.camera.antialiasing = false;
		_gameCamera.pixelPerfectRender = false;	
		
		_gameCamera.follow(_scroller, FlxCameraFollowStyle.TOPDOWN_TIGHT, 0.01);
		add(_scroller);
		add(_hud);
	}
	
	private function gameControls()
	{
		if (FlxG.keys.justPressed.P) Reg.pause = !Reg.pause;
		if (FlxG.keys.justPressed.ESCAPE) System.exit(0);	
		if (FlxG.keys.justPressed.R) FlxG.resetState();
	}
	
	private function displayTracers()
	{
		if (tracers)
		{
		
		trace("SCROLLER : " + Reg.SCROLLER_ON);	
		trace("items : " + items.length);
		trace("enemies : " + enemies);
		trace("eBullets : " +EBullets.length);
		trace("PBullets : " + PBullets.length);
	    trace("coins  " + coins.length);
		trace("blocks " + blocks.length);
		trace("_entities " + _entities.length);
		trace("effects " + effects.length);
		trace("MASTER SEED : " + Reg.CURRENT_SEED.initialSeed);
		
	    }
	}
	
}

