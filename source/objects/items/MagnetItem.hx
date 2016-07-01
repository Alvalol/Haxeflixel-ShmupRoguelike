package objects.items;
import objects.Player;
import flixel.util.FlxColor;
import flixel.FlxSprite;


class MagnetItem extends Item
{

	public function new(x:Float, y:Float)
	{
		super(x, y);
		makeGraphic(8, 8, FlxColor.GREEN);
	}
	
		override public function update(elapsed:Float)
	{
		super.update(elapsed);
	}
	
	override function interact(player:Player)
	{
		if (player.MAGNET < player.MAX_MAGNET)
		{
		player.MAGNET += 30;
		}
		
		if (player.MAGNET_FORCE < player.MAX_MAGNET_FORCE)
		{
		     player.MAGNET_FORCE += 10;
		}

		super.interact(player);
	}
	
}
