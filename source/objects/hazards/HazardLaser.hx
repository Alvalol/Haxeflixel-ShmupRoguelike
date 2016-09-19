package objects.hazards;
import flixel.FlxG;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import flixel.FlxObject;
import flixel.FlxSprite;

class HazardLaser extends Hazard
{
	
	private var counter:Int = FlxG.random.int(0,20);
	private var maxCounter:Int = 300;
	private var tactive:Bool = false;
	private var tweenOptions:TweenOptions;
	
	private var animationTween:FlxTween;
	

	public function new(x:Float, y:Float) 
	{
		super(x, y - 8);
		startAnimation();
		
		makeGraphic(2, FlxG.height, FlxColor.YELLOW);
	}
	
	override public function update(elapsed:Float):Void 
	 {
		switchingStates();
		solid = tactive;
		if (tactive && !animationTween.active)
	
		{tweenOptions = {type : FlxTween.PINGPONG, loopDelay:2};
		animationTween.active =  active;
		}
		super.update(elapsed);
     }
	 
	 	private function startAnimation(?tween:FlxTween)
	{
		if (flipY)
		{
		animationTween = FlxTween.linearMotion(this, x, y, x, y + height , 25, false, tweenOptions);
		}
		else
		{
	    animationTween = FlxTween.linearMotion(this, x, y, x, y - height , 25, false, tweenOptions);		
		}
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