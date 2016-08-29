package utils.pcg;

import de.polygonal.ds.ListSet;
import de.polygonal.ds.Set;
import flixel.FlxG;
import flixel.addons.editors.tiled.TiledMap;
import flixel.tile.FlxTilemap;
import flixel.addons.editors.tiled.TiledTileLayer;
import objects.gamesys.Goal;
import objects.Player;
import sys.FileSystem;
import openfl.Assets;
import flixel.math.FlxRandom;

class MapChunk
{
	private var type:String;
	private var chunkData:Array<Int>;
	private var chunkWidth:Int;
	private var chunkHeight:Int;
	private var randomizer:FlxRandom;
	private var tileFile:TiledMap;
	private var tileWidth(get, null):Int;
	
	// new code
	

	public function new(_randomizer:FlxRandom)
	{
	 makeChunk(_randomizer);
	}
	
	
	public static function organizeTMXfiles():Map<String, Array<TiledMap>>
	{
		var allTMXfiles = getAllTMXFiles();

		var allChunksMap:Map<String, Array<TiledMap>> = new Map<String, Array<TiledMap>>(); // a map containing all tiledmap files organized by their key
		for (file in allTMXfiles)
		{
			
			Reg.CHUNK_THEMES.set(file.properties.get("type"));
			//check if the map contains that key, if it doesn't just push an array with that one element.
			if (!allChunksMap.exists(file.properties.get("type")))
			{
	         allChunksMap.set(file.properties.get("type"), [file]);

			}
			else
			{
			allChunksMap[file.properties.get("type")].push(file);
			}
		}
		return allChunksMap;
	}
	
	private function getAllTMXFiles():Array<TiledMap>
	{
		var allTMXfiles:Array<TiledMap> = new Array<TiledMap>();
		var dir:String = "assets/data/mapchunks/level_" + Std.string(Reg.currentLevel) + "/";
		var dirContent:Array<String> = FileSystem.readDirectory(dir);
		
		if (!Reg.SANDBOX)
		{
		for (chunk in dirContent)
		{
			allTMXfiles.push(new TiledMap(dir +  chunk));
		}
		}
	    else
		{
			allTMXfiles.push(new TiledMap(dir + "x-0.tmx"));
		}

		return allTMXfiles;
	}
	
	private function makeChunk(_randomizer:FlxRandom)
	{
		randomizer = _randomizer;
		tileFile = chooseChunkFile();
		var mainLayer:TiledTileLayer = cast tileFile.getLayer("main");
	
		chunkData = mainLayer.tileArray;
		type = tileFile.properties.get("type");
		chunkWidth = Std.int(tileFile.fullWidth / tileFile.tileWidth);
		chunkHeight = Std.int(tileFile.fullHeight / tileFile.tileHeight);
		tileWidth = tileFile.tileWidth;
	
		// possibilities to manipulate the raw array data before sending it to the game
	}
	
	private function chooseChunkFile():TiledMap
	{
		var dir:String = "assets/data/mapchunks/level_" + Std.string(Reg.currentLevel) + "/";
		var dirContent:Array<String> = FileSystem.readDirectory(dir);
	
	    if (!Reg.SANDBOX)
		{
			
		    var chosenFile:TiledMap = new TiledMap(dir + randomizer.getObject(dirContent)); // this is the important part. It chooses the file here.
		    return chosenFile;
		}
		else
		{
		    var chosenFile:TiledMap = new TiledMap(dir + "x-0.tmx");	
		    return chosenFile;
		}
	}
	

	
	// get, set
	
	public function get_chunkData():Array<Int> 
	{
		return chunkData;
	}
	
	public function set_chunkData(value:Array<Int>):Array<Int> 
	{
		return chunkData = value;
	}
	
	public function get_type():String 
	{
		return type;
	}
	
	public function set_type(value:String):String 
	{
		return type = value;
	}
	
	public function get_chunkWidth():Int 
	{
		return chunkWidth;
	}
	
	public function set_chunkWidth(value:Int):Int 
	{
		return chunkWidth = value;
	}
	
	public function get_chunkHeight():Int 
	{
		return chunkHeight;
	}
	
	public function set_chunkHeight(value:Int):Int 
	{
		return chunkHeight = value;
	}
	
	public function get_tileFile():TiledMap 
	{
		return tileFile;
	}
	
	public function get_tileWidth():Int 
	{
		return tileWidth;
	}

	
}