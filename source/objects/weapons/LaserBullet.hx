package objects.weapons;
import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.FlxG;

import objects.items.CoinItem;

class LaserBullet extends Bullet
{

	public function new(x:Float,y:Float) 
	{
		super(x, y);
		makeGraphic(300, 2, FlxColor.WHITE);
		
	}
	
	override public function update(elapsed:Float)
	{
		set_alpha(Reg.CURRENT_SEED.float(0, 1));
		setPosition(Reg.PS.player.x + 8, Reg.PS.player.y + 1);
		
		if (!Reg.pause)
		    super.update(elapsed);
	}
	
	

	
	
	
}