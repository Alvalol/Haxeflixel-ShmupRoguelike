package objects;

import flixel.FlxSprite;
import flixel.FlxObject;
import flixel.FlxG;
import flixel.FlxSubState;
import flixel.effects.particles.FlxEmitter;
import flixel.util.FlxColor;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.util.FlxTimer;
import objects.PlayerBullet;
import objects.weapon.Weapon;

import flixel.util.FlxSpriteUtil;
import utils.controls.Keyboard;
import flixel.math.FlxVelocity;
import states.GameOverState;
import states.PlayState;

class Player extends FlxSprite
{
	private static inline var ACCELERATION:Int = 800;
	private static inline var DECELERATION:Int = 800;
	
	public var HOR_MOVE_SPEED:Int =68;
	public var VERT_MOVE_SPEED:Int =68;
	
	public var MAX_HOR_MOVE_SPEED:Int = 100;
	public var MAX_VERT_MOVE_SPEED:Int = 100;
	
	public var MAGNET:Int = 0;
	public var MAX_MAGNET:Int = 300;
	public var MAGNET_FORCE:Int = 0;
	public var MAX_MAGNET_FORCE:Int = 100;
	
	public var RANGE:Float = 0.2;
	public var MAX_RANGE:Float = 2.0;
	
	private static inline var MAX_BULLETS:Int = 10;
	private static inline var BULLET_OFFSET:Int = 8;
	
	public var HP:Int;
	public var MAX_HP:Int;
	public var MAX_POSSIBLE_HP:Int = 10; //? Not sure. Needs playtest.
	
	private var _cooldown:Float = 0.5;
	public var invinsible:Bool = false;
	
	private var immuneToWalls(get, null):Bool = false;
	
	public var SHOT_MOD:Int;
	public var MAX_SHOTMOD:Int = 1;
	
	private var WEAPON_DMG:Int = 1;
	private var MAX_WEAPON_DMG:Int = 5;
	
	public function new(x:Float, y:Float) 
	{
		super(x,y);
		HP = 3; 
		MAX_HP = 3;
		
		loadGraphic(AssetPaths.player__png, true, 8, 8);
		
		SHOT_MOD = 0; // related to the old weapon system. Will not be necessary in the future.
	
		setSize(4, 4);
		
		centerOffsets();
		animation.add("move", [0,1,1,1,0],12);
		animation.play("move");
		
		drag.x = DECELERATION;
		drag.y = DECELERATION;
		
		maxVelocity.set(HOR_MOVE_SPEED, VERT_MOVE_SPEED);
	}
	
	override public function update(elapsed:Float):Void
	{	
		if (!invinsible)
		   collisions();
		else 
		   cheat();
		
		basicChecks(elapsed);
		
		if(!Reg.pause)
		    super.update(elapsed);
		
		if (FlxG.random.int(0,100) > 40 && (acceleration.x != 0  || acceleration.y != 0))
		{
	//	var tracePlayer = new objects.effects.PlayerTrace(x - 8, y-2);
		//Reg.PS.effects.add(tracePlayer);
		}
		
	}
		
	
	private function cheat()
	{
			HP = 1;
	}
	
	private function collisions()
	{
			   						
		if (alive)
		{
		   if (FlxG.collide(Reg.PS.map, this))
		   {
			if (!immuneToWalls)
			{

				damage();
				FlxObject.separate(this, Reg.PS.map);
		   }
		   else
			   FlxObject.separate(this, Reg.PS.map);
		   }
			
		   if (x <= FlxG.camera.scroll.x)
			   damage();
		}
	}
	
	private function basicChecks(elapsed:Float)
	{
		if (alive)
		    _cooldown -= elapsed * 4;
	
		if (HP <= 0 && !invinsible)
		   kill();
	}
	

	private function move()
	{
		move_up();
		move_right();
		move_down();
		move_left();
	}
	
	public function resetAccel()
	{
		acceleration.x = 0;
		acceleration.y = 0;		
	}
		
	public function move_up()
	{
			acceleration.y -= ACCELERATION;
	}
	
	public function move_right()
	{
		    acceleration.x += ACCELERATION;	
	}
	
	public function move_down()
	{
		  acceleration.y += ACCELERATION;
	}

	public function move_left()
	{
		    acceleration.x -= ACCELERATION;
	}
	
	// TODO : Complete reimplementation to support different types of "weapons"  
	public function shoot()
	{
		if (!Reg.pause)
		{
		var ang = 10;
		
		if (Reg.PS.PBullets.countLiving() < MAX_BULLETS && _cooldown <= 0 && alive) 
		{
			
			var pb =  Reg.PS.PBullets.recycle(PlayerBullet);
			if(pb == null) new PlayerBullet(x, y);

			switch SHOT_MOD {
			case 0:
			{
				pb.reset(x + BULLET_OFFSET, y -2);
				Reg.PS.PBullets.add(pb);
				_cooldown = 0.5;
			}
			
			case 1:
			{ 
				var pb2:PlayerBullet =  new PlayerBullet(x, y);
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
	
	private function deathAnimation()
	{

		var emitter = new FlxEmitter();
		emitter.setPosition(x, y);
		emitter.makeParticles(2,2, FlxColor.WHITE, 200);
		emitter.launchMode = FlxEmitterMode.CIRCLE;
		emitter.lifespan.set(0.2, 3);
		Reg.PS.emitters.add(emitter);
		emitter.start(true, 0.5, 200);	
		new FlxTimer().start(2.5, function(_)
		{
		FlxG.switchState(new GameOverSubState());		
		}, 1);
		
		
	}
	
	override public function kill()
	{
		super.kill();
		deathAnimation();

	}
	
	public function increaseWeaponDamage()
	{
		WEAPON_DMG++;
	}
	
	public function set_immuneToWalls(value:Bool):Bool 
	{
		return immuneToWalls = value;
	}
	

	public function get_MAX_WEAPON_DMG():Int 
	{
		return MAX_WEAPON_DMG;
	}
	
	public function get_immuneToWalls():Bool 
	{
		return immuneToWalls;
	}
	
	public function get_WEAPON_DMG():Int 
	{
		return WEAPON_DMG;
	}
	
	
}