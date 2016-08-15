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
	private static var seed;
	
	public static function populateCurrentMap():Array<Dynamic>
	{
		var populatedMap = new Array<Dynamic>();
		makeSeed();
		CHUNKS = new Array<MapChunk>();
		levelHeight = new MapChunk(seed).get_chunkHeight();
		
		curateChunks();
		
		if (CHUNKS.length > 0)
		{
			for (chunk in CHUNKS)
			{
			   trace(chunk.get_type());
			   var formatedChunk = cast formatArray(chunk); 
			   populatedMap.push(formatedChunk);
			}
		}
		
		var m = concatArray(populatedMap);
		//trace("concatArray : " + m);

		//var result = reduceArray(m);
	 //   trace("RESULT : " + result);
	    return m;
	}
		
    private static function chooseChunk(reqType:Array<String>)
	{
		var tChunk = new MapChunk(seed);
		if (tChunk.get_type() == FlxG.random.getObject(reqType))
		{
			CHUNKS.push(tChunk);
		}
		else
		{
			chooseChunk(reqType);
		}
	}
	private static function curateChunks()
	{
		while (CHUNKS.length < Reg.LEVEL_SIZE)
		{		
		if (CHUNKS.length == 0)
		{
				chooseChunk(["S"]);
		}

		else
			{
			switch CHUNKS[CHUNKS.length-1].get_type()
			{
				case "A" : chooseChunk(["A", "B", "C", "D"]);
					
		        case "B" : chooseChunk(["A", "B", "C", "D"]);
					
				case "C" : chooseChunk(["A","C"]);
				
				case "D" : chooseChunk(["A"]);
					
				case "M" : chooseChunk(["A", "B", "C", "D"]); // PLACEHOLDER
					
				case "S" : chooseChunk(["A", "B", "C", "D"]); // SAME
					
				case "E" : trace("DONE");
			}
			}
			
		
		}
		chooseChunk(["E"]);
		
	}
	private static function makeSeed()
	{
		if (Reg.SEEDED)
		{
		 seed = new FlxRandom(FlxG.random.int(0, FlxMath.MAX_VALUE_INT)); 
		 Reg.CURRENT_SEED = seed.currentSeed;
		}
		else
		{
		seed = new FlxRandom(Reg.masterSeed);
		Reg.CURRENT_SEED = seed.currentSeed;
		}
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