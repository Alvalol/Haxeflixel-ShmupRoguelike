package objects.weapons;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxColor;


class BouncyBullet extends Bullet
{

	public function new(x:Float, y:Float, _moveSpeed:Int, _damage:Int) 
	{
		super(x, y);
		makeGraphic(16, 16, FlxColor.YELLOW);
		MOVE_SPEED = _moveSpeed;
		damage = _damage;
	}
	
	override public function update(elapsed:Float) 
	{
		move();
		super.update(elapsed);
	}
	
	private function move()
	{
		velocity.x = MOVE_SPEED;
	    velocity.y = MOVE_SPEED / 2;
	}
	override private function collisions()
	{
		if (FlxG.collide(Reg.PS.map, this))
		{
			velocity.x *= -1;
			velocity.y *= -1;
		}

		super.collisions();
	}

	
}