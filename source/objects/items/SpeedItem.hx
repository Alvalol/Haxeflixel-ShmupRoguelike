package objects.items;
import objects.Player;
import flixel.util.FlxColor;
import flixel.FlxSprite;

class SpeedItem extends Item
{

	public function new(x:Float, y:Float) 
	{
	  super(x, y);
	  makeGraphic(8, 8, FlxColor.BROWN);
	  
		
	}
	
	override public function update(elapsed:Float)
	{
		super.update(elapsed);
	}
	
	override function interact(player:Player)
	{
		if (player.HOR_MOVE_SPEED < player.MAX_HOR_MOVE_SPEED 
		    && player.VERT_MOVE_SPEED < player.MAX_VERT_MOVE_SPEED)
			{
				player.HOR_MOVE_SPEED += 5;
				player.VERT_MOVE_SPEED += 5;
				player.maxVelocity.set(player.HOR_MOVE_SPEED, player.VERT_MOVE_SPEED);
			}

		super.interact(player);
		
	}
	
}