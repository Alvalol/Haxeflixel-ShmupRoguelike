package objects;

import flixel.FlxSprite;
import flixel.util.FlxColor;

class EnemyBullet extends FlxSprite
{

	public function new(x:Float,y:Float) 
	{
		super(x,y);
		makeGraphic(2, 2, FlxColor.RED,false); // placeholder
		
		
	}
	
	override public function update(elapsed:Float):Void
	{
		if (!isOnScreen())
		    kill();
		
		super.update(elapsed);
	}
	
}