package states;

import flixel.FlxSprite;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.FlxState;
import flixel.FlxG;

class GameWonState extends FlxState
{

	var placeholderBackground:FlxSprite; 
	var _text:FlxText;
	
   override	public function create():Void
		
	{
		super.create();
		placeholderBackground = new FlxSprite(0, 0, AssetPaths.winscreenplaceholder__png);
		add(placeholderBackground);
		
	
		_text = new FlxText(100, 30, 0, "A WINNER IS YOU!!!11\n\nEnd of demo\nPress any key to play again\n\nJoin twitch.tv/Alvaro_As\nor tweet at me @theotheralvaro\nto give me feedback about\nthe game.\n\nThanks for playing!", 8);
		add(_text);
				forEachOfType(FlxText, function(member)
		{
			member.setFormat(AssetPaths.smallfont__ttf, 8, FlxColor.fromRGB(255,255,255,5) ,
			                 FlxTextBorderStyle.OUTLINE, FlxColor.fromRGB(0,0,0,200));				
	    });
	}
	
		override public function update(elapsed:Float)
	{
		super.update(elapsed);
		#if desktop
		if (FlxG.keys.anyJustPressed([ENTER]))
		    onClick();
			#end
	}
	
	public function onClick()
	{
		FlxG.switchState(new PlayState());
	}
}