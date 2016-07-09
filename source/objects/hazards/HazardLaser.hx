package objects.hazards;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import flixel.FlxObject;
import flixel.FlxSprite;

/**
 * ...
 * @author Alvarop
 */
class HazardLaser extends Hazard
{
	
	private var counter:Int = FlxG.random.int(0,20);
	private var maxCounter:Int = 300;
	private var tactive:Bool = false;

	public function new(x:Float, y:Float) 
	{
		super(x, y);
		makeGraphic(2, FlxG.height, FlxColor.YELLOW);
	}
	
	override public function update(elapsed:Float):Void 
	{

		if (_appeared && counter < maxCounter)
		{
			appear(); 
		}
		
	    else{
			tactive = !tactive;
			counter = 0;
		}
		
		if (tactive)
			alpha = 1;
		else
		    alpha = 0.1;
			
		
		//trace("counter : " + counter, "max counter : " + maxCounter);
		//trace(tactive);
		super.update(elapsed);
     }
	
	override private function interact(player:Player)
	{
		if (tactive)
		{
		player.damage();
		}
	}
	
	
	private function appear()
	{

		counter += 2;
	}
	
	
}