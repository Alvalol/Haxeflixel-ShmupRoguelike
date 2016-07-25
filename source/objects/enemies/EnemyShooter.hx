package objects.enemies;

import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.util.FlxTimer;
import objects.items.Item;
import objects.items.HealthItem;

class EnemyShooter extends Enemy
{
	private var MOVE_SPEED:Int = 50;
	private var SHOOT_SPEED:Int = -100;
	private var movedHorizontal = false;
	private var movedVertically = false;
	private var delay:Float = 0.8;
	private var justShot = false;
	private var fact:Int = FlxG.random.sign(50);
	private var directionChanged = false;
	
	public function new(x:Float, y:Float) 
	{
		super(x, y);
		HP = 1;
		makeGraphic(8,8, FlxColor.LIME);
		startTimer();
	}
	
	override public function update(elapsed:Float) 
	{
		move();
		cameraHandler();
		trace("moved h : " + movedHorizontal);
		trace("moved v : " + movedVertically);
		trace("justshot : " + justShot);
		trace("factor : " + fact);
		trace("-----------------------");
		super.update(elapsed);
	}
	
	private function startTimer()
	{
		new FlxTimer().start(delay, stopMoving, 1);
	}
	
	private function stopMoving(Timer:FlxTimer)
	{
		movedHorizontal = true;
	}

	private function move()
	{
		if (!movedHorizontal)
		{
		velocity.x = -MOVE_SPEED;
		}

		else
		{
		verticalMove();
		velocity.x = 0;
		}
	}
	
	private function verticalMove()
	{
		velocity.y = MOVE_SPEED * fact;

		if (!directionChanged)
		{
		triggerDirectionChange();
		}
	}
	
	private function triggerDirectionChange()
	{
		new FlxTimer().start(delay/2, changeDirection, 1);
	}
	
	private function changeDirection(timer:FlxTimer)
	{
		fact *= -1;
		directionChanged = !directionChanged;
		triggerDirectionChange();
	}
	
	private function cameraHandler()
	{
		if (isOnScreen() && _appeared)
		{
			Reg.SCROLLER_ON = false;
		}
	} 
	
	private function shoot()
	{
		if (!justShot)
		{
			var eb:EnemyBullet = Reg.PS.EBullets.recycle();
	        if (eb == null)
		        eb = new EnemyBullet(x, y);	
			
			eb.velocity.x = SHOOT_SPEED;
			Reg.PS.EBullets.add(eb);
			justShot = true;
		}
	}
	
	override public function kill():Void
	{
		var drops:Array<Item> = [new HealthItem(x, y)];
		dropItem(drops);
		Reg.SCROLLER_ON = true;
		super.kill();
	}
	
}