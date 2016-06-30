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
		if (player.MAX_HP < player.MAX_POSSIBLE_HP)
		{
		player.MAX_HP ++;
		player.HP = player.MAX_HP;
		super.interact(player);
		}
	}
}