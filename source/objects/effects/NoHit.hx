package objects.effects;

import flixel.FlxSprite;


class NoHit extends FlxSprite
{

	public function new(x:Float,y:Float) 
	{
		super(x, y);
		loadGraphic(AssetPaths.nohit__png, true, 8, 8);
		animation.add("nohit",[0,0,1,1]);
		animation.play("nohit");
		trace("effect created", this);
	}
	
	override public function update(elapsed:Float):Void 
	{
		if (animation.curAnim.curFrame == 3 && isOnScreen())
		{
			kill();
			Reg.PS.effects.remove(this, true);
		}
	
		if(!Reg.pause)	
		   super.update(elapsed);
	}
}