package objects;


import flixel.FlxSprite;
import flixel.util.FlxColor;


class Scroller extends FlxSprite
{
	
	private static inline var ACCELERATION:Int = 2;
	private var MOVE_SPEED:Int = 15;

	public function new(x:Float,y:Float)
	{
		super(x,y);
	    makeGraphic(1, 1, FlxColor.RED);
		alpha = 0.5;
		visible = false;
	 
		maxVelocity.set(MOVE_SPEED, MOVE_SPEED);
	}
	
	override public function update(elapsed:Float)
	{

	   acceleration.x += ACCELERATION;	   
	   y = Reg.PS.player.y;
	   super.update(elapsed);	   
	}
	
}