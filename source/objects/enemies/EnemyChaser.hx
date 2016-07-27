package objects.enemies;

import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.FlxObject;
import flixel.FlxSprite;
import objects.items.Item;
import objects.items.RangeItem;
import flixel.math.FlxVelocity;
import flixel.math.FlxPoint;

class EnemyChaser extends Enemy
{
	private var MOVE_SPEED = 30;

	public function new(x:Float, y:Float) 
	{
		super(x, y);
		HP = 1;
		makeGraphic(8, 8, FlxColor.ORANGE);
	}
	
	override public function update(elapsed:Float) 
	{
		move();
		super.update(elapsed);
	}
	
	
	private function move()
	{
		var aim = new FlxPoint(Reg.PS.player.x, Reg.PS.player.y);
		FlxVelocity.moveTowardsPoint(this, aim, MOVE_SPEED, 0);	
	}
	
	override public function kill() 
	{
		var drops:Array<Item> = [new RangeItem(x,y)];
		dropItem(drops);
		super.kill();
	}
}