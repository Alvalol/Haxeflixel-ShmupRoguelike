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
import objects.items.Item;
import flixel.addons.effects.FlxTrail;


import objects.enemies.EnemyBullet;
//import objects.Goal;
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


class PlayState extends FlxState
{
	
	public var map:LevelLoaderProc;
	
	public var hazards:FlxTypedGroup<Hazard>;
	public var player(default, null):Player;
	public var PBullets:FlxTypedGroup<PlayerBullet>;
	public var EBullets:FlxTypedGroup<EnemyBullet>;
	public var blocks:FlxTypedGroup<HazardBlock>;
	//public var effects:FlxSpriteGroup;
	public var EExplosions:FlxTypedGroup<EnemyExplosiveExplosion>;
	public var enemies(default, null):FlxTypedGroup<Enemy>;
	public var items(default, null):FlxTypedGroup<Item>;
	public var coins:FlxTypedGroup < CoinItem>;

	//	public var goals(default, null):FlxTypedGroup<Goal>;
	private var _entities:FlxGroup;
//	private var _system:FlxGroup;

	private var _scroller(default, null):Scroller;
	
	
	private var _hud:HUD;
	private var _gameCamera:FlxCamera;
	private var _hudCamera:FlxCamera;
	
	
	
	override public function create():Void
	{
		Reg.PS = this;
		Reg.pause = false;
	
		
		player = new Player(16, FlxG.width/2);
		enemies = new FlxTypedGroup<Enemy>();
		hazards = new FlxTypedGroup<Hazard>();
		blocks = new FlxTypedGroup<HazardBlock>();
		//effects = new FlxSpriteGroup();
		coins = new FlxTypedGroup<CoinItem>();
		items = new FlxTypedGroup<Item>();
		//goals = new FlxTypedGroup<Goal>();
		_entities = new FlxGroup();
		//_system = new FlxGroup();
		
        PBullets = new FlxTypedGroup<PlayerBullet>();
		EBullets = new FlxTypedGroup<EnemyBullet>();
		EExplosions = new FlxTypedGroup<EnemyExplosiveExplosion>();
		
			
	    //var   cursor = new FlxSprite();
		//cursor.loadGraphic(AssetPaths.cursor__png, false, 8, 8);
		//FlxG.mouse.load(cursor.pixels,4);
		FlxG.mouse.visible = false; // must always be set to false pls
		 
		 map = new LevelLoaderProc();
		_gameCamera = new FlxCamera();
		_hudCamera = new FlxCamera();
      	cameraSetup();
		
		
        //add(effects);
		add(map.loadedMap);
		add(coins);
		add(PBullets);
		add(items);
		//_system.add(goals);
		_entities.add(EExplosions);
		_entities.add(blocks);	
		_entities.add(EBullets);
		_entities.add(hazards);
		_entities.add(enemies);
	
		add(_entities);
		add(player);
		//add(_system);
		items.clear();
		coins.clear();
		enemies.clear();
		super.create();
	}
	
	override public function update(elapsed:Float):Void
	{
		if (FlxG.keys.justPressed.R) FlxG.resetState();
		collisions();
		cleanItems();
		LevelEnemies.populateEnemies(map.loadedMap);
		/*trace("items : " + items.length);
		trace("enemies : " + enemies.length);
		//trace("enemies liviing : " + enemies.countLiving());
		trace("eBullets : " +EBullets.length);
		trace("PBullets : " + PBullets.length);
	    trace("coins length " + coins.length);
		trace("blocks length " + blocks.length);
		trace("_entities length " + _entities.length);
		//trace(effects.length);
*/
		FlxSpriteUtil.bound(player, 
		                    FlxG.camera.scroll.x, 
							FlxG.camera.scroll.x + FlxG.camera.width,
							FlxG.camera.scroll.y,
							FlxG.camera.scroll.y + FlxG.camera.height);
		//trace(FlxG.camera.scroll);
		
		
	    if (player.x <= FlxG.camera.scroll.x)
		{
			player.damage();
		//    FlxObject.separate(FlxG.camera, player);
		}
		
		super.update(elapsed);
	}
	
	public function cameraSetup()
	{
	
		_scroller = new Scroller(player.x + 80, player.y);
		
		FlxG.cameras.reset(_gameCamera);
		FlxG.cameras.add(_hudCamera);
		_hudCamera.bgColor = FlxColor.TRANSPARENT;
		FlxCamera.defaultCameras = [_gameCamera];
		_hud = new HUD();
		_hud.setCamera(_hudCamera);
		_gameCamera.follow(_scroller, FlxCameraFollowStyle.TOPDOWN_TIGHT,0.01);
		_gameCamera.setScrollBoundsRect(0, 0, map.loadedMap.width, map.loadedMap.height, true);
		//FlxG.camera.antialiasing = false;
		_gameCamera.pixelPerfectRender = false;	
		add(_scroller);
		add(_hud);
	
	}
	
	public function collisions()
	{


		
 	for (enemy in enemies){
	for (bullet in PBullets)
	{
		
			if(FlxG.overlap(bullet,enemy))
			{
			       enemy.damage();
			       bullet.kill();
			}
		            }
	}
	
	   for (item in items)
	   {
		   if (FlxG.overlap(item, player))
		   {
			   item.interact(player);
		   }
	   }
	   						
		if (player.alive)
		{
		   if (FlxG.collide(map.loadedMap, player))
		   {
			player.damage();
			FlxObject.separate(player, map.loadedMap);
		   }
		}
		
	/*	if (FlxG.overlap(_entities, player))
		{
			player.damage();
	    }*/
		
	/*	for (coin in coins)
		{
			for (eb in EBullets)
			{
				if (FlxG.overlap(coin, eb))
				{
					eb.kill();
					coin.kill();
				}
			}
		}		
	*/	
    }
	
	private function cleanItems()
	{
	   if (coins.countLiving() < 1)
	   {
		coins.clear(); 
	   }
	
	   if (blocks.countLiving() < 1)
	   {
		blocks.clear(); 
	   }
	   
	   if (EBullets.countLiving() < 1)
	   {
		EBullets.clear(); 
	   }
	   
	   	   if (enemies.countLiving() < 1)
	   {
		enemies.clear(); 
	   }
	   
	   if (items.countLiving() < 1)
	   {
		   items.clear();
	   }
	   
	   	   if (PBullets.countLiving() < 1)
	   {
		   PBullets.clear();
	   }
	   
	   /*
	   if (effects.countLiving() < 1)
	   {
		   effects.clear();
	   }
	   */
	   
	  

}}