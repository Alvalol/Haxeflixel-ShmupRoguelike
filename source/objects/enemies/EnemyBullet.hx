package objects.enemies;

import flixel.FlxSprite;
import flixel.addons.effects.FlxTrailArea;
import flixel.util.FlxColor;
import flixel.FlxObject;
import flixel.FlxG;
import objects.effects.NoHit;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;

class EnemyBullet extends FlxSprite
{
	private var creatednoHit = false;

	public function new(x:Float, y:Float)
	{
		super(x, y);
		loadGraphic(AssetPaths.items__png, true, 8, 8);
		animation.add("idle", [22,23], 8, true); // looping the animation gives it an interesting wobbly effect which might be desirable for some enemies.
		animation.play("idle");
		width = 8;
        // Needs flx tween
	}
	
	override public function update(elapsed:Float):Void
	{
		collisions();
		//angle+= 5;
		

			
		if(!Reg.pause)
		super.update(elapsed);
	}

	
	private function collisions()
	{
		
		if (FlxG.overlap(this, Reg.PS.blocks) || FlxG.overlap(this, Reg.PS.hazards))
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
	/*	
		if (x > Reg.PS.camera.width|| x < 0 || y > Reg.PS.camera.height || y < 0)
		{
			createNoHit();
			kill();
		}
		*/
		
	}

	public function interact(player:Player)
	{
		player.damage();
		kill();
	}
	
	private function createNoHit()
	{
		var noHit = Reg.PS.effects.recycle(NoHit);
        if (noHit == null) noHit = new NoHit(x, y);
		
		noHit.reset(x, y);
		noHit.set_angle(angle);
		creatednoHit = true;
		Reg.PS.effects.add(noHit);
	}
	
	override public function kill()
	{	
		super.kill();
	}
	
	override public function revive()
	{
		
		super.revive();
	}
	
}