package objects;

import flixel.FlxSprite;
import flixel.FlxObject;
import flixel.FlxG;
import flixel.FlxSubState;
import flixel.effects.particles.FlxEmitter;
import flixel.math.FlxPoint;
import flixel.util.FlxColor;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.util.FlxTimer;
import objects.effects.NewBullEffect;
import objects.effects.NoHit;
import objects.weapons.BaseWeapon;
import objects.weapons.IWeapon;
import objects.weapons.BackWeapon;
import objects.weapons.LaserWeapon;

import flixel.util.FlxSpriteUtil;
import utils.controls.Keyboard;
import flixel.math.FlxVelocity;
import states.GameOverState;
import states.PlayState;

class Player extends FlxSprite
{
	private static inline var ACCELERATION:Int = 800;
	private static inline var DECELERATION:Int = 800;
	
	public var HOR_MOVE_SPEED:Int =50;
	public var VERT_MOVE_SPEED:Int =68;
	
	public var MAX_HOR_MOVE_SPEED:Int = 80;
	public var MAX_VERT_MOVE_SPEED:Int = 100;
	
	public var MAGNET:Bool = false;
	
	public var RANGE:Float = 1; // maybe
	public var MAX_RANGE:Float = 2.0;
	
	private static inline var MAX_BULLETS:Int = 10;
	private static inline var BULLET_OFFSET:Int = 8;
	
	public var HP:Int;
	public var MAX_HP:Int;
	public var MAX_POSSIBLE_HP:Int = 10; //? Not sure. Needs playtest.
	
	private var _cooldown:Float = 0.5;
	public var invinsible:Bool = false;
	
	private var immuneToWalls(default, set):Bool = true;
	private var weapons:Array<IWeapon>;
	
	var bullEffect:NewBullEffect;
	var addedBull:Bool = false;
	
	var shooting:Bool = false;
	
	var comboMultiplier:Float = 1;	
	var comboTimer:FlxTimer;
	var comboTimerDuration:Float = 5;
	public var timeLeft:Float;

	public function new(x:Float, y:Float) 
	{
		super(x,y);
		HP = 3; 
		MAX_HP = 3;
		
		weapons = [new BaseWeapon(x, y)];

		bullEffect = new NewBullEffect(x, y);
		bullEffect.set_visible(false);
		loadGraphic(AssetPaths.player__png, true, 8, 8);
		
		setSize(4, 4);
		
		
		centerOffsets();
		animation.add("move", [0,1,1,1,0], 16);
		animation.play("move");
		
		drag.x = DECELERATION;
		drag.y = DECELERATION;
		
		
		comboTimer = new FlxTimer().start(0, function(_) { comboMultiplier = 1;} );
		maxVelocity.set(HOR_MOVE_SPEED, VERT_MOVE_SPEED);
		
	}
	
	override public function update(elapsed:Float):Void
	{	
		if (!shooting)
		move_right();

		timeLeft = comboTimer.timeLeft;
		
		
		if (!invinsible)
		   collisions();
		else 
		   cheat();
		   
		  if (!addedBull)
		  {
		   Reg.PS.effects.add(bullEffect);
		   addedBull = true;
		  }
		  
		bullEffect.setPosition(x+6, y-2);
		  
		basicChecks(elapsed);
		
		
		if (!Reg.pause)
		{
		    super.update(elapsed);
			
			for (weapon in weapons)
			{
			weapon.update_location(new FlxPoint(x, y));
			}
		}
			
		//displayTrace();
		
	}
	
	private function displayTrace()
	{
		
	  if (Reg.CURRENT_SEED.int(0,100) > 40 && (acceleration.x != 0  || acceleration.y != 0))
		{
		var tracePlayer = new objects.effects.PlayerTrace(x - 8, y-2);
		Reg.PS.effects.add(tracePlayer);
		}
	}
	
	public function resetComboTimer()
	{
		comboTimer.reset(comboTimerDuration);
		comboTimer.start(comboTimerDuration, function(_) { comboMultiplier = 1; });
	    //comboMultiplier = 1;
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
	
	public function get_comboTimer():Float
	{
		
	 return comboTimer.timeLeft;
	 
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
		//move_right();
		move_down();
		//move_left();
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
		    velocity.x += ACCELERATION / 40;	
	}
	
	public function move_down()
	{
		  acceleration.y += ACCELERATION;
	}

	public function move_left()
	{
		    velocity.x -= ACCELERATION / 55;
	}
	
	// TODO : Complete reimplementation to support different types of "weapons"  
	
	public function shoot()
	{
		if (!Reg.pause)
		{
		bullEffect.set_visible(true);
		move_left();
		
		shooting = true;
		
		new FlxTimer().start(0.05, function(_) { bullEffect.set_visible(false); }, 1);
		
		new FlxTimer().start(0.025, function(_) { FlxG.camera.shake(0.001, 0.05); }, 1);

		for (weapon in weapons)
		{
		weapon.shoot();
		}
		}
	}
	
	public function damage()
	{
		if (!FlxSpriteUtil.isFlickering(this))
		{
		HP--;
		comboMultiplier = 1;
		comboTimer.start(0);
		FlxG.camera.shake(0.003, 0.5);
		FlxSpriteUtil.flicker(this, 2, 0.05, true);
	    }
	}
	
	private function deathAnimation()
	{

		var emitter = new FlxEmitter();
		emitter.setPosition(x, y);
		emitter.makeParticles(2,2, FlxColor.WHITE, 50);
		emitter.launchMode = FlxEmitterMode.CIRCLE;
		emitter.lifespan.set(0.2, 2);
		Reg.PS.emitters.add(emitter);
		emitter.start(true, 0.5, 50);	
		new FlxTimer().start(2.5, function(_)
		{
		FlxG.switchState(new GameOverSubState());		
		}, 1);
		
	}
	
	override public function kill()
	{

		Reg.PS.persistentUpdate = false;
		super.kill();
		deathAnimation();

	}
	
	public function get_immuneToWalls():Bool 
	{
		return immuneToWalls;
	}
	
	public function set_immuneToWalls(value:Bool):Bool 
	{
		return immuneToWalls = value;
	}
	
	public function get_weapons():Array<IWeapon> 
	{
		return weapons;
	}
	
	public function set_shooting(value)
	{
		shooting = value;
	}
	
	public function add_weapon(wep:Dynamic)
	{
		weapons.push(wep);
	}
	
	public function get_comboMultiplier():Float 
	{
		return comboMultiplier;
	}
	
	public function set_comboMultiplier(value)
	{
		comboMultiplier = value;
	}
	
	public function set_MAGNET(value:Bool):Bool 
	{
		return MAGNET = value;
	}
	
}