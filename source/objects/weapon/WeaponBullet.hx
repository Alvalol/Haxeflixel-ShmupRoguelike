package objects.weapon;
import flixel.FlxSprite;

import flixel.util.FlxColor;


class WeaponBullet extends FlxSprite
{

	var range:WeaponRange;
	var spread:WeaponSpread;
	
	
	public function new() 
	{
		super();
		makeGraphic(8, 8, FlxColor.PURPLE);
	}
	
}