package;

import flixel.FlxGame;
import openfl.display.Sprite;
import states.PlayState;
import states.ProcState;
import utils.LevelGenerator;

class Main extends Sprite
{
	public function new()
	{
		super();
		addChild(new FlxGame(160, 144, LevelGenerator));
	}
}