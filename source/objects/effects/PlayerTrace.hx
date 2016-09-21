package objects.effects;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.addons.effects.FlxTrail;


class PlayerTrace extends FlxSprite
{
	
	private var bTrail:FlxTrail;
	private var lifespan = 1;
	
	public function new(x:Float,y:Float) 
	{
		super(x, y);

		loadGraphic(AssetPaths.playereffect__png, true, 8, 8);
		animation.add("idle",[0, 1, 2, 3, 4, 5, 6]);
		animation.play("idle");
		maxVelocity.set(0,0);
	}
	
	override public function update(elapsed:Float):Void 
	{
		if (!isOnScreen())
		{
			kill();
			Reg.PS.effects.remove(this, true);
		}
	
		if(!Reg.pause)	
		   super.update(elapsed);
		   acceleration.y += 0.1;
	}
}