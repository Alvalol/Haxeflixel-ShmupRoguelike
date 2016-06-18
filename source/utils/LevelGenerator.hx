package utils;

/**
 * ...
 * @author Alvarop
 */
class LevelGenerator
{

	public function new() 
	{
		
	}
	
}

/*
apackage;

import flixel.FlxCamera;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.addons.editors.tiled.TiledMap.FlxTiledMapAsset;
import flixel.tile.FlxTilemap;
//import flixel.math.FlxRandom;
import flixel.math.FlxMath;

import Player;

class MenuState extends FlxState
{
	
	private var player:Player;
    private var loadedMap:FlxTilemap;
	
	private var mapData:Array<Array<Int>>;
	private var myMap:FlxTilemap;
	private static var mapHeight:Int = 500;
	private static var mapWidth:Int = 20;
	
	override public function create():Void
	{
		
		super.create();
		FlxG.mouse.visible = false;
		
		
	    mapData = new Array<Array<Int>>();
		
		player = new Player(FlxG.width / 2, FlxG.height / 2);
		loadedMap = new FlxTilemap();
		FlxG.camera.follow(player, FlxCameraFollowStyle.LOCKON, 0.5);
		//FlxG.camera.setScrollBounds(0, mapWidth * 8, 0, mapHeight * 8);
		FlxG.camera.pixelPerfectRender = true;

	    loadedMap = LoadMap(mapData);
		add(loadedMap);
		add(player);
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);

		FlxG.collide(loadedMap, player);
	}
	
	public function LoadMap(mapData:Array<Array<Int>>):FlxTilemap
	{
		mapData = GenerateMap();
		for (i in 0...4)
	    {
	     SmoothMap();
	    }

		myMap = new FlxTilemap();
		myMap.loadMapFrom2DArray(mapData, AssetPaths.tiles__png, 8, 8);
		
		return myMap;
		
	}
	public function GenerateMap()
	{		
		for (x in 0...mapWidth+1)
		{
		mapData[x] = new Array<Int>();
			for (y in 0...mapHeight+1)
			{
				if (x == 0 || x == mapWidth || y == 0 || y == mapHeight)
					mapData[x][y] = 1;
				else
				    mapData[x][y] = FlxG.random.int(0,1);
			}
		}
		return mapData;
	}
	
	public function SmoothMap()
	{
		for (x in 0...mapWidth+1)
		{
			for (y in 0...mapHeight+1)
			{
				var neighbourWallTiles = GetSurroundingWalls(x, y);
				//trace(neighbourWallTiles);
				if (neighbourWallTiles > 5)
				{
					mapData[x][y] = 1;
				}
				if (neighbourWallTiles < 4)
				{
					mapData[x][y] = 0;
					
				}
			}
		}
		//myMap.loadMapFrom2DArray(mapData, AssetPaths.tiles__png, 8, 8);
	}
		
	public function GetSurroundingWalls(gridX:Int, gridY:Int):Int
	{
		var wallCount:Int = 0;		
		for (neighbourX in (gridX - 1)...(gridX + 2)) 
		{
		   for (neighbourY in (gridY - 1)...(gridY + 2)) 
		   {
			  if ((neighbourX >= 1) && (neighbourX < mapWidth) && (neighbourY >= 1) && (neighbourY < mapHeight))
			  {
				 if ((neighbourX != gridX) || (neighbourY != gridY))
					wallCount += mapData[neighbourX][neighbourY];
				}
		      else 
			     wallCount++; 
		   }
		}
	
	return wallCount;
    
}
}

	
	

*/