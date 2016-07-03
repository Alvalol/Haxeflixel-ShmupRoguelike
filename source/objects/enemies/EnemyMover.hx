package objects.enemies;

import flixel.math.FlxPoint;
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
		loadGraphic(AssetPaths.enemies__png, true, 8, 8);
		animation.add("idle", [16,17,18,19,20,21,22], 12, true);
        animation.play("idle");
        scale = new FlxPoint(1.5,1.5);
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

		if (_appeared)
		{
		move();
		}
		super.update(elapsed);		
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