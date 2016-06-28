package objects.items;
import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.util.FlxSpriteUtil;
import flixel.effects.FlxFlicker;


class Item extends FlxSprite
{
	// Maybe each item has its own drop % modifier, so that it will make some items more rare, and not only based on enemy types that can drop them.
	
	private var _appeared:Bool = false;
	private var _lifespan:Int = 3;
	

	public function new(x:Float, y:Float) 
	{
		super(x, y);
		new FlxTimer().start(_lifespan, function(_)
		{
			FlxSpriteUtil.flicker(this, 1, 0.05, true, false, onTimedOut);
		}, 1);
	}
	
	override public function update(elapsed:Float)
	{
		if (!inWorldBounds())
			exists = false;
		
					
		if (isOnScreen() && !_appeared) 
			_appeared = true;		
	}
	
	private function onTimedOut(t:FlxFlicker):Void
	{
		kill();

	}
	
	public function interact(player:Player)
	{
		kill();
		Reg.score += 50;
	}
	
	override function kill()
	{
		super.kill();
		Reg.PS.items.remove(this, true);
	}
}