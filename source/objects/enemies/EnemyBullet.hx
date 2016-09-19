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
	private var noHit:NoHit;
	private var creatednoHit = false;
	
	public function new(x:Float,y:Float) 
	{
		super(x, y);
		loadGraphic(AssetPaths.items__png, true, 8, 8);
		animation.add("idle", [22,23], 8, true); // looping the animation gives it an interesting wobbly effect which might be desirable for some enemies.
		animation.play("idle");
		width = 8;
		height = 8;
		
		createTrail();
	}
	
	private function createTrail()
	{
        bTrail = new FlxTrail(this, null, 15, 1, 0.3, 0.05);
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

	public function interact(player:Player)
	{
		kill();
		player.damage();
	}
	
	private function createNoHit()
	{
        noHit = new NoHit(x, y);
		creatednoHit = true;
		Reg.PS.effects.add(noHit);
	}
	
	override public function kill()
	{	
	Reg.PS.EBullets.remove(this, true);
	Reg.PS.effects.remove(bTrail, true);
	if(creatednoHit)
	{
	Reg.PS.effects.remove(noHit, true);
	}
	super.kill();
	}
	
}