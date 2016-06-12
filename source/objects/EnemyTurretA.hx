package objects;

import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.util.FlxTimer;

class EnemyTurretA extends Enemy
{

    private static inline var SCORE_AMOUNT:Int = 0;
	private static inline var HP:Int = 4;
	private var bullet:EnemyBullet;
	private var justShot:Bool = false;
	private var shootDelay:Float = 1.5;
	
	public function new(x:Float, y:Float) 
	{
		super(x, y);
		makeGraphic(8, 8, FlxColor.RED, false);
		immovable = true;
		solid = true;
	}
	
	override public function update(elapsed:Float)
	{
		if (!justShot)
			shoot();
			
		super.update(elapsed);
		
	}
	
	private function shoot():Void
	{
		justShot = true;
		bullet = new EnemyBullet(x + 3, y);
		bullet.velocity.y = - 50;
	    Reg.PS.add(bullet);
		new FlxTimer().start(shootDelay, function(_)
		{
			justShot = false;
		}, 1);
		
	}
	
}