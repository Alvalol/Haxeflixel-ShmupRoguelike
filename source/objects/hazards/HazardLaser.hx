package objects.hazards;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import flixel.FlxObject;
import flixel.FlxSprite;

class HazardLaser extends Hazard
{
	
	private var counter:Int = FlxG.random.int(0,20);
	private var maxCounter:Int = 300;
	private var tactive:Bool = false;

	public function new(x:Float, y:Float) 
	{
		super(x, y- 8);
		makeGraphic(2, FlxG.height, FlxColor.YELLOW);
	}
	
	override public function update(elapsed:Float):Void 
	 {
		switchingStates();
		solid = tactive;
		super.update(elapsed);
     }
	 
	private function switchingStates()
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
		
	}
	
	override public function collisions()
	{
		super.collisions();
		for (i in Reg.PS.enemies)
		{
		if (FlxG.overlap(i, this))
		{		
			i.kill();
		}
		}
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