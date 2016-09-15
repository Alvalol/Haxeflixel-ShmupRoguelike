package objects.enemies;
import flixel.input.FlxAccelerometer;
import objects.enemies.EnemyMover;
import flixel.FlxSprite;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.FlxG;

class EnemyMoverGroup extends FlxSprite
{
	public var chainedGroup:FlxTypedGroup<Enemy>;
	private var chainedGroupSize:Int = 4;
	private var separator:Int = 0;
	private inline static var sepMod:Int = 6;
	private var patterns:Array<Array<Int>> = [[1, 1, 1, 1], [ -1, -1, -1, -1]];
	private var randomEnemy:Int = Reg.CURRENT_SEED.int(0, 1);

	public function new(x:Float,y:Float) 
	{
		super();
		makeGroup(x,y);
	}
	
	private function makeGroup(x:Float,y:Float)
	{
		if (randomEnemy == 0)
		{
			chainedGroup = cast new FlxTypedGroup<EnemyMover>();
			var chosenPattern = Reg.CURRENT_SEED.getObject(patterns);
			
			for (i in 0...chainedGroupSize)
			{
				var newMover  = new EnemyMover(x + separator, y); 
				newMover.factor = chosenPattern[i];
				chainedGroup.add(newMover);
				separator += sepMod;
			}
		}
		else
		{
			chainedGroup = cast new FlxTypedGroup<EnemyTriangle>();
			var chosenPattern = Reg.CURRENT_SEED.getObject(patterns);
			
			for (i in 0...chainedGroupSize)
			{
				var newTriangle  = new EnemyTriangle(x + separator, y); 
				chainedGroup.add(newTriangle);
				separator += sepMod * 2;
			}
		}
    }
}