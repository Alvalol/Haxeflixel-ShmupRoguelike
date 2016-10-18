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
	
	public function new(x:Float, y:Float,_moveSpeed:Int,_damage:Int) 
	{
		super(x, y);
		loadGraphic(AssetPaths.pbullet__png, false, 16, 8, false);
		animation.add("idle", [0]);
		animation.play("idle");

		width = 10;
		height = 6;
		scale.set(0.5, 0.5);
		offset.set(-3, 2);
		
		MOVE_SPEED = _moveSpeed;
		damage = _damage;
		centerOffsets();
		

	}
	
	override public function update(elapsed:Float)
	{
	    collisions();
		move();
	
		if(!Reg.pause)
		    super.update(elapsed);
	}
	
	private function collisions()
	{
		if (!isOnScreen())
			kill();

		// I feel like there is something I'm doing wrong here. Must ask.
		
		for (block in Reg.PS.blocks)
		{	
			if (FlxG.overlap(this, block))
			{
					var newCoin:CoinItem =  Reg.PS.coins.recycle();	
					if (newCoin == null) 
					newCoin = new CoinItem(x, y);
					
					newCoin.reset(x , y);
					Reg.PS.coins.add(newCoin);
					kill();
					block.kill();
			}
		}
		
	
	  for (hazard in Reg.PS.hazards)
	  {
		  if (FlxG.pixelPerfectOverlap(hazard, this))
		  {
		       kill();
		       createNoHit();
		  }
	  }

	  if (FlxG.collide(Reg.PS.map, this))
	  {
		kill();
		createNoHit();	
	  }
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
		if (e == null) e = new NoHit(x, y);
		
		e.reset(x, y - 4);
		Reg.PS.effects.add(e);
	}
	
	override public function kill()
	{ 
		Reg.PS.PBullets.remove(this, true);
		super.kill();
	}
}