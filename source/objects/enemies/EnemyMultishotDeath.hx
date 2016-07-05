package objects.enemies;

import flixel.FlxSprite;
import flixel.input.FlxPointer;
import flixel.math.FlxPoint;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxObject;
import objects.items.HealthItem;
import flixel.math.FlxMath;
import flixel.math.FlxVelocity;

class EnemyMultishotDeath extends Enemy
{

	public function new(x:Float, y:Float) 
	{
		super(x, y);
		HP = 1;
		makeGraphic(8, 8, FlxColor.PURPLE);
	}
	
	override public function update(elapsed:Float) 
	{

		if (_appeared)
		{
		move();
		}
		
		super.update(elapsed);
	
	}
	
	public function move()
	{
		x -= 0.5;
	}

	

	
	override public function kill():Void
	{
		drops = [new HealthItem(x, y)];
		dropItem(drops);
		shoot();
		super.kill();
	}
	
	
	public function shoot()
	{
			var ang = -90;
			var bulletSpeed = 40;
		for (i in 0...9)
		{
			var en = new EnemyBullet(x, y);

			en.velocity.set(FlxVelocity.velocityFromAngle(ang, bulletSpeed).x,FlxVelocity.velocityFromAngle(ang, bulletSpeed).y);
			ang += 40;
			en.scale.set(0.5, 0.5);
			Reg.PS.EBullets.add(en);
		}
	}
}