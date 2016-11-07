package objects.items;
import objects.Player;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxG;
import objects.weapons.IWeapon;


class SpreadItem extends Item
{
	
	public function new(x:Float, y:Float) 
	{
		super(x, y);
		loadGraphic(AssetPaths.items__png, true, 8,8);
		animation.add("static", [2,3,4,5,6],12);
		animation.play("static");
		set_name("SPREAD ACQUIRED");
	}
	
	override public function interact(player:Player)
	{
		kill();
		var chosenWeapon:IWeapon = Reg.CURRENT_SEED.getObject(Reg.PS.player.get_weapons().filter(function(weapon) return weapon.get_canSpread()));
		if (chosenWeapon.get_spread() < chosenWeapon.get_maxSpread())
		chosenWeapon.set_spread(chosenWeapon.get_spread() +1);
		
		super.interact(player);
	}
	
}