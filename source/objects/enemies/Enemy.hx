package objects.enemies;

import flixel.effects.FlxFlicker;
import flixel.math.FlxPoint;
import objects.items.CurseItem;

import flash.filters.GlowFilter;
import flixel.FlxSprite;
import flixel.addons.effects.FlxTrailArea;
import flixel.effects.particles.FlxEmitter;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.util.FlxSpriteUtil;
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
	
	private var damageText:FlxText;
	private var createdDamageText:Bool;
	
	private var desiredParticles:Int =  4;
	
	private var displayDamage:String;
	
	private var lefty:Bool = false;
	
	public function new(x:Float, y:Float) 
	{
		super(x, y);
		HP = 1;
	}
	
	override public function update(elapsed:Float) 
	{
		basicChecks();
		
		if (createdDamageText)
		{
			damageText.velocity.y = -25;
		}

		if (!Reg.pause)
		{
			collisions();
			super.update(elapsed);
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
	
	private function basicChecks()
	{
		if (!inWorldBounds())
			exists = false;
			
        if (isOnScreen(FlxG.camera)) 
		{
			if (!_appeared) 
			{
				 _appeared = true;
		    }
		}
		
		if (_appeared && x < FlxG.camera.scroll.x - 16 && !lefty)
			{
				kill();
				trace("enemy killed outside of the screen");
			}
		
		
		if (HP <= 0)
		    kill();
	}
	
	
	private function collisions()
	{
		if (FlxG.overlap(this, Reg.PS.player) && !FlxSpriteUtil.isFlickering(Reg.PS.player))
			interact(Reg.PS.player);
		
		if (FlxG.overlap(Reg.PS.PBullets, this) && isOnScreen(FlxG.camera))
			damage();
	
	}
	
	private function interact(player:Player)
	{
		player.damage();
		kill(); 
		FlxObject.separate(this, player);
	}
	
	public function damage()
	{
		//HP -= Reg.PS.player.get_weaponDamage();
		HP -= Reg.PS.PBullets.getFirstAlive().get_damage();
		displayDamage = Std.string(Reg.PS.PBullets.getFirstAlive().get_damage());
			
		var curBullet = Reg.PS.PBullets.getFirstAlive();
		
		if  (!(Type.getClassName(Type.getClass(curBullet)).indexOf("LaserBullet") > -1))
		{
			curBullet.kill();
		}

		damageText = new FlxText(x + Reg.CURRENT_SEED.int( -1, 1), y + Reg.CURRENT_SEED.int( -1, 1), 0,  "-" + displayDamage);
		damageText.set_antialiasing(false);
        damageText.setFormat(AssetPaths.smallfont__ttf, 8, FlxColor.YELLOW, FlxTextBorderStyle.SHADOW, FlxColor.BLACK);
		textTimer();
		createdDamageText = true;
	    damageText.moves = true;


		Reg.PS.add(damageText);
	}
	
	private function textTimer()
	{
		new FlxTimer().start(0.1, function(_) { 
			FlxSpriteUtil.fadeOut(damageText, 0.5, function(_) { 
			destroy;
			}); 
		} , 1);
	}
	
	private function dropItem(list:Array<Item>,rate:Array<Float>)
	{
		// Drop system must be reworked from the ground up and be implemented in a nicer way. This is a placeholder.
		
		var itemRoll = Reg.CURRENT_SEED.int(0,100);
		if (itemRoll < 10 + Reg.itemDropMod)
		{
			var tObject:Item =	Reg.CURRENT_SEED.getObject(list,rate);			
			Reg.PS.items.add(tObject);
			Reg.itemDropMod = 0;
		}
		else
		{
				var newCoin:CoinItem =  new CoinItem(x, y);
				Reg.PS.coins.add(newCoin);
		}
		
		
		var curseRoll:Float = Reg.CURRENT_SEED.float(0, 100);
		if (curseRoll <= 0.5)
		{
		var curseObject:CurseItem = new CurseItem(x, y);
		Reg.PS.items.add(curseObject);
		}
	}
	
	
	
	
	private function particles()
	{
		var partSize = 1;
				
		emitter = Reg.PS.emitters.recycle(FlxEmitter);
		if (emitter == null)
		emitter = new FlxEmitter();
		
		particleTimer();
		emitter.setPosition(x, y);
		emitter.makeParticles(partSize,partSize, FlxColor.WHITE, desiredParticles);
		emitter.launchMode = FlxEmitterMode.CIRCLE;
		emitter.lifespan.set(0.2, 0.5);
		Reg.PS.emitters.add(emitter);
		emitter.start(true, 0.5, desiredParticles);	
	}
	
	override public function kill()
	{
		//?
		FlxG.camera.shake(0.003, 0.05);
		Reg.PS.enemies.remove(this, true);
		
		
		if (isOnScreen(FlxG.camera)){
		var e = Reg.PS.effects.recycle(Explosion) ;
		if (e == null) e = new Explosion(x - 4, y - 4);
		e.reset(x - 4, y - 4);
		Reg.PS.effects.add(e);
		particles();

	//	trace("Enemy" + Type.typeof(this) + "dead");
		}
		
		alive = false;
	    exists = false;
		
	}	
	

}