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
import flixel.util.FlxTimer;

class EnemyMultishotDeath extends Enemy
{
	
	private var justShot:Bool;
	private var shootDelay:Float = 0.4;
	private var _angle:Int = 180;
	private var bulletSpeed = 50;

	public function new(x:Float, y:Float) 
	{
		super(x, y);
		HP = 1;
		makeGraphic(8, 8, FlxColor.RED);
	}
	
	override public function update(elapsed:Float) 
	{
		if (!justShot && isOnScreen())
		{
			shoot();
		}
		
		super.update(elapsed);
	}
	
	override public function kill()
	{
		drops = [new HealthItem(x, y)];
		dropRate = [1.0];
		dropItem(drops,dropRate);
		deathShot();
		super.kill();
	}
	
	private function shoot()
	{
		justShot = true;
		var eb = Reg.PS.EBullets.recycle(EnemyBullet);
		
		if (eb == null)
		var eb = new EnemyBullet(x, y);
		

		_angle += 30;
		eb.velocity.set(FlxVelocity.velocityFromAngle(_angle, bulletSpeed).x,FlxVelocity.velocityFromAngle(_angle, bulletSpeed).y);
		eb.scale.set(0.5, 0.5);
		eb.set_angle(_angle);
		Reg.PS.EBullets.add(eb);
					
		new FlxTimer().start(shootDelay, function(_)
		{
	    justShot = false;
		}, 1);
	}

	private function deathShot()
	{
		var tang = -90;
		for (i in 0...9)
		{
			var eb = Reg.PS.EBullets.recycle(EnemyBullet);
			if (eb == null)
			var eb = new EnemyBullet(x, y);
		
			eb.velocity.set(FlxVelocity.velocityFromAngle(tang, bulletSpeed).x,FlxVelocity.velocityFromAngle(tang, bulletSpeed).y);
			tang += 45;
			eb.scale.set(0.5, 0.5);
			Reg.PS.EBullets.add(eb);
		}
	}
}