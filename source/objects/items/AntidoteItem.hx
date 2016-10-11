package objects.items;
import flixel.util.FlxColor;

class AntidoteItem extends Item
{

	public function new(x:Float, y:Float) 
	{
		super(x, y);
		makeGraphic(8, 8, FlxColor.GREEN);
		set_name("YOU ARE CURED");
	}
	
	override public function interact(player:Player)
	{
		kill();
		Reg.CURSED = false;
		Reg.score += 100;
		
		super.interact(player);
	}
	
	
}