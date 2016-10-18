package objects.items;
import objects.Player;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxG;
import objects.weapons.IWeapon;

class RangeItem extends Item
{

	public function new(x:Float, y:Float) 
	{
		super(x, y);
	    loadGraphic(AssetPaths.items__png, true, 8,8);
		animation.add("static", [2,3,4,5,6,7,8],12);
		animation.play("static");
		color = new FlxColor(0xFFFF00FF);
		set_name("RANGE INCREASED");
	}
	
	override function interact(player:Player)
	{
		if (player.RANGE < player.MAX_RANGE)
		{
		var chosenWeapon:IWeapon = Reg.CURRENT_SEED.getObject(Reg.PS.player.get_weapons());
		chosenWeapon.set_range(chosenWeapon.get_range() + 0.1);
		super.interact(player);
		}
	}
}