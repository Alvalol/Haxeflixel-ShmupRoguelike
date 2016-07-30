package objects.enemies;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.util.FlxTimer;
import flixel.FlxSprite;
import flixel.math.FlxPoint;
import flixel.util.FlxColor;

class EnemyWorm extends Enemy
{
	private var aboveGround:Bool;
	private var delay:Int = 1;
	private var maxBottom:FlxPoint;
	private var maxTop:FlxPoint;

	public function new(x:Float, y:Float)
	{
		super(x, y);
		HP = 1;
		makeGraphic(8, 16, FlxColor.LIME);
		aboveTimer();
		aboveGround = false;
		maxBottom = new FlxPoint(x, y + 16);
		maxTop = new FlxPoint(x, y - 16);
	}
	
	override public function update(elapsed:Float) 
	{
		super.update(elapsed);
		if (aboveGround)
		{
			underTimer();
		}
		else
		{
			aboveTimer();
		}
	}
	
	private function underTimer()
	{
		new FlxTimer().start(delay, under, 1);	
	}
	
	private function aboveTimer()
	{
	   new FlxTimer().start(delay, above, 1);
	}
	
	private function above(timer:FlxTimer)
	{
		aboveGround = true;
		if (y+16 >= maxTop.y)
		{
		y -= 1;
		}
	}

	private function under(timer:FlxTimer)
	{
		aboveGround = false;
		if (y <= maxBottom.y)
		{
		y += 1;
		};
	}
	
}