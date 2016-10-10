package objects.items;
import flixel.util.FlxColor;
import objects.Player;
import objects.weapons.IWeapon;

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
		var chosenWeapon:IWeapon = Reg.CURRENT_SEED.getObject(Reg.PS.player.get_weapons());
		chosenWeapon.set_damage(chosenWeapon.get_damage() +1);
		super.interact(player);
	}
	
}