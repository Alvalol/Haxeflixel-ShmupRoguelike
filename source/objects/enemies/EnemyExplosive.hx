package objects.enemies;

import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxObject;
import objects.enemies.enemyobjects.EnemyExplosiveExplosion;
import objects.items.Item;
import objects.items.HealthItem;
import flixel.math.FlxMath;

class EnemyExplosive extends Enemy
{

	private var MOVE_SPEED:Float = 0.5;
	
	public function new(x:Float, y :Float) 
	{
		super(x, y);
		HP = 1;
		immovable = true;
		loadGraphic(AssetPaths.enemies__png, true, 8, 8);
		animation.add("idle", [8,9,10,11], 12, true);
        animation.play("idle");
	}
	
	override public function update(elapsed:Float)
	{
		if (_appeared)
		{
		move();
		reachedScrollx();
		}
		
		super.update(elapsed);	
	}
	
	
		override public function kill():Void
	{	
		drops = [new HealthItem(x, y)];
		dropRate = [1.0];
		dropItem(drops,dropRate);
		super.kill();
	}
	
	
	private function move()
	{
		x -= MOVE_SPEED;
	}
	
	
	private function reachedScrollx()
	{

		if (x <= FlxG.camera.scroll.x - width + 10)
		{
			var bomb = new EnemyExplosiveExplosion(x,y);
			    Reg.PS.EExplosions.add(bomb);
			    kill();
				FlxG.camera.shake(0.009, 1.5);

		}
	}
	
}