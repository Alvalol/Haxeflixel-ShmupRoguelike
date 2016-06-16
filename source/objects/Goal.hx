package objects;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.math.FlxPoint;
import flixel.util.FlxColor;
import states.MenuState;

/**
 * ...
 * @author Alvarop
 */
class Goal extends FlxSprite
{

	public function new(x:Float,y:Float) 
	{
		super(x, y);
		solid = true;
		immovable = true;
		makeGraphic(2, FlxG.height * 2, FlxColor.TRANSPARENT);
	}
	
	public function reach(player:Player)
	{
		solid = false;
		Reg.pause = true;
		player.velocity.x = 0;
		player.acceleration.x = 0;
		//FlxG.switchState(new MenuState() );		
	}
	
}