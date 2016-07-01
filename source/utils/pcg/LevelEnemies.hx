package utils.pcg;
import flixel.math.FlxPoint;
import flixel.tile.FlxTilemap;
import flixel.FlxG;
import objects.enemies.Enemy;
import objects.enemies.EnemyLeft;
import objects.enemies.EnemyMover;
import objects.enemies.EnemyMoverGroup;
import objects.enemies.EnemyTurretA;



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
	
			// Add more randomness to the enemy picking. 3 could be a type of enemy, for instance.
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
				var enemy = new EnemyLeft(enPos.x, enPos.y);
				Reg.PS.enemies.add(enemy);
			   }
	}
	}
	
}