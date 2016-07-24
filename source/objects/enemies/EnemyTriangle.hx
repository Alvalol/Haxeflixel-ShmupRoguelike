package objects.enemies;


import flixel.FlxObject;
import flixel.addons.effects.FlxTrail;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.math.FlxVelocity;
import flixel.util.FlxTimer;

// NEEDS TO BE FIXED

class EnemyTriangle extends Enemy
{

	private var MOVE_SPEED:Int = 50;
	public var ang:Int = 120;
	private var delay:Float = 1.2;
	private var bTrail:FlxTrail;
	
	
	public function new(x:Float, y:Float) 
	{
		super(x, y);
		HP = 1;
		loadGraphic(AssetPaths.enemies__png, true, 8, 8);
		animation.add("idle", [16]);
        animation.play("idle");
		triggerAngleChange();
		createTrail();
	}
	
	override public function update(elapsed:Float) 
	{
		super.update(elapsed);
		move();	
	}
	
	private function move()
	{
		velocity.set(FlxVelocity.velocityFromAngle(ang, MOVE_SPEED).x, FlxVelocity.velocityFromAngle(ang, MOVE_SPEED).y);
	}
	
		private function triggerAngleChange()
	{
		new FlxTimer().start(delay, changeAngle, 1);
	}
	
	private function changeAngle(timer:FlxTimer)
	{
		if (ang >= 240)
		{
			ang = 110;
		}
		else
		{
			ang = 240;
		}
		triggerAngleChange();
	}
	
	override public function kill():Void
	{	
		Reg.PS.effects.remove(bTrail);
		super.kill();
	}
	
	private function createTrail()
	{
        bTrail = new FlxTrail(this,null,4,1,0.4,0.05);
		Reg.PS.effects.add(bTrail);
	}
}