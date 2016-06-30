package states;
import flixel.FlxState;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.math.FlxPoint;
import flixel.text.FlxText;
import flixel.FlxCamera;
import flixel.FlxObject;
import flixel.util.FlxTimer;
import flixel.util.FlxColor;
import flixel.ui.FlxButton;



class GameOverSubState extends FlxState
{

	private var _text:FlxText;
	private var _textScore:FlxText;
	private var _restartButton:FlxButton;
	
	override public function create():Void
	{
		super.create();
		FlxG.mouse.visible = true; // temporary
		_text = new FlxText(FlxG.width / 2 - 50, 20, FlxG.width, "Game Over");
		_textScore = new FlxText(FlxG.width/ 2 - 50, FlxG.width, FlxG.width, Reg.score);
	    _restartButton = new FlxButton(FlxG.width / 2 - 60, 60, "Restart", onClick);
		_textScore.text =  StringTools.lpad(
		Std.string(Reg.score), "0", 5);
		
	forEachOfType(FlxText, function(member)
	{
		
		member.setFormat(AssetPaths.pixel_font__ttf, 8, FlxColor.WHITE, FlxTextBorderStyle.OUTLINE, 0xffffffff);
	});	
	add(_text);
	add(_textScore);
	add(_restartButton);
	}
	
	override public function update(elapsed:Float)
	{
		super.update(elapsed);
		if (FlxG.keys.anyJustPressed(["ENTER"]))
		    onClick();

	}
	
	public function onClick()
	{
		FlxG.switchState(new PlayState());
	}
	
}