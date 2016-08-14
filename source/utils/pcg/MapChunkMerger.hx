package utils.pcg;

import flixel.math.FlxMath;
import flixel.math.FlxRandom;
import flixel.tile.FlxTilemap;
import flixel.FlxG;

import utils.pcg.MapChunk;

class MapChunkMerger
{
	
	private static var LEVEL_SIZE:Int = 10; // put this in reg
	
	public static function populateCurrentMap():Array<Dynamic>
	{
		var populatedMap = new Array<Dynamic>();
		var seed = new FlxRandom(FlxG.random.int(0,FlxMath.MAX_VALUE_INT));
		
		for (i in 0...LEVEL_SIZE)
		{
			//format array before pushing it
			//then concat the whole thing after the loop is over?
			
			var tArray = formatArray(new MapChunk(seed));
			populatedMap.push(tArray);
		}
		var m = concatArray(populatedMap);
		var result = reduceArray(m);
	    return result;
	}
		
	
	private static function reduceArray(arr:Array<Dynamic>)
	{
		var reducedarr:Array<Int> = [];
		for (i in 0...arr.length)
		{
		   reducedarr =  reducedarr.concat(arr[i]);
		}
		
		return reducedarr;
	}
	
	private static function formatArray(chunk:MapChunk):Array<Array<Int>>
	{
		var newArray:Array<Array<Int>> = new Array<Array<Int>>();
		for (i in 0...chunk.get_chunkData().length)
		{
			if (i % 10 == 0)
			{
				newArray.push([]);
				for (j in i...(i+10))
				{
					newArray[Std.int(i / 10)].push(chunk.get_chunkData()[j]);
				}
			}
		}
		
		return newArray;
	
	}
	
	
	private static function concatArray(arr:Array<Dynamic>)
	{
		var ret:Array<Array<Int>> = new Array<Array<Int>>();
		for (i in 0...arr.length)
		{
			ret.push([]);
		}
		
		for (i in 0...arr.length)
		{
			var cur:Array<Dynamic> = arr[i];
			for (j in 0...arr.length)
			{
				ret[j] = ret[j].concat(cur[j]);
			}	
		}	
		
		return ret;
	}

}