package objects.items;
import objects.Player;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxG;

class MagnetItem extends Item
{
	
	// This item needs to be calibrated properly pls.

	public function new(x:Float, y:Float)
	{
		super(x, y);
		lifespan = 4;
		loadGraphic(AssetPaths.items__png, true, 8,8);
		animation.add("static", [3]);
		animation.play("static");
	}
	
		override public function update(elapsed:Float)
	{
		super.update(elapsed);
	}
	
	override function interact(player:Player)
	{
		if (player.MAGNET < player.MAX_MAGNET)
		{
		player.MAGNET += 50;
		}
		
		if (player.MAGNET_FORCE < player.MAX_MAGNET_FORCE)
		{
		     player.MAGNET_FORCE += 50;
		}

		super.interact(player);
	}
	
}
