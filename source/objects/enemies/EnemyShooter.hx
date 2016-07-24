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
	private var fact:Int = 1;
	
	public function new(x:Float, y:Float) 
	{
		super(x, y);

		HP = 10;
		makeGraphic(8, 8, FlxColor.LIME);
		startTimer();
	}
	
	override public function update(elapsed:Float) 
	{
		move();
		shoot();

		cameraHandler();
		trace("moved h : " + movedHorizontal);
		trace("moved v : " + movedVertically);
		trace("justshot : " + justShot);
		super.update(elapsed);
	}

	private function cameraHandler()
	{
		if (isOnScreen() && _appeared)
		{
			Reg.SCROLLER_ON = false;
		}
	}
	
	private function startTimer()
	{
		new FlxTimer().start(delay, stopMoving, 1);
	}
    
	private function stopMoving(Timer:FlxTimer)
	{
		movedHorizontal = true;
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
		}
		
		if (justShot)
		{
			verticalMove();
		}
	}
	
	private function verticalMove()
	{
		
		if (!movedVertically)
		{
			velocity.y = MOVE_SPEED * fact;
			justShot = true;
		}	
		
		startVertTimer();
	}
	
	private function startVertTimer()
	{
		new FlxTimer().start(delay, stopVerticalMove, 1);
	}
	
	private function stopVerticalMove(timer:FlxTimer)
	{
		fact = FlxG.random.int( -1, 1);
		velocity.y = 0;
		
		if (fact == 0)
		{
			FlxG.random.int( -1, 1);
		}
		justShot = false;
	}

	private function move()
	{
		if (!movedHorizontal)
		{
		velocity.x = -MOVE_SPEED;
		}
		else
		{
		velocity.x = 0;
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