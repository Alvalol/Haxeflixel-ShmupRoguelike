package objects.hazards;
import objects.Player;
import flixel.FlxG;
import flixel.FlxObject;

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
	
	override public function update(elapsed:Float):Void 
	{
		if (FlxG.overlap(this, Reg.PS.player))
	    {
			FlxObject.separate(this, Reg.PS.player);
			interact(Reg.PS.player);
		}
		
		super.update(elapsed);
	}
	
	override public function kill()
	{
		alive = false;
		exists = false;
		Reg.PS.blocks.remove(this, true);
	}
	
}