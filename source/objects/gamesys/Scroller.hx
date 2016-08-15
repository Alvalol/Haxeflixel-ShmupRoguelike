package objects.gamesys;
import flixel.FlxSprite;
import flixel.util.FlxColor;

class Scroller extends FlxSprite
{
	
	private static inline var ACCELERATION:Int = 2;
	private var MOVE_SPEED:Int = 15;

	public function new(x:Float,y:Float)
	{
		super(x,y);
	    makeGraphic(4, 4, FlxColor.RED);
		alpha = 0.5;
		visible = false;
		maxVelocity.set(MOVE_SPEED, MOVE_SPEED);
	}
	
	override public function update(elapsed:Float)
	{
	   acceleration.x += ACCELERATION;	   
	   y = Reg.PS.player.y;
	   
	 if (Reg.SCROLLER_ON)
	   {
	   switch Reg.PS.player.HP
	   {   
		   default : MOVE_SPEED = 15; 		maxVelocity.set(MOVE_SPEED, MOVE_SPEED);
		   case 2 : MOVE_SPEED = 20; 		maxVelocity.set(MOVE_SPEED, MOVE_SPEED);
		   case 1 : MOVE_SPEED = 30;		maxVelocity.set(MOVE_SPEED, MOVE_SPEED);
	   }
	   
	   
	   if(!Reg.pause)
	   super.update(elapsed);
    }
	   
	   }
}