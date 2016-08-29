package utils.pcg;

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
	
	private static var CHUNKS:Array<MapChunk>;
	private static var RAWCHUNKS:Array<MapChunk>;
	private static var levelHeight:Int;
	
	public static function populateCurrentMap():Array<Dynamic>
	{
		var populatedMap = new Array<Dynamic>();
		makeSeed();

		CHUNKS = new Array<MapChunk>();
		levelHeight = new MapChunk(Reg.CURRENT_SEED).get_chunkHeight();
		
		curateChunks();
		
		if (CHUNKS.length > 0)
		{
			RAWCHUNKS = CHUNKS;
			for (chunk in CHUNKS)
			{	
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
		var tChunk = new MapChunk(Reg.CURRENT_SEED);
		// there has to be a better way than this
		if (tChunk.get_type() == Reg.CURRENT_SEED.getObject(reqType))
		{
			CHUNKS.push(tChunk);
		}
		else
		{
			chooseChunk(reqType);
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
	
	private static function curateChunks()
	{
		while (CHUNKS.length < Reg.LEVEL_SIZE)
		{
		
		if (!Reg.SANDBOX)
		{
			
		if (CHUNKS.length == 0)
		{
				chooseChunk(["start"]);
		}
		
		else
		{

			switch FlxArrayUtil.last(CHUNKS).get_type()
			{
				case "openChunk" : chooseChunk(["openChunk", "leftWall", "rightWall", "bothWalls"]);
					
		        case "leftWall" : chooseChunk(["openChunk", "leftWall", "rightWall", "bothWalls"]);
					
				case "rightWall" : chooseChunk(["openChunk","bothWalls"]);
				
				case "bothWalls" : chooseChunk(["openChunk"]);
					
				case "miniBoss" : chooseChunk(["openChunk", "leftWall", "rightWall", "bothWalls"]); // PLACEHOLDER
					
				case "start" : chooseChunk(["openChunk", "leftWall", "rightWall", "bothWalls", "miniBoss"]); // SAME
					
				case "exit" : trace("DONE");
			}
		}
		}
	else{
		
			Reg.LEVEL_SIZE = 1;
			chooseChunk(["sandbox"]);
		}
		
	}
			
    if(CHUNKS.length == Reg.LEVEL_SIZE)
{
			chooseChunk(["exit"]);
}

	}

		
	
	private static function makeSeed()
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
	
	private static function formatArray(chunk:MapChunk):Array<Array<Int>>
	{
		var newArray:Array<Array<Int>> = new Array<Array<Int>>();
		
		for (i in 0...chunk.get_chunkData().length +1)
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
	
	
	// get, set
	
	public static function get_RAWCHUNKS():Array<MapChunk> 
	{
		return RAWCHUNKS;
	}
	
	}

