package utils.pcg;

import flixel.addons.editors.tiled.TiledTileLayer;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxMath;
import flixel.math.FlxRandom;
import flixel.tile.FlxTilemap;
import flixel.FlxG;
import flixel.util.FlxArrayUtil;
import flixel.addons.editors.tiled.TiledObject;
import flixel.addons.editors.tiled.TiledObjectLayer;
import flixel.addons.editors.tiled.TiledMap;

import utils.pcg.MapChunk;

class MapChunkMerger
{
	private static var CURRENT_TYPE:String;
	private static var CURRENT_RANGE;
	private static var TMXORGANIZED:Map<String, Array<TiledMap>>;
	private static var CHUNKS:Array<TiledMap> = []; // chunks as TiledMaps.
	private static var CHUNKDATA:Array<Dynamic>; // the chunk data that will be loaded in the levelloaderproc.hx
	private static var MAX_LEVEL_SIZE:Int = 10;
	private static var USEDTHEMES:Array<String>; // all the used themes so far in level generation. Might be useful to check to avoid repetition.
	private static var TYPE_LIST:Array<String> = [];
	private static var CHUNK_HEIGHT = 0;
	private static var CHUNK_WIDTH = 0;
	private static var MIN_GROUP_RANGE = 6;
	private static var MAX_GROUP_RANGE = 12;
	
	public static function makeCleanArray():Array<Array<Int>>
	{

		CHUNKS = [];
		flowChunk();
		CHUNKDATA = new Array<Array<Int>>();
		
		for (chunk in CHUNKS)
		{
			var layer:TiledTileLayer = cast chunk.getLayer("main");		
			if (CHUNK_WIDTH == 0 || CHUNK_HEIGHT == 0)
			{
			CHUNK_WIDTH = layer.width;
			CHUNK_HEIGHT = layer.height;
			}
			
			var formattedChunk:Array<Array<Int>> = cast formatArray(layer.tileArray, CHUNK_WIDTH, CHUNK_HEIGHT);
		    CHUNKDATA.push(formattedChunk);
		}
		
		var m = concatArray(CHUNKDATA);
		return m;
	}
	
	private static function formatArray(chunk:Array<Int>,chunkWidth:Int,chunkHeight:Int):Array<Array<Int>>
	{
		var newArray:Array<Array<Int>> = new Array<Array<Int>>();
		
		for (i in 0...chunk.length)
		{
			if (i % CHUNK_WIDTH == 0)
			{
				newArray.push([]);
				for (j in i...(i+CHUNK_WIDTH))
				{
					newArray[Std.int(i / CHUNK_WIDTH )].push(chunk[j]);
				}
			}
		}
		
		return newArray;
	}

	
	private static function concatArray(arr:Array<Dynamic>):Array<Array<Int>>
	{
		var ret:Array<Array<Int>> = new Array<Array<Int>>();
		for (i in 0...CHUNK_HEIGHT)
		{	
			ret.push([]);
		}

		for (i in 0...arr.length)
		{	
			var cur:Array<Dynamic> = arr[i];
			for (j in 0...CHUNK_HEIGHT)
			{
				ret[j] = ret[j].concat(cur[j]);
			}	
		}	
		
		return ret;
	}
	
	
	public static function flowChunk()
	{
		/*
		Main function where we choose the chunks and we follow step by step the procedure.
		*/
		if (!Reg.SANDBOX)
		{
		TMXORGANIZED = MapChunk.get_allTMXfilesOrganized(); // all TMX files organized by their type.

		// making an array of keys that are in the RAWCHUNKS. To keep it separated + can't iterate over keys ?
		for (key in TMXORGANIZED.keys())
		{
			if (key != "start" && key != "exit")
			{
			TYPE_LIST.push(key);
			}
		}
		
		while (CHUNKS.length < MAX_LEVEL_SIZE)
		{
			
		if (CHUNKS.length == 0)
		{
			CHUNKS.push(Reg.CURRENT_SEED.getObject(TMXORGANIZED["start"]));
			changeTypeAndRange();
		}
		else
		{
			createChunkGroup(CURRENT_TYPE, CURRENT_RANGE);
		}
		}
		
		CHUNKS[MAX_LEVEL_SIZE] = Reg.CURRENT_SEED.getObject(TMXORGANIZED["exit"]);
		}
    }
	
	private static function createChunkGroup(type:String, amount:Int)
	{
		var chunkGroup:Array<TiledMap> = new Array<TiledMap>();
		
		if (chunkGroup.length == 0 && CURRENT_TYPE != "tunnel")
		{
			chunkGroup.push(Reg.CURRENT_SEED.getObject(TMXORGANIZED[type]));
		}
		
		// this makes sure that we never go over max_level range and adjusts amount (CURRENT_RANGE)
		// so that the new chunks will fit in the level ;)
		
		if (amount + CHUNKS.length > MAX_LEVEL_SIZE)
		{
			amount = MAX_LEVEL_SIZE - CHUNKS.length;
		}
		
		while (chunkGroup.length < amount)
		{
			switch CURRENT_TYPE
			{	
				case "tunnel" :
					{
						if (chunkGroup.length == 0)
						{
						if (CHUNKS[CHUNKS.length-1].properties.get("type") == "tunnel")
						{
							var exitType = CHUNKS[CHUNKS.length-1].properties.get("R");
					        var possibleChunks = TMXORGANIZED["tunnel"].filter(function(map) return map.properties.get("L") == exitType);
							chunkGroup.push(Reg.CURRENT_SEED.getObject(possibleChunks));
						}
						else
			            	chunkGroup.push(Reg.CURRENT_SEED.getObject(TMXORGANIZED["tunnel"]));				
						}
						else
						{
							var exitType = chunkGroup[chunkGroup.length - 1].properties.get("R");
							var possibleChunks = TMXORGANIZED["tunnel"].filter(function(map) return map.properties.get("L") == exitType);
							
							chunkGroup.push(Reg.CURRENT_SEED.getObject(possibleChunks));
						}
					}
					
				case "open" : 
					{
						if (chunkGroup.length < amount)
						{
							chunkGroup.push(Reg.CURRENT_SEED.getObject(TMXORGANIZED["open"]));
						}
			        }
		}
	    }
			for (chunk in chunkGroup) { CHUNKS.push(chunk); }
			
			changeTypeAndRange();


			
			if (CHUNKS.length < MAX_LEVEL_SIZE)
			    createChunkGroup(CURRENT_TYPE, CURRENT_RANGE); // my first recursive function that is actually useful :)
	}
	
	public static function makeSeed()
	{
		if (Reg.SEEDED)
		    Reg.CURRENT_SEED = new FlxRandom(FlxG.random.int(0, FlxMath.MAX_VALUE_INT)); 
		else
		   Reg.CURRENT_SEED = new FlxRandom(Reg.masterSeed);
	}
	

	private static function changeTypeAndRange()
	{
		CURRENT_TYPE = Reg.CURRENT_SEED.getObject(TYPE_LIST);
		CURRENT_RANGE = Reg.CURRENT_SEED.int(MIN_GROUP_RANGE, MAX_GROUP_RANGE);
	}
	
	private static function getLevelObjects(map:TiledMap, layer:String):Array<TiledObject>
	{
		
		if ((map != null) && (map.getLayer(layer) != null))
		{
			var objLayer:TiledObjectLayer = cast map.getLayer(layer);
			trace("Object layer " + layer + " found");
			return objLayer.objects;
		}
		else
		    trace("Object layer " + layer + " not found");
	        return [];
	}
	
	public static function get_CHUNKS():Array<TiledMap> 
	{
		return CHUNKS;
	}
	
}
