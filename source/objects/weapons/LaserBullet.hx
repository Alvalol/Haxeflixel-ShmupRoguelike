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
		makeGraphic(100, 1, FlxColor.WHITE);
		
	}
	
	override public function update(elapsed:Float)
	{
		collisions();
		
		setPosition(Reg.PS.player.x, Reg.PS.player.y);
		if (!Reg.pause)
		    super.update(elapsed);
	}
	
	private function collisions()
	{
		
		// I feel like there is something I'm doing wrong here. Must ask.
		
		for (block in Reg.PS.blocks)
		{	
			if (FlxG.overlap(this, block))
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