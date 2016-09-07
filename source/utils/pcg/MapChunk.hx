package utils.pcg;

import de.polygonal.ds.ListSet;
import de.polygonal.ds.Set;
import Map;
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

	private var allLevelChunksFiles:Array<TiledMap>;
	private var allTMXfilesOrganized(get, null):Map<String, Array<TiledMap>>;
	
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

	public function new()
	{
		allTMXfilesOrganized = organizeTMXfiles();
	}
	
	private function organizeTMXfiles():Map<String, Array<TiledMap>>
	{
		var allTMXfiles = getAllTMXFiles();
		var allChunksMap = new Map<String, Array<TiledMap>>(); // empty map
		
		for (file in allTMXfiles)
		{	
			//check if the map contains that key, if it doesn't just push an array with that one element.
			if (!allChunksMap.exists(file.properties.get("type")) || allChunksMap.exists(file.properties.get("type")) == null)
			{
			allChunksMap.set(file.properties.get("type"), [file]);
			}
			else
			{
            allChunksMap[file.properties.get("type")].push(file);
			}
		}
		
		return allChunksMap; //a map of all TMX files organized by type.
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
	
	public function get_allTMXfilesOrganized():Map<String, Array<TiledMap>> 
	{
		return allTMXfilesOrganized;
	}
	
}