package states;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;

class MenuState extends FlxState
{
	override public function create():Void
	{
		super.create();
			
	    var cursor = new FlxSprite();
		cursor.loadGraphic(AssetPaths.cursor__png, false, 8, 8);
		FlxG.mouse.load(cursor.pixels, 4);
		
	    var startgame = new FlxButton(FlxG.width / 2 - 45 , FlxG.height / 2 - 10, 
		"START GAME", startGame);
		add(startgame);
		
	}

	override public function update(elapsed:Float):Void
	{
		if (FlxG.keys.anyJustPressed(["ENTER"]))
		    startGame();
			
		super.update(elapsed);
			
	}
	
	private function startGame():Void
    {
	FlxG.switchState(new PlayState());
    }

}
