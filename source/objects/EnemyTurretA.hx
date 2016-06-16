package objects;

import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.util.FlxTimer;
import objects.EnemyBullet;
import flixel.math.FlxPoint;

class EnemyTurretA extends Enemy
{

    private static inline var SCORE_AMOUNT:Int = 0;
	private static inline var SHOOT_SPEED = 250;
	
	private var bullet:EnemyBullet;
	private var justShot:Bool;
	private var shootDelay:Float = 2;
	
	private  var ceiling:Bool;
	
	
	
	public function new(x:Float, y:Float, flip:Bool) 
	{
		super(x, y);
		HP = 1;
	    ceiling = (flip ? true : false);
		loadGraphic(AssetPaths.turret__png, true, 8, 8);
		animation.add("idle", [0]);
		animation.add("shoot", [1]);
		animation.play("idle");
		width = 6;
		height = 6;
		offset.x = 2;
		offset.y = 2;
		centerOffsets();
		immovable = true;
		solid = true;
		
		//if (ceiling > 0)
		//   flipY = true;
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
		// the bullet speed should be a variable that is passed at creation, depending on the flipped value of the enemyTurret
		justShot = true;
		var eb:EnemyBullet = Reg.PS.EBullets.recycle();
	    if (eb == null)
		    eb = new EnemyBullet(x, y);
		
		if (!ceiling)
		{
		eb.reset(x + 2, y - 4 );
		eb.velocity.y = -SHOOT_SPEED;
		}
		else
		{
		eb.reset(x + 2, y - 4 );
		eb.velocity.y = SHOOT_SPEED;			
		}
	     Reg.PS.EBullets.add(eb);

		new FlxTimer().start(shootDelay, function(_)
		{
			justShot = false;
			animation.play("shoot");
		}, 1);
		
	}
	
}