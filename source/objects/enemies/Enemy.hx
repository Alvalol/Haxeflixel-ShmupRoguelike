	package objects.enemies;

import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxObject;
import objects.effects.Explosion;
import objects.items.Item;
import objects.items.CoinItem;

class Enemy extends FlxSprite
{
	private var HP:Int;
	private var _appeared:Bool = false;
	
	private var drops:Array<Item>;
	private var dropRate:Array<Float>;
	
	public function new(x:Float, y:Float) 
	{
		super(x, y);
	}
	
	override public function update(elapsed:Float) 
	{
		basicChecks();
		collisions();
		
		if (!Reg.pause)
			super.update(elapsed);
	}
	
	
	private function basicChecks()
	{
		if (!inWorldBounds())
			exists = false;
			
        if (isOnScreen()) 
		{
			if (!_appeared) 
			{
				 _appeared = true;
		    }
			if (_appeared && x <= FlxG.camera.scroll.x)
			{
				kill();
			}
				
		}
		if (HP <= 0)
		    kill();
			
	}
	
	
	private function collisions()
	{
		if (FlxG.overlap(Reg.PS.player,this))
		{
			interact(Reg.PS.player);
		}
		
		if (FlxG.overlap(Reg.PS.PBullets, this))
		{
			damage();
			Reg.PS.PBullets.getFirstAlive().kill();
		}
	
	}
	
	private function interact(player:Player)
	{
		damage(); 
		player.damage();
		FlxObject.separate(this, player);
	}
	
	public function damage()
	{
		HP--;
		//Implement flashing on hit
	}
	
	private function dropItem(list:Array<Item>,rate:Array<Float>)
	{
		// Drop system must be reworked from the ground up and be implemented in a nicer way. This is a placeholder.
		
		var itemRoll = Reg.CURRENT_SEED.int(0,100);
		if (itemRoll < 15)
		{
			var tObject:Item =	Reg.CURRENT_SEED.getObject(list,rate);			
			Reg.PS.items.add(tObject);
		}
		else
		{
				var newCoin:CoinItem =  new CoinItem(x, y);
				Reg.PS.coins.add(newCoin);
		}
	}	
	
	override public function kill()
	{
		//?
		Reg.PS.enemies.remove(this, true);
		
		if(isOnScreen()){
		var e = new Explosion(x - 4, y - 4);
		Reg.PS.effects.add(e);
		}
		
		alive = false;
	    exists = false;
	}	
	

}