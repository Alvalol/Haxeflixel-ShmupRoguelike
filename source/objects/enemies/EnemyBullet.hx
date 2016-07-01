package objects.enemies;

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
		makeGraphic(2, 2, FlxColor.WHITE, false); // placeholder;
	}
	
	override public function update(elapsed:Float):Void
	{
		var tx:Int = Std.int(x / 8);
		var ty:Int = Std.int(y / 8);
		
		if (!isOnScreen() || FlxG.overlap(Reg.PS.map.loadedMap,this) && Reg.PS.map.loadedMap.getTile(tx, ty) != 0)
		{
		
			if (Reg.PS.map.loadedMap.getTile(tx, ty) == 1)
			{
		    Reg.PS.map.loadedMap.setTile(tx, ty, 0, true);
			kill();
			}
		
			if (!isOnScreen())
				kill();
				
		if (FlxG.overlap(Reg.PS.player, this))
		     interact(Reg.PS.player);
			 
		}
		
	
			 	super.update(elapsed);
	
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