package states;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.addons.transition.Transition;
import flixel.addons.ui.FlxButtonPlus;
import flixel.addons.ui.FlxInputText;
import flixel.addons.ui.FlxUIState;
import flixel.math.FlxPoint;
import flixel.math.FlxRect;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import flixel.util.FlxSave;
import utils.controls.Gamepad;
import flixel.addons.display.FlxBackdrop;
import flixel.addons.transition.FlxTransitionableState;
import flixel.addons.transition.FlxTransitionSprite.GraphicTransTileCircle;
import flixel.addons.transition.TransitionData;
import flixel.graphics.FlxGraphic;
import flixel.util.FlxColor;
#if !desktop
import flixel.input.touch.FlxTouch;
#end
import utils.pcg.MapChunk;
import utils.pcg.MapChunkMerger;


class MenuState extends FlxUIState
{
    var background:FlxBackdrop;
	var title:FlxSprite;
	var i = 0.0;
	var buildNumber:FlxText;
	var initialized:Bool = false;
	var seedInput:FlxInputText;
	var seedValue:Int;
	var startButton:FlxButton;
	
	var saveData:FlxSave;
	
	override public function create():Void
	{
		super.create();
		
		#if desktop
		FlxG.mouse.visible = true;
		#end
		
	    background = new FlxBackdrop(AssetPaths.background__png, 1, 1, true, true);
		buildNumber = new FlxText(FlxG.width - 60, FlxG.height - 13, 0, "dev build 15", 8);
		
		title = new FlxSprite(0, 0);

		title.loadGraphic(AssetPaths.title__png, false, 256, 144);
		
		var options = new FlxSprite(0,0);
		var bars = new FlxSprite(0,0);
		options.loadGraphic(AssetPaths.options__png, false, 256, 144);
		bars.loadGraphic(AssetPaths.bars__png, false, 256, 144);
		
		
		add(background);
		setupInputSeed();

		add(title);
		add(options);
		add(bars);
		add(buildNumber);
		FlxTransitionableState.defaultTransIn = new TransitionData();
		FlxTransitionableState.defaultTransOut = new TransitionData();
		
		var diamond:FlxGraphic = FlxGraphic.fromClass(GraphicTransTileCircle);
		diamond.persist = true;
		diamond.destroyOnNoUse = false;
			
		FlxTransitionableState.defaultTransIn.tileData = { asset: diamond, width: 16, height: 16 };
		FlxTransitionableState.defaultTransOut.tileData = { asset: diamond, width: 16, height: 16 };
		FlxTransitionableState.defaultTransIn.direction = FlxG.random.getObject([ new FlxPoint(0,1)]);
		FlxTransitionableState.defaultTransOut.direction = FlxG.random.getObject([ new FlxPoint(0,1)]);		
		FlxTransitionableState.defaultTransOut.type = TransitionType.TILES;
		FlxTransitionableState.defaultTransIn.type = TransitionType.TILES;
		FlxTransitionableState.defaultTransOut.duration = 0.5;
		FlxTransitionableState.defaultTransIn.duration = 0.5;
		FlxTransitionableState.defaultTransOut.color = FlxColor.YELLOW;
		FlxTransitionableState.defaultTransIn.color = FlxColor.YELLOW;
		FlxTransitionableState.defaultTransIn.tileData.asset = diamond;
		FlxTransitionableState.defaultTransOut.tileData.asset = diamond;
			//Of course, this state has already been constructed, so we need to set a transOut value for it right now:
		transOut = FlxTransitionableState.defaultTransOut;
		transIn = FlxTransitionableState.defaultTransIn;
	
		forEachOfType(FlxText, function(member)
		{
			member.setFormat(AssetPaths.smallfont__ttf, 8, FlxColor.fromRGB(255,255,255,5) ,
			                 FlxTextBorderStyle.OUTLINE, FlxColor.fromRGB(0,0,0,200));				
	    });
		
	}
	
	private function setupInputSeed()
	{	
		seedInput = new FlxInputText((FlxG.width / 2) - 30, (FlxG.height  / 2) + 10, 70, "Enter seed", 8, FlxColor.WHITE, FlxColor.BLACK);
		seedInput.filterMode = FlxInputText.ONLY_NUMERIC;
		seedInput.lines = 1;
		seedInput.maxLength = 9;
		seedInput.fieldBorderColor = FlxColor.WHITE;
		seedInput.fieldBorderThickness = 1;
		
		var seedText = new FlxText(seedInput.x - 25, seedInput.y, 0, "SEED", 8);
		seedText.font = AssetPaths.smallfont__ttf;
		seedText.color = FlxColor.WHITE;
		add(seedInput);
		add(seedText);
		FlxG.log.redirectTraces = false;
	}
	override public function update(elapsed:Float):Void
	{
		
		//trace(Reg.CURRENT_SEED);
       // trace(saveData.data);
		background.x += 0.5;
		move();

		#if desktop
		Gamepad.checkForGamepad();
		   
		if (Gamepad.GAMEPAD != null && (Gamepad.GAMEPAD.justPressed.A || Gamepad.GAMEPAD.justPressed.START))
			startGame();
 
		if (FlxG.keys.anyJustPressed([ENTER, SPACE, M,O]))
			startGame();

		
		#else
	    for (touch in FlxG.touches.list)
		{
			if (touch.justPressed) { startGame(); };
		}
		
		#end		
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
	   if (seedInput.text == "")
	   {
			Reg.SEEDED = false;
			FlxG.switchState(new PlayState());
	   }
	   else
		{
		   Reg.SEEDED = true;
		   Reg.masterSeed =  Std.parseInt(seedInput.text);
		   FlxG.switchState(new PlayState());
		}

    }

}
