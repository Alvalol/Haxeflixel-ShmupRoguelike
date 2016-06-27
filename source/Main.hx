package;

import flixel.FlxGame;
import openfl.display.Sprite;
import states.PlayState;
import states.ProcState;
import utils.LevelLoaderProc;

class Main extends Sprite
{
	public function new()
	{
		super();
		addChild(new FlxGame(160, 144, PlayState,1,60,60,true)); // 20 tiles x 18
	}
}