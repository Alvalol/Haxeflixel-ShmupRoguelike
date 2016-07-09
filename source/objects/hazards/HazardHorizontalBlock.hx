package objects.hazards;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.FlxObject;

class HazardHorizontalBlock extends Hazard
{

	private var direction:Int = 0;
	private var MOVE_SPEED:Float = 0.5;
	
	public function new(x:Float, y:Float) 
	{
		super(x, y);
		makeGraphic(8, 8, FlxColor.WHITE);
		centerOffsets();
		solid = true;

	}
	
	override public function update(elapsed:Float):Void 
	{
		if (_appeared)
		    move();
			
		if (FlxG.collide(this, Reg.PS.map.loadedMap))
			direction *=-1;
		
		if (FlxG.overlap(this, Reg.PS.player))
			interact(Reg.PS.player);
		
		if (direction == 0)
			direction = FlxG.random.int( -1, 1);
			
		
		super.update(elapsed);
	}
	
	public function move()
	{
		y += MOVE_SPEED * direction;
	}
}