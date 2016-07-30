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
		lifespan = 4;
	    loadGraphic(AssetPaths.items__png, true, 8,8);
		animation.add("static", [5]);
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