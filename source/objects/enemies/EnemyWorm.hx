package objects.enemies;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.system.debug.watch.Tracker;
import flixel.tweens.FlxTween;
import flixel.tweens.misc.VarTween;
import flixel.math.FlxVelocity;
import flixel.tweens.motion.LinearMotion;
import flixel.util.FlxTimer;
import flixel.FlxSprite;
import flixel.math.FlxPoint;
import flixel.util.FlxColor;

class EnemyWorm extends Enemy
{
	private var waiting:Bool;
	private var delay:Int = 1;
	private var maxBottom:FlxPoint;
	private var maxTop:FlxPoint;
	private var animationTween:FlxTween;
	private var tweenOptions:TweenOptions;
	private var SHOOT_SPEED = 150;
	private var justShot = false;
	private var flipFactor:Int;
	
	// TODO : This enemy doesn't work correctly in the game yet. Must be checked and fixed before including it in templates.
	
	public function new(x:Float, y:Float, _flipped:Bool)
	{
		super(x, y);
		HP = 1;
		loadGraphic(AssetPaths.longworm__png, true, 8, 16);
		animation.add("default", [0]);
		animation.play("default");
		
		flipY = _flipped;
	    adjustPlacement();
		
		tweenOptions = {type : FlxTween.PINGPONG, loopDelay:1, onComplete:resetShot};
		startAnimation();

		setFactor();
		animationTween.active = active;	
		
		/*
		#if !FLX_NO_DEBUG 
		Tracker.addProfile(new TrackerProfile(EnemyWorm, ["aboveGround", "waiting"], [FlxSprite, FlxTween]));
		FlxG.console.registerObject("EnemyWorm", this);
		FlxG.debugger.track(this);
		#end
		*/
	}
	
	override public function update(elapsed:Float) 
	{
		shoot();
    	trace(flipFactor);
		if(!Reg.pause && Reg.hatched)
		super.update(elapsed);
	}
	
	private function resetShot(Tween:FlxTween)
	{
			justShot = false;	
	}

	private function setFactor()
	{
		if (flipY)
		{
			flipFactor = 1;
		}
		else
		{
			flipFactor = -1;
		}	
	}
	
	private function shoot()
	{
		if (animationTween.percent >= 0.90 && !animationTween.backward && !justShot)
		{
			var tang:Int;
	    if (flipY)
		 tang = 70;
		else
		 tang = 250;
		
		
		for (i in 0...3)
		{
		    var eb:EnemyBullet = Reg.PS.EBullets.recycle(EnemyBullet);
	        if (eb == null)
		        eb = new EnemyBullet(x, y);
				
			if(flipY)
			eb.reset(x , y + height);
			else
			eb.reset(x , y - 5);
			
			eb.velocity.set(FlxVelocity.velocityFromAngle(tang, (SHOOT_SPEED /4 )).x,
			FlxVelocity.velocityFromAngle(tang, (SHOOT_SPEED / 4  )).y);
			tang += 20;
		//	eb.scale.set(0.5, 0.5);
			Reg.PS.EBullets.add(eb);
		}	
			justShot = true;	
		}
	}
	
	private function adjustPlacement()
	{
		if (flipY)
		y -= 24;
	}
	
	private function startAnimation(?tween:FlxTween)
	{
		if (flipY)
		{
		animationTween = FlxTween.linearMotion(this, x, y, x, y + height, 25, false, tweenOptions);
		}
		else
		{
	    animationTween = FlxTween.linearMotion(this, x, y, x, y - height , 25, false, tweenOptions);		
		}
	}
	
}