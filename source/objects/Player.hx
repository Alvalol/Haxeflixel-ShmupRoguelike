package objects;

import flixel.FlxSprite;
import flixel.FlxObject;
import flixel.FlxG;
import flixel.FlxSubState;
import flixel.input.gamepad.FlxGamepad;
import flixel.util.FlxColor;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.util.FlxTimer;
import objects.PlayerBullet;

import flixel.util.FlxSpriteUtil;
import utils.controls.Keyboard;
import flixel.math.FlxVelocity;
import states.GameOverState;
import states.PlayState;

class Player extends FlxSprite
{
	private static inline var ACCELERATION:Int = 800;
	private static inline var DECELERATION:Int = 800;
	public  var HOR_MOVE_SPEED:Int = 50;
	public var VERT_MOVE_SPEED:Int = 60;
	public var MAX_HOR_MOVE_SPEED:Int = 100;
	public var MAX_VERT_MOVE_SPEED:Int = 100;
	
	public var MAGNET:Int = 30;
	public var MAX_MAGNET:Int = 300;
	public var MAGNET_FORCE:Int = 40;
	public var MAX_MAGNET_FORCE:Int = 100;
	
	public var RANGE:Float = 0.1;
	public var MAX_RANGE:Float = 2.0;
	
	private static inline var MAX_BULLETS:Int = 10;
	private static inline var BULLET_OFFSET:Int = 7;
	
	public var HP:Int;
	public var MAX_HP:Int;
	public var MAX_POSSIBLE_HP:Int = 10; //? Not sure. Needs playtest.
	
	private var _cooldown:Float = 0;
	private var _invinsible:Bool = false;
	
	public var SHOT_MOD:Int;
	public var MAX_SHOTMOD:Int = 1;
	
	private var gamepad:FlxGamepad;
	
	public function new(x:Float, y:Float) 
	{
		super(x,y);
		HP = 10; //3
		MAX_HP = 3;
		
		loadGraphic(AssetPaths.player__png, true, 16, 8);
		
		SHOT_MOD = 0;
	
		width = 4; // maybe one hitbox for death, another hitbox for animations / collision with maps.
		height = 4;
		centerOffsets();
		animation.add("move", [0,1,2]);
		animation.play("move");
		
		drag.x = DECELERATION;
		drag.y = DECELERATION;
		
		gamepad = FlxG.gamepads.lastActive;
		
		maxVelocity.set(HOR_MOVE_SPEED, VERT_MOVE_SPEED);
	}
	
	override public function update(elapsed:Float):Void
	{	
		//trace(FlxG.gamepads.getFirstActiveGamepad());
		if (!Reg.DEBUG)
		{
		collisions();
		}
		
		if (_invinsible)
		cheat();
		
		if (gamepad != null)
		{
			updateGameInput(gamepad);
		}
		else
		    return null;
			
		
		
		basicChecks(elapsed);		
		if(!Reg.pause)
		    super.update(elapsed);
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
			damage();
			FlxObject.separate(this, Reg.PS.map);
		   }
		   if (x <= FlxG.camera.scroll.x)
		   {
			damage();
		   }
		}
	}
	
	private function basicChecks(elapsed:Float)
	{
		if (alive)
		{
		    resetAccel();
		    move();
		    shoot();
			_cooldown -= elapsed * 4;
		}
	
		if (HP <= 0 && !_invinsible)
		   kill();
	}
	private function move()
	{
		move_up();
		move_right();
		move_down();
		move_left();
	}
	
	private function resetAccel()
	{
		acceleration.x = 0;
		acceleration.y = 0;		
	}
		
	
   	public function updateGameInput(gamepad:FlxGamepad):Void
	{
	  if (gamepad.pressed.A || gamepad.pressed.RIGHT_SHOULDER || gamepad.pressed.RIGHT_TRIGGER)
	  {
          shoot();

	  }
	  
	  if (gamepad.pressed.B || gamepad.pressed.LEFT_TRIGGER)
	  {
		  trace("Pressed B or LEFT TRIGGER");
	  }
	  
	  if (gamepad.pressed.START) Reg.pause = !Reg.pause;
	}
	
	public function move_up()
	{
		if (FlxG.keys.anyPressed(Keyboard.upKeys))
			acceleration.y -= ACCELERATION;
	}
	
	public function move_right()
	{
		if (FlxG.keys.anyPressed(Keyboard.rightKeys))
		    acceleration.x += ACCELERATION;	
	}
	
	
	public function move_down()
	{
		if (FlxG.keys.anyPressed(Keyboard.downKeys))
		  acceleration.y += ACCELERATION;
	}

	public function move_left()
	{
		if (FlxG.keys.anyPressed(Keyboard.leftKeys))
		    acceleration.x -= ACCELERATION;
	}
	
	
	
	//********** needs to be reworked completely to support different types of "weapons"  *************
	public function shoot()
	{
		var ang = 10;
		
		if (Reg.PS.PBullets.countLiving() < MAX_BULLETS && _cooldown <= 0) 
		{
			var pb:PlayerBullet =  new PlayerBullet(x, y);

			switch SHOT_MOD {
			case 0:
			{
			pb.reset(x + BULLET_OFFSET, y + 2 );
			Reg.PS.PBullets.add(pb);
			//FlxG.camera.shake(0.003, 0.05);
			_cooldown = .4;
			}
			
			case 1:
			{ // this is dumb
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