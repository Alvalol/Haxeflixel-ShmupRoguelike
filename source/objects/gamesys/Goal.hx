package objects.gamesys;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.math.FlxPoint;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import states.GameWonState;
import states.MenuState;
import flixel.tweens.FlxEase;


class Goal extends FlxSprite
{

	public function new(x:Float) 
	{
		super(x - 30, 70);
		loadGraphic(AssetPaths.placeholderarrow__png, false, 32,32);
     	alpha = 1;
        set_visible(true);		
	 
		FlxTween.tween(this, {x : x-38	}, 1,
		{ type: FlxTween.PINGPONG, ease: FlxEase.sineInOut });
	}
	
	override public function update(elapsed:Float):Void 
	{

		collisions();

		if(!Reg.pause)
		super.update(elapsed);
	}
	
	private function collisions()
	{
		if (Reg.PS.player.x >= this.x + 20)
		{
			reached(Reg.PS.player);
		}
		
	}
	
	private function reached(player:Player)
	{

		Reg.PS.persistentUpdate = false;
		solid = false;
		new FlxTimer().start(0.1, function(_) {
		FlxG.switchState(new GameWonState()); }, 1);	// placeholder as there is only one level in the game currently.
	}
	
}