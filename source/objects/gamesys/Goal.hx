package objects.gamesys;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.math.FlxPoint;
import flixel.util.FlxColor;
import states.MenuState;

class Goal extends FlxSprite
{

	public function new(x:Float) 
	{
		super(x, 0);
		solid = true;
		immovable = true;
		visible = true;
		makeGraphic(10, FlxG.height * 2, FlxColor.RED);
	}
	
	override public function update(elapsed:Float):Void 
	{
		collisions();
		super.update(elapsed);
	}
	
	private function collisions()
	{
		if (FlxG.overlap(this, Reg.PS.player))
		{
			reached(Reg.PS.player);
		}
	}
	private function reached(player:Player)
	{
		solid = false;
		Reg.pause = true;
		trace("YOU WIN");
		FlxG.switchState(new MenuState());	// placeholder as there is only one level in the game currently.
	}
	
}