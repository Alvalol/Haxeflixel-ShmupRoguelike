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
	private static var USEDTHEMES:Array<String>; // all the used themes so far in level generation. Might be useful to check to avoid repetition.
	private static var MAX_LEVEL_SIZE:Int = 3;
	private static var TYPE_LIST:Array<String> = [];
	private static var CHUNK_HEIGHT = 0;
	private static var CHUNK_WIDTH = 0;
	
	public static function makeCleanArray():Array<Array<Int>>
	{
		flowChunk();
		CHUNKDATA = new Array<Array<Int>>();
		
		for (chunk in CHUNKS)
		{
			var layer:TiledTileLayer = cast chunk.getLayer("main");		
			if (CHUNK_HEIGHT == 0 || CHUNK_HEIGHT == 0)
			{
			CHUNK_WIDTH = layer.width;
			CHUNK_HEIGHT = layer.height;
			}
			
			var formattedChunk:Array<Array<Int>> = cast formatArray(layer.tileArray, CHUNK_WIDTH, CHUNK_HEIGHT);
		    CHUNKDATA.push(formattedChunk);
		}
		
		for (chunk in CHUNKS)
		{
			trace(chunk.properties.get("type"));
		}

		var m = concatArray(CHUNKDATA);
		return m;
	}
	
	
		private static function formatArray(chunk:Array<Int>,chunkWidth:Int,chunkHeight:Int):Array<Array<Int>>
	{
		var newArray:Array<Array<Int>> = new Array<Array<Int>>();
		
		for (i in 0...chunk.length)// +1?
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
	
	
	/*part of the SELECTION LOGIC
	 * NOT RELATED TO CLEANING UP CHUNKS AND PREPARING THEM FOR LEVEL.
	*/
	
	public static function flowChunk()
	{
		/*
		Main function where we choose the chunks and we follow step by step the procedure.
		*/
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
			CURRENT_TYPE = Reg.CURRENT_SEED.getObject(TYPE_LIST);
			CURRENT_RANGE = Reg.CURRENT_SEED.int(6, 12);
		}
		else
		{
			createChunkGroup(CURRENT_TYPE, CURRENT_RANGE);
		}
		}
		
		CHUNKS[MAX_LEVEL_SIZE] = Reg.CURRENT_SEED.getObject(TMXORGANIZED["exit"]);

		
    }
	
	private static function createChunkGroup(type:String, amount:Int)
	{
		var chunkGroup:Array<TiledMap> = new Array<TiledMap>();
		if (chunkGroup.length == 0)
		{
			CHUNKS.push(Reg.CURRENT_SEED.getObject(TMXORGANIZED[type]));
		}
		else
		{
			switch CURRENT_TYPE // add a case here if there is a new theme for the levels
			{	
				case "tunnel" :
					{
						if (chunkGroup.length == 0)
						{
							CHUNKS.push(Reg.CURRENT_SEED.getObject(TMXORGANIZED["tunnel"]));
						}
						else
						{
							CHUNKS.push(Reg.CURRENT_SEED.getObject(TMXORGANIZED["tunnel"]));
						}
						
					}
				case "open" : 
					
					{
						CHUNKS.push(Reg.CURRENT_SEED.getObject(TMXORGANIZED["open"]));
					}
			}
		}
		
	}
	
	public static function makeSeed()
	{
		if (Reg.SEEDED)
		{
		 Reg.CURRENT_SEED = new FlxRandom(FlxG.random.int(0, FlxMath.MAX_VALUE_INT)); 
		}
		else
		{
		Reg.CURRENT_SEED = new FlxRandom(Reg.masterSeed);
		}
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
