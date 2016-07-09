package objects.hazards;

/**
 * ...
 * @author Alvarop
 */
class HazardComponent extends Hazard
{

	public function new(x:Float,y:Float,w:Int,h:Int) 
	{
		super(x, y);
		makeGraphic(w, h);
	}
	
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
	}
}