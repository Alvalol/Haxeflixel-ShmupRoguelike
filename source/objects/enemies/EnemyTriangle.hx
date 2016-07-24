package objects.enemies;


import flixel.FlxObject;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.math.FlxVelocity;
import flixel.util.FlxTimer;


class EnemyTriangle extends Enemy
{

	private var MOVE_SPEED:Int = 30;
	private var ang:Int = 150;
	private var delay:Float = FlxG.random.float(0.5, 1.5);
	
	
	public function new(x:Float, y:Float) 
	{
		super(x, y);
		HP = 1;
		makeGraphic(8, 8, FlxColor.BLUE);
		triggerAngleChange();
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
		if (ang >= 260)
		{
			ang = 100;
		}
		else
		{
			ang = 210;
		}
		
		triggerAngleChange();
	}
	
}