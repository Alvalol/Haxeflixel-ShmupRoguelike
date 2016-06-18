package utils.pcg;
import flixel.FlxG;
import flixel.addons.display.shapes.FlxShapeLightning.LightningStyle;

class MapChunk
{
	/* Needs interesting chunk generation.
	/ Could procedurally pick from PREMADE levels, using
	currentMap[i-1], currentMap[i+1] to check what's up with the 
	other chunks and their types.
	
	Could also use a seed to generate the randomness.
	*/

	private static var chunkWidth:Int = 20;
	private static var chunkHeight:Int = 18;
	
	private var currentChunk:Array<Array<Int>>;
	public var accessibleChunk:Array<Array<Int>>;
	

	public function new()
	{
		var accessibleChunk = populateChunk();
	}
	
	public function populateChunk()
	{
	
	currentChunk = new Array<Array<Int>>();
	 for (x in 0...chunkHeight)
	 {
		 currentChunk[x] = new Array<Int>();
		 for (y in 0...chunkWidth)
		 {
			 currentChunk[x][y] = FlxG.random.int(0, 1);
		 }
	 }
	
	return currentChunk;
}
	
}