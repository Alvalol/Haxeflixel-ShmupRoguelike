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
		loadGraphic(AssetPaths.items__png, true, 8,8);
		animation.add("static", [2,3,4,5,6,7,8],12);
		animation.play("static");
	}
	
	override public function interact(player:Player)
	{
		if (player.SHOT_MOD < player.MAX_SHOTMOD) player.SHOT_MOD += 1;
		super.interact(player);
	}
	
}