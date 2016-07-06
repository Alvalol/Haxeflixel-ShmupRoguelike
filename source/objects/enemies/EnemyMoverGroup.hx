package objects.enemies;
import flixel.input.FlxAccelerometer;
import objects.enemies.EnemyMover;
import flixel.FlxSprite;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.FlxG;

class EnemyMoverGroup extends FlxSprite
{
	public var chainedGroup:FlxTypedGroup<EnemyMover>;
	private var chainedGroupSize:Int = 4;
	private var sep:Int = 0;
	private inline static var sepMod:Int = 6;
	private var patterns:Array<Array<Int>> = [[1, 1, 1, 1], [-1,-1,-1,-1],[1,-1,1,-1]];

	
	// can't have these enemies in the first chunk of loadedMap
	
	public function new(x:Float,y:Float) 
	{
		super();
		chainedGroup = new FlxTypedGroup<EnemyMover>();
		var chosenPattern = FlxG.random.getObject(patterns);
		trace(chosenPattern);
		for (i in 0...chainedGroupSize)
		{
			var newMover  = new EnemyMover(x + sep, y); 
			newMover.factor = chosenPattern[i];
			chainedGroup.add(newMover);
			sep += sepMod;

		}
	}
	
	

}