package objects.items;
import flixel.math.FlxPoint;
import objects.Player;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.math.FlxMath;
import flixel.math.FlxVelocity;


class CoinItem extends Item
{
	public var magnetized:Bool = false;
	
	override public function new(x:Float,y:Float) 
	{
		super(x, y);
		var tSize = FlxG.random.int(2, 5);
		makeGraphic(tSize,tSize, FlxColor.WHITE);
	    width = 8;
		height = 8;
		offset.set( -4, -4);
		centerOffsets();
	}
		
	override public function update(elapsed:Float)
	{
		
	    angularVelocity += 3;
		move();
	    if (FlxMath.distanceBetween(Reg.PS.player, this) < 10)
		{
			magnetized = true;	
		}
		else
		{
		magnetized = false;
		}
		
		super.update(elapsed);	
	}
	
	
	private function move()
	{
		if (FlxMath.distanceBetween(Reg.PS.player, this) < Reg.PS.player.MAGNET)
		{
	//	var tPoint = new FlxPoint(Reg.PS.player.x, Reg.PS.player.y);
		FlxVelocity.moveTowardsObject(this, Reg.PS.player, Reg.PS.player.MAGNET_FORCE, 800);
		}
	}

	
    override function interact(player:Player)
	{
	  super.kill();
	  Reg.score += 5;
	}
	
}