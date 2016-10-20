package objects.hazards;
import objects.Player;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.effects.particles.FlxEmitter;
import flixel.util.FlxTimer;
import flixel.util.FlxColor;
import objects.effects.Explosion;

class HazardBlock extends Hazard
{
	
	private var emitter:FlxEmitter;
	public function new(x:Float,y:Float)
	{
		super(x, y - 8);
		var frame = Reg.CURRENT_SEED.int(1, 4);
		loadGraphic(AssetPaths.solid__png, true, 8, 8);
		animation.add("static", [frame]);
		animation.play("static");
	//	centerOrigin();
		color = Reg.CURRENT_SEED.getObject([0xFFFFFFFF]);
		immovable = true;
		solid = true;
	}
	
	override private function interact(player:Player)
	{
		if (!Reg.PS.player.get_immuneToWalls())
		{
	  FlxObject.separate(this, player);
	  Reg.PS.player.damage();
		}
		else
			  FlxObject.separate(this, player);
	}
	
	private function particleTimer()
	{
		new FlxTimer().start(2, killParticles, 1);
	}
	
	private function killParticles(Timer:FlxTimer)
	{
			emitter.kill();
			Reg.PS.emitters.remove(emitter, true);
	}
	
		private function particles()
	{
		emitter = Reg.PS.emitters.recycle(FlxEmitter);
		if (emitter == null)
		emitter = new FlxEmitter();
		
		particleTimer();
		emitter.setPosition(x, y);
		emitter.alpha.set(0.5, 1);
		emitter.makeParticles(1,1, FlxColor.WHITE, desiredParticles);
		emitter.launchMode = FlxEmitterMode.CIRCLE;
		emitter.lifespan.set(0.2, 3);
		Reg.PS.emitters.add(emitter);
		emitter.start(true, 1, desiredParticles);	
	}
	
	override public function kill()
	{
		FlxG.camera.shake(0.003, 0.05);
		Reg.PS.blocks.remove(this, true);
		alive = false;
		exists = false;
		
		if (isOnScreen())
		{
		var e = new Explosion(x - 4, y - 4);
		Reg.PS.effects.add(e);
		particles();
		}
	}
}