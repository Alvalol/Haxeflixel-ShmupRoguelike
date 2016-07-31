package utils.testing;
/*
 * General and temporary level loader. Loads TMX files from Tiled. Deals with objects, layers, etc.
 */

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.math.FlxPoint;

import objects.enemies.EnemyTurretA;

import flixel.addons.editors.tiled.TiledLayer;
import flixel.addons.editors.tiled.TiledTileLayer;
import flixel.addons.editors.tiled.TiledMap;
import flixel.addons.editors.tiled.TiledObject;
import flixel.addons.editors.tiled.TiledObjectLayer;
import flixel.tile.FlxTilemap;

import states.TestState;


class StaticLevelLoader
{
	public static function loadLevel(state:states.TestState, level:String) {
		
		var tiledMap = new TiledMap("assets/data/" + level + ".tmx");
		var mainLayer:TiledTileLayer = cast tiledMap.getLayer("main");
		var map = new FlxTilemap();
		map.loadMapFromArray(
			mainLayer.tileArray, 
			tiledMap.width, 
			tiledMap.height, 
			AssetPaths.tiles__png, 
			8, 8, 1);
		
		var backLayer:TiledTileLayer = cast tiledMap.getLayer("background");
		var backMap = new FlxTilemap();
		
		backMap.loadMapFromArray(
			backLayer.tileArray, 
			tiledMap.width, 
			tiledMap.height, 
			AssetPaths.tiles__png, 
			8, 8, 1);
		backMap.solid = false;

		state.add(backMap);
		state.add(map);
		
	  
	
			
}

	public static function getLevelObjects(map:TiledMap, layer:String):Array<TiledObject>
	{
		
		if ((map != null) &&(map.getLayer(layer) != null))
		{
			var objLayer:TiledObjectLayer = cast map.getLayer(layer);
			return objLayer.objects;
		}
		else
		    trace("Object layer" + layer + "not found");
	        return [];
	}
}
