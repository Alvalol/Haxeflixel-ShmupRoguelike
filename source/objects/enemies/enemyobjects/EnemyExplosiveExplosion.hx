package objects.enemies.enemyobjects;
import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.util.FlxTimer;

class EnemyExplosiveExplosion extends FlxSprite
{

	public function new(x:Float, y:Float) 
	{
		super(x, y);
		makeGraphic(FlxG.width, 20, FlxColor.WHITE);
		immovable = true;
			new FlxTimer().start(1.5, function(_)
		{
			kill();
		}, 1);
	}
	
	override public function update(elapsed:Float)
	{
		
		if (FlxG.overlap(Reg.PS.player, this))
		     interact(Reg.PS.player);
			 
		super.update(elapsed);
    }
	
			private function interact(player:Player)
	    {
		player.kill();
		}
}