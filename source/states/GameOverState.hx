package states;
import flixel.FlxState;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.addons.display.FlxBackdrop;
import flixel.addons.transition.FlxTransitionableState;
import flixel.math.FlxPoint;
import flixel.math.FlxRandom;
import flixel.text.FlxText;
import flixel.FlxCamera;
import flixel.FlxObject;
import flixel.util.FlxTimer;
import flixel.util.FlxColor;
import flixel.ui.FlxButton;

class GameOverSubState extends FlxTransitionableState
{

	private var _textScore:FlxText;
	private var _textHighScore:FlxText;
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
		  
		//placeholderText = new FlxSprite(0, 0);
		background = new FlxBackdrop(AssetPaths.background__png, 1, 1, true, true);
		//placeholderText.loadGraphic(AssetPaths.gameoverplaceholder__png, false, FlxG.width, FlxG.height);

		_textScore = new FlxText(FlxG.width / 2 - 18, 40, FlxG.width, "SCORE : " + Reg.score);
		//_textScore.text =  StringTools.lpad(Std.string(Reg.score), "0", 5);

		_textHighScore = new FlxText(FlxG.width / 2 - 18, 50, FlxG.width, "HIGHSCORE : " + Reg.highscore);
		//_textHighScore.text =  StringTools.lpad(Std.string(Reg.highscore), "0", 5);		
		
		forEachOfType(FlxText, function(member)
		{
			member.setFormat(AssetPaths.smallfont__ttf, 8, FlxColor.WHITE, FlxTextBorderStyle.OUTLINE, 0xffffffff);
		});	
		
		var buttonRestart = new FlxButton(FlxG.camera.width/ 2, FlxG.height / 2, "NEW GAME", onClick);
		var buttonSeed = new FlxButton(FlxG.camera.width  / 2, (FlxG.height / 2) + 20, "MAIN MENU", onClickSeed);
		var sameSeed = new FlxButton(FlxG.camera.width / 2, FlxG.height / 2 + 40, "RETRY", onClickSameSeed);
		
		add(background);	
		//add(placeholderText);	
		add(_textScore);	
		add(_textHighScore);
	    
		add(buttonRestart);
		add(buttonSeed);
		if(Reg.SEEDED)
	    add(sameSeed);

	}
	
	override public function update(elapsed:Float)
	{
		super.update(elapsed);
		background.x += 0.5;
		
		
	}
	
	public function onClick()
	{
		Reg.SEEDED = false;
		FlxG.switchState(new PlayState());
		
		// implement restart / main menu buttons / options.
		// only if not playing the daily seed.
	}
	
	public function onClickSeed()
	{
		Reg.SEEDED = false;
		FlxG.switchState(new MenuState());
	}
	
	public function onClickSameSeed()
	{
		Reg.SEEDED = true;
		Reg.CURRENT_SEED = new FlxRandom(Reg.masterSeed);
		FlxG.switchState(new PlayState());
	}
	
}