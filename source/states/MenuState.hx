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
import utils.controls.Gamepad;
import flixel.addons.display.FlxBackdrop;
import flixel.addons.transition.FlxTransitionableState;
import flixel.addons.transition.FlxTransitionSprite.GraphicTransTileCircle;
import flixel.addons.transition.TransitionData;
import flixel.graphics.FlxGraphic;
import flixel.util.FlxColor;


class MenuState extends FlxUIState
{
    var background:FlxBackdrop;
	var title:FlxSprite;
	var i = 0.0;
	var initialized:Bool = false;
	var seedInput:FlxInputText;
	var seedValue:Int;
	var startButton:FlxButton;
	
	override public function create():Void
	{
		super.create();
		
		background = new FlxBackdrop(AssetPaths.background__png, 1, 1, true, true);
		title = new FlxSprite(0, 0);

		title.loadGraphic(AssetPaths.title__png, false, 256, 144);
		
		
		var options = new FlxSprite(0,0);
		var bars = new FlxSprite(0,0);
		options.loadGraphic(AssetPaths.options__png, false, 256, 144);
		bars.loadGraphic(AssetPaths.bars__png, false, 256, 144);
		
		setupInputSeed();
		add(background);
		add(title);
		add(options);
		add(bars);
		add(seedInput);
		//add(startButton);
		
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
			FlxTransitionableState.defaultTransOut.duration = 3;
			FlxTransitionableState.defaultTransIn.duration = 3;
			FlxTransitionableState.defaultTransOut.color = FlxColor.YELLOW;
			FlxTransitionableState.defaultTransIn.color = FlxColor.YELLOW;
			FlxTransitionableState.defaultTransIn.tileData.asset = diamond;
			FlxTransitionableState.defaultTransOut.tileData.asset = diamond;
			//Of course, this state has already been constructed, so we need to set a transOut value for it right now:
			transOut = FlxTransitionableState.defaultTransOut;
			transIn = FlxTransitionableState.defaultTransIn;
	}
	


	private function setupInputSeed()
	{	
		seedInput = new FlxInputText((FlxG.width / 2) - 30, (FlxG.height  / 2) + 10, 70, "Enter seed", 8, FlxColor.WHITE, FlxColor.BLACK);
		seedInput.filterMode = FlxInputText.ONLY_NUMERIC;
		seedInput.lines = 1;
		seedInput.maxLength = 12;
		seedInput.fieldBorderColor = FlxColor.WHITE;
		seedInput.fieldBorderThickness = 1;
	}
	override public function update(elapsed:Float):Void
	{
		
		background.x += 0.5;
		move();

		#if desktop
		Gamepad.checkForGamepad();
		   
		if (Gamepad.GAMEPAD != null && (Gamepad.GAMEPAD.justPressed.A || Gamepad.GAMEPAD.justPressed.START))
			startGame();
 
		if (FlxG.keys.anyJustPressed([ENTER]))
			startGame();
			
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
	   if (seedInput.text == null)
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
