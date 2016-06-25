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
	trace(concatArray(populatedMap));
	return populatedMap;
	}
	
	static function concatArray(Arr:Array<Dynamic>) {
		var ret:Array<Dynamic> = new Array<Dynamic>();
		for (i in 0...Arr.length) {
			ret.push([]);
		    var cur:Array<MapChunk> = Arr[i].accessibleChunk;
			trace(ret);
			for (j in 0...cur.length) {
				ret[j].push(cur[j]);
				}
		}
		return ret;
	}
}

