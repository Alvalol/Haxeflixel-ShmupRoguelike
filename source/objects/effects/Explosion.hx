package objects.effects;

import flixel.FlxSprite;
import flixel.FlxG;


class Explosion extends FlxSprite
{

		
	public function new(x:Float,y:Float) 
	{
		super(x, y);
		loadGraphic(AssetPaths.explosion__png, true, 8, 8);
        scale.set(2, 2);
		
		animation.add("explosion",[0,1,2,3,3,4,5,6,7,8],55);
		animation.play("explosion");
		angle = Reg.CURRENT_SEED.getObject([180, 90, -90, 0]);
		//trace("effect created", this);
	}
	
	override public function update(elapsed:Float):Void 
	{
		if (animation.curAnim.curFrame == 9 && isOnScreen())
		{
			kill();
			Reg.PS.effects.remove(this, true);
		}
		
		if(!Reg.pause)
		  super.update(elapsed);
	}
}