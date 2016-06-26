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
	
	accessibleChunk = new Array<Array<Int>>();
	 for (x in 0...chunkHeight)
	 {
		 accessibleChunk[x] = new Array<Int>();
		 for (y in 0...chunkWidth)
		 {
			 if (x == 0 || x == chunkHeight-1)
			 {
			 accessibleChunk[x][y] = 2;
			 }
			 else{
			accessibleChunk[x][y] = FlxG.random.int(0, 1);
			 }
		 }
	 }
	 
	return accessibleChunk;
}
	
}