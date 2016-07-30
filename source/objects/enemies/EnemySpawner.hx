package objects.enemies;

import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.util.FlxTimer;
import flixel.group.FlxSpriteGroup;

class EnemySpawner extends Enemy
{
	
	public var minions:FlxTypedSpriteGroup<Enemy>;
	private var delay:Float = 1;
	private var justSpawned = false;
	private var tx:Int;
	private var ty:Int;

    // Make it so that the spawner can spawn any sort of enemy.
	
	public function new(x:Float,y:Float) 
	{
		super(x-8, y);
		makeGraphic(16, 16, FlxColor.RED);
		HP = 7;
	    tx = Std.int(x / 8); 
        ty = Std.int(y / 8);
		immovable = true;
		
		centerOrigin();
		adjustFlip();
		adjustPlacement();
		minions = new FlxTypedSpriteGroup<Enemy>();
	}
	
	override public function update(elapsed:Float) 
	{
		if (_appeared)
		{
			if (!justSpawned)
			{
			justSpawned = true;
			spawn();
			}
			
			addMinions();
		}
		
		super.update(elapsed);
	}
	
	
	private function addMinions()
	{
		for (minion in minions)
		{
			Reg.PS.enemies.add(minion);
		}
	}
	
	private function spawn()
	{
		new FlxTimer().start(delay, spawnEnemy, 1);
	}
    
	private function spawnEnemy(Timer:FlxTimer)
	{
		var minion = new EnemyMinion(x+4, y);
		minion.Spawner = this;
		justSpawned = false;
		if (flipY)  minion.direction = -1;  else  minion.direction = 1;
		minions.add(minion);
	}
	
	
	private function adjustPlacement()
	{
		if (flipY)
		{
			y -= 4;
		}
		else
		{
			y -= 12;
		}
	}
	private function adjustFlip()
	{	
		if (Reg.PS.map.loadedMap.getTile(tx,ty-1) != 0) // not accurate enough
			flipY = true;
	}
}