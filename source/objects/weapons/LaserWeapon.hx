package objects.weapons;
import flixel.math.FlxPoint;
import flixel.util.FlxTimer;


class LaserWeapon implements IWeapon
{
	public var range:Float;
	public var max_range:Int;
	public var max_bullets:Int;
	
	public var location:FlxPoint;
	
	public var damage:Int;

	private var shot:Bool = false;
	private var timersStarted:Bool = false;
	
	private var pb:Bullet;
	private var canSpread = false;
	private var spread = 0;
	private var maxSpread = 0; // this doesn't make sense.
	

	public function new(_x:Float,_y:Float) 
	{
		location = new FlxPoint(_x, _y);
		max_bullets = 1;
		max_range = 0;
		damage = 1;
		
	}
	
	public function shoot():Void
	{
		if (!Reg.pause && !shot)
		{
			shot = true;

			pb = new LaserBullet(location.x + 8, location.y);
			pb.set_damage(damage);
			Reg.PS.PBullets.add(pb);
		}
	}
	
	public function update_location(value:FlxPoint):Void
	{
		location = value;
		
		if (shot && !timersStarted)
		{
			timersStarted = true;
			new FlxTimer().start(2, function(_) { pb.destroy(); Reg.PS.PBullets.remove(pb, true); }, 1);
			new FlxTimer().start(5, function(_) { shot = false; timersStarted = false;  }, 1);
		}
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
	
	public function get_spread():Int
	{
		return spread;
	}
	
	public function set_spread(value:Int)
	{
		spread = value;
	}
	
	public function get_canSpread():Bool
	{
		return canSpread;
	}
	
	
	public function get_maxSpread():Int
	{
		return maxSpread;
	}
	
}