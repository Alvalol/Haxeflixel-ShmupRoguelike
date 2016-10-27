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
	
	private function collisions()
	{
	    FlxG.overlap(Reg.PS.blocks, this, overlappingObjects,null);
	}
	
	private function overlappingObjects(object1:FlxSprite, object2:FlxSprite)
	{
<<<<<<< HEAD
		object1.kill();
		object2.kill();
=======
			if (!isOnScreen(FlxG.camera))
			kill();
			
       for (block in Reg.PS.blocks)
		{	
			if (FlxG.overlap(this, block))
			{
					kill();
					block.kill();
			}
		}
		
>>>>>>> b6473e59ef5e5ede466b8d54749ad4540af5d9a2
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
	
	override public function kill()
	{
		super.kill();
	}
}