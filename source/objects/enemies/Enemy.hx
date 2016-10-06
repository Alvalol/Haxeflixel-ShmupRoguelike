package objects.enemies;

import flash.filters.GlowFilter;
import flixel.FlxSprite;
import flixel.addons.effects.FlxTrailArea;
import flixel.effects.particles.FlxEmitter;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.util.FlxTimer;
import objects.effects.Explosion;
import objects.items.Item;
import objects.items.CoinItem;

class Enemy extends FlxSprite
{
	private var HP:Int;
	private var _appeared:Bool = false;
	private var emitter:FlxEmitter;
	private var drops:Array<Item>;
	private var dropRate:Array<Float>;
	
	private var desiredParticles:Int =  4;
	
	public function new(x:Float, y:Float) 
	{
		super(x, y);

	}
	
	override public function update(elapsed:Float) 
	{
		basicChecks();
		collisions();
		

		if (!Reg.pause)
			super.update(elapsed);
			
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
			if (_appeared && x <= FlxG.camera.scroll.x)
			{
				kill();
			}
				
		}
		if (HP <= 0)
		    kill();
			
	}
	
	
	private function collisions()
	{
		if (FlxG.overlap(Reg.PS.player,this))
		{
			interact(Reg.PS.player);
		}
		
		if (FlxG.overlap(Reg.PS.PBullets, this))
		{
			damage();
			Reg.PS.PBullets.getFirstAlive().kill();
		}
	
	}
	
	private function interact(player:Player)
	{
		damage(); 
		player.damage();
		FlxObject.separate(this, player);
	}
	
	public function damage()
	{
		HP--;
		//Implement flashing on hit
	}
	
	private function dropItem(list:Array<Item>,rate:Array<Float>)
	{
		// Drop system must be reworked from the ground up and be implemented in a nicer way. This is a placeholder.
		
		var itemRoll = Reg.CURRENT_SEED.int(0,100);
		if (itemRoll < 15)
		{
			var tObject:Item =	Reg.CURRENT_SEED.getObject(list,rate);			
			Reg.PS.items.add(tObject);
		}
		else
		{
				var newCoin:CoinItem =  new CoinItem(x, y);
				Reg.PS.coins.add(newCoin);
		}
	}	
	
	
	private function particles()
	{
		var partSize = Reg.CURRENT_SEED.int(1, 4);
				
		emitter = Reg.PS.emitters.recycle(FlxEmitter);
		if (emitter == null)
		emitter = new FlxEmitter();
		
		particleTimer();
		emitter.setPosition(x, y);
		emitter.alpha.set(0.5, 1);
		emitter.makeParticles(partSize,partSize, FlxColor.WHITE, desiredParticles);
		emitter.launchMode = FlxEmitterMode.CIRCLE;
		emitter.lifespan.set(0.2, 3);
		Reg.PS.emitters.add(emitter);
		emitter.start(true, 0.5, desiredParticles);	
	}
	
	override public function kill()
	{
		//?
		Reg.PS.enemies.remove(this, true);
		
		if (isOnScreen()){
		var e = Reg.PS.effects.recycle(Explosion) ;
		if (e == null) e = new Explosion(x - 4, y - 4);
		e.reset(x - 4, y - 4);
		Reg.PS.effects.add(e);
		particles();

		}
		
		alive = false;
	    exists = false;
	}	
	

}