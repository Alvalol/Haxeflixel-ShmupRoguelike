package objects.items;
import flixel.addons.effects.FlxTrail;
import flixel.effects.particles.FlxEmitter;
import flixel.math.FlxPoint;
import objects.Player;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.math.FlxMath;
import flixel.math.FlxVelocity;
import flixel.FlxObject;

class CoinItem extends Item
{
	public var magnetized:Bool;
	private var rotationSpeed:Int = 5;
	private var desiredParticles:Int = 30;


	public function new(x:Float,y:Float) 
	{
		super(x, y);
		var t = FlxG.random.int(2, 5);
		loadGraphic(AssetPaths.cube__png, true, 16, 16);
		animation.add("idle", [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13, 14, 15], 10);
		animation.play("idle");
		scale.set(FlxG.random.float(0.5, 1), FlxG.random.float(0.5, 1));
		offset.set( -8, -8);
		centerOffsets();
		set_name("");
		
		emitter = new FlxEmitter(x,y);

	}
		
	override public function update(elapsed:Float)
	{
		magnetize();
	
		if (magnetized)
		move();
		else
		{
		   velocity.set(0, 0);
		   acceleration.set(0, 0);
		}
		
	    noOverlapping();
		
		super.update(elapsed);
	}
	
	private function magnetize()
	{
		if (FlxMath.absInt(FlxMath.distanceBetween(this,Reg.PS.player)) < Reg.PS.player.MAGNET )
			magnetized = true;	
	}

	private function move()
	{
		FlxVelocity.accelerateTowardsObject(this, Reg.PS.player, Reg.PS.player.MAGNET * 100, Reg.PS.player.MAGNET_FORCE * 200);

	}
	
	private function noOverlapping()
	{
		for (coin in Reg.PS.coins)
		{
			if (FlxG.overlap(this, coin))
			{
				FlxObject.separate(this, coin);
			}
		}
	}
	
	override public function kill()
	{
		_lifespan = 4;
		Reg.PS.coins.remove(this, true);

		super.kill();
	}
	
    override function interact(player:Player)
	{
	  kill();
	 // particles();
	  Reg.score += 5;
	}
	
	override private function particles()
	{
		// maybe add particles that go towards the score
		
		emitter = Reg.PS.emitters.recycle(FlxEmitter);
		if (emitter == null)
		emitter = new FlxEmitter();
		
		emitter.setPosition(x, y);
		emitter.alpha.set(0.5, 1);
		//emitter.acceleration.set( -10, -10);
		emitter.velocity.set( -10, -10);
		emitter.makeParticles(1,1, FlxColor.WHITE, desiredParticles);
		//emitter.launchMode = FlxEmitterMode.CIRCLE;
		emitter.lifespan.set(1, 3);
		Reg.PS.emitters.add(emitter);
		emitter.start(true, 0.5, desiredParticles);	
	}
	
}