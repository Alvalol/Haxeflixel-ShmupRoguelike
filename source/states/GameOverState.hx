package states;
import flixel.FlxState;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.addons.display.FlxBackdrop;
import flixel.addons.transition.FlxTransitionableState;
import flixel.math.FlxPoint;
import flixel.text.FlxText;
import flixel.FlxCamera;
import flixel.FlxObject;
import flixel.util.FlxTimer;
import flixel.util.FlxColor;
import flixel.ui.FlxButton;

class GameOverSubState extends FlxTransitionableState
{

	private var _textScore:FlxText;
	private var placeholderText:FlxSprite;
	private var background:FlxBackdrop;
	
	override public function create():Void
	{
		super.create();
			
	    var cursor = new FlxSprite();
		cursor.loadGraphic(AssetPaths.cursor__png, false, 8, 8);
		#if desktop
		FlxG.mouse.load(cursor.pixels,4);
		FlxG.mouse.visible = true; // must always be set to false pls
		#end
		  
		placeholderText = new FlxSprite(0, 0);
		background = new FlxBackdrop(AssetPaths.background__png, 1, 1, true, true);
		placeholderText.loadGraphic(AssetPaths.gameoverplaceholder__png, false, FlxG.width, FlxG.height);

		_textScore = new FlxText(FlxG.width / 2 - 18, 40, FlxG.width, "SCORE : " + Reg.score);
		_textScore.text =  StringTools.lpad(Std.string(Reg.score), "0", 5);
		
		
		forEachOfType(FlxText, function(member)
		{
			member.setFormat(AssetPaths.smallfont__ttf, 8, FlxColor.WHITE, FlxTextBorderStyle.OUTLINE, 0xffffffff);
		});	
	
		add(background);	
		add(placeholderText);	
		add(_textScore);			
	}
	
	override public function update(elapsed:Float)
	{
		super.update(elapsed);
		background.x += 0.5;
		
		#if desktop
		if (FlxG.keys.anyJustPressed([ENTER]))
		    onClick();
		#else
		  for (touch in FlxG.touches.list)
		{
			if (touch.justPressed) { onClick(); };
		}
		#end
	}
	
	public function onClick()
	{
		FlxG.switchState(new PlayState());
		
		// implement restart / main menu buttons / options.
		// only if not playing the daily seed.
	}
	
}