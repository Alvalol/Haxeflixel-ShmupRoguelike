package objects.hazards;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.effects.particles.FlxEmitter;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import flixel.FlxBasic;
import flixel.FlxObject;
import flixel.util.FlxSpriteUtil;


class Hazard extends FlxSprite
{
	private var _appeared:Bool = false;
	
	private var desiredParticles:Int =  4;
		
	public function new(x:Float,y:Float) 
	{
		super(x, y);
	}
	
	override public function update(elapsed:Float)
	{
        basicChecks();
		collisions();
	
		if(!Reg.pause)
		    super.update(elapsed);		
	}

	private function collisions()
	{
		if (FlxG.overlap(Reg.PS.player, this))
		{
		  Reg.PS.player.damage();
		  FlxObject.separate(this, Reg.PS.player);
		}
		
	}        
	
	private function basicChecks()
	{
		if (!inWorldBounds())
			exists = false;
			
		if (isOnScreen(FlxG.camera))
		{
			if (!_appeared) 
			{
			_appeared = true;	
			}
		}
		
		if (_appeared && x <= FlxG.camera.scroll.x - 16)
	   	 {
				kill();
		 }
	}
	
	private function interact(player:Player)
	{
		player.damage();
	}
	
	override public function kill()
	{
		Reg.PS.hazards.remove(this, true);
		super.kill();
	}
	
}
