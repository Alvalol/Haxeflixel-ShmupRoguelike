package objects.effects;
import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.FlxG;

class Barrier extends FlxSprite
{

	public function new(x:Float,y:Float)
	{
		super(x, y);
		makeGraphic(2, FlxG.height, FlxColor.RED);

	}
	
	override public function update(elapsed:Float):Void 
	{

		scale.set(FlxG.random.float(0.1, 1), 1);
		super.update(elapsed);
	}
	
}