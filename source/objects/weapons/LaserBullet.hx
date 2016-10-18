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
		collisions();
		set_alpha(Reg.CURRENT_SEED.float(0, 1));
		setPosition(Reg.PS.player.x + 8, Reg.PS.player.y + 1);
		
		if (!Reg.pause)
		    super.update(elapsed);
	}
	
	private function collisions()
	{
		
		// I feel like there is something I'm doing wrong here. Must ask.
		
		for (block in Reg.PS.blocks)
		{	
			if (FlxG.overlap(this, block) && block.isOnScreen())
			{
					var newCoin:CoinItem =  Reg.PS.coins.recycle();	
					if (newCoin == null) 
					newCoin = new CoinItem(x, y);
					
					newCoin.reset(x , y);
					Reg.PS.coins.add(newCoin);
					block.kill();
			}
		}
		
	}
	

	
	
	
}