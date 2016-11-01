package objects.weapons;
import flixel.math.FlxPoint;
import flixel.util.FlxTimer;
import objects.BaseBullet;
import flixel.math.FlxVelocity;


class BackWeapon implements IWeapon
{
	
	public var range:Float;
	public var max_range:Int;
	public var max_bullets:Int;

	public var damage:Int;
	public var location:FlxPoint;
	
	private var _coolingDown:Bool;
	private var _offset:Int = 3;	
	private var bulletSpeed:Int;
	
	private var canSpread = true;
	private var spread = 1;
	private var maxSpread = 3;
	
	public function new(_x:Float, _y:Float)
	{
		location = new FlxPoint(_x, _y);
		max_bullets = 100;
		max_range = 10;
		damage = 1;
		bulletSpeed = -200;
	}
	
	public function prepareShot():Array<BaseBullet>
	{
	   var tmpbullets = new Array<BaseBullet>();
	   tmpbullets.push(new BaseBullet(location.x,location.y,bulletSpeed,damage));
	   return tmpbullets;
	}
	
	
	public function shoot():Void
	{
		//_bullets = prepareShot();
		
        if (!Reg.pause)
		{
			switch spread
			{
			case 1:
				{
					var ang = 180;
					
					if (Reg.PS.PBullets.countLiving() < max_bullets && !_coolingDown && Reg.PS.player.alive) 
					{
						
						var pb =  Reg.PS.PBullets.recycle(BaseBullet);
						if (pb == null) pb = new BaseBullet(location.x - _offset, location.y - 2 , bulletSpeed,damage);

							pb.reset(location.x - _offset, location.y + 2);
							pb.set_BULLET_SPEED(bulletSpeed);
							pb.set_damage(damage);
							pb.angle = ang;
							pb.scale.set(0.25, 0.25);
							
							Reg.PS.PBullets.add(pb);
							_coolingDown = true;
							new FlxTimer().start(0.15, function(_) { _coolingDown = false; }, 1);
					}
						}
						
			case 2:
				{
			
			if (Reg.PS.PBullets.countLiving() < max_bullets && !_coolingDown && Reg.PS.player.alive) 
			{
				var angle = -15;
				var pbGroup:Array<BaseBullet> = new Array<BaseBullet>();
				for (i in 0...2)
				{
					var pb:BaseBullet = cast Reg.PS.PBullets.recycle(BaseBullet);
					if (pb == null) pb = new BaseBullet(location.x, location.y, bulletSpeed, damage);
					
					pb.reset(location.x + _offset, location.y + 2);
					pb.set_BULLET_SPEED(bulletSpeed);
					pb.set_damage(damage);
					pb.scale.set(0.25, 0.25);
					
					pb.velocity.set(FlxVelocity.velocityFromAngle(angle, bulletSpeed).x,FlxVelocity.velocityFromAngle(angle, bulletSpeed).y);
		            pb.angle = angle;
					angle += 30;
					pbGroup.push(pb);
			       
				}
				
				if (pbGroup.length == 2)
				{
					for (pbullet in pbGroup)
					{
					Reg.PS.PBullets.add(pbullet);
					}
					_coolingDown = true;
					new FlxTimer().start(0.15, function(_) { _coolingDown = false; }, 1);	
				}
			}
				}
			
			case 3:
				{
				if (Reg.PS.PBullets.countLiving() < max_bullets && !_coolingDown && Reg.PS.player.alive) 
			    {
				var angle = -15;
				var pbGroup:Array<BaseBullet> = new Array<BaseBullet>();
				for (i in 0...3)
				{
					var pb:BaseBullet = cast Reg.PS.PBullets.recycle(BaseBullet);
					if (pb == null) pb = new BaseBullet(location.x, location.y, bulletSpeed, damage);
					
					pb.reset(location.x + _offset, location.y + 2);
					pb.set_BULLET_SPEED(bulletSpeed);
					pb.set_damage(damage);
					pb.scale.set(0.25, 0.25);
					
					pb.velocity.set(FlxVelocity.velocityFromAngle(angle, bulletSpeed).x,FlxVelocity.velocityFromAngle(angle, bulletSpeed).y);
		            pb.angle = angle;
					angle += 15;
					pbGroup.push(pb);
			       
				}
				
				if (pbGroup.length == 3)
				{
					for (pbullet in pbGroup)
					{
					Reg.PS.PBullets.add(pbullet);
					}
					_coolingDown = true;
					new FlxTimer().start(0.15, function(_) { _coolingDown = false; }, 1);	
				}
				}
				
				
	}
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