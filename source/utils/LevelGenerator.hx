package utils;
import flixel.tile.FlxTilemap;
import flixel.FlxG;
import flixel.FlxState;

import utils.pcg.MapChunk;


class LevelGenerator extends FlxState
{
	
	/*Generates levels using chunks.
	//Maybe could check for chunks that don't make sense.
	// Also should be updating chunks as the player moves in the levels
	So, it needs to update at runtime, during play.
	Maybe I could use a seed to generate the chunks.
	
	*/
	private var mapChunk:MapChunk;
	private var currentMap:Array<MapChunk>;
	
	
	private static var mapWidth:Int = 3;
	private static var mapHeight:Int = 4;
	
	

	public function new() 
	{
    super();
	currentMap = new Array<MapChunk>();
	currentMap = populateCurrentMap();

	}
	
	
	public function populateCurrentMap()
	{
	for (i in 0...mapWidth)
		{
	     mapChunk = new MapChunk();
	     currentMap[i] = mapChunk;
		}
		return currentMap;
		
	}
	
	
}