package objects.gamesys;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;

class Scroller extends FlxSprite
{
	
	private static inline var ACCELERATION:Int = 10;
	private var MOVE_SPEED:Int = 20;
	private var SPEED_MOD:Int = 15;

	public function new(x:Float,y:Float)
	{
		super(x,y);
	    makeGraphic(4, 4, FlxColor.RED);
		alpha = .5;
		visible = false;
		maxVelocity.set(MOVE_SPEED, MOVE_SPEED);
		velocity.set(MOVE_SPEED, MOVE_SPEED);
	}
	
	override public function update(elapsed:Float)
	{
	   acceleration.x = ACCELERATION;	

	   
	   y = Reg.PS.player.y;
	   
	   /*TODO : Implement speed variation based on a combo feature. If the player has a high combo, the game slows down. If the player has a low combo,
		* the game goes faster (as he most likely isn't close to enemies, so we bring him towards them to keep the game's rhytm high
		*/
//	  if (Reg.PS.player.get_comboMultiplier() == 1 && Reg.PS.enemies.countLiving() == 0)

	   if (FlxG.keys.anyJustPressed([U]))
	   {
		   maxVelocity.set(maxVelocity.x + MOVE_SPEED, maxVelocity.y * MOVE_SPEED);
		   trace("PRESSED U");
	   }
	   if (FlxG.keys.anyJustPressed([J]))
	   {
		   maxVelocity.set(maxVelocity.x / MOVE_SPEED, maxVelocity.y / MOVE_SPEED);
	   }	 
	 /* if (Reg.PS.player.invinsible)
	  {
		  maxVelocity.set(MOVE_SPEED * 10, MOVE_SPEED * 10);
	  }
	  else
	  {
	  maxVelocity.set(MOVE_SPEED, MOVE_SPEED);
	  }
	  /*(
	   * 
	  else

		  maxVelocity.set(MOVE_SPEED * 10, MOVE_SPEED * 10);
		  
	  
	
	  */
	  if (!Reg.pause)
		   super.update(elapsed);
	 }
}