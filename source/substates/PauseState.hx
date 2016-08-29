package substates;
import flixel.FlxSubState;
import flixel.text.FlxText;
import flixel.FlxG;
import utils.controls.Gamepad;
import utils.controls.Keyboard;

/**
 * ...
 * @author Alvarop
 */
class PauseState extends FlxSubState
{
	
	var pauseText:FlxText;

	override public function create():Void 
	{
		super.create();
		pauseText = new FlxText(FlxG.width / 2 - 100, FlxG.height / 2, 0, "PAUSED", 12);
		add(pauseText);
	}
	
}