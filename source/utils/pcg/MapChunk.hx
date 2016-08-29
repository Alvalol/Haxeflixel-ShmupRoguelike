package utils.pcg;

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
	private var allLevelChunksFiles:Array<TiledMap>;
	
/*
 * Level creation : 

. Scan the level folder and create an Array of raw TMX files.

-> Choose initial theme. 
-> Choose initial theme length (5-10)
   -> If current level length is 0 -> Place start chunk
   -> Place chunks by checking exit type of i-1 to place i.

-> Once initial theme length has been reached -> Choose new theme.
   - >  Place chunks by checking exit type of i-1 to place i.
Once theme length has been reached : choose new theme until level is fully created.
*/
	public function new(_randomizer:FlxRandom)
	{
	 makeChunk(_randomizer);
	}
	
	private function makeChunk(_randomizer:FlxRandom)
	{
		/*randomizer = _randomizer;
		tileFile = chooseChunkFile();
		var mainLayer:TiledTileLayer = cast tileFile.getLayer("main");
	
		chunkData = mainLayer.tileArray;
		type = tileFile.properties.get("type");
		chunkWidth = Std.int(tileFile.fullWidth / tileFile.tileWidth);
		chunkHeight = Std.int(tileFile.fullHeight / tileFile.tileHeight);
		tileWidth = tileFile.tileWidth;*/
	
		// possibilities to manipulate the raw array data before sending it to the game
	}
	
	private function getAllChunkFiles()
	{
		var dir:String = "assets/data/mapchunks/level_" + Std.string(Reg.currentLevel) + "/";
		var dirContent:Array<String> = FileSystem.readDirectory(dir);
		trace(dirContent);
	
	    if (!Reg.SANDBOX)
		{
			for (i in dirContent)
			{
		    if(i != "x-0.tmx")
		     allLevelChunksFiles.push(new TiledMap(dir + i));
			}
		}
		else
		{
		  allLevelChunksFiles.push(new TiledMap(dir + "x-0.tmx"));	
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