package objects.effects;

import flixel.FlxG;
import flixel.FlxSprite;


class PlayerTrace extends FlxSprite
{
	
	public function new(x:Float,y:Float) 
	{
		super(x, y);

		loadGraphic(AssetPaths.playereffect__png, true, 8, 8);
		animation.add("idle",[0, 1, 2, 3, 4, 5, 6]);
		animation.play("idle");
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
	}
}