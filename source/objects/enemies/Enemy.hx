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
	
	public function new(x:Float, y:Float) 
	{
		super(x, y);
	}
	override public function update(elapsed:Float) 
	{
		
			
		if (!inWorldBounds())
			exists = false;
			
        if (isOnScreen()) {
        if (!_appeared) 
             _appeared = true;
                          }
         else {
           if (_appeared)
            kill();
		 }
			
			
		if (HP <= 0 || !isOnScreen() && _appeared)
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
	
		private function dropItem(list:Array<Item>)
	{

		var itemRoll = FlxG.random.int(0,100);
		//trace(itemRoll);
		if (itemRoll < 15)
		{
			//trace(itemRoll);
			var tObject:Item =	FlxG.random.getObject(list);			
			Reg.PS.items.add(tObject);
		}
		else
		{
				var newCoin:CoinItem =  Reg.PS.coins.recycle();

				
				if (newCoin == null) 
				    newCoin = new CoinItem(x, y);
					
				newCoin.reset(x , y);
				Reg.PS.coins.add(newCoin);
		}
	}	
	
	override public function kill()
	{
		//Reg.PS.enemies.remove(this, true);
		
		if(isOnScreen()){
		var e = new Explosion(x - 4, y - 4);
		Reg.PS.effects.add(e);
		}
		
		alive = false;
	    exists = false;
	}
	
}