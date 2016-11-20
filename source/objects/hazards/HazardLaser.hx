package objects.hazards;
import flixel.FlxG;
import flixel.addons.effects.FlxTrail;
import flixel.addons.effects.FlxTrailArea;
import flixel.addons.tile.FlxTilemapExt;
import flixel.addons.ui.U;
import flixel.effects.particles.FlxEmitter;
import flixel.math.FlxPoint;
import flixel.tile.FlxTilemap;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.math.FlxMath;
import flixel.tile.FlxTilemap;

class HazardLaser extends Hazard
{
	// Can only be placed on floors the are more than 4 tiles high 
	private var counter:Int = Reg.CURRENT_SEED.int(0,20);
	private var maxCounter:Int = 300;
	private var tactive:Bool = false;
	private var canBeActive:Bool = true;
	private var deactivationTreshold:Int = 64;
	private var animationTween:FlxTween;
	
	private var tempcanvas:FlxSprite;
	private var raytraced:Bool;
	private var tempPoint:FlxPoint;
	private var tempHeight:Int;
	private var emitter:FlxEmitter;
	
	public function new(x:Float, y:Float) 
	{
		super(x, y - 8);
		loadGraphic(AssetPaths.hazards__png, true, 8, 8);
		animation.add("active", [2], 0);
		animation.add("inactive", [3], 0);
		raytraced = false;
		tempPoint = new FlxPoint();

	    origin.set(width / 2, 0);
		immovable = true;

		// add a "generator" that makes clear where the laser is located.
	    animationTween = FlxTween.tween(scale, {x :0.5}, 0.05, {type : FlxTween.PINGPONG });
	
	}
	
	override public function update(elapsed:Float):Void 
	 {
		switchingStates(); 
		solid = tactive;
		
		if (!raytraced && isOnScreen() && _appeared)
		{
			raytraced = true;
				var ori = new FlxPoint(x, y);
				var dest = new FlxPoint(x, FlxG.height);
			
			    ori.x =  U.clamp(ori.x, x, FlxG.width);
				ori.y = U.clamp(ori.y, y, FlxG.height);
				dest.x = U.clamp(dest.x, x, FlxG.width);
				dest.y = U.clamp(dest.y, y, FlxG.height-14);
				
			
				
				Reg.PS.map.ray(ori, dest, tempPoint);
				tempHeight = FlxMath.distanceToPoint(this, tempPoint);
				
				setGraphicSize(8, tempHeight);
				makeEmitter();
			
		
		}
		
	
		if(emitter != null)
	    checkEmitter();
		
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
	
	 
	 private function checkEmitter()
	 {
		if (_appeared && isOnScreen() )
		{
		if (tactive)
			emitter.emitting = true;
		else
		    emitter.emitting = false;
		}
	 }
	 
	 private function makeEmitter()
	 {
		emitter = Reg.PS.emitters.recycle(FlxEmitter);
		if (emitter == null)
		emitter = new FlxEmitter();
		
		emitter.setPosition(x + width / 2, tempPoint.y);
		emitter.alpha.set(0.75,1);
		emitter.makeParticles(1,1, FlxColor.WHITE, 15);
		emitter.keepScaleRatio = true;
		emitter.launchMode = FlxEmitterMode.CIRCLE;
		emitter.launchAngle.set(200,340);
		emitter.lifespan.set(0.075, 0.22);
		emitter.angularVelocity.set(0, 0, 0, 0);
		emitter.acceleration.start.min.y = -	200;
		emitter.acceleration.start.max.y = -300;
		emitter.velocity.start.min.y = -300;
		emitter.velocity.start.max.y = -400;
			
		Reg.PS.emitters.add(emitter);
		emitter.start(false, 0.025, 0);
			
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
	
	override public function kill() 
	{
		emitter.kill();
		super.kill();
	}
	
	private function appear()
	{
		counter += 2;
	}
	
}