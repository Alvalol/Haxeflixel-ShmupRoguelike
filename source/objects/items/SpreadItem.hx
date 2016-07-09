package objects.items;
import objects.Player;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxG;


class SpreadItem extends Item
{

	public function new(x:Float, y:Float) 
	{
		super(x, y);
		makeGraphic(8, 8, FlxColor.YELLOW);
	}
	
	override public function interact(player:Player)
	{
		if (player.SHOT_MOD < player.MAX_SHOTMOD) player.SHOT_MOD += 1;
		super.interact(player);
	}
	
}