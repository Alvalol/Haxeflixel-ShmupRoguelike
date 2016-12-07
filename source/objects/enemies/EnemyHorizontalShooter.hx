package objects.enemies;

import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.tweens.FlxTween;
import objects.items.HealthItem;
import flixel.util.FlxTimer;
import flixel.tweens.FlxEase;

class EnemyHorizontalShooter extends Enemy
{
	
	private var SHOOT_SPEED = 60;
	private var justShot:Bool = false;
	private var shootDelay:Float = 1.5;

	public function new(x:Float, y:Float) 
	{
		super(x, y);
		HP = 3;
		makeGraphic(8, 8, FlxColor.YELLOW);
	}
	
	override public function update(elapsed:Float) 
	{
		if (!justShot && !Reg.pause)
		{
			shoot();
		}
		
		super.update(elapsed);
	}
	
/*	    private function animateToShoot()
	{
		if (!justShot && isOnScreen(FlxG.camera))
			{
				//animation.play("shoot");
				justShot = true;
			}

		if (animation.curAnim.name == "shoot" && animation.curAnim.curFrame == 6)
			{
				Reg.PS.EBullets.add(shoot());
				animation.play("idle");
			}	
	}*/
	
	private function shoot()
	{
		justShot = true;
		var eb = Reg.PS.EBullets.recycle(EnemyBullet);
	    if (eb == null) eb = new EnemyBullet(x, y);
		

	
		eb.scale.set(1, 1);
		eb.reset(x - 4, y);
        
		eb.velocity.x = -SHOOT_SPEED;			
		Reg.PS.EBullets.add(eb);

		new FlxTimer().start(shootDelay, function(_)
		{
	    justShot = false;
		}, 1);	

	}
	
	override public function kill():Void
	{
	    drops = [new HealthItem(x, y)];
		dropRate = [0.25];
		dropItem(drops,dropRate);
		super.kill();
	}
	
	
}