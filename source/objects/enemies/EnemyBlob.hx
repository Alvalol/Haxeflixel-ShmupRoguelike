package objects.enemies;

import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.util.FlxTimer;
import objects.items.HealthItem;


class EnemyBlob extends Enemy
{
	var roll:Int;
	var rolled:Bool;
	var delayDirection:Float = 0.5;
	var tsize:Float = 32; 
	var mtsize:Float = 8;
	
	public function new(x:Float,y:Float, _tsize:Float) 
	{
		super(x, y);
		HP = 1;
		solid = true;
		tsize = _tsize;
		roll = FlxG.random.int(0, 100);
		makeGraphic(Std.int(tsize), Std.int(tsize), FlxColor.RED);
	}
	
	override public function update(elapsed:Float) 
	{
		if (!rolled)
		{
		rolled = true;
		reroll();
		}
		trace(roll);
		move();
		
		super.update(elapsed);
	}
	
	private function mitosis()
	{
		var m1 = new EnemyBlob(x - tsize / 2, y + FlxG.random.int(1,3), tsize - 4);
		var m2 = new EnemyBlob(x + tsize / 2, y + FlxG.random.int(1,3), tsize - 4);
		Reg.PS.enemies.add(m1);
		Reg.PS.enemies.add(m2);
	}
	
	override public function kill()
	{
		super.kill();
		drops = [new HealthItem(x,y)];
		dropItem(drops);
		if (tsize >= mtsize)
		{
		mitosis();
		}
	}
	
	private function reroll()
	{
	new FlxTimer().start(delayDirection, function(_)
		{
		 rolled = false;
	     roll  = FlxG.random.int(0, 100);	
		}, 1);
	}
	
	private function boundaries()
	{
		if (FlxG.collide(Reg.PS.map.loadedMap, this))
		{
			reroll();
		}
	}
	
	private function move()
	{
		boundaries();
		// this is dum
		if (roll < 25)
		    velocity.x = 20;
		if (roll < 50 && roll > 25)
		    velocity.x = -25;
		if (roll < 75 && roll > 50)
		    velocity.y = 20;
		if (roll < 100 && roll > 75)
		    velocity.y = -20;
	}
}