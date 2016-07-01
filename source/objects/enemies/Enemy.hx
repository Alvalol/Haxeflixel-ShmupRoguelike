package objects.enemies;

import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxObject;
import objects.items.Item;
import objects.items.CoinItem;

class Enemy extends FlxSprite
{
	private var HP:Int;
	
	private var _appeared:Bool = false;
	private var drops:Array<Item>;
	
	public function new(x:Float, y:Float) 
	
	{
		super(x, y);
		
	}
	
	override public function update(elapsed:Float) 
	{
		if (!inWorldBounds())
			exists = false;
			
		if (isOnScreen() && !_appeared) 
			_appeared = true;	
			
			
		if (HP <= 0)
		    kill();
			
		if (!Reg.pause)
			super.update(elapsed);
	}
	
	private function interact(player:Player)
	{
		FlxObject.separate(this, player);
			kill();
			player.damage();
	}
	
	public function damage()
	{
		HP--;
	}
	override public function kill()
	{
		alive = false;
	    exists = false;
	
		velocity.x = 0;
		acceleration.x = 0;
		//animation.play("dead");
	}
	
		private function dropItem(list:Array<Item>)
	{

		var itemRoll = FlxG.random.int(0,100);
		//trace(itemRoll);
		if (itemRoll < 90)
		{
			//trace(itemRoll);
			var tObject:Item =	FlxG.random.getObject(list);			
			Reg.PS.items.add(tObject);
		}
		else
		{
				var newCoin:CoinItem =  Reg.PS.coins.recycle(CoinItem);
					
				if (newCoin == null) 
				    newCoin = new CoinItem(x, y);
					
				newCoin.reset(x , y);
				Reg.PS.coins.add(newCoin);
		}
	}
}