package objects.items;
import objects.Player;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxG;


class SpreadItem extends Item
{
	/* This item does not currently function correctly. And I'm planning on implementing a "stack weapon" system where effects stack. So please ignore it for the moment.
	 */
	
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