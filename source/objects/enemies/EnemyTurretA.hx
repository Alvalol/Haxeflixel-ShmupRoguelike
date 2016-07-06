package objects.enemies;

import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.util.FlxTimer;
import objects.enemies.EnemyBullet;
import flixel.math.FlxPoint;
import flixel.math.FlxVelocity;
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
	private static inline var SHOOT_SPEED = 150;
	
	private var bullet:EnemyBullet;
	private var justShot:Bool;
	private var shootDelay:Float = 2;
	private var tx:Int;
	private var ty:Int;
	private var type:Int;

	
	public function new(x:Float, y:Float, flip:Bool) 
	{
		super(x, y); // this causes an issue if turret is on ceiling... needs to use ceiling instance variable.
		HP = 1;
		type = FlxG.random.int(0, 1);
        tx = Std.int(x / 8);
        ty = Std.int(y / 8);
		loadGraphic(AssetPaths.enemies__png, true, 8, 8);
		
		animation.add("idle", [0,1], 6, true);
		animation.add("shoot", [0, 1, 2, 3, 4, 5, 6, 7,7,7, 8, 8] , 8,false);
		animation.play("idle");
		immovable = true;
		solid = true;
		adjustFlip();
		if (type == 1)
		{
			color = 0xFFFFFF00;
		}

	}
	
	override public function update(elapsed:Float)
	{
		if (!justShot && isOnScreen())
		{
		    animation.play("shoot");
			justShot = true;
		}

		if (animation.curAnim.name == "shoot" && animation.curAnim.curFrame == 6)
			{
				Reg.PS.EBullets.add(shoot());
				animation.play("idle");
			}
			
		for (bullet in Reg.PS.EBullets)
		{
		if (FlxG.overlap(Reg.PS.player, bullet))
		bullet.interact(Reg.PS.player);
		}
	
		
		checkFloorCeiling();

		super.update(elapsed);
	}
		
	private function shoot():EnemyBullet
	{
		// the bullet speed should be a variable that is passed at creation, depending on the flipped value of the enemyTurret

	
		var eb:EnemyBullet = Reg.PS.EBullets.recycle();
	    if (eb == null)
		    eb = new EnemyBullet(x, y);
        
		if (!flipY)
		{
			
		eb.reset(x , y - 1 );
		eb.velocity.y = -SHOOT_SPEED;
		}
		else
		{
		eb.reset(x, y + 1 );
		eb.velocity.y = SHOOT_SPEED;			
		}

		new FlxTimer().start(shootDelay, function(_)
		{
	    justShot = false;
		}, 1);	
		
		if (type == 1)
		{
		var aim = new FlxPoint(Reg.PS.player.x, Reg.PS.player.y);
		FlxVelocity.moveTowardsPoint(eb, aim, 60, 0);
		}
		
		return eb;
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