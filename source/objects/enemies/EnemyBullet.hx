package objects.enemies;

import flixel.FlxSprite;
import flixel.addons.effects.FlxTrail;
import flixel.util.FlxColor;
import flixel.FlxObject;
import flixel.FlxG;
import objects.effects.NoHit;

class EnemyBullet extends FlxSprite
{

	private var bTrail:FlxTrail;
	
	public function new(x:Float,y:Float) 
	{
		super(x, y);
		loadGraphic(AssetPaths.items__png, true, 8, 8);
		animation.add("idle", [14, 15], 8, true); // looping gives it an interesting wobbly effect
		animation.play("idle");
		//scale.set(0.5, 0.5);
		width = 8;
		height = 8;
		
		createTrail();
	}
	
	private function createTrail()
	{
        bTrail = new FlxTrail(this, null, 10, 1, 0.3, 0.05);
		Reg.PS.effects.add(bTrail);
	}
	
	override public function update(elapsed:Float):Void
	{
		collisions();
		
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
		
		if (!isOnScreen() || FlxG.collide(Reg.PS.map.loadedMap, this))
		{
			createNoHit();
			kill();
		}
		
		if (FlxG.overlap(this, Reg.PS.player))
		{
			interact(Reg.PS.player);
		}
		
	}

	public function interact(player:Player)
	{
		kill();
		player.damage();
	}
	
	private function createNoHit()
	{
		var e = new NoHit(x, y);
		Reg.PS.effects.add(e);
	}
	
	override public function kill():Void
	{	
	Reg.PS.EBullets.remove(this, true);
	Reg.PS.effects.remove(bTrail, true);
	super.kill();
	}
	
	
}