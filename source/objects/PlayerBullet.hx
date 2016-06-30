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
				var newCoin:CoinItem =  Reg.PS.coins.recycle(CoinItem);
				
				if (newCoin == null) 
				    newCoin = new CoinItem(x, y);
				newCoin.reset(x , y);
				
				Reg.PS.coins.add(newCoin);
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