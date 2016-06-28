package objects.items;
import objects.Player;
import flixel.util.FlxColor;
import flixel.FlxSprite;


class HealthMaxItem extends Item
{

	public function new(x:Float, y:Float) 
	{
		super(x, y);
		makeGraphic(8, 8, FlxColor.PINK, true);
	}
	
	
	override function interact(player:Player)
	{
		player.MAX_HP ++; // not limited for now, but might have to in the future
		player.HP = player.MAX_HP;
		super.interact(player);
	}
}