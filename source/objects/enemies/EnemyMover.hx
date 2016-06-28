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

	public function new(x:Float, y:Float) 
	{
		HP = 1;
		super(x, y);
		makeGraphic(8, 8, FlxColor.RED);
	
	}
	
    override public function update(elapsed:Float)
	{
		super.update(elapsed);
		move();
	}
	override public function kill():Void
	{
		drops = [new HealthItem(x, y)];
		dropItem(drops);
		super.kill();
	}
	
	private function move()
	{
		sinfact += .08 * Math.PI;
		y = Math.sin(sinfact);
		x -= 0.5;	
	}
	
}