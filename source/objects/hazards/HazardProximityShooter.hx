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
		animation.add("idle", [0]);
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
		if (FlxG.collide(Reg.PS.PBullets, this))
		{
			shoot();
		}
	}
	
	private function proximity()
	{
		if (FlxMath.absInt(Std.int(x))  - Std.int(Reg.PS.player.x) < 15)
		{
			
			    shoot();
			
		}
	}
	
	private function shoot()
	{
		if (!shot)
		{
		 var hb:HazardBullet = new HazardBullet(x, y);
	     shot = true;
		 
			if (!flipY)
			Reg.PS.HBullets.add(hb);	
			
			else
			{
				hb.velocity.y *= -1;
				hb.angle = 180;
				Reg.PS.HBullets.add(hb);	
			}
	    }
	}
}