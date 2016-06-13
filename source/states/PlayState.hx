package states;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.group.FlxGroup;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.FlxCamera;
import flixel.text.FlxText;
import flixel.tile.FlxTilemap;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import objects.EnemyBullet;
import objects.Player;
import objects.PlayerBullet;
import objects.Scroller;
import objects.Enemy;
import flixel.util.FlxSpriteUtil;

import utils.LevelLoader;


class PlayState extends FlxState
{
	
	public var map:FlxTilemap;
	public var player(default, null):Player;
	public var PBullets:FlxTypedGroup<PlayerBullet>;
	public var EBullets:FlxTypedGroup<EnemyBullet>;
	private var _entities:FlxGroup;
	public var enemies(default, null):FlxTypedGroup<Enemy>;
		
	private var _scroller(default, null):Scroller;
	
	
	
	override public function create():Void
	{
		Reg.PS = this;
		
		player = new Player();
		enemies = new FlxTypedGroup<Enemy>();
		_entities = new FlxGroup();
        PBullets = new FlxTypedGroup<PlayerBullet>();
		EBullets = new FlxTypedGroup<EnemyBullet>();
		FlxG.mouse.visible = false;


		LevelLoader.loadLevel(this, Reg.levels[Reg.currentLevel]);
		add(player);
		add(PBullets);
		_entities.add(EBullets);
		
		_entities.add(enemies);
		add(_entities);
		
		cameraSetup();
		super.create();
	}
	
	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		
		if (player.alive)
		{
			FlxG.collide(map, player);
		}
		
		if (FlxG.collide(_entities, player))
		{
			player.damage();
		}
	
		// Could use some sort of check to kill the player if he
		// touches bounds when he shouldn't 
		// Good enough for now.
		FlxSpriteUtil.bound(player, 
		                    FlxG.camera.scroll.x, 
							FlxG.camera.scroll.x + FlxG.camera.width,
							FlxG.camera.scroll.y,
							FlxG.camera.scroll.y + FlxG.camera.height);
		//trace(FlxG.camera.scroll);
	}
	
	public function cameraSetup()
	{
		_scroller = new Scroller(player.x + 80, player.y);
		
		FlxG.camera.follow(_scroller, FlxCameraFollowStyle.TOPDOWN_TIGHT,0.01);
		FlxG.camera.setScrollBoundsRect(0, 0, map.width, map.height, true);
		//FlxG.camera.antialiasing = false;
		FlxG.camera.pixelPerfectRender = true;	
		
		add(_scroller);
		

	

	}
}

