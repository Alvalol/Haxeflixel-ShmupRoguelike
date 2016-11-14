package objects.enemies.enemyobjects;
import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.tweens.FlxTween;
import flixel.util.FlxTimer;

class EnemyExplosiveExplosion extends FlxSprite
{

	public function new(x:Float, y:Float) 
	{
		super(x, y);
		loadGraphic(AssetPaths.hazards__png, true, 8, 8);
		animation.add("active", [2], 0);	
		animation.play("active");
		setGraphicSize(130, 36);

		
		updateHitbox();
		
		immovable = true;
			new FlxTimer().start(1.5, function(_)
		{
			kill();
		}, 1);
		
	FlxTween.tween(scale, {x : x+0.001}, 0.05, {type : FlxTween.PINGPONG });	
	}
	
	override public function update(elapsed:Float)
	{
		
		if (FlxG.overlap(Reg.PS.player, this))
		     interact(Reg.PS.player);
		
	    
		if(!Reg.pause)
		    super.update(elapsed);
    }
	
	private function interact(player:Player)
    {
		player.kill();	
	}
	
}