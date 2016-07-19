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

	public function new(x:Float,y:Float) 
	{
		super(x-4, y);
		immovable = true;
		solid = true;
		makeGraphic(8, 8, FlxColor.BROWN);
	}
	
	override public function update(elapsed:Float) 
	{
		proximity();
		super.update(elapsed);
	}
	
	
	
	private function proximity()
	{
		if (FlxMath.absInt(Std.int(x))  - Std.int(Reg.PS.player.x) < 10 && !shot)
		{
			shoot();
		}
	}
	
	private function shoot()
	{
			var hb:HazardBullet = new HazardBullet(x+2, y);
			Reg.PS.HBullets.add(hb);		
			shot = true;
	}
}