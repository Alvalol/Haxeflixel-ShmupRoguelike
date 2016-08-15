package utils.pcg;

import flixel.math.FlxMath;
import flixel.math.FlxRandom;
import flixel.tile.FlxTilemap;
import flixel.FlxG;
import flixel.util.FlxArrayUtil;

import utils.pcg.MapChunk;

class MapChunkMerger
{
	
	private static var CHUNKS:Array<MapChunk>;
	private static var levelHeight:Int;
	
	public static function populateCurrentMap():Array<Dynamic>
	{
		var populatedMap = new Array<Dynamic>();
		var seed = new FlxRandom(10);//FlxG.random.int(0, FlxMath.MAX_VALUE_INT));
		CHUNKS = new Array<MapChunk>();
		levelHeight = new MapChunk(seed).get_chunkHeight();
		
		for (i in 0...Reg.LEVEL_SIZE)
		{
			//format array before pushing it
			//then concat the whole thing after the loop is over?
			CHUNKS.push(new MapChunk(seed));
		}

		for (chunk in CHUNKS)
		{
		   var formatedChunk = cast formatArray(chunk); 
	       populatedMap.push(formatedChunk);
		}
		
		var m = concatArray(populatedMap);
		//trace("concatArray : " + m);

		//var result = reduceArray(m);
	 //   trace("RESULT : " + result);
	    return m;
	}
		
	private static function formatArray(chunk:MapChunk):Array<Array<Int>>
	{
		var newArray:Array<Array<Int>> = new Array<Array<Int>>();
		
		for (i in 0...chunk.get_chunkData().length)
		{
			
			if (i % chunk.get_chunkWidth() == 0)
			{
				newArray.push([]);
				for (j in i...(i+chunk.get_chunkWidth()))
				{
					newArray[Std.int(i / chunk.get_chunkWidth() )].push(chunk.get_chunkData()[j]);
				}
			}
		}

		return newArray;
	}
	
	private static function concatArray(arr:Array<Dynamic>)
	{
		var ret:Array<Array<Int>> = new Array<Array<Int>>();
		for (i in 0...levelHeight)
		{	
			ret.push([]);
		}

		for (i in 0...arr.length)
		{	
			var cur:Array<Dynamic> = arr[i];
			for (j in 0...levelHeight)
			{
				ret[j] = ret[j].concat(cur[j]);
			}	
		}	
		
		return ret;
	}

	
}