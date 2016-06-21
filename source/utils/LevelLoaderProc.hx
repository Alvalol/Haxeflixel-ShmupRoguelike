package utils;
import flixel.FlxState;
import flixel.tile.FlxTilemap;
import utils.pcg.MapChunk;
import utils.LevelGenerator;

class LevelLoaderProc extends FlxState
{
	public var loadedLevel:FlxTilemap;
	public var test:Array<Array<Int>>;
	// will use the Data from LevelGenerator to load a level
	// And display it. Collisions?, etc. 
	// Also create objects too, based, again, on the values 
	// given my LevelGenerator.hx

	public function new()
	{	
		super();
		loadedLevel = loadGeneratedLevel();
		
	    
		add(loadedLevel);
		
	}	
	
	public function loadGeneratedLevel():FlxTilemap
	{
        var loadedMap = new FlxTilemap();
		var generatedMap:Array<Array<Int>> = cast new LevelGenerator().populateCurrentMap();
		
		//loadedMap.loadMapFrom2DArray(generatedMap,
	    //AssetPaths.tiles__png, 8, 8);	
		var test = new Array<Array<Int>>();
		for (i in generatedMap)
		{
		   for (j in i)
		   {
		   test.push(j);	
		    }
		}
		trace(test);
		return loadedMap;
	}
}