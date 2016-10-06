package objects.items;
import objects.Player;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxG;

class SpeedItem extends Item
{

	public function new(x:Float, y:Float) 
	{
	    super(x, y);
	    _lifespan = 4;
		loadGraphic(AssetPaths.items__png, true, 8,8);
		animation.add("static", [2,3,4,5,6,7,8],12);
		animation.play("static");
		set_name("SPEED UP");
	}
	
	override function interact(player:Player)
	{
		if (player.HOR_MOVE_SPEED < player.MAX_HOR_MOVE_SPEED 
		    && player.VERT_MOVE_SPEED < player.MAX_VERT_MOVE_SPEED)
			{
				player.HOR_MOVE_SPEED += 10;
				player.VERT_MOVE_SPEED += 10;
				player.maxVelocity.set(player.HOR_MOVE_SPEED, player.VERT_MOVE_SPEED);
			}
			
		super.interact(player);
		
	}
	
}