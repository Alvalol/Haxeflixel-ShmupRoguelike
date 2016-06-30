package objects;

import flixel.FlxSprite;
import flixel.FlxObject;
import flixel.FlxG;
import flixel.math.FlxPoint;
import flixel.addons.effects.FlxTrail;
import flixel.util.FlxColor;
import objects.items.CoinItem;


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
		var ttile = Reg.PS.map.loadedMap.getTile(tx, ty);
		
		if (!isOnScreen() || FlxG.overlap(Reg.PS.map.loadedMap,this) && ttile != 0)
		{
			
			if (ttile == 1)
			{
				Reg.PS.map.loadedMap.setTile(tx, ty, 0, true);
				if (FlxG.random.int(0, 100) > 50)
				{
				var newCoin = new CoinItem(x,y); // must fix to spawn it ON the midpoint of the tile
				Reg.PS.items.add(newCoin); // must recycle
				}
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