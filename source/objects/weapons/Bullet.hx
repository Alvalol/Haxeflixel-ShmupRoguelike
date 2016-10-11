package objects.weapons;

import flixel.FlxSprite;

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
		super.update(elapsed);
	}
	
	public function set_BULLET_SPEED(speed:Int)
	{
	    MOVE_SPEED = speed;	
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