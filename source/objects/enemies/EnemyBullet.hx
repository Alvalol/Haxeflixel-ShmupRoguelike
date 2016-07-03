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
		bTrail = new FlxTrail(this, null, 10, 1, 0.3, 0.05);
		Reg.PS.add(bTrail);

	}
	
	override public function update(elapsed:Float):Void
	{
		var tx:Int = Std.int(x / 8);
		var ty:Int = Std.int(y / 8);
		var ttile = Reg.PS.map.loadedMap.getTile(tx, ty);
		
		if (isOnScreen())
		{
			bTrail.reset(x, y);
			bTrail.visible = true; // needs a fix
		}
		else
		{
			bTrail.visible = false;
		}
		
		if ((!isOnScreen() || FlxG.overlap(Reg.PS.map.loadedMap,this) && ttile != 0))
		{
		
			if (ttile == 1)
			{
		    Reg.PS.map.loadedMap.setTile(tx, ty, 0, true);
			}
			
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
		bTrail.visible = false;
	super.kill();

	}
	
	
}