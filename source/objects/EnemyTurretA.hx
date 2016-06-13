package objects;

import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.util.FlxTimer;
import objects.EnemyBullet;

class EnemyTurretA extends Enemy
{

    private static inline var SCORE_AMOUNT:Int = 0;
	private static inline var HP:Int = 4;
	private static inline var SHOOT_SPEED = 250;
	
	private var bullet:EnemyBullet;
	private var justShot:Bool;
	private var shootDelay:Float = 2;
	
	
	
	public function new(x:Float, y:Float, ceiling:Bool) 
	{
		super(x, y);
		loadGraphic(AssetPaths.turret__png, true, 8, 8);
		animation.add("idle", [0]);
		animation.add("shoot", [1]);
		animation.play("idle");
		//flipY = ceiling;
		immovable = true;
		solid = true;
	}
	
	
	override public function update(elapsed:Float)
	{
		if (!justShot)
			shoot();
		else
		   animation.play("idle");
		super.update(elapsed);
	 

	}
	
	private function shoot():Void
	{
		justShot = true;
		var eb:EnemyBullet = Reg.PS.EBullets.recycle();
	    if (eb == null)
		    eb = new EnemyBullet(x, y);
		eb.reset(x, y);
		eb.velocity.y = -SHOOT_SPEED;
	    Reg.PS.EBullets.add(eb);
		new FlxTimer().start(shootDelay, function(_)
		{
			justShot = false;
			animation.play("shoot");
		}, 1);
		
	}
	
}