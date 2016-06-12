package objects;

import flixel.FlxSprite;
import flixel.FlxObject;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.util.FlxTimer;
import objects.PlayerBullet;
import flixel.util.FlxSpriteUtil;

class Player extends FlxSprite
{
	
	private static inline var ACCELERATION:Int = 250;
	private static inline var DECELERATION:Int = 300;
	private static inline var HOR_MOVE_SPEED:Int = 60;
	private static inline var VERT_MOVE_SPEED:Int = 70;
	
	private static inline var MAX_BULLETS:Int = 10;
	private static inline var BULLET_OFFSET:Int = 3;
	
	public static var HP:Int;
	
	private var _cooldown:Float = 0;
	
	public function new() 
	{
		super();
		HP = 4;
		loadGraphic(AssetPaths.player__png, true, 8, 8);
		animation.add("move", [0]);
		animation.play("move");
		
		drag.x = DECELERATION;
		drag.y = DECELERATION;
		maxVelocity.set(HOR_MOVE_SPEED, VERT_MOVE_SPEED);
		
	}
	
	
	override public function update(elapsed:Float):Void
	{
		if (alive)
		{
		    move();
		    shoot();
			
			_cooldown -= elapsed * 4;
		}
			
		super.update(elapsed);
		
		if (HP <= 0)
		   kill();
	}
	
	
	public function move()
	{
		
		acceleration.x = 0;
		acceleration.y = 0;
		if (FlxG.keys.anyPressed([UP, W]))
			acceleration.y -= ACCELERATION;
		
		if (FlxG.keys.anyPressed([DOWN, S]))
		    acceleration.y += ACCELERATION;
		
		if (FlxG.keys.anyPressed([LEFT, A]))
		    acceleration.x -= ACCELERATION;
			
			
		if (FlxG.keys.anyPressed([RIGHT, D]))
		    acceleration.x += ACCELERATION;
	}
	
	public function shoot()
	{
		if (FlxG.keys.anyPressed([SPACE, M, L, O]) && Reg.PS.PBullets.countLiving() < MAX_BULLETS && _cooldown <= 0)
		{
			var pb:PlayerBullet =  Reg.PS.PBullets.recycle();
			if (pb == null)
			    pb = new PlayerBullet(x,y);
			pb.reset(x + BULLET_OFFSET, y + 5 );
			Reg.PS.PBullets.add(pb);
			//FlxG.camera.shake(0.003, 0.05);
			_cooldown = .5;
		}
    }
	
	public function damage()
	{
		if (!FlxSpriteUtil.isFlickering(this))
		{
		HP--;
		FlxG.camera.shake(0.003, 0.5);
		FlxSpriteUtil.flicker(this,2,0.05,true);
	    }
	}
	override public function kill()
	{
		super.kill();
	}
}