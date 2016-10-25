package objects.enemies;

import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxObject;
import objects.items.AntidoteItem;
import objects.items.HealthItem;
import objects.items.ImmunityWallItem;
import objects.items.Item;
import flixel.util.FlxTimer;
import flixel.math.FlxMath;
import objects.items.ItemsExplosiveItem;
import objects.items.SpeedDownItem;

class EnemyMinion extends Enemy
{
	public var Spawner:EnemySpawner;
	public var direction:Float;

	private var changeDirectionDelay:Float = Reg.CURRENT_SEED.float(1.5, 2);
	private var directionChanged:Bool;
	
	public function new(x:Float,y:Float) 
	{
		super(x, y);
		loadGraphic(AssetPaths.enemies__png, true, 8, 8);
		animation.add("idle", [14, 15], 16, true);
		animation.play("idle");
		HP = 1;
		changeDirection();

	}
	
	override public function update(elapsed:Float) 
	{
		if (_appeared)
		     move();
			 
		collisions();
		super.update(elapsed);
	}
	
	private function move()
	{
		if (directionChanged)
		{
			moveLeft();
		}
		else
		{
			moveUp();
		}	
	}
	
	private function changeDirection()
	{
		new FlxTimer().start(changeDirectionDelay, function(_)
		{
	    directionChanged = true;
		}, 1);
	}
	
	override private function collisions()
	{	
	  var dist = Std.int(Reg.PS.player.y) - Std.int(y);
      if (FlxG.collide(Reg.PS.enemies, this) || (FlxMath.absInt(dist) < 3 && Reg.PS.player.x < x) && !FlxG.overlap(Spawner,this))
		  
			directionChanged = true;
			
	  if (directionChanged)
	  {
		  // should die if hits a wall
		if (FlxG.overlap(Reg.PS.blocks, this) || (FlxG.collide(Reg.PS.map, this)))
		   kill();
	  }
	  
	  if (FlxG.collide(Reg.PS.enemies, this))
	   kill();
		   
		super.collisions();
	}
	
	private function moveUp()
	{
		y -= (1 * direction);
	}
	
	private function moveLeft()
	{
		velocity.x =  -120;
	}
	
	override public function kill() 
	{
        drops = [new HealthItem(x, y)];
	    dropRate = [0.25];
		dropItem(drops,dropRate);
		Spawner.minions.remove(this);
		super.kill();
	}
	
}