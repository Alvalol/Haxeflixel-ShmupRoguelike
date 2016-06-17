package utils;
/*
 * General and temporary level loader. Loads TMX files from Tiled. Deals with objects, layers, etc.
 */

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.math.FlxPoint;

import objects.EnemyTurretA;
import objects.Goal;

import flixel.addons.editors.tiled.TiledLayer;
import flixel.addons.editors.tiled.TiledTileLayer;
import flixel.addons.editors.tiled.TiledMap;
import flixel.addons.editors.tiled.TiledObject;
import flixel.addons.editors.tiled.TiledObjectLayer;
import flixel.tile.FlxTilemap;

import states.PlayState;


class LevelLoader
{
	public static function loadLevel(state:states.PlayState, level:String) {
		
		var tiledMap = new TiledMap("assets/data/" + level + ".tmx");
		var mainLayer:TiledTileLayer = cast tiledMap.getLayer("main");
		state.map = new FlxTilemap();
		state.map.loadMapFromArray(
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
		
		
		var hazardLayer:TiledTileLayer = cast tiledMap.getLayer("hazards");
		state.hazardMap = new FlxTilemap();
		
		state.hazardMap.loadMapFromArray(
		    hazardLayer.tileArray,
			tiledMap.width,
			tiledMap.height,	
			AssetPaths.tiles__png,
			8, 8, 1);
		

		state.add(backMap);
		state.add(state.hazardMap);
		state.add(state.map);
		
		
		
		var player:TiledObject = getLevelObjects(tiledMap, "player")[0];
		var playerPosition:FlxPoint = new FlxPoint();
		
		//if (Reg.checkpointReached)
		 //   playerPosition = state.checkpoint;
		//else
		playerPosition = new FlxPoint(player.x, player.y -8);
		state.player.setPosition(playerPosition.x, playerPosition.y);
		
		

		for (enemy in getLevelObjects(tiledMap, "enemies"))
			{
				switch(enemy.type)
				{	
				default: 
			        var enemyToAdd = new EnemyTurretA(enemy.x + 1, enemy.y - 7, enemy.flippedVertically);
				    state.enemies.add(enemyToAdd);
				
			}
			
		
			}
			
	 	for (trigger in getLevelObjects(tiledMap, "triggers"))
	      	{
			switch(trigger.type)
			    {
				default: // Goal
			       var triggerToAdd = new Goal(trigger.x, 0);
				   state.goals.add(triggerToAdd);
			     }
		    }
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
