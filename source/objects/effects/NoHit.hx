package objects.effects;

import flixel.FlxSprite;


class NoHit extends FlxSprite
{

	public function new(x:Float,y:Float) 
	{
		super(x, y);
		loadGraphic(AssetPaths.nohit__png, true, 8, 8);
		animation.add("explosion",[0,1,1]);
		animation.play("explosion");
	}
	
	override public function update(elapsed:Float):Void 
	{
		if (animation.curAnim.curFrame == 2 && isOnScreen())
		{
			kill();
			//Reg.PS.effects.remove(this, true);
		}
		super.update(elapsed);
	}
}