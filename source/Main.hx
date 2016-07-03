package;

import flixel.FlxGame;
import openfl.display.Sprite;
import states.MenuState;
import utils.pcg.LevelLoaderProc;

class Main extends Sprite
{
	public function new()
	{
		super();
		addChild(new FlxGame(160, 144, MenuState, 1, 60, 60, true));// 20 tiles x 18

	}
}