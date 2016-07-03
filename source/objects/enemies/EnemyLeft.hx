package objects.enemies;

import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.math.FlxMath;
import objects.items.SpeedItem;

class EnemyLeft extends Enemy
{
	
	private var MOVE_SPEED = 1;
	private var sinfact:Float = 1;
	private var factor:Int = 0;
	private var updatedPosition:Bool = false;
	

	public function new(x:Float, y:Float) 
	{
		super(x, y);
		HP = 1;
		loadGraphic(AssetPaths.enemies__png, true, 8, 8);
		animation.add("idle", [8,9,10,11], 12, true);
        animation.play("idle");
		flipX = true;
		
	}
	
	override public function update(elapsed:Float) 
	{

		super.update(elapsed);
		
		if (x - FlxG.camera.scroll.x < FlxG.width && !updatedPosition)
		{
			reset(FlxG.camera.scroll.x - 50, y);
			updatedPosition = true;
		}
		
		if (_appeared)
		{
			move();
		}
	}

	override public function kill():Void
	{	
		drops = [new SpeedItem(x, y)];
		dropItem(drops);
		super.kill();
	}
	
	private function move()
	{
		x += MOVE_SPEED;
	}
}