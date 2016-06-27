package utils.pcg;
import flixel.math.FlxPoint;
import flixel.tile.FlxTilemap;
import objects.enemies.Enemy;
import objects.enemies.EnemyTurretA;


class LevelEnemies
{

	public function new() 
	{
		
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
				Reg.PS.enemies.add(new EnemyTurretA(enPos.x, enPos.y, false));
				
			}
		}
	}
	
}