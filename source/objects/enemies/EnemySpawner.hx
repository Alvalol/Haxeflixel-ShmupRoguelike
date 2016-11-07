package objects.enemies;

import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.util.FlxTimer;
import flixel.group.FlxSpriteGroup;
import objects.items.HealthMaxItem;
import objects.items.SpreadItem;

class EnemySpawner extends Enemy
{
	
	public var minions:FlxTypedSpriteGroup<Enemy>;
	private var delay:Float = 1;
	private var justSpawned = false;
	private var tx:Int;
	private var ty:Int;

    // Feature idea : make it so that the spawner can spawn any sort of enemy.
	
	public function new(x:Float,y:Float, _flipped:Bool) 
	{
		super(x-8, y);
		loadGraphic(AssetPaths.bigEnemies__png, true, 16, 16);
		animation.add("idle", [2,3],10);
		animation.play("idle");
		HP = 15;
		
	    tx = Std.int(x / 8); 
        ty = Std.int(y / 8);
	    set_flipY(_flipped);
		
		immovable = true;
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
		var minion = new EnemyMinion(x+4, y - 1);
		minion.Spawner = this;
		justSpawned = false;
		if (flipY)  minion.direction = -1;  else  minion.direction = 1;
		minions.add(minion);
	}
	
	override public function kill() 
	{
	    drops = [new SpreadItem(x, y), new HealthMaxItem(x,y)];// , new HealthMaxItem(x, y), new HealthMaxItem(x, y)];
		dropRate = [0.25,0.4];
		dropItem(drops,dropRate);
		super.kill();
	}
	
	private function adjustPlacement()
	{
		y -= height;
	}

}