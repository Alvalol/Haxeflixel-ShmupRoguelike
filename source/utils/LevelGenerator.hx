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

	
	private static var mapWidth:Int = 2;
	
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
	trace(concatedArray);
	return concatedArray;
	
	//return populatedMap;
	}
	
	// The problem seems to be in the different sizes (populating the ret with [], populating ret[j] based on cur.lenght, etc)
	// Check what each value correspond to and fix accordingly.
	static function concatArray(Arr:Array<Dynamic>) {
		var ret:Array<Array<Int>> = new Array<Array<Int>>();
		for (i in 0...mapWidth)
		{
			ret.push([]);
		}
		

		for (i in 0...Arr.length) {
			
		    var cur:Array<Array<Int>> = Arr[i].accessibleChunk;			
			for (j in 0...cur.length) 
			   {
				ret[j].push(cur[j][j]);
				}
		}
		return ret;
	}
}

