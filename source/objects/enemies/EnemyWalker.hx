package objects.enemies;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxObject;

class EnemyWalker extends Enemy
{

	private var direction:Int;
	private var MOVE_SPEED:Int = 5;
	
	
	public function new(x:Float,y:Float, flipped:Bool) 
	{
		super(x, y);
		centerOrigin();
		adjustPosition();
		HP = 3;
		flipY = flipped;
		loadGraphic(AssetPaths.enemies__png, true, 8, 8);
		animation.add("walk",[32,33],4,true);
		animation.play("walk");
		direction = Reg.CURRENT_SEED.getObject([ -1, 1]);
	    
	}
	
	override public function update(elapsed:Float) 
	{
		if (_appeared)
		move();
		
		if (direction >= 1)
		flipX =  true
		else
		flipX = false;
		
		super.update(elapsed);
	}
	
	
	private function adjustPosition()
	{
		if (flipY)
		y += 8;
		else
		y -= 8;
	}
	private function move()
	{		
		velocity.x = MOVE_SPEED * direction;

		if (FlxG.collide(Reg.PS.map, this))
		{
			if (isTouching(FlxObject.LEFT) || isTouching(FlxObject.RIGHT))
			{
				direction *=-1;
			}
		}
	}
	
}