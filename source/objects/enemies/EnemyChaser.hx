package objects.enemies;

import flixel.FlxG;
import flixel.addons.effects.FlxTrail;
import flixel.util.FlxColor;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.util.FlxTimer;
import objects.items.CoinItem;
import objects.items.DamageUpItem;
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
		loadGraphic(AssetPaths.enemies__png, true, 8, 8);
		animation.add("idle", [12,13],10);
		animation.play("idle");
		deathTimer();

	}
	
	override public function update(elapsed:Float) 
	{
		move();
		
		super.update(elapsed);
	}
	
	private function deathTimer()
	{
		new FlxTimer().start(5, function(_)		{ kill(); }, 1);
	}
	
	
	
	private function move()
	{
	//	angle += 5;
		var aim = new FlxPoint(Reg.PS.player.x, Reg.PS.player.y);
		FlxVelocity.moveTowardsPoint(this, aim, MOVE_SPEED, 0);	
	}
	
	override public function kill() 
	{
		drops = [new DamageUpItem(x,y)];
		dropRate = [0.5];
		dropItem(drops, dropRate);

		
		super.kill();
	}
}