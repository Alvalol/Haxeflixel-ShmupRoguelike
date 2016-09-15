package objects.items;
import objects.Player;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxG;

class HealthItem extends Item
{

	public function new(x:Float,y:Float) 
	{
		super(x, y);
		_lifespan = 4;
		loadGraphic(AssetPaths.items__png, true, 8,8);
		animation.add("move", [7,8,9,10,11], 12);
		animation.play("move");
	}
	
	override function interact(player:Player)
	{
		if (player.HP < player.MAX_HP)
		player.HP++;
		
		super.interact(player);
	}
	
}