package utils.pcg;
import flixel.FlxG;

class MapChunk
{
	/* Needs interesting chunk generation.
	/ Could procedurally pick from PREMADE levels, using
	currentMap[i-1], currentMap[i+1] to check what's up with the 
	other chunks and their types.
	
	Could also use a seed to generate the randomness.
	*/

	public static var chunkWidth:Int = 12;
	public static var chunkHeight:Int = 20; // This also helps in the level generator when LevelGenerator.concatArray() runs.
	
	public var accessibleChunk:Array<Array<Int>>;
	

	public function new()
	{
	    populateChunk(); 
	}
	
	public function populateChunk():Array<Array<Int>>
	{
	
	// Temporary templates
	accessibleChunk = FlxG.random.getObject(Reg.mapChunkTemplates);
	if (FlxG.random.int(0,100) < 50) // maybe reverse them for more variety and little effort :D
	{
		for (i in 0...accessibleChunk.length)
		{
		 accessibleChunk[i].reverse();
		}
	}
	 
	//trace(accessibleChunk);
	return accessibleChunk;
}
	
}