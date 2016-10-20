package objects.effects;

import flixel.FlxSprite;


class NoHit extends FlxSprite
{

	public function new(x:Float,y:Float) 
	{
		super(x, y);
		loadGraphic(AssetPaths.nohit__png, true, 8, 8);
		animation.add("nohit",[1,1,2,2,3,3,4,4,5,5],80);
		animation.play("nohit");
	}
	
	override public function update(elapsed:Float):Void 
	{
		if (animation.curAnim.curFrame == 9)
		{
			kill();
		}
	
		if(!Reg.pause)	
		   super.update(elapsed);
	}
	
	override public function kill()
	{
		
		Reg.PS.effects.remove(this, true);
		super.kill();
	}
}