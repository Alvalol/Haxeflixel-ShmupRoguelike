package objects.items;

import flixel.util.FlxColor;
import objects.Player;


class ImmunityWallItem extends Item
{

	public function new(x:Float,y:Float) 
	{
		super(x, y);
		makeGraphic(8, 8, FlxColor.WHITE);
		set_name("WALL IMMUNITY");
	}
	
	override function interact(player:Player)
	{
		kill();
		Reg.score += 5;
		player.set_immuneToWalls(true);
	}
	
	
}