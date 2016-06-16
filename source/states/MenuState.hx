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
	
	    var startgame = new FlxButton(FlxG.width / 2 - 50, FlxG.height / 2, 
		"START GAME", startGame);
		add(startgame);
		
		
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		if (FlxG.keys.anyJustPressed(["ENTER"]))
		    startGame();
		//FlxG.switchState(new MyState());1
	}
	
	private function startGame():Void
{
	FlxG.switchState(new PlayState());
}
}
