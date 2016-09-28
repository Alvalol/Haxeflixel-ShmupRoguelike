package objects.weapon;
import flixel.math.FlxPoint;

class Weapon
{

	var spread:WeaponSpread;
	var range:WeaponRange;
	
	var pos:FlxPoint;
	
	public function new() 
	{
		spread = new WeaponSpread();
		range = new WeaponRange();
	}
	
	public function update()
	{
	   pos.set(Reg.PS.player.x, Reg.PS.player.y);
	}
	
	
}