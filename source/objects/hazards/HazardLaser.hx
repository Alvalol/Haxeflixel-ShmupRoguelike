package objects.hazards;
import flixel.FlxG;
import flixel.addons.effects.FlxTrail;
import flixel.addons.effects.FlxTrailArea;
import flixel.math.FlxPoint;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import flixel.FlxObject;
import flixel.FlxSprite;

class HazardLaser extends Hazard
{
	
	private var counter:Int = Reg.CURRENT_SEED.int(0,20);
	private var maxCounter:Int = 300;
	private var tactive:Bool = false;
	private var canBeActive:Bool = true;
	private var deactivationTreshold:Int = 64;
	
	private var animationTween:FlxTween;
	
	private var tempcanvas:FlxSprite;
	

	public function new(x:Float, y:Float) 
	{
		super(x, y - 8);
		loadGraphic(AssetPaths.hazards__png, true, 8, 8);
		animation.add("active", [2], 0);
		animation.add("inactive", [3], 0);
		scale.y = 20;
		scale.x = 1;
	    origin.set(width / 2, 0);
		immovable = true;


		// add a "generator" that makes clear where the laser is located.
	    animationTween = FlxTween.tween(scale, {x :0.5}, 0.05, {type : FlxTween.PINGPONG });
	
	}
	
	override public function update(elapsed:Float):Void 
	 {
		switchingStates();
		solid = tactive;
		
		checkForScroll();
        if (tactive)
		{
		//	scale.x = 1;
			animationTween.active = true;
			animation.play("active");
			height = scale.y * 8;
			
		}
		else
		{
		    animationTween.active = false;
			scale.x = 0.25;
			animation.play("inactive");
		}
	
		
		super.update(elapsed);
     }
	 

	 
	 private function checkForScroll()
	 {
		 if (x <= FlxG.camera.scroll.x + deactivationTreshold)
		 {
			 tactive = false;
			 canBeActive = false;
		 }
	 }
	
	private function switchingStates()
	{
		if (canBeActive)
		{
		if (_appeared && counter < maxCounter)
		{
			appear(); 
		}
		
	    else{
			tactive = !tactive;
			counter = 0;
		}
		}
		
		if (tactive)
		{
			alpha = 1;
		}
		else
		{
		    alpha = 0.1;
		}
		
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