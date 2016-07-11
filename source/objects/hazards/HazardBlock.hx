package objects.hazards;
import objects.Player;
import flixel.FlxG;
import flixel.FlxObject;
import objects.effects.Explosion;

class HazardBlock extends Hazard
{

	public function new(x:Float,y:Float)
	{
		super(x, y);
		loadGraphic(AssetPaths.solid__png, true, 8, 8);
		animation.add("static", [1]);
		animation.play("static");
		immovable = true;
	}
	
	override private function interact(player:Player)
	{
	  super.interact(player);
	  FlxObject.separate(this, player);
	}
	
	override public function kill()
	{
		Reg.PS.blocks.remove(this, true);
		alive = false;
		exists = false;
		
		if (isOnScreen())
		{
		var e = new Explosion(x - 4, y - 4);
		Reg.PS.effects.add(e);
		}
	}
}