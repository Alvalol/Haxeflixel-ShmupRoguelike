package states;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import utils.controls.Gamepad;
import utils.testing.TestState;

class MenuState extends FlxState
{
	override public function create():Void
	{
		super.create();
			
	//    var cursor = new FlxSprite();
		//cursor.loadGraphic(AssetPaths.cursor__png, false, 8, 8);
	//	FlxG.mouse.load(cursor.pixels, 4);
		
	    var startgame = new FlxButton(FlxG.width / 2 - 45 , FlxG.height / 2 - 10, "START GAME", startGame);
		startgame.screenCenter();
		add(startgame);
	}

	override public function update(elapsed:Float):Void
	{
		
		Gamepad.checkForGamepad();
		
		if (FlxG.keys.anyJustPressed(["ENTER"]))
		    startGame();
			
		if (Gamepad.GAMEPAD != null && (Gamepad.GAMEPAD.justPressed.A || Gamepad.GAMEPAD.justPressed.START))
			startGame();
			
		super.update(elapsed);
			
	}
	
	private function startGame():Void
    {
		if (Reg.DEBUG)
		{
			FlxG.switchState(new TestState());
		}
		else
		{
	        FlxG.switchState(new PlayState());
		}
    }

}
