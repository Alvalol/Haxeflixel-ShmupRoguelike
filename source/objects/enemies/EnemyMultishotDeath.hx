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
	private var shootDelay:Float = 0.25;
	private var ang:Int = 180;
	private var bulletSpeed = 50;

	public function new(x:Float, y:Float) 
	{
		super(x, y);
		HP = 1;
		makeGraphic(8, 8, FlxColor.PURPLE);
	}
	
	override public function update(elapsed:Float) 
	{

		if (!justShot && isOnScreen())
		{
			shoot();
		}

		super.update(elapsed);
	
	}
	
	override public function kill():Void
	{
		drops = [new HealthItem(x, y)];
		dropItem(drops);
		deathShoot();
		super.kill();
	}
	
	public function shoot()
	{
		justShot = true;
		var eb = new EnemyBullet(x, y);

		ang += 30;
		eb.velocity.set(FlxVelocity.velocityFromAngle(ang, bulletSpeed).x,FlxVelocity.velocityFromAngle(ang, bulletSpeed).y);
		eb.scale.set(0.5, 0.5);
		Reg.PS.EBullets.add(eb);
					
		new FlxTimer().start(shootDelay, function(_)
		{
	    justShot = false;
		}, 1);

	}
	

	public function deathShoot()
	{
		var tang = -90;
		var bulletSpeed = 45;
		for (i in 0...9)
		{
			var en = new EnemyBullet(x, y);
			en.velocity.set(FlxVelocity.velocityFromAngle(tang, bulletSpeed).x,FlxVelocity.velocityFromAngle(tang, bulletSpeed).y);
			tang += 45;
			en.scale.set(0.5, 0.5);
			Reg.PS.EBullets.add(en);
		}
	}
}