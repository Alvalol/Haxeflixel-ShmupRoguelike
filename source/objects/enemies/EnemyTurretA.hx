package objects.enemies;

import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.util.FlxTimer;
import objects.enemies.EnemyBullet;
import flixel.math.FlxPoint;
import objects.enemies.Enemy;
import objects.items.CoinItem;
import objects.items.HealthItem;
import objects.items.HealthMaxItem;
import objects.items.Item;
import objects.Player;
import objects.items.SpeedItem;
import objects.items.MagnetItem;

class EnemyTurretA extends Enemy
{

    private static inline var SCORE_AMOUNT:Int = 100;
	private static inline var SHOOT_SPEED = 200;
	
	private var bullet:EnemyBullet;
	private var justShot:Bool;
	private var shootDelay:Float = 2;
	private var tx:Int;
	private var ty:Int;

	
	public function new(x:Float, y:Float, flip:Bool) 
	{
		super(x, y); // this causes an issue if turret is on ceiling... needs to use ceiling instance variable.
		HP = 1;

        tx = Std.int(x / 8);
        ty = Std.int(y / 8);
		loadGraphic(AssetPaths.turret__png, true, 8, 8);



		
		animation.add("idle", [0]);
		
		animation.add("shoot", [1]);
		animation.play("idle");
		immovable = true;
		solid = true;
		adjustFlip();

	}
	
	override public function update(elapsed:Float)
	{
		if (!justShot && isOnScreen())
			shoot();
		else
		   animation.play("idle");
		   
		//trace(tileIndex);
		checkFloorCeiling();
		//clearBullets();
		super.update(elapsed);
	}
	
	override public function kill():Void
	{
		var drops:Array<Item> = [new HealthItem(x,y), new SpeedItem(x,y), new HealthMaxItem(x,y), new MagnetItem(x,y)];
		dropItem(drops);
		super.kill();
	
	}
	
	private function checkFloorCeiling()
	{
		if ( (Reg.PS.map.loadedMap.getTile(tx, ty - 1) == 0 && flipY) || (Reg.PS.map.loadedMap.getTile(tx, ty + 1) == 0 && !flipY))
		{
			kill();
		}
	}
	
	private function shoot():Void
	{
		// the bullet speed should be a variable that is passed at creation, depending on the flipped value of the enemyTurret
		justShot = true;
		var eb:EnemyBullet = Reg.PS.EBullets.recycle();
	    if (eb == null)
		    eb = new EnemyBullet(x, y);
		
		if (!flipY)
		{
		eb.reset(x + 3, y - 4 );
		eb.velocity.y = -SHOOT_SPEED;
		}
		else
		{
		eb.reset(x + 3, y - 4 );
		eb.velocity.y = SHOOT_SPEED;			
		}
	     Reg.PS.EBullets.add(eb);

		new FlxTimer().start(shootDelay, function(_)
		{
			justShot = false;
			animation.play("shoot");
		}, 1);
		
	}
	
	private function clearBullets()
	{
		if (Reg.PS.EBullets.countLiving() < 0)
		{
			Reg.PS.EBullets.clear();
		}

	}
	private function adjustFlip()
	{
		if (Reg.PS.map.loadedMap.getTile(tx,ty-1) != 0) // not accurate enough
		{
			flipY = true;
		}
		
	}
	

}