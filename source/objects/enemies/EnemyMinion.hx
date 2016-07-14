package objects.enemies;

import flixel.FlxSprite;
import flixel.addons.effects.FlxTrail;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.util.FlxTimer;
import flixel.math.FlxMath;

class EnemyMinion extends Enemy
{
	public var Spawner:EnemySpawner;
	private var changeDirectionDelay:Float = FlxG.random.float(1.5, 2);
	private var directionChanged:Bool;
	public var direction:Float;
	private var trailAdded:Bool = false;
	private var bTrail:FlxTrail;
	
	public function new(x:Float,y:Float) 
	{
		super(x, y);
		makeGraphic(8, 8, FlxColor.ORANGE);
		HP = 1;
		changeDirection();
	//	solid = true;
		bTrail = new FlxTrail(this, null, 3, 2, 0.5, 0.05);
	}
	
	override public function update(elapsed:Float) 
	{
		if (_appeared)
		     move();
			 
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
      if (FlxG.collide(Reg.PS.map.loadedMap, this) || FlxG.collide(Reg.PS.enemies,this) || (FlxMath.absInt(dist) < 3 && Reg.PS.player.x < x))
			directionChanged = true;
			
	  if (directionChanged)
	  {
		  // should die if hits a wall
		if (FlxG.overlap(Reg.PS.blocks, this))
		   kill();
	  }
		   
		super.collisions();
	}
	
	private function moveUp()
	{
		y -= (1 * direction);
	}
	
	private function moveLeft()
	{
		velocity.x =  -120;
		
		if (!trailAdded)
		{
		Reg.PS.effects.add(bTrail);
		trailAdded = true;
		}
	}
	
	override public function kill() 
	{
		Spawner.minions.remove(this);
		Reg.PS.effects.remove(bTrail);
		super.kill();
	}
	
}