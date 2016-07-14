package objects.enemies;

import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.util.FlxTimer;


class EnemyBlob extends Enemy
{
	var roll:Int;
	var rolled:Bool;
	var delayDirection:Float = 0.1;
	
	public function new(x:Float,y:Float) 
	{
		super(x, y);
		HP = 1;
		roll = FlxG.random.int(0, 100);	
		makeGraphic(16, 16, FlxColor.RED);
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
	
	private function reroll()
	{
	new FlxTimer().start(delayDirection, function(_)
		{
		 rolled = false;
	     roll  = FlxG.random.int(0, 100);	
		}, 1);
	}
	
	private function move()
	{
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