package objects;

import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxObject;

class Enemy extends FlxSprite
{
    private static inline var SCORE_AMOUNT:Int = 0;
	private var HP:Int;
	
	private var _appeared:Bool = false;
	
	public function new(x:Float, y:Float) 
	{
		super(x, y);
		
	}
	
	override public function update(elapsed:Float) 
	{
		if (!inWorldBounds())
			exists = false;
			
		if (isOnScreen() && !_appeared) 
			_appeared = true;	
			
			
		if (HP <= 0)
		    kill();
			
		if (!Reg.pause)
			super.update(elapsed);
	}
	
	private function interact(player:Player)
	{
		FlxObject.separate(this, player);
			kill();
			player.damage();
	}
	
	public function damage()
	{
		HP--;
	}
	override public function kill()
	{
		alive = false;
	    exists = false;
		Reg.score += SCORE_AMOUNT;
		
		velocity.x = 0;
		acceleration.x = 0;
		//animation.play("dead");
	}
}