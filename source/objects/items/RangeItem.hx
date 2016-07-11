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
		makeGraphic(8, 8, FlxColor.GREEN); // needs graphic
		lifespan = 4;
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