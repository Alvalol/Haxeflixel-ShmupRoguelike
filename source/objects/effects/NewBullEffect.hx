package objects.effects;

import flixel.FlxSprite;


class NewBullEffect extends FlxSprite
{

	public function new(x:Float,y:Float) 
	{
		super(x, y);
		loadGraphic(AssetPaths.bulleteffect__png, true, 8, 8);
		animation.add("idle",[0,1]);
		animation.play("idle");
		//trace("effect created", this);
	}
	
	override public function update(elapsed:Float):Void 
	{
		if (animation.curAnim.curFrame == 1 && isOnScreen())
		{
			kill();
		
		}
	
		if(!Reg.pause)	
		   super.update(elapsed);
	}
}