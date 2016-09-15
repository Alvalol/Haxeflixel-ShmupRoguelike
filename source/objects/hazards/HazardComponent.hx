package objects.hazards;

class HazardComponent extends Hazard
{
	/* This works in tandem with Hazard rotator. But it is not well implemented yet. So until then, do not use in level templates.
	 */
	
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