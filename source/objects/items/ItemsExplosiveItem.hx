package objects.items;
import flixel.util.FlxColor;
import objects.Player;

class ItemsExplosiveItem extends Item
{
	public function new(x:Float, y:Float)
	{
		//maybe this item could set a random curse on the player
		// such as : change controls, make items explosive, make blocks explosive, speed of scroll faster, all turrets can aim towards the player.
		// 
		makeGraphic(8, 8, FlxColor.YELLOW);
		super(x, y);
		set_name("YOU ARE CURSED");
	}
	
	override public function interact(player:Player)
	{
		kill();
		Reg.DESTRUCTIBLE_ITEMS = true;
		Reg.score += 5;
		
		super.interact(player);
	}
	
	
}