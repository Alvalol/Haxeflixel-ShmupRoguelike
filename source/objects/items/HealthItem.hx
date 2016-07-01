package objects.items;
import objects.Player;
import flixel.util.FlxColor;
import flixel.FlxSprite;

class HealthItem extends Item
{

	public function new(x:Float,y:Float) 
	{
		super(x,y);
		makeGraphic(8, 8, FlxColor.BLUE);
	}
	
		override public function update(elapsed:Float)
	{
		super.update(elapsed);
	}
	
	override function interact(player:Player)
	{
		if (player.HP < player.MAX_HP)
		{
		player.HP++;
		}

		super.interact(player);
	}
	
}