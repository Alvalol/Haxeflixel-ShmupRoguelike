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

	
	private static var mapWidth:Int = 5; // cannot be 1
	
	public function new() 
	{

	}
	
	public function populateCurrentMap():Array<Array<Int>>
	{
	var populatedMap = new Array<MapChunk>();
	
	for (i in 0...mapWidth)
		{
	     populatedMap.push(new MapChunk());
		}
	var concatedArray:Array<Array<Int>> = cast concatArray(populatedMap);
	trace("populated : " +populatedMap);
	trace("concated : " +concatedArray);
	
	return concatedArray;
	
	//return populatedMap;
	}
	
	static function concatArray(Arr:Array<Dynamic>) {
		var ret:Array<Array<Int>> = new Array<Array<Int>>();
		for (i in 0...mapWidth)
		{
			ret.push([]);
		}
		

		for (i in 0...Arr.length) {
		    var cur:Array<Dynamic> = Arr[i].accessibleChunk;	
			for (j in 0...cur.length) 
                {
		//			if (ret[j].toString() == "[]")
			//		{
			//			ret[j].push(cur[j]);
				//	}
					//else
					
						ret[j] = ret[j].concat(cur[j]);
						trace(j);
					}
					
				}
		return ret;
	
				
	}

}


