package utils.pcg;
import flixel.FlxG;
import flixel.addons.editors.tiled.TiledMap;
import flixel.addons.editors.tiled.TiledObject;
import flixel.addons.editors.tiled.TiledObjectLayer;
import flixel.math.FlxPoint;
import flixel.tile.FlxTilemap;
import objects.Player;
import objects.enemies.EnemyBlob;
import objects.enemies.EnemyLeft;
import objects.enemies.EnemyMoverGroup;
import objects.enemies.EnemySpawner;
import objects.gamesys.Goal;
import objects.hazards.HazardBlock;
import utils.pcg.MapChunkMerger;



class ObjectPlacement
{
	
	public static function loadLevelObjects(currentLevel:FlxTilemap)
	{
		
	var RAWCHUNKS = MapChunkMerger.get_RAWCHUNKS();
	var chunkIndex = 0;
	
	for (chunk in RAWCHUNKS) 
	{
		
		for (object in getLevelObjects(chunk.get_tileFile(), "objects"))
		{
			var pos = new FlxPoint(chunkIndex * (chunk.get_chunkWidth() * chunk.get_tileWidth()) + object.x , object.y);
			
		    if (chunk.get_type() == "S")
			{
				if (object.type == "player")
				{
						Reg.PS.player.setPosition(pos.x, pos.y);
				}
				else
				{
					trace("no player in this chunk");
				}
			}
			
			if (chunk.get_type() == "E")
		{
			if (object.type == "goal")
			{
				Reg.PS.add(new Goal(pos.x));
			}
			else
			{
				trace("No GOAL found for this level");
			}
		}
		}
		
		for (enemy in getLevelObjects(chunk.get_tileFile(), "enemies"))
		{
			var pos = new FlxPoint((chunkIndex * (chunk.get_chunkWidth() * chunk.get_tileWidth()))
			  + enemy.x , enemy.y);
			
			   switch enemy.type
			   {
				   case "ground" : Reg.PS.enemies.add(new EnemySpawner(pos.x, pos.y, enemy.flippedVertically));
	   
			       case "flyingRtoL": 	
										var enGroup = new EnemyMoverGroup(pos.x, pos.y);
										for (minion in enGroup.chainedGroup)
										{
										Reg.PS.enemies.add(minion);
			                            }
				      
				   case "flyingLtoR": Reg.PS.enemies.add(new EnemyLeft(pos.x, pos.y));
				   
				   case "freeMovement": Reg.PS.enemies.add(new EnemyBlob(pos.x, pos.y, 16));
				   
			   }
			   
		}
		
		for (hazard in getLevelObjects(chunk.get_tileFile(), "hazards"))
		{
			var pos = new FlxPoint((chunkIndex * (chunk.get_chunkWidth() * chunk.get_tileWidth()))
			  + hazard.x , hazard.y);
			  
			  switch hazard.type
			  {
				  case "block" : Reg.PS.blocks.add(new HazardBlock(pos.x, pos.y));
			  }
		}
					
	
		    
			
			
			
		chunkIndex++;
	}// end for loop
	}

		
    
	
	public static function getLevelObjects(map:TiledMap, layer:String):Array<TiledObject>
	{
		if ((map != null) &&(map.getLayer(layer) != null))
		{
			var objLayer:TiledObjectLayer = cast map.getLayer(layer);
			return objLayer.objects;
		}
		else
		{
		   // trace("Object layer " + layer + " not found");
	        return [];
		}
	}
	
	
}
