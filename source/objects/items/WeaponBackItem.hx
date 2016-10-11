package objects.items;

import flixel.util.FlxColor;
import objects.Player;
import objects.weapons.BackWeapon;

class WeaponBackItem extends Item
{

	public function new(x:Float, y:Float) 
	{
		super(x, y);
		makeGraphic(8, 8, FlxColor.WHITE);
		set_name("BACKWARDS SHOOTING ACQUIRED");
	}
	
	override function interact(player:Player)
	{
		player.add_weapon(new BackWeapon(x, y));
		super.interact(player);
	}
	
}