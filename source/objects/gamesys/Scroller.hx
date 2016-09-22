package objects.gamesys;
import flixel.FlxSprite;
import flixel.util.FlxColor;

class Scroller extends FlxSprite
{
	
	private static inline var ACCELERATION:Int = 4;
	private var MOVE_SPEED:Int = 30;

	public function new(x:Float,y:Float)
	{
		super(x,y);
	    makeGraphic(4, 4, FlxColor.RED);
		alpha = .5;
		visible = true;
		maxVelocity.set(MOVE_SPEED, MOVE_SPEED);
	}
	
	override public function update(elapsed:Float)
	{
	   acceleration.x += ACCELERATION;	
	   
	   y = Reg.PS.player.y;
	   
	   /*TODO : Implement speed variation based on a combo feature. If the player has a high combo, the game slows down. If the player has a low combo,
		* the game goes faster (as he most likely isn't close to enemies, so we bring him towards them to keep the game's rhytm high
		*/
	   
	   if (!Reg.pause)
		   super.update(elapsed);
	 }
 
}