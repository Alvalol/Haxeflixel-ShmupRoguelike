package objects.hazards;

import flixel.FlxSprite;
import flixel.addons.effects.FlxTrail;
import flixel.util.FlxColor;
import flixel.FlxObject;
import flixel.FlxG;
import flixel.math.FlxPoint;
import flixel.math.FlxVelocity;
import objects.effects.NoHit;

class HazardBullet extends FlxSprite
{
	private var target:FlxPoint; 
	private var BULLET_SPEED = 140;
	
	public function new(x:Float, y:Float) 
	{
		super(x, y);
		checkPlayer();
		makeGraphic(4, 4, FlxColor.WHITE);
	}
	
	override public function update(elapsed:Float):Void 
	{
		move();
		collisions();
		
		if(!Reg.pause)
		super.update(elapsed);
	}
	
	private function checkPlayer()
	{
		if (Reg.PS.player.y < y)
		{
		  target = new FlxPoint(x, 0);
		}
		else
		{
		target = new FlxPoint(x, Reg.PS.map.height);
		}
	}
	
	private function move()
	{
		FlxVelocity.moveTowardsPoint(this, target, BULLET_SPEED, 0);
	}
	
	
	private function collisions()
	{	
		if (FlxG.overlap(this, Reg.PS.blocks))
		{
            createNoHit();
			kill();
		}
		
		if (!isOnScreen() || FlxG.collide(Reg.PS.map, this))
		{
			createNoHit();
			kill();
		}
		
		if (FlxG.overlap(this, Reg.PS.player))
		{
			interact(Reg.PS.player);
		}
	}
	
	private function createNoHit()
	{
		var e = new NoHit(x, y);
		Reg.PS.effects.add(e);
	}
	
	public function interact(player:Player)
	{
		kill();
		player.damage();
	}
	
}