package objects;

import flixel.FlxSprite;
import flixel.FlxObject;
import flixel.FlxG;
import flixel.math.FlxPoint;
import flixel.addons.effects.FlxTrail;
import flixel.util.FlxColor;


class PlayerBullet extends FlxSprite
{
	
	private static inline var MOVE_SPEED = 250;
	
	

	public function new(x:Float, y:Float) 
	{
		super(x, y);
		makeGraphic(5, 1, FlxColor.WHITE, false);
	}
	
	override public function update(elapsed:Float)
	{	
		if (!isOnScreen() || FlxG.collide(this, Reg.PS.map.loadedMap))
		{
			
			//var tempTile = Reg.PS.map.loadedMap.getTileIndexByCoords(new FlxPoint(x, y));
			kill();
		}
		else
		    move();
			
		super.update(elapsed);
	}
	
	public function move()
	{
		velocity.x = MOVE_SPEED;
		
	}
	
	override public function kill():Void
	{
		alive = false;
		exists = false;
	
	}

}