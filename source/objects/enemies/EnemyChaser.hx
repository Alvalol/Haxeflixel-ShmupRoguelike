package objects.enemies;

import flixel.FlxG;
import flixel.addons.effects.FlxTrail;
import flixel.math.FlxMath;
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
		HP = 4;


		loadGraphic(AssetPaths.enemies__png, true, 8, 8);
		animation.add("default", [12,13],6);
		animation.play("default");
		scale.set(2, 2);
		updateHitbox();
	}
	
	override public function update(elapsed:Float) 
	{
		move();
		super.update(elapsed);
	}
	
	
	
	private function move()
	{
	//	Set angle to look at player
		var aim = new FlxPoint(Reg.PS.player.x, Reg.PS.player.y);
		FlxVelocity.moveTowardsPoint(this, aim, MOVE_SPEED, 0);	
	}
	
	override public function kill() 
	{
		drops = [new DamageUpItem(x,y)];
		dropRate = [0.75];
		dropItem(drops, dropRate);

		
		super.kill();
	}
}