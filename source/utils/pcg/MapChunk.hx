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

	private static var allTMXfilesOrganized = organizeTMXfiles();
	
	private static function organizeTMXfiles():Map<String, Array<TiledMap>>
	{
		/*
		  Uses getAllTMXFiles(); and then organizes all of them using the property "type" as a key into a Map.
		  So, it contains [key,Array<TiledMap>], where the TiledMaps are all the ones we caught in the level_CURRENT_LEVEL folder.
		 */
		var allTMXfiles = getAllTMXFiles();
		var allChunksMap = new Map<String, Array<TiledMap>>(); 
		
		for (file in allTMXfiles)
		{	
			//check if the map contains that key, if it doesn't just push an array with that one element.
			if (!allChunksMap.exists(file.properties.get("type")))// || allChunksMap.exists(file.properties.get("type")) == null)
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
	
	private static function getAllTMXFiles():Array<TiledMap>
	{
		/*
		 Pulls all the files in the level_CURRENT_LEVEL folder and returns them as an Array<TiledMap>
		 */
		var allTMXfiles:Array<TiledMap> = new Array<TiledMap>();
		var dir:String = "assets/data/mapchunks/level_" + Reg.currentLevel + "/";
		var dirContent:Array<String> = FileSystem.readDirectory(dir);
		
		if (!Reg.SANDBOX)
		{
			for (chunk in dirContent)
			{
				if (chunk != "x-0.tmx") // Don't get the sandbox unless in sandbox mode
				{
				allTMXfiles.push(new TiledMap(dir +  chunk));
				}
			}
		}
	    else
		{
			allTMXfiles.push(new TiledMap(dir + "x-0.tmx"));
		}
		
		return allTMXfiles;
	}

	public static function get_allTMXfilesOrganized():Map<String, Array<TiledMap>> 
	{
		return allTMXfilesOrganized;
	}
}