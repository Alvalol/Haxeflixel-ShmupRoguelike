package objects.weapons;
import flixel.math.FlxPoint;
import flixel.util.FlxTimer;


class DropWeapon implements IWeapon
{
	public var range:Float;
	public var max_range:Int;
	public var max_bullets:Int;
	
	public var location:FlxPoint;
	
	public var damage:Int;

	private var shot:Bool = false;
	private var timersStarted:Bool = false;
	
	private var _coolingDown:Bool;
	private var pb:Bullet;
	private var canSpread = false;
	private var spread = 0;
	private var maxSpread = 0; // this doesn't make sense.
	

	public function new(_x:Float,_y:Float) 
	{
		location = new FlxPoint(_x, _y);
		max_bullets = 10;
		max_range = 0;
		damage = 2;
		
	}
	
	public function shoot():Void
	{
		if (!Reg.pause)
		{
			if (Reg.PS.PBullets.countLiving() < max_bullets && !_coolingDown  && Reg.PS.player.alive) 
			{
				
				var pb = Reg.PS.PBullets.recycle(BaseBullet);
				if (pb == null) pb = new BaseBullet(location.x+6 , location.y + 4, 0,damage);
	                pb.reset(location.x+4 , location.y + 6);
					pb.velocity.y = 70;
					pb.acceleration.y = 30;
					
					//pb.angle = 90;
					pb.set_damage(damage);
					pb.offset.set(12, 4);
					_coolingDown = true;
					new FlxTimer().start(0.75, function(_) { _coolingDown = false; }, 1);
			
			}
		}
	
	}
	
	public function update_location(value:FlxPoint):Void
	{
		location = value;
		
		if (shot && !timersStarted)
		{
			timersStarted = true;
			new FlxTimer().start(2, function(_) { pb.kill(); Reg.PS.PBullets.remove(pb, true); }, 1);
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