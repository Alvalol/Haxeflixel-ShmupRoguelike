package utils.pcg;
import flixel.FlxBasic;
import flixel.FlxState;
import flixel.addons.nape.FlxNapeTilemap;
import flixel.graphics.FlxGraphic;
import flixel.tile.FlxTilemap;
import nape.phys.Body;
import utils.pcg.MapChunk;
import utils.pcg.MapChunkMerger;
import flixel.graphics.frames.FlxTileFrames;
import openfl.Assets;
import flixel.addons.nape.FlxNapeSpace;
import flixel.math.FlxPoint;

class LevelLoaderProc
{
	
	// will use the Data from LevelGenerator to load a level
	// And display it. Collisions?, etc. 
	// Also create objects too, based, again, on the values 
	// given my LevelGenerator.hx

	
	public static function loadGeneratedLevel():FlxNapeTilemap
	{
	    var loadedMap:FlxNapeTilemap = new FlxNapeTilemap();
		MapChunkMerger.makeSeed();
		
		var generatedMap:Array<Array<Int>> = MapChunkMerger.makeCleanArray();
		ObjectPlacement.loadLevelObjects(loadedMap); 
		
        loadedMap.loadMapFrom2DArray(generatedMap, FlxTileFrames.fromBitmapAddSpacesAndBorders(FlxGraphic.fromAssetKey(AssetPaths.tileset__png), 
	    new FlxPoint(8, 8), new FlxPoint(1, 1), new FlxPoint(1, 1), null),  8, 8, AUTO);
		
		loadedMap.body.space = FlxNapeSpace.space;
	
	    return loadedMap;
	}
	
}