package utils.pcg;
import flixel.math.FlxPoint;
import flixel.tile.FlxTilemap;
import flixel.FlxG;
import objects.hazards.HazardBlock;
import objects.hazards.HazardHorizontalBlock;
import objects.enemies.Enemy;
import objects.enemies.EnemyExplosive;
import objects.enemies.EnemyLeft;
import objects.enemies.EnemyMover;
import objects.enemies.EnemyMoverGroup;
import objects.enemies.EnemyMultishotDeath;
import objects.enemies.EnemyTurretA;
import objects.hazards.HazardLaser;
import objects.hazards.HazardRotator;



class LevelEnemies
{

	public function new() 
	{
		// I MUST BE REFACTORED
	}
	
	static public function populateEnemies(currentLevel:FlxTilemap)//:Enemy
	{
		for (i in 0...currentLevel.totalTiles) // this must be false or else it will return 0,1 only
		{
			if (FlxG.camera.scroll.x + FlxG.width + 8 >= currentLevel.getTileCoordsByIndex(i).x)
			{
			// Add more randomness to the enemy picking. 3 could be a type of enemy, for instance.
			
			if (currentLevel.getTileByIndex(i) == 1)
			{
				currentLevel.setTileByIndex(i, 0, true); // updates the tile so that there is no tile overlapping the enemy
				var enPos = (currentLevel.getTileCoordsByIndex(i));
			    var destructible = new HazardBlock(enPos.x - 4, enPos.y - 4);
				
				Reg.PS.blocks.add(destructible);
		    }
			
			
			if (currentLevel.getTileByIndex(i) == 3)
			{
				currentLevel.setTileByIndex(i, 0, true); // updates the tile so that there is no tile overlapping the enemy
				var enPos = (currentLevel.getTileCoordsByIndex(i));
				var en = new EnemyTurretA(enPos.x-4, enPos.y-4, false);
				Reg.PS.enemies.add(en);
		    }
				
			if (currentLevel.getTileByIndex(i) == 4)
			{
				currentLevel.setTileByIndex(i, 0, true);
				var enPos = (currentLevel.getTileCoordsByIndex(i));
				var enGroup = new EnemyMoverGroup(enPos.x, enPos.y);
				for (enemy in enGroup.chainedGroup)
				{
				Reg.PS.enemies.add(enemy);
			   }
		    }
		
			if (currentLevel.getTileByIndex(i) == 5)
			{
				var enPos = (currentLevel.getTileCoordsByIndex(i));
				currentLevel.setTileByIndex(i, 0, true);
				
				var roll = FlxG.random.int(0, 100);
				if(roll>50){
				var enemy = new EnemyLeft(enPos.x, enPos.y);
				Reg.PS.enemies.add(enemy);
				}
				else{
				
				var enemy = new EnemyMultishotDeath(enPos.x, enPos.y);
				Reg.PS.enemies.add(enemy);
				}
			   }
			 
			 if (currentLevel.getTileByIndex(i) == 6)
			{
				currentLevel.setTileByIndex(i, 0, true);
				var enPos = (currentLevel.getTileCoordsByIndex(i));
				var haz = new HazardHorizontalBlock(enPos.x-4, enPos.y);
				Reg.PS.hazards.add(haz);
		    }  
			 if (currentLevel.getTileByIndex(i) == 7)
			{
				currentLevel.setTileByIndex(i, 0, true);
				var enPos = (currentLevel.getTileCoordsByIndex(i));
				var haz = new HazardLaser(enPos.x, 8);
				Reg.PS.hazards.add(haz);
				/*var haz = new HazardRotator(enPos.x, enPos.y);
				for (rot in haz.compGroup)
				{
				Reg.PS.hazards.add(rot);
			   }*/
		    }  			   
			}
	}
	}
	
}