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
		var tx:Int = Std.int(x / 8);
		var ty:Int = Std.int(y / 8);
		
		if (!isOnScreen() || FlxG.overlap(Reg.PS.map.loadedMap,this) && Reg.PS.map.loadedMap.getTile(tx, ty) != 0)
		{
			if (Reg.PS.map.loadedMap.getTile(tx, ty) == 1)
			{
				Reg.PS.map.loadedMap.setTile(tx, ty, 0, true);
				Reg.score += 1;
			}
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


}