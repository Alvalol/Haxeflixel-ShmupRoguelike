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
import objects.items.HealthMaxItem;

class EnemyMultishotDeath extends Enemy
{
	
	private var justShot:Bool;
	private var shootDelay:Float = 0.2;
	private var _angle:Int = 180;
	private var bulletSpeed = 40;

	public function new(x:Float, y:Float) 
	{
		super(x, y);
		HP = 3;
		loadGraphic(AssetPaths.enemies__png, true, 8, 8, true);
		animation.add("default", [18, 19, 20], 8, true);
		//setGraphicSize(16, 16);
		animation.play("default");
		updateHitbox();
	}
	
	override public function update(elapsed:Float) 
	{
		if (!justShot && isOnScreen(FlxG.camera))
			shoot();


		if (!Reg.pause && Reg.hatched)
		super.update(elapsed);
	}
	
	override public function kill()
	{
		drops = [new HealthItem(x, y), new HealthMaxItem(x,y)];
		dropRate = [0.5,0.1];
		dropItem(drops, dropRate);
		new FlxTimer().start(0.1, function(_) { deathShot(); }, 1);
		super.kill();
	}
	
	private function shoot()
	{
		justShot = true;
		
		var eb = Reg.PS.EBullets.recycle(EnemyBullet);
		if (eb == null) eb = new EnemyBullet(x , y);
		
		eb.reset(x + 5, y);
		eb.scale.set(0.75,0.75);

		_angle += 90;
		angle = _angle;
		eb.velocity.set(FlxVelocity.velocityFromAngle(_angle, bulletSpeed).x,FlxVelocity.velocityFromAngle(_angle, bulletSpeed).y);
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
			eb = new EnemyBullet(x, y);
			eb.reset(x, y);
		
			eb.velocity.set(FlxVelocity.velocityFromAngle(tang, bulletSpeed).x,FlxVelocity.velocityFromAngle(tang, bulletSpeed).y);
			tang += 90;
			eb.scale.set(0.5,0.5);
			Reg.PS.EBullets.add(eb);
		}
	}
}