package objects.effects;

import flixel.FlxSprite;
import flixel.FlxG;


class Explosion extends FlxSprite
{

	private var escale = FlxG.random.float(1, 2.5);
	
	
	public function new(x:Float,y:Float) 
	{
		super(x, y);
		loadGraphic(AssetPaths.explosion__png, true, 16, 16);
		scale.set(escale,escale);
		animation.add("explosion",[0,1,1,2,2]);
		animation.play("explosion");
	}
	
	override public function update(elapsed:Float):Void 
	{
		if (animation.curAnim.curFrame == 4 && isOnScreen())
		{
			kill();
			//Reg.PS.effects.remove(this, true);
		}
		super.update(elapsed);
	}
}