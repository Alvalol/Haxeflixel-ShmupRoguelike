package objects.enemies;
import flixel.util.FlxColor;

import flixel.FlxG;
class EnemyMeteor extends Enemy
{
	private var MAX_MOVE:Float = Reg.CURRENT_SEED.float(30,100);
	private var ACCEL:Float = Reg.CURRENT_SEED.float(10,80);

	public function new(y:Float) 
	{
		var tsize = Reg.CURRENT_SEED.getObject([8, 16]);
		var tframe = Reg.CURRENT_SEED.getObject([4, 5, 6,7]);
		super(FlxG.camera.scroll.x + FlxG.width + 10, y);
		loadGraphic(AssetPaths.bigEnemies__png, true, 16, 16);
		animation.add("default", [tframe]);
		animation.play("default");
		setGraphicSize(Std.int(tsize), Std.int(tsize));
		updateHitbox();
		HP = 1;
		maxVelocity.set(MAX_MOVE, MAX_MOVE);	
	}
	
	override public function update(elapsed:Float) 
	{
		
	    move();
		super.update(elapsed);
	}
	
	private function move()
	{
		acceleration.set(-ACCEL, 0);
	}
	
	
	
}