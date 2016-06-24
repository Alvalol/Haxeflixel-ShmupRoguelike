package utils;
import flixel.tile.FlxTilemap;
import flixel.FlxG;
import flixel.FlxState;

import utils.pcg.MapChunk;

class LevelGenerator
{
	
	/*Generates levels using chunks.
	//Maybe could check for chunks that don't make sense.
	// Also should be updating chunks as the player moves in the levels
	So, it needs to update at runtime, during play.
	Maybe I could use a seed to generate the chunks.
	
	*/

	
	private static var mapWidth:Int = 10;
	
	public function new() 
	{

	}
	
	public function populateCurrentMap():Array<MapChunk>
	{
	var populatedMap = new Array<MapChunk>();
	
	for (i in 0...mapWidth)
		{
	     populatedMap.push(new MapChunk());
		}
		
	
	 var comparator:Int = 0;
	 var counter:Int = 0;

	 trace(populatedMap);
     for (element in populatedMap)
	 {
		 for (i in element.accessibleChunk)
		 {
			 if (comparator == element.accessibleChunk.indexOf(i))
			 {
			 trace("Array: " + i,  " index: " +  element.accessibleChunk.indexOf(i),
			 " map len : " + populatedMap.length, " counter : " +  counter, "  comparator : " +  comparator);
			 comparator++;
			 }
			 if (comparator >= populatedMap.length)
			 {

               comparator= 0;
			 }
		 }
	 
	 }
	    return populatedMap;
	 
	}

}