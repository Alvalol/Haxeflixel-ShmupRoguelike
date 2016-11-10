package objects.hazards;
import flixel.FlxG;
import flixel.effects.particles.FlxEmitter;
import flixel.util.FlxColor;
import flixel.FlxObject;
import flixel.util.FlxTimer;

class HazardMovingBlock extends Hazard
{

	private var direction:Int = 0;
	private var MOVE_SPEED:Float = 0.5;
	private var horizontal:Bool;
	private var gotshot:Bool = false;
	private var emitter:FlxEmitter;
	
		public function new(x:Float, y:Float, hor:Bool) 
	{
		super(x, y);
		loadGraphic(AssetPaths.hazards__png, true, 8, 8);
		animation.add("static", [1]);
		animation.play("static");
		//immovable = true;
		maxVelocity.set(0, 0);
		centerOffsets();
		horizontal = hor;
		//makeEmitter();
	}
	
	override public function update(elapsed:Float):Void 
	{
		if (_appeared && !gotshot)
		   if (horizontal)
		   {
		       moveHorizontally();
		   }
		   else{
			   moveVertically();
		   }

		if (direction == 0)
			direction = Reg.CURRENT_SEED.int( -1, 1);
			
		//updateEmitterPosition();
		super.update(elapsed);
	}
	
	
	 private function makeEmitter()
	 {
		emitter = Reg.PS.emitters.recycle(FlxEmitter);
		if (emitter == null)
		emitter = new FlxEmitter();
		

		emitter.alpha.set(0.75,1);
		emitter.makeParticles(2,2, FlxColor.BLUE, 10);
		emitter.keepScaleRatio = true;
		emitter.launchMode = FlxEmitterMode.CIRCLE;
		emitter.launchAngle.set(250,360);
		emitter.lifespan.set(0.25, 0.5);
		emitter.angularVelocity.set(0, 0, 0, 0);

			
	   
		Reg.PS.emitters.add(emitter);
		emitter.start(false, 0.25, 0);
			
	 }
	 
	 private function updateEmitterPosition()
	 {
		 if (flipY)
		 {
		 	emitter.setPosition(x + width / 2 , y - height / 2);
			emitter.acceleration.start.min.y = 100;
		emitter.acceleration.start.max.y = 100;
		    emitter.velocity.start.min.y = 120;
		    emitter.velocity.start.max.y = 150;
		 }
		 
		else
		{
		    emitter.setPosition(x + width / 2, y + height / 2);
	  
			emitter.acceleration.start.min.y = -100;
		    emitter.acceleration.start.max.y = -100;
		    emitter.velocity.start.min.y = -120;
		    emitter.velocity.start.max.y = -150;
		}
			
	 }
	
	
	override private function collisions()
	{
		if (horizontal)
		{
		if (FlxG.collide(this, Reg.PS.map) || (FlxG.collide(this,Reg.PS.blocks)))
		
			direction *=-1;
		}
		else
		{
			if (FlxG.collide(this, Reg.PS.map) || (FlxG.collide(this, Reg.PS.blocks)))
			{
		    flipY = !flipY;
			direction *=-1;	
			}
		}
		
		FlxG.overlap(Reg.PS.PBullets, this, NoDamage);
		
		/*
		if ((FlxG.overlap(this, Reg.PS.PBullets) || FlxG.overlap(this,Reg.PS.player) && !gotshot))
		{
			gotshot = true;
			new FlxTimer().start(1, function(_) { gotshot = false; });
		}
		*/
		
//		super.collisions();
		if (FlxG.overlap(Reg.PS.player, this))
		{
		  Reg.PS.player.damage();
		}

	}
	
	public function moveVertically()
	{
		y += MOVE_SPEED * direction;
	}
	
	public function moveHorizontally()
	{
		x += MOVE_SPEED * direction;
	}
	
}