package objects.items;

import flixel.util.FlxColor;
import objects.Player;
import objects.weapons.LaserWeapon;

class WeaponLaserItem extends Item
{

	public function new(x:Float,y:Float) 
	{
		super(x, y);
		makeGraphic(8, 8, FlxColor.PURPLE);
		set_name("DESTROYER ACQUIRED");
	}
	
	override function interact(player:Player)
	{
		player.add_weapon(new LaserWeapon(x, y));
		super.interact(player);
	}
	
}