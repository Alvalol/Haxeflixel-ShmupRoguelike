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
		if (FlxG.collide(Reg.PS.PBullets, this) && isOnScreen() )
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
	// duck in space kill crabs and rats and medusas... im sure need to go sleep. ist almost strangest game am ever seen. - tw_ladon
	
	private function shoot()
	{
		if (!shot)
		{
		 var hb:HazardBullet = new HazardBullet(x, y+4);
	     shot = true;
		 animation.play("inactive");
		 hb.scale.set(0.75, 0.75);
			
			if (!flipY)
			{
			hb.reset(x, y - 4);

			Reg.PS.HBullets.add(hb);
			}
			else
			{
				hb.velocity.y *= -1;
				hb.angle = 180;
				Reg.PS.HBullets.add(hb);	
			}
	    }
	}
}