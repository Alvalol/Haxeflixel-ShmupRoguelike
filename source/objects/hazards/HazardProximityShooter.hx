package objects.hazards;
import flixel.FlxSprite;
import flixel.FlxObject;
import flixel.FlxG;
import flixel.math.FlxPoint;
import flixel.util.FlxColor;
import flixel.math.FlxMath;
import flixel.math.FlxVelocity;


class HazardProximityShooter extends Hazard
{
	private var shot:Bool = false;

	public function new(x:Float,y:Float, _flipped:Bool) 
	{
		super(x - 8, y - 8);
	    immovable = true;
		flipY = _flipped;
		solid = true;
		loadGraphic(AssetPaths.hazards__png, true, 8,8);
		animation.add("idle", [4,5],8);
		animation.add("inactive", [6]);
		animation.play("idle");
	}
	
	override public function update(elapsed:Float) 
	{
		forceTrigger();
		proximity();
		
		super.update(elapsed);
	}
	
	private function forceTrigger()
	{
		if (isOnScreen())
		{
		if(FlxG.collide(Reg.PS.PBullets, this, NoDamage)){
       
		shoot();
		}
		}
	}
	
	private function proximity()
	{
		if (FlxMath.absInt(Std.int(x))  - Std.int(Reg.PS.player.x) < 15)
		{
			    shoot();
		}
		
	}
	
	// duck in space kill crabs and rats and medusas... im sure need to go sleep. ist almost strangest game am ever seen. - tw_ladon
	
	private function shoot()
	{
		if (!shot)
		{
	     shot = true;
		 
		 var hb:HazardBullet = Reg.PS.HBullets.recycle(HazardBullet);
		 if (hb == null) { new HazardBullet(x, y); }

		 animation.play("inactive");
		 hb.scale.set(0.75, 0.75);
			if (!flipY)
			{
			hb.BULLET_SPEED = -FlxMath.absInt(hb.BULLET_SPEED);
			hb.reset(x, y - 5);
			Reg.PS.HBullets.add(hb);
			}
			else
			{
				hb.BULLET_SPEED = FlxMath.absInt(hb.BULLET_SPEED);
				hb.reset(x, y +5);
				hb.angle = 180;
				Reg.PS.HBullets.add(hb);	
			}
	    }
	}
}