package objects.weapon;
import flixel.math.FlxPoint;

class Weapon
{
	var spread:WeaponSpread;
	var range:WeaponRange;
	
	var pos:FlxPoint;
	
	private var bullet:WeaponBullet;
	
	public function new() 
	{
		// has bullets
	}
	
	private function shoot()
	{
		// creates the new bullet based on properties
		// set by the bullet's components
	}
	
}