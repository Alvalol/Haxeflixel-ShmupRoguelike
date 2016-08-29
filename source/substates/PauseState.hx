package substates;
import flixel.FlxSubState;
import flixel.text.FlxText;
import flixel.FlxG;
import flixel.util.FlxColor;
import utils.controls.Gamepad;
import utils.controls.Keyboard;
import flixel.FlxCamera;


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
		set_bgColor(0xE6000000);
		pauseText = new FlxText(FlxG.width / 2 - 50, FlxG.height / 2 - 20, 0, "PAUSED"); // offset 
		add(pauseText);
		pauseText.scrollFactor.set(0, 0);
		
						forEachOfType(FlxText, function(member)
		{
			member.setFormat(AssetPaths.pixel_font__ttf, 12, FlxColor.fromRGB(255,255,255,5) ,
			                FlxTextBorderStyle.OUTLINE, FlxColor.fromRGB(0,0,0,250));
							
	    });
		
	}

	
}