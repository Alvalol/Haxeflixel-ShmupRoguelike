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
		if (FlxG.overlap(Reg.PS.player, this) && !FlxSpriteUtil.isFlickering(Reg.PS.player))
		{
			interact(Reg.PS.player);
		}
		
		/*for (bullet in Reg.PS.PBullets)
	    {
		if (FlxG.overlap(bullet, this) && isOnScreen(FlxG.camera))
		    bullet.kill();
		}*/
	}        
	
	private function basicChecks()
	{
		if (!inWorldBounds())
			exists = false;
			
		if (isOnScreen())
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
