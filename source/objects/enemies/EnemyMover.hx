package objects.enemies;

import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxObject;
import objects.items.Item;
import objects.items.HealthItem;
import flixel.math.FlxMath;


class EnemyMover extends Enemy
{
	private var sinfact:Float = 0;
	private var factor:Int = 0;
	private var MOVE_SPEED:Float = 0.5;

	public function new(x:Float, y:Float) 
	{
	    super(x, y);
		HP = 1;
	    chooseDirection();
		makeGraphic(8, 8, FlxColor.PURPLE);	
		immovable = true;
	}
	
	public function chooseDirection()
	{
		while (factor == 0)
		{
			factor = FlxG.random.int( -1, 1);
		}
	}
    override public function update(elapsed:Float)
	{
		super.update(elapsed);
		if (_appeared)
		{
		move();
		}
		
	}
	
	override public function kill():Void
	{	
		drops = [new HealthItem(x, y)];
		dropItem(drops);
		super.kill();
	}
	
	private function move()
	{
		sinfact += factor * .02 * Math.PI;
		y += Math.sin(sinfact);
		x -= MOVE_SPEED;	
	}
	
}