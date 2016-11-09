package objects.enemies;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.FlxSprite;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.util.FlxTimer;
import objects.items.CoinItem;

class EnemyMeteorShower extends Enemy
{
	
	var meteors:Int = 0;
	var desiredMeteors:Int = Reg.CURRENT_SEED.int(30, 40);
	var timerStarted:Bool = false;


	public function new(x:Float) 
	{
		super(x ,10);
		HP = 1;
		makeGraphic(4, 4, FlxColor.PINK);
		visible = true;
	}
	
	
	override public function update(elapsed:Float):Void 
	{
		y = Reg.CURRENT_SEED.int(10, FlxG.height - 10);
		x = FlxG.camera.scroll.x + FlxG.width;
		
		if (_appeared)
		{
		if (!timerStarted)
		{
		timerStarted = true;
		new FlxTimer().start(0.10, function(_) {createMeteors(); timerStarted = false;  });
		}
		}
		super.update(elapsed);
	
    }

	
	private function createMeteors()
	{
        if (meteors <= desiredMeteors)
		{
			var newmet = new EnemyMeteor(y);
			Reg.PS.enemies.add(newmet);
			meteors++;
		}
		else
		{
			kill();
		}
	}
}