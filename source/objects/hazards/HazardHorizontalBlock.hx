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
	}
	
	override public function update(elapsed:Float):Void 
	{
		if (_appeared)
		    move();

		if (direction == 0)
			direction = FlxG.random.int( -1, 1);
			
		super.update(elapsed);
	}
	
	override private function collisions()
	{
		if (FlxG.collide(this, Reg.PS.map.loadedMap))
			direction *=-1;
		
		super.collisions();
	}
	
	public function move()
	{
		y += MOVE_SPEED * direction;
	}
	
}