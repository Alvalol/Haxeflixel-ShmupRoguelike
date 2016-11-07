package objects.hazards;
import objects.Player;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.effects.particles.FlxEmitter;
import flixel.util.FlxTimer;
import flixel.util.FlxColor;
import objects.effects.Explosion;
import objects.items.CurseItem;
import objects.items.HealthItem;
import objects.items.Item;
import objects.items.MagnetItem;
import objects.items.CoinItem;

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
	//	color = Reg.CURRENT_SEED.getObject([0xFFFFFFFF]);
		immovable = true;
		solid = true;
	}
	
	override private function collisions()
	{
		if (FlxG.overlap(Reg.PS.player, this))
		{
		  FlxObject.separate(this, Reg.PS.player);
		}	
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
		emitter.acceleration.start.min.y = 40;
		emitter.acceleration.start.max.y = 100;
		emitter.acceleration.end.min.y = 40;
		emitter.acceleration.end.max.y = 100;
		emitter.solid = true;
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
		
		dropItem();
		
		if (isOnScreen(FlxG.camera))
		{
		var e = new Explosion(x - 4, y - 4);
		Reg.PS.effects.add(e);
		particles();
		}
	}
	
	private function dropItem()
	{
		var itemRoll = Reg.CURRENT_SEED.float(0,100);
		if (itemRoll <= 1 && itemRoll > 0.1)
		{
			var tObject:Item =	Reg.CURRENT_SEED.getObject([new HealthItem(x,y), new MagnetItem(x,y)]);			
			Reg.PS.items.add(tObject);
		}
		else if (itemRoll <= 0.1)
		{
			var tObject:CurseItem = new CurseItem(x, y);
			Reg.PS.items.add(tObject);
		}
		else
		{
				var newCoin:CoinItem =  new CoinItem(x-4, y-4);
				Reg.PS.coins.add(newCoin);
		}
	}	
	
}