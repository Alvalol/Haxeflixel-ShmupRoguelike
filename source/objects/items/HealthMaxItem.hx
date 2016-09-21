package objects.items;
import objects.Player;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxG;

class HealthMaxItem extends Item
{
	// Design wise : maybe not refill all health or this item becomes too powerful.

	public function new(x:Float, y:Float) 
	{
		super(x, y);
		_lifespan = 4;
		loadGraphic(AssetPaths.items__png, true, 8,8);
		animation.add("static", [2,3,4,5,6,7,8],12);
		animation.play("static");
		color = new FlxColor(0xFF00FF00);
	}
	
	override function interact(player:Player)
	{
		if (player.MAX_HP < player.MAX_POSSIBLE_HP)
		{
		player.MAX_HP ++;
		player.HP = player.MAX_HP;
		}
		
		super.interact(player);
	}
}