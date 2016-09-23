package objects.effects;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.addons.effects.FlxTrail;
import flixel.util.FlxTimer;


class PlayerTrace extends FlxSprite
{
	
	private var bTrail:FlxTrail;
	private var _lifespan = 1;
	
	public function new(x:Float,y:Float) 
	{
		super(x, y);

		loadGraphic(AssetPaths.playereffect__png, true, 8, 8);
		animation.add("idle",[0, 1, 2, 3, 4, 5, 6]);
		animation.play("idle");
		maxVelocity.set(0, 10);

		createTrail();
		bTrail.maxVelocity.set(0, -10);
		
	}
	
	override public function update(elapsed:Float):Void 
	{
		if (!isOnScreen())
		{
			kill();
			Reg.PS.effects.remove(this, true);
		}
	
		if (isOnScreen())
		{
			new FlxTimer().start(_lifespan, function(_)
			{
				if (!Reg.pause)
				kill();
			}, 1);
		}
	
		if (!Reg.pause)	
		{
		   super.update(elapsed);
		   acceleration.y += 0.5;
		   bTrail.y -= 2;
		}
	
	}
	
	private function createTrail()
	{
        bTrail = new FlxTrail(this, null, 15, 1, 0.3, 0.05);
		Reg.PS.effects.add(bTrail);
	}
	
	override public function kill()
	{
		super.kill();
	    Reg.PS.effects.remove(bTrail, true);
		Reg.PS.effects.remove(this, true);
	}
}