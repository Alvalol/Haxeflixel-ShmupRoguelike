package objects;

import flixel.FlxSprite;
import flixel.addons.effects.FlxTrail;
import flixel.util.FlxColor;
import flixel.FlxObject;
import flixel.FlxG;

class EnemyBullet extends FlxSprite
{

	private static var trail:FlxTrail;
	private static inline var SCORE_AMOUNT:Int = 100;
	
	public function new(x:Float,y:Float) 
	{
		super(x,y);
		makeGraphic(1, 4, FlxColor.WHITE, false); // placeholder;
	}
	
	override public function update(elapsed:Float):Void
	{
		
		
		super.update(elapsed);
		if (!isOnScreen() || FlxG.collide(Reg.PS.map.loadedMap, this))
		    kill();
		
		if (FlxG.overlap(Reg.PS.player, this))
		     interact(Reg.PS.player);
			 
	}
	
		private function interact(player:Player)
	{
		player.damage();
		kill();	
	}
	
	override public function kill():Void
	{	
	 alive = false;
	 exists = false;
		
	}
	
	
}