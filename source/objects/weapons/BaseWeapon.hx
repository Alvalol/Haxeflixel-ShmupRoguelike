package objects.weapons;
import flixel.math.FlxPoint;
import flixel.util.FlxTimer;
import objects.PlayerBullet;


class BaseWeapon implements IWeapon
{
	
	public var range:Int;
	public var max_range:Int;
	public var max_bullets:Int;

	public var damage:Int;
	public var location:FlxPoint;
	
	private var _coolingDown:Bool;
	private var _bullets:Array<PlayerBullet>;
	private var _offset:Int = 4;	
	
	public function new(_x:Float, _y:Float)
	{
		location = new FlxPoint(_x, _y);
		max_bullets = 10;
		max_range = 10;
		damage = 1;
	}
	
	public function prepareShot():Array<PlayerBullet>
	{
	   var tmpbullets = new Array<PlayerBullet>();
	   tmpbullets.push(new PlayerBullet(location.x,location.y));
	   return tmpbullets;
	}
	
	
	public function shoot():Void
	{
		_bullets = prepareShot();
		
        if (!Reg.pause)
		{
		var ang = 10;
		
		if (Reg.PS.PBullets.countLiving() < max_bullets && !_coolingDown && Reg.PS.player.alive) 
		{
			
			var pb =  Reg.PS.PBullets.recycle(PlayerBullet);
			if (pb == null) new PlayerBullet(location.x, location.y);

				pb.reset(location.x + _offset, location.y -2);
				Reg.PS.PBullets.add(pb);
				_coolingDown = true;
				new FlxTimer().start(0.1, function(_) { _coolingDown = false; }, 1);
		}
	}

	}
	
	public function update_location(value:FlxPoint):Void 
	{
		location = value;
	}
	
}