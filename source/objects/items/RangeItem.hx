package objects.items;
import objects.Player;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxG;


class RangeItem extends Item
{

	public function new(x:Float, y:Float) 
	{
		super(x, y);
		_lifespan = 4;
	    loadGraphic(AssetPaths.items__png, true, 8,8);
		animation.add("move", [2,3,4,5,6,7,8],12);
		animation.play("static");
	}
	
	override function interact(player:Player)
	{
		if (player.RANGE < player.MAX_RANGE)
		{
			player.RANGE += 0.1;
		}
		
		super.interact(player);
	}
}