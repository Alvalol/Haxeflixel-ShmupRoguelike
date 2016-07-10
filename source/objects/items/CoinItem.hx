package objects.items;
import flixel.addons.effects.FlxTrail;
import flixel.math.FlxPoint;
import objects.Player;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.math.FlxMath;
import flixel.math.FlxVelocity;
import flixel.FlxObject;

class CoinItem extends Item
{
	public var magnetized:Bool;
//	private var bTrail:FlxTrail;

	
	override public function new(x:Float,y:Float) 
	{
		super(x, y);
		var t = FlxG.random.int(2, 5);
		makeGraphic(t,t, FlxColor.WHITE);
		offset.set( -4, -4);
		_appeared = false;
		centerOffsets();
		/*
		
		bTrail =  cast Reg.PS.effects.recycle();		
		if (bTrail== null) 
            bTrail = new FlxTrail(this, null, 10, 1, 0.3, 0.05);
			bTrail.reset(x , y);	
			Reg.PS.effects.add(bTrail);*/
	}
		
	override public function update(elapsed:Float)
	{
		   if (FlxG.overlap(this, Reg.PS.player))
		   {
			   this.interact(Reg.PS.player);
		   }
	   
	    angle+= 5;
		if (velocity.x > 0)
		{
		//bTrail.update(elapsed);
		}

		if (magnetized)
		move();
		else
		{velocity.set(0, 0);
		acceleration.set(0, 0);}
		
		//trace(FlxMath.distanceBetween(this, Reg.PS.player));	
		
	    if (FlxMath.distanceBetween(this,Reg.PS.player) < Reg.PS.player.MAGNET && magnetized == false )
			magnetized = true;	
		else
		    magnetized = false;
			
		noOverlapping();

	if (!magnetized)
	{
		move();
	}
		
	      //  angularVelocity = 100;
		//	var rotPos = rotateOnPlayer(); 
		//	setPosition(rotPos.x,rotPos.y);
		
		
		super.update(elapsed);
	}
	
	
	private function move()
	{
		angle += velocity.x/10;
		if (FlxMath.distanceBetween(Reg.PS.player, this) < Reg.PS.player.MAGNET)
		{
	
		FlxVelocity.accelerateTowardsObject(this, Reg.PS.player, Reg.PS.player.MAGNET_FORCE, Reg.PS.player.MAGNET_FORCE * 2);
		}
	}

	private function rotateOnPlayer():FlxPoint
	{
		angle = (angle) * (Math.PI / 180);
		var rotatedX = Math.cos(angle) * (x - Reg.PS.player.x) - Math.sin(angle) * (y - Reg.PS.player.y) + Reg.PS.player.x;
		var rotatedY = Math.sin(angle) * (x - Reg.PS.player.x) + Math.cos(angle) * (y - Reg.PS.player.y) + Reg.PS.player.y;
		
		var rotatedPos = new FlxPoint(rotatedX, rotatedY); 
		return  rotatedPos;
	}

	
	private function noOverlapping()
	{
		for (coin in Reg.PS.coins)
		{
			if (FlxG.overlap(this, coin))
			{
				FlxObject.separate(this, coin);
			}//sddsffsddsfd
		}
	}
	
	override public function kill()
	{
		lifespan = 4;
		Reg.PS.coins.remove(this, true);
		super.kill();
	}
	
    override function interact(player:Player)
	{
	  kill();
	  Reg.score += 5;
	}
	
}