package objects.items;
import objects.Player;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxG;

class MagnetItem extends Item
{
	// TODO : This item needs to be calibrated properly as the player cannot see its effect as of yet.

	public function new(x:Float, y:Float)
	{
		super(x, y);
		loadGraphic(AssetPaths.items__png, true, 8,8);
		animation.add("static", [27,28,29,30,31,32,33,34],12);
		animation.play("static");
		set_name("MAGNET ACQUIRED");
	}
	
	override public function update(elapsed:Float)
	{
		super.update(elapsed);
	}
	
	override function interact(player:Player)
	{

		Reg.PS.player.set_MAGNET(true);

		super.interact(player);
	}
	
}
