package objects.enemies;

import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.util.FlxTimer;
import flixel.util.FlxSpriteUtil;
import flixel.math.FlxPoint;
import flixel.math.FlxVelocity;
import objects.items.CurseItem;
import objects.items.HealthItem;

class EnemyBlob extends Enemy
{
	/* Boundaries() needs to be re-designed. It's not very functional right now so I'm not using it.
	 */
	var roll:Int;
	var rolled:Bool;
	var delayDirection:Float = 0.2;
	var MOVE_SPEED:Float = 50;
	var tsize:Float = 32; 
	var mtsize:Float = 4;	
	
	
	public function new(x:Float,y:Float, _tsize:Float) 
	{
		super(x, y);
		HP = 1;
		solid = true;
		tsize = _tsize;
		roll = Reg.CURRENT_SEED.int(0, 100);
		loadGraphic(AssetPaths.bigEnemies__png, true, 16, 16);
		animation.add("idle", [0,1],10);
		animation.play("idle");
		setGraphicSize(Std.int(tsize), Std.int(tsize));
	}
	
	override public function update(elapsed:Float) 
	{
		if (!rolled)
		{
		rolled = true;
		reroll();
		}
		move();
		super.update(elapsed);
	}
	
	
	private function mitosis()
	{
		var offset = 10;
		var m1 = new EnemyBlob(x + Reg.CURRENT_SEED.int(-offset,offset), y + Reg.CURRENT_SEED.int(-offset,offset) , tsize - 2);
		var m2 = new EnemyBlob(x - Reg.CURRENT_SEED.int(-offset,offset), y + Reg.CURRENT_SEED.int(-offset,offset) , tsize - 2);
		Reg.PS.enemies.add(m1);
		Reg.PS.enemies.add(m2);
	}
	
	override public function kill()
	{
		if (tsize >= mtsize)
		{
		mitosis();
		}
		super.kill();
	}
	
	private function reroll()
	{
		// This is dumb as well, sort of a silly function to give it a "shaky" effect.
	    new FlxTimer().start(delayDirection, function(_)
		{
		 rolled = false;
	     roll  = Reg.CURRENT_SEED.int(0, 100);	
		}, 1);
	}
	
	private function boundaries()
	{
		if (FlxG.collide(Reg.PS.map, this))
		{
		velocity.set(this.velocity.x * -1, this.velocity.y * -1);	
		}
		
		if (x >=  FlxG.camera.scroll.x || x <= FlxG.camera.scroll.x + FlxG.camera.width
		   || y >= FlxG.camera.scroll.y || x <= FlxG.camera.scroll.y + FlxG.camera.height)
		   {
				velocity.set(this.velocity.x * -1, this.velocity.y * -1);		   
		   }
		  
        FlxSpriteUtil.bound(this, 
		                    FlxG.camera.scroll.x, 
							FlxG.camera.scroll.x + FlxG.camera.width,
							FlxG.camera.scroll.y,
							FlxG.camera.scroll.y + FlxG.camera.height);	
							
	}
	
	private function move()
	{
		velocity.set(Reg.CURRENT_SEED.float(-MOVE_SPEED/2, MOVE_SPEED/2), Reg.CURRENT_SEED.float( -MOVE_SPEED/2, MOVE_SPEED/2));
	}
}