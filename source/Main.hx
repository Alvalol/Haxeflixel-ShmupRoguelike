package;

import flixel.FlxGame;
import openfl.display.Sprite;
import states.PlayState;

class Main extends Sprite
{
	public function new()
	{
		super();
		addChild(new FlxGame(160, 144, states.PlayState));
	}
}