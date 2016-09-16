package utils.pcg;
import flixel.FlxG;
import flixel.addons.editors.tiled.TiledMap;
import flixel.addons.editors.tiled.TiledObject;
import flixel.addons.editors.tiled.TiledObjectLayer;
import flixel.math.FlxMath;
import flixel.math.FlxPoint;
import flixel.tile.FlxTilemap;
import objects.Player;
import objects.enemies.Enemy;
import objects.enemies.EnemyBlob;
import objects.enemies.EnemyChaser;
import objects.enemies.EnemyExplosive;
import objects.enemies.EnemyLeft;
import objects.enemies.EnemyMover;
import objects.enemies.EnemyMoverGroup;
import objects.enemies.EnemyMultishotDeath;
import objects.enemies.EnemyShooter;
import objects.enemies.EnemySpawner;
import objects.enemies.EnemyTurretA;
import objects.enemies.EnemyWorm;
import objects.gamesys.Goal;
import objects.hazards.HazardBlock;
import objects.hazards.HazardLaser;
import objects.hazards.HazardMovingBlock;
import objects.hazards.HazardProximityShooter;
import objects.hazards.HazardRotator;
import utils.pcg.MapChunkMerger;



class ObjectPlacement
{
	
	public static function loadLevelObjects(currentLevel:FlxTilemap)
	{
		
	//	Goes through each layer of the current loaded level and checks for objects. This is basically an array that contains the XML files. (RAWCHUNKS)
	
	var RAWCHUNKS = MapChunkMerger.get_CHUNKS();
	var chunkIndex = 0;
	
	for (chunk in RAWCHUNKS) 
	{		
		for (object in getLevelObjects(chunk, "objects"))
		{
			var pos = new FlxPoint(chunkIndex * (chunk.fullWidth) + object.x , object.y);
			
		    if (chunk.properties.get("type") == "start")
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
			
			if (chunk.properties.get("type") == "exit")
		    {
			if (object.type == "goal")
			{
				var pos = new FlxPoint(chunkIndex * (chunk.fullWidth) + object.x , object.y);
				Reg.PS.add(new Goal(pos.x));
			}
			else
			{
				trace("No GOAL found for this level");
			}
		    }
		}
		
		for (enemy in getLevelObjects(chunk, "enemies"))
		{
			var pos = new FlxPoint(chunkIndex * (chunk.fullWidth) + enemy.x , enemy.y);
			
		    switch enemy.type
			   {		   
				   // general enemy types
				    case "ground": 
					   var groundEnemies:Array<Enemy> = [new EnemySpawner(pos.x, pos.y, enemy.flippedVertically),
					                                     new EnemyTurretA(pos.x, pos.y, enemy.flippedVertically),
														 new EnemyWorm(pos.x, pos.y, enemy.flippedVertically)];
														 
					   Reg.PS.enemies.add(chooseEnemy(groundEnemies));

				    case "flyingLtoR":
					   var flyingLtoR:Array<Enemy> = [new EnemyExplosive(pos.x, pos.y), 
					                                  new EnemyLeft(pos.y,pos.y)];
					   
				       Reg.PS.enemies.add(chooseEnemy(flyingLtoR));
					   
					   
				    case "freeMovement": 
					   var freeMovement:Array<Enemy> = [new EnemyBlob(pos.x, pos.y, 16), 
					                                    new EnemyChaser(pos.x, pos.y), 
														new EnemyMultishotDeath(pos.x,pos.y)];
				       Reg.PS.enemies.add(chooseEnemy(freeMovement)); 
					   
				     case "flyingRtoL": 
						var enGroup = new EnemyMoverGroup(pos.x, pos.y);
						for (minion in enGroup.chainedGroup)
							{
							   Reg.PS.enemies.add(minion);
			                }
							
							
					//Specific enemies
					
					case "enemyBlob" : Reg.PS.enemies.add (new EnemyBlob(pos.x, pos.y, 16));
					case "enemyChaser" : Reg.PS.enemies.add(new EnemyChaser(pos.x, pos.y));
					case "enemyLeft" : Reg.PS.enemies.add(new EnemyLeft(pos.y, pos.y));
					case "enemyMultishot" : Reg.PS.enemies.add(new EnemyMultishotDeath(pos.x, pos.y));
					case "enemySpawner" : Reg.PS.enemies.add(new EnemySpawner(pos.x, pos.y, enemy.flippedVertically));
					case "enemyTurret" : Reg.PS.enemies.add(new EnemyTurretA(pos.x, pos.y, enemy.flippedVertically));
					case "enemyWorm" : Reg.PS.enemies.add(new EnemyWorm(pos.x, pos.y,enemy.flippedVertically));
			   }
			   
		}
		
		for (hazard in getLevelObjects(chunk, "hazards"))
		{
			var pos = new FlxPoint(chunkIndex * (chunk.fullWidth) + hazard.x,hazard.y);//((chunkIndex * (chunk.fullWidth * chunk.tileWidth))	  
					  
			  switch hazard.type
			  {
					  
				  case "block" : Reg.PS.blocks.add(new HazardBlock(pos.x, pos.y));
				  
				  case "laser" : Reg.PS.hazards.add(new HazardLaser(pos.x, pos.y));
				  
				  case "movingBlock" : Reg.PS.hazards.add(new HazardMovingBlock(pos.x, pos.y,hazard.flippedVertically));
				  // there should be a property in the object (tiled) setting if it moves horizontally or vertically
				  
				  case "proximity" : Reg.PS.hazards.add(new HazardProximityShooter(pos.x, pos.y));
				  
			  }
		}
					

		chunkIndex++;
	}// end for loop
	}

		

	private static function chooseEnemy(enemy:Array<Enemy>):Enemy
	{
		var chosenEnemy = Reg.CURRENT_SEED.getObject(enemy);
		return chosenEnemy;
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
	        return [];
		}
	}
	
	
}
