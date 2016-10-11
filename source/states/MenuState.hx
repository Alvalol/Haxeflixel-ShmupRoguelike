package states;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import utils.controls.Gamepad;
import flixel.addons.display.FlxBackdrop;


class MenuState extends FlxState
{
	
    var background:FlxBackdrop;
	var title:FlxSprite;
	var i = 0.0;
	
	override public function create():Void
	{
		super.create();
			
	//    var cursor = new FlxSprite();
		//cursor.loadGraphic(AssetPaths.cursor__png, false, 8, 8);
	//	FlxG.mouse.load(cursor.pixels, 4);
	    background = new FlxBackdrop(AssetPaths.background__png, 1, 1, true, true);
		title = new FlxSprite(0, 0);
		var options = new FlxSprite(0,0);
		var bars = new FlxSprite(0,0);
		title.loadGraphic(AssetPaths.title__png, false, 256, 144);
		options.loadGraphic(AssetPaths.options__png, false, 256, 144);
		bars.loadGraphic(AssetPaths.bars__png, false, 256, 144);

		
		add(background);
		add(title);
		add(options);
		add(bars);
	}

	override public function update(elapsed:Float):Void
	{
		
		background.x += 0.2;
		move();
		
		
		
		Gamepad.checkForGamepad();
		
		if (FlxG.keys.anyJustPressed(["ENTER"]))
		    startGame();
			
		if (Gamepad.GAMEPAD != null && (Gamepad.GAMEPAD.justPressed.A || Gamepad.GAMEPAD.justPressed.START))
			startGame();
			
		super.update(elapsed);
			
	}
	
		private function move()
	{
		var sinFactor = 0.05;
		var factor = 0.05;
		
		sinFactor += factor * .002 * Math.PI;
		title.y = Math.sin(sinFactor+i);
		i += 0.025;
	}
	
	private function startGame():Void
    {

	        FlxG.switchState(new PlayState());
    }

}
