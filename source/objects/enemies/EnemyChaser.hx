package objects.enemies;

import flixel.FlxG;
import flixel.addons.effects.FlxTrail;
import flixel.util.FlxColor;
import flixel.FlxObject;
import flixel.FlxSprite;
import objects.items.CoinItem;
import objects.items.Item;
import objects.items.RangeItem;
import flixel.math.FlxVelocity;
import flixel.math.FlxPoint;

class EnemyChaser extends Enemy
{
	private var MOVE_SPEED = 30;
	private var bTrail:FlxTrail;
	private var trailCreated:Bool = false;

	public function new(x:Float, y:Float) 
	{
		super(x, y);
		HP = 1;
		loadGraphic(AssetPaths.enemies__png, true, 8, 8);
		animation.add("idle", [12,13],10);
		animation.play("idle");

	}
	
	override public function update(elapsed:Float) 
	{
		move();
		if (_appeared && !trailCreated)
		{
			createTrail();
			trailCreated = true;
		}
		
		super.update(elapsed);
	}
	
	
	private function move()
	{
	//	angle += 5;
		var aim = new FlxPoint(Reg.PS.player.x, Reg.PS.player.y);
		FlxVelocity.moveTowardsPoint(this, aim, MOVE_SPEED, 0);	
	}
	
	private function createTrail()
	{
        bTrail = new FlxTrail(this, null, 20, 5, 0.75, 0.05);
		Reg.PS.effects.add(bTrail);
	}
	
	override public function kill() 
	{
		drops = [new RangeItem(x, y)];
		dropRate = [1.0];
		dropItem(drops, dropRate);
		if (trailCreated)
		Reg.PS.effects.remove(bTrail);
		
		super.kill();
	}
}