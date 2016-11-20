package objects.weapons;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.util.FlxSpriteUtil;
import objects.weapons.BirdBomb;
import flixel.util.FlxTimer;

class BirdAttack extends FlxSprite
{

	var birds:Int = 0;
	var desiredBirds:Int = Reg.CURRENT_SEED.int(20,30);
	var timerStarted:Bool = false;
	var _appeared:Bool = false;
	var _aboutToKill:Bool = false;
	
	public function new()
	{
		super(-10, FlxG.height / 2);
		makeGraphic(4, 4, FlxColor.PINK);
		visible = false; // will be false
	}
	
	override public function update(elapsed:Float):Void 
	{
		y = Reg.CURRENT_SEED.int(2, FlxG.camera.height -2);
		x = FlxG.camera.scroll.x;
		
		if (isOnScreen())
			_appeared = true;
		
		if (_appeared)
		if (!timerStarted)
		{
		timerStarted = true;
		new FlxTimer().start(0.075, function(_) {createBirds(); timerStarted = false;});
		}
		
		super.update(elapsed);
	
    }
	
	private function createBirds()
	{
        if (birds <= desiredBirds)
		{
			var simultbirds = 2;
			for (i in 0...simultbirds)
			{
				var newbird = new BirdBomb(x, y);
				Reg.PS.add(newbird);
				birds++;
			}
			
			if (!FlxSpriteUtil.isFlickering(Reg.PS.player))
		    FlxSpriteUtil.flicker(Reg.PS.player, 0, 0.05);
		}
		else
		{
			if (FlxSpriteUtil.isFlickering(Reg.PS.player) && !_aboutToKill)
			{
		    _aboutToKill = true;
			new FlxTimer().start(1.5, function(_) {
			FlxSpriteUtil.stopFlickering(Reg.PS.player); kill();
			}, 1);
			}

		}
	}
}