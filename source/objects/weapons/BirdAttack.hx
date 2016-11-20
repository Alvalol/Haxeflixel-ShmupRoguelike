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
	var desiredBirds:Int = Reg.CURRENT_SEED.int(50, 60);
	var timerStarted:Bool = false;
	var _appeared:Bool = false;
	
	
	public function new()
	{
	super(0, FlxG.height / 2);
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
			var newbird = new objects.weapons.BirdBomb(x, y);
			var newbird2 = new BirdBomb(x + Reg.CURRENT_SEED.int( -10, 10), y + Reg.CURRENT_SEED.int( -10, 10));
			var newbird3 = new BirdBomb(x + Reg.CURRENT_SEED.int( -10, 10), y + Reg.CURRENT_SEED.int( -10, 10));
			Reg.PS.add(newbird);
			Reg.PS.add(newbird2);
			Reg.PS.add(newbird3);
			birds += 3;
			if (!FlxSpriteUtil.isFlickering(Reg.PS.player))
		    FlxSpriteUtil.flicker(Reg.PS.player, 0, 0.05);
		}
		else
		{
			if (FlxSpriteUtil.isFlickering(Reg.PS.player))
			new FlxTimer().start(1.5, function(_) {
			FlxSpriteUtil.stopFlickering(Reg.PS.player);
			}, 1);
			kill();
		}
	}
}