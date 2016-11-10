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
	public var BULLET_SPEED = 50;
	
	public function new(x:Float, y:Float) 
	{
		super(x, y);
		loadGraphic(AssetPaths.items__png, true, 8, 8);
		animation.add("idle", [22,23], 8, true); // looping the animation gives it an interesting wobbly effect which might be desirable for some enemies.
		animation.play("idle");

		
	}
	
	
	override public function update(elapsed:Float):Void 
	{
		collisions();
		velocity.y = BULLET_SPEED;		
		if(!Reg.pause)
		super.update(elapsed);
	}
	
	
	
	private function collisions()
	{	
		if (FlxG.overlap(this, Reg.PS.blocks))
		{
            createNoHit();
			kill();
		}
		
		if (!isOnScreen(FlxG.camera) || FlxG.collide(Reg.PS.map, this))
		{
			createNoHit();
			kill();
		}
		
		if (FlxG.overlap(this, Reg.PS.player))
		{
			interact(Reg.PS.player);
		}
		
		if (x >= (FlxG.camera.scroll.x + FlxG.width) || x <= FlxG.camera.scroll.x || y > FlxG.height || y <= FlxG.camera.scroll.y)
		{
			createNoHit();
			kill();
		}
	}
	
	private function createNoHit()
	{
		var e = new NoHit(x, y);
		e.set_angle(angle + 270);
		Reg.PS.effects.add(e);
	}
	
	public function interact(player:Player)
	{
		kill();
		player.damage();
	}
	
}