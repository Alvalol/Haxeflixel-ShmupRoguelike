package utils;
import flixel.FlxBasic;
import flixel.FlxState;
import flixel.tile.FlxTilemap;
import utils.pcg.MapChunk;
import utils.LevelGenerator;

class LevelLoaderProc
{
	public var loadedMap:FlxTilemap;
	
	// will use the Data from LevelGenerator to load a level
	// And display it. Collisions?, etc. 
	// Also create objects too, based, again, on the values 
	// given my LevelGenerator.hx

	public function new()
	{	
		
		loadedMap = loadGeneratedLevel();
      
	}	
	
	public function loadGeneratedLevel():FlxTilemap
	{
        var loadedMap = new FlxTilemap();
		var generatedMap = new LevelGenerator().populateCurrentMap(); // should be concat map
		
		var cleanArray = new Array<Array<Int>>();
		
		
		/*for (obj in generatedMap)
	    {
				cleanArray.push(obj);
			}
		
		//trace("Clean array size : " + cleanArray.length);
		//trace(cleanArray);

	loadedMap.loadMapFrom2DArray(cleanArray,
	AssetPaths.solid__png, 8, 8);	
		*/
		return loadedMap;
	}
}