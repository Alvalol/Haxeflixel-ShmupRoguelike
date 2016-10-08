package objects.weapon;
import flixel.math.FlxPoint;

class Weapon implements IWeaponSpread implements IWeaponRange
{
	
	var spread:IWeaponSpread;
	var range:IWeaponRange;
	
	var bullets:Array<WeaponBullet>;


	public function new() 
	{
		spread = new WeaponSpread();
		range = new WeaponRange();
	}
	
	
	public function createBullets():Array<WeaponBullet>
	{
		bullets = spread.createBullets(); 
		return bullets;
	}
	
}