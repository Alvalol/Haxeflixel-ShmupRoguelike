package objects.effects;

import flixel.FlxSprite;


class NewBullEffect extends FlxSprite
{

	public function new(x:Float,y:Float) 
	{
		super(x, y);
		loadGraphic(AssetPaths.bulleteffect__png, true, 8, 8);
		animation.add("idle", [0,1,2,3,4], 30);
		animation.play("idle");
		color = 0xFFFF00;
	}
	
	override public function update(elapsed:Float):Void 
	{
	
		if(!Reg.pause)	
		   super.update(elapsed);
	}
	
	override public function kill()
	{
		super.kill();
		trace("killed");
		Reg.PS.effects.remove(this, true);
	}
}