package objects.items;
import flixel.FlxSprite;
import flixel.effects.particles.FlxEmitter;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.util.FlxSpriteUtil;
import flixel.effects.FlxFlicker;
import flixel.math.FlxVelocity;
import objects.enemies.EnemyBullet;


class Item extends FlxSprite
{
	
	private var _appeared:Bool = false;
	private var _lifespan:Int = 5;
	private var _name:String;
	private var _hp:Int;
	private var text:FlxText;
	private var createdText:Bool = false;

	private var emitter:FlxEmitter;

	public function new(x:Float, y:Float) 
	{
		super(x, y);
		loadGraphic(AssetPaths.items__png, false, 8, 8);
		setSize(8, 8);
		_hp = 5;
	}
	
	override public function update(elapsed:Float)
	{
        basicChecks();
		collisions();
		
		if (Reg.CURSED)
		{
			destructibleCollisions();
			explode();
		}
		
		if (createdText)
		{
			text.velocity.y = -10;
		}
		super.update(elapsed);
		
	}
	
	private function collisions()
	{
		if (FlxG.overlap(Reg.PS.player, this))
		{
		    interact(Reg.PS.player);   
			createNameText();
		}
	}
	
	private function damage()
	{
		FlxG.camera.shake(0.005, 0.025);
		//_hp -= Reg.PS.player.get_weaponDamage();
	}
	
	
	private function destructibleCollisions()
	{
		if (FlxG.overlap(Reg.PS.PBullets, this))
		{
			damage();
			Reg.PS.PBullets.getFirstAlive().kill();
		}
	}
	
	private function particles()
	{
		emitter = Reg.PS.emitters.recycle(FlxEmitter);
		if (emitter == null)
		emitter = new FlxEmitter();
		
		emitter.setPosition(x, y);
		emitter.alpha.set(0.5, 1);
		emitter.makeParticles(1,1, FlxColor.WHITE, 1);
		emitter.launchMode = FlxEmitterMode.CIRCLE;
		emitter.lifespan.set(0.2, 0.8);
		Reg.PS.emitters.add(emitter);
		emitter.start(true, 1, 1);	
	}
	
	private function explode()
	{
		var roll = Reg.CURRENT_SEED.int(0, 100);
		
		if (_hp <= 0)
		if (roll > 75)
		{
			kill();
			deathShot();
		}
		else
		{
			kill();
		
		}
	}
	
	private function deathShot()
	{
	   var tang = 0;
		for (i in 0...4)
		{
			var pb = Reg.PS.EBullets.recycle(EnemyBullet);
			if (pb == null)
			pb = new EnemyBullet(x, y);
			pb.reset(x, y);
		
			pb.velocity.set(FlxVelocity.velocityFromAngle(tang, 20).x,FlxVelocity.velocityFromAngle(tang, 20).y);
			tang += 90;
			Reg.PS.EBullets.add(pb);
		}
	}
	
	
	private function createNameText()
	{
			text = new FlxText(x-5, y, 0, _name);
		    text.setFormat(AssetPaths.smallfont__ttf, 8, FlxColor.WHITE, FlxTextBorderStyle.SHADOW, FlxColor.BLACK);
	     	textTimer();
			text.moves = true;
			createdText = true;
			Reg.PS.add(text);	
	}
	
	private function textTimer()
	{
		new FlxTimer().start(0.5, function(_) { 
			FlxSpriteUtil.fadeOut(text, 0.5, function(_) { 
			destroy;
			}); 
		} , 1);
	}
	
	
	private function basicChecks()
	{
		if (!inWorldBounds())
			exists = false;
					
        if (isOnScreen()) {
        if (!_appeared) 
             _appeared = true;
                          }
         else 
		 {
           if (_appeared)
            kill();
		 }
			
		if (_appeared)
		{
		new FlxTimer().start(_lifespan, function(_)
		{
			FlxSpriteUtil.flicker(this,1, 0.05, true, false, onTimedOut);
		}, 1);
		}	
	}
	
	private function onTimedOut(t:FlxFlicker):Void
	{
		kill();
	}
	
	override public function kill()
	{
		Reg.PS.items.remove(this,true);
		super.kill();
	}
	
	public function interact(player:Player)
	{
		kill();
		Reg.score += 50; // TODO : Item score should be dynamic and dependent on the item itself.
	}
	
	function set_name(value:String):String 
	{
		return _name = value;
	}
	
}