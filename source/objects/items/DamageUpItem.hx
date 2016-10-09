package objects.items;
import flixel.util.FlxColor;
import objects.Player;

class DamageUpItem extends Item
{
	
	
	
	public function new(x:Float,y:Float) 
	{
		super(x, y);
		makeGraphic(8, 8, FlxColor.PINK);
		set_name("WEAPON DAMAGE INCREASED");
	}
	
	override public function interact(player:Player)
	{
		kill();
		/*
		if (Reg.PS.player.get_WEAPON_DMG() < Reg.PS.player.get_MAX_WEAPON_DMG())
		{
		   Reg.PS.player.increaseWeaponDamage();	
		}*/
		super.interact(player);
	}
	
}