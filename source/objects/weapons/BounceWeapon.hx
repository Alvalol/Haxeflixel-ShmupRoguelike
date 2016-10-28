package objects.weapons;
import flixel.math.FlxPoint;
import flixel.util.FlxTimer;

class BounceWeapon implements IWeapon
{

	public var range:Float;
	public var max_range:Int;
	public var max_bullets:Int;

	public var damage:Int;
	public var location:FlxPoint;
	
	private var _coolingDown:Bool;
	private var _offset:Int = 8;	
	private var bulletSpeed:Int;
	
	public function new(_x:Float, _y:Float) 
	{
		location = new FlxPoint(_x, _y);
		max_bullets = 10;
		max_range = 10;
		damage = 1;
		bulletSpeed = 50;
		
	}
	
	public function shoot():Void
	{
		if (!Reg.pause)
		{
			if (Reg.PS.PBullets.countLiving() < max_bullets && !_coolingDown && Reg.PS.player.alive)
			{
				var pb =  Reg.PS.PBullets.recycle(BouncyBullet);
			    if (pb == null) pb = new BouncyBullet(location.x, location.y, bulletSpeed,damage);
				
				pb.reset(location.x + _offset, location.y +2);
				pb.set_BULLET_SPEED(bulletSpeed);
				pb.set_damage(damage);
				
				Reg.PS.PBullets.add(pb);
					
				_coolingDown = true;
				new FlxTimer().start(0.5, function(_) { _coolingDown = false; }, 1);
			}
	}
	}
	
    public function update_location(value:FlxPoint):Void 
	{
		location = value;
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