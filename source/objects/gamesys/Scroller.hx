package objects.gamesys;
import flixel.FlxSprite;
import flixel.util.FlxColor;

class Scroller extends FlxSprite
{
	
	private static inline var ACCELERATION:Int = 2;
	private var MOVE_SPEED:Int = 20;

	public function new(x:Float,y:Float)
	{
		super(x,y);
	    makeGraphic(4, 4, FlxColor.RED);
		alpha = .5;
		visible = false;
		maxVelocity.set(MOVE_SPEED, MOVE_SPEED);
	}
	
	override public function update(elapsed:Float)
	{

		if (Reg.PS.player.invinsible) 
		{
		acceleration.x += ACCELERATION * 100;
		maxVelocity.set(MOVE_SPEED * 10, MOVE_SPEED * 10);
		}
		else{
		acceleration.x += ACCELERATION;	   }
	   
	   y = Reg.PS.player.y;
	   
	   //Find a better way to implement acceleration. Do not base it on HP	   
	   if (!Reg.pause)
		   super.update(elapsed);
	 }
    
	
	   
	   
}