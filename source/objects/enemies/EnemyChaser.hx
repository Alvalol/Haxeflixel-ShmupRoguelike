package objects.enemies;

import flixel.FlxG;
import flixel.addons.effects.FlxTrail;
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
	private var bTrail:FlxTrail;
	private var trailed:Bool = false;

	public function new(x:Float, y:Float) 
	{
		super(x, y);
		HP = 1;
		makeGraphic(8, 8, FlxColor.LIME);

	}
	
	override public function update(elapsed:Float) 
	{
		move();
		if (_appeared && !trailed)
		{
			createTrail();
			trailed = true;
		}
		
		super.update(elapsed);
	}
	
	
	private function move()
	{
		angle += 5;
		var aim = new FlxPoint(Reg.PS.player.x, Reg.PS.player.y);
		FlxVelocity.moveTowardsPoint(this, aim, MOVE_SPEED, 0);	
	}
	
	private function createTrail()
	{
        bTrail = new FlxTrail(this, null, 10, 2, 0.75, 0.09);
		Reg.PS.effects.add(bTrail);
	}
	
	override public function kill() 
	{
		var drops:Array<Item> = [new RangeItem(x,y)];
		dropItem(drops);
		Reg.PS.effects.remove(bTrail);
		super.kill();
	}
}