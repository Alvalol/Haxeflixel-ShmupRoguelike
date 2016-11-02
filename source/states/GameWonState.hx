package states;

import flixel.FlxSprite;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.FlxState;
import flixel.FlxG;
import flixel.addons.transition.FlxTransitionableState;
import flixel.addons.transition.FlxTransitionSprite.GraphicTransTileCircle;
import flixel.addons.transition.TransitionData;
import flixel.graphics.FlxGraphic;
import flixel.math.FlxRect;
import flixel.math.FlxPoint;
import openfl.system.System;

class GameWonState extends FlxTransitionableState
{

	var placeholderBackground:FlxSprite; 
	var _text:FlxText;
	var initialized:Bool = false;

   override	public function create():Void
		
	{
		super.create();

		placeholderBackground = new FlxSprite(0, 0, AssetPaths.winscreenplaceholder__png);
		add(placeholderBackground);
		
	
		_text = new FlxText(100, 15, 0, "YOU WIN!\nYOUR SCORE : " + Reg.score + "\n\nEND OF DEMO\nPress any key to play again\n\nJoin twitch.tv/Alvaro_As\nor tweet at me @theotheralvaro\nto give me feedback about\nthe game.\n\nThanks for playing!", 8);
		add(_text);
				forEachOfType(FlxText, function(member)
		{
			member.setFormat(AssetPaths.smallfont__ttf, 8, FlxColor.fromRGB(255, 255, 255, 255));
			member.setBorderStyle(FlxTextBorderStyle.OUTLINE, FlxColor.fromRGB(0,0,0,255), 1, 1);	
	    });
	}
	
		override public function update(elapsed:Float)
	{
		super.update(elapsed);
		#if desktop
		if (FlxG.keys.anyJustPressed([ENTER]))
		    onClick();
		
        if (FlxG.keys.justPressed.ESCAPE)
		{
			System.exit(0);
		
		}
		
		#else
		  for (touch in FlxG.touches.list)
		{
			if (touch.justPressed) { onClick(); };
		}
		#end	
			
	}
	

	
	public function onClick()
	{
		FlxG.switchState(new MenuState());
	}
}