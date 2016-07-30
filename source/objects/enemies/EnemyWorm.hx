package objects.enemies;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.system.debug.watch.Tracker;
import flixel.tweens.FlxTween;
import flixel.tweens.misc.VarTween;
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
	var tweenOptions:TweenOptions;

	public function new(x:Float, y:Float)
	{
		super(x, y);
		HP = 1;
		makeGraphic(8, 16, FlxColor.LIME);
		//startTimer();
		
		tweenOptions = {type : FlxTween.PINGPONG, loopDelay:2};
		startAnimation();
		
		#if !FLX_NO_DEBUG 
		Tracker.addProfile(new TrackerProfile(EnemyWorm, ["aboveGround", "waiting"], [FlxSprite]));
		FlxG.console.registerObject("EnemyWorm", this);
		FlxG.debugger.track(this);
		#end
	}
	
	override public function update(elapsed:Float) 
	{
		animationTween.active = active;
		super.update(elapsed);
		//move();
	}
	
	private function startAnimation(?tween:FlxTween)
	{
		animationTween = FlxTween.linearMotion(this, x, y, x, y - height, 0.5, true, tweenOptions);
	}
	
	/*
	private function startTimer()
	{
		new FlxTimer().start(delay, above, 1);	
	}
	
	private function above(timer:FlxTimer)
	{
		aboveGround = !aboveGround;
		startTimer();
		
		new FlxTimer().start(1, function(_)
		{
	    waiting = !waiting;
		}, 1);	
	}
	
	private function move()
	{
		
	if (!waiting)
	{
	if (aboveGround)
	{
		if (y >= maxBottom.y)
		{
			y -= 1;
		}
	}
	
	else
		{
			if (y >= maxTop.y)
			{
			y += 1;
			}
		}
	}
	}*/
	
	
}