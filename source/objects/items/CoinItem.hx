package objects.items;
import objects.Player;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxSprite;


class CoinItem extends Item
{
	
	override public function new(x:Float,y:Float) 
	{
		super(x, y);
		makeGraphic(3, 3, FlxColor.WHITE, true);
	    width = 8;
		height = 8;
		offset.set( -4, -4);
		centerOffsets();
	}
		
	override public function update(elapsed:Float)
	{
		angle += 10;
		super.update(elapsed);

	}
	
    override function interact(player:Player)
	{
	  super.kill();
	  Reg.score += 5;
	}
	
}