package objects;

import flixel.FlxSprite;
import flixel.FlxObject;
import flixel.FlxG;
import flixel.FlxSubState;
import flixel.util.FlxColor;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.util.FlxTimer;
import objects.PlayerBullet;
import flixel.util.FlxSpriteUtil;
import flixel.math.FlxVelocity;
import states.GameOverState;
import states.PlayState;

class Player extends FlxSprite
{
	
	private static inline var ACCELERATION:Int = 800;
	private static inline var DECELERATION:Int = 800;
	public  var HOR_MOVE_SPEED:Int = 50;
	public var VERT_MOVE_SPEED:Int = 60;
	public var MAX_HOR_MOVE_SPEED:Int = 70;
	public var MAX_VERT_MOVE_SPEED:Int = 80;
	
	public var MAGNET:Int = 30;
	public var MAX_MAGNET:Int = 300;
	public var MAGNET_FORCE:Int = 40;
	public var MAX_MAGNET_FORCE:Int = 100;
	
	public var RANGE:Float = 0.1;
	public var MAX_RANGE:Float = 2.0;
	
	private static inline var MAX_BULLETS:Int = 10;
	private static inline var BULLET_OFFSET:Int = 3;
	
	public var HP:Int;
	public var MAX_HP:Int;
	public var MAX_POSSIBLE_HP:Int = 6;
	
	private var _cooldown:Float = 0;
	
	public var SHOT_MOD:Int;
	public var MAX_SHOTMOD:Int = 1;
	
	
	public function new(x:Float, y:Float) 
	{
		super(x,y);
		HP = 3; //3
		MAX_HP = 3;
		loadGraphic(AssetPaths.player__png, true, 16, 8);

		SHOT_MOD = 0;
	
	
		width = 4; // maybe one hitbox for death, another hitbox for animations / collision with maps.
		height = 4;
		centerOffsets();
		animation.add("move", [0,1,2],30);
		animation.play("move");
	    immovable = false;
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

				
		if (HP <= 0)
		   kill();
		
		super.update(elapsed);
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
		var ang = 10;


		if (FlxG.keys.anyPressed([SPACE, M, L, O]) && Reg.PS.PBullets.countLiving() < MAX_BULLETS && _cooldown <= 0) 
		{
			var pb:PlayerBullet =  Reg.PS.PBullets.recycle();
			if (pb == null)
			pb = new PlayerBullet(x, y);

			switch SHOT_MOD {
			case 0:
			{
			pb.reset(x + BULLET_OFFSET, y + 1 );
			Reg.PS.PBullets.add(pb);
			//FlxG.camera.shake(0.003, 0.05);
			_cooldown = .4;
			}
			
			case 1:
			{ // this is dumb
			var pb2:PlayerBullet =  Reg.PS.PBullets.recycle();
			if (pb2 == null)
			pb2 = new PlayerBullet(x, y);
            pb.velocity.set(FlxVelocity.velocityFromAngle(10, 250).x, FlxVelocity.velocityFromAngle(10, 250).y);
            pb2.velocity.set(FlxVelocity.velocityFromAngle(350, 250).x, FlxVelocity.velocityFromAngle(350, 250).y);
            pb.angle = 10;
            pb2.angle = 350;
	        Reg.PS.PBullets.add(pb); 
	        Reg.PS.PBullets.add(pb2);
	        _cooldown = .2;
			}
			}
		}
	}
	
	
	public function damage()
	{
		if (!FlxSpriteUtil.isFlickering(this))
		{
		HP--;
		FlxG.camera.shake(0.003, 0.5);
		FlxSpriteUtil.flicker(this,1,0.05,true);
	    }
	}
	override public function kill()
	{
		super.kill();
		FlxG.switchState(new GameOverSubState());
	}
}