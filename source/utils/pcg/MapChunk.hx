package utils.pcg;

import flixel.FlxG;
import flixel.addons.editors.tiled.TiledMap;
import flixel.tile.FlxTilemap;
import flixel.addons.editors.tiled.TiledTileLayer;
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

	public function new(_randomizer:FlxRandom)
	{
	 makeChunk(_randomizer);
	}
	
	private function makeChunk(_randomizer:FlxRandom)
	{
		randomizer = _randomizer;
		var tileFile = chooseChunkFile();
		var mainLayer:TiledTileLayer = cast tileFile.getLayer("main");
	
		chunkData = mainLayer.tileArray;
		type = mainLayer.properties.get("type");
		chunkWidth = Std.int(tileFile.fullWidth / tileFile.tileWidth);
		chunkHeight = Std.int(tileFile.fullHeight / tileFile.tileHeight);
		
		// possibilities to manipulate the raw array data before sending it to the game
	}
	
	private function chooseChunkFile():TiledMap
	{
		var dir:String = "assets/data/mapchunks/level_" + Std.string(Reg.currentLevel) + "/";
		var dirContent:Array<String> = FileSystem.readDirectory(dir);
	
		var chosenFile:TiledMap = new TiledMap(dir + randomizer.getObject(dirContent)); // this is the important part. It chooses the file here.
		return chosenFile;
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

	
}