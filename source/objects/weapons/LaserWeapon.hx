package objects.weapons;
import flixel.math.FlxPoint;


class LaserWeapon implements IWeapon
{
	public var range:Float;
	public var max_range:Int;
	public var max_bullets:Int;
	
	public var location:FlxPoint;
	
	public var damage:Int;
	

	public function new(_x:Float,_y:Float) 
	{
		location = new FlxPoint(_x, _y);
		max_bullets = 1;
		max_range = 0;
		damage = 1;

	}
	
	public function shoot():Void
	{
		// this needs to be worked out before I can actually implement it in the game
		// Also this weapon should be of the same type as base weapon. In other words, the player shouldn't have both this weapon and the base weapon
		//... I think.
		
		
		if (!Reg.pause)
		{
			var pb = Reg.PS.PBullets.recycle(LaserBullet);
			if (pb == null)
			var pb = new LaserBullet(location.x, location.y);
			
			pb.reset(location.x, location.y);
			pb.set_damage(damage);
			
			Reg.PS.PBullets.add(pb);
		
		}
	}
	
	public function update_location(location:FlxPoint):Void
	{
		
	}
	
	
	public function get_damage():Int 
	{
		return damage;
	}
	
	public function set_damage(value:Int):Int 
	{
		return damage = value;
	}
	
	public function get_range():Float 
	{
		return range;
	}
	
	public function set_range(value:Float):Float
	{
		return range = value;
	}
	
	
}