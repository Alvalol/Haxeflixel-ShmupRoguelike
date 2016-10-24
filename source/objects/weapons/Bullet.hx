package objects.weapons;

import flixel.FlxSprite;
import flixel.FlxG;
import objects.items.CoinItem;

class Bullet extends FlxSprite
{
	private var MOVE_SPEED:Int;
	private var damage:Int;

	public function new(x:Float, y:Float) 
	{
		super(x, y);
	}
	
	override public function update(elapsed:Float)
	{
		collisions();
		super.update(elapsed);
	}
	
	public function set_BULLET_SPEED(speed:Int)
	{
	    MOVE_SPEED = speed;	
	}
	
	private function collisions()
	{
			if (!isOnScreen())
			kill();
			
       for (block in Reg.PS.blocks)
		{	
			if (FlxG.overlap(this, block))
			{
					kill();
					block.kill();
			}
		}
		
	}
	
	public function set_damage(_damage:Int)
	{
		damage = _damage;
	}
	
	public function get_damage()
	{
		return damage;
	}
}