package objects.enemies;

import flixel.FlxSprite;
import flixel.addons.effects.FlxTrail;
import flixel.util.FlxColor;
import flixel.FlxObject;
import flixel.FlxG;

class EnemyBullet extends FlxSprite
{

	private static var trail:FlxTrail;
	
	private var bTrail:FlxTrail;
	
	public function new(x:Float,y:Float) 
	{
		super(x, y);
		loadGraphic(AssetPaths.items__png, true, 8, 8);
		animation.add("idle", [14, 15], 8, false);
		animation.play("idle");
		width = 8;
		height = 8;
		
	/*	bTrail =  cast Reg.PS.effects.recycle();
				
		if (bTrail== null) 
            bTrail = new FlxTrail(this, null, 10, 1, 0.3, 0.05);
		
		bTrail.reset(x , y);
		Reg.PS.effects.add(bTrail);*/
	}
	
	override public function update(elapsed:Float):Void
	{
		for(block in Reg.PS.blocks){
		if (FlxG.overlap(this, block)) kill();
		}
		
		if (!isOnScreen() || FlxG.collide(Reg.PS.map.loadedMap, this))
		{
			kill();
		}
		super.update(elapsed);
	}
	
		public function interact(player:Player)
	{
		kill();
		player.damage();

	}
	
	override public function kill():Void
	{	
		Reg.PS.EBullets.remove(this, true);
	super.kill();

//	bTrail.visible = false;
	
	}
	
	
}