package objects;

import flixel.FlxSprite;
import flixel.FlxObject;
import flixel.FlxG;
import flixel.math.FlxPoint;
import flixel.addons.effects.FlxTrail;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import objects.effects.NewBullEffect;
import objects.effects.NoHit;
import objects.enemies.Enemy;
import objects.items.CoinItem;
import objects.weapons.Bullet;


class BaseBullet extends Bullet
{
	
	private var createdNoHit:Bool = false;
	
	public function new(x:Float, y:Float,_moveSpeed:Int,_damage:Int) 
	{
		super(x, y);
		loadGraphic(AssetPaths.pbullet__png, false, 16, 8, false);
		animation.add("idle", [0]);
		animation.play("idle");

		width = 1;
		height = 1;
		scale.set(0.5, 0.5);

		
		MOVE_SPEED = _moveSpeed;
		damage = _damage;
		//centerOffsets();
		

	}
	
	override public function update(elapsed:Float)
	{
	    collisions();
		move();
	
		if(!Reg.pause)
		    super.update(elapsed);
	}
	
 	override private function collisions()
    {
	 if (isTouching(FlxObject.ANY))
		 kill();
	 
	if (FlxG.collide(Reg.PS.map, this))
		kill();

		
	if (x > FlxG.camera.scroll.x + FlxG.width + 8 || x < FlxG.camera.scroll.x - FlxG.width - 8)
	{
	   kill();
	}
		super.collisions();
	
	}

	private function move()
	{
		velocity.x = MOVE_SPEED;
	}
	

	override public function revive()
	{		
		new FlxTimer().start(Reg.PS.player.RANGE, function(_) 
		{ kill(); }, 1);
	
	//	newBullAnim.reset(x-2 , y);
		super.revive();
	}
	private function createNoHit()
	{
		var e = Reg.PS.effects.recycle(NoHit);
		if (e == null) e = new NoHit(x - 6, y - 4);
		e.set_angle(angle);
		
		// horrible hack for back weapon and base weapon. Fix this please.
		if (scale.x == 0.5)
		e.reset(x - 6, y - 4);
		else
		e.reset(x, y-1);
			
		Reg.PS.effects.add(e);
	}
	
	override public function kill()
	{ 
		if (!createdNoHit && Reg.hatched)
		{
		createdNoHit = true;
		createNoHit();
		}
	 	Reg.PS.PBullets.remove(this, true);
		super.kill();
	}

}