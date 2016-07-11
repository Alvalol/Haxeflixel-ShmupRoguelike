package objects;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.math.FlxPoint;
import flixel.util.FlxColor;
import states.MenuState;

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
		trace("YOU WIN");
		//FlxG.switchState(new MenuState() );		
	}
	
}