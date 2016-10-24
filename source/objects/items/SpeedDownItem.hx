package objects.items;
import objects.Player;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxG;

class SpeedDownItem extends Item
{

	public function new(x:Float, y:Float) 
	{
	    super(x, y);
		loadGraphic(AssetPaths.items__png, true, 8,8);
		animation.add("static", [2,3,4,5,6,7],12);
		animation.play("static");
		set_name("SPEED DOWN");
	}
	
	override function interact(player:Player)
	{
		if (player.HOR_MOVE_SPEED > 0
		    && player.VERT_MOVE_SPEED > 0)
			{
				player.HOR_MOVE_SPEED -= 10;
				player.VERT_MOVE_SPEED -= 10;
				player.maxVelocity.set(player.HOR_MOVE_SPEED, player.VERT_MOVE_SPEED);
			}
			
		super.interact(player);
		
	}
	
}