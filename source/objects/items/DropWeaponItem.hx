package objects.items;

import flixel.util.FlxColor;
import objects.Player;
import objects.weapons.BackWeapon;
import objects.weapons.DropWeapon;

class DropWeaponItem extends Item
{

	public function new(x:Float, y:Float) 
	{
		super(x, y);
		makeGraphic(8, 8, FlxColor.PINK);
		set_name("DROP WEAPON ACQUIRED");
	}
	
	override function interact(player:Player)
	{
		player.add_weapon(new DropWeapon(x, y));
		super.interact(player);
	}
	
}