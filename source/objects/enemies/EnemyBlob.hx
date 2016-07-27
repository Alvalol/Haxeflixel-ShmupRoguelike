package objects.enemies;

import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.util.FlxTimer;
import flixel.util.FlxSpriteUtil;
import flixel.math.FlxPoint;
import flixel.math.FlxVelocity;
import objects.items.HealthItem;

class EnemyBlob extends Enemy
{
	var roll:Int;
	var rolled:Bool;
	var delayDirection:Float = 0.2;
	var MOVE_SPEED:Float = 40;
	var tsize:Float = 32; 
	var mtsize:Float = 8;
	
	public function new(x:Float,y:Float, _tsize:Float) 
	{
		super(x, y);
		HP = 1;
		solid = true;
		tsize = _tsize;
		roll = FlxG.random.int(0, 100);
		makeGraphic(Std.int(tsize), Std.int(tsize), FlxColor.RED);
	}
	
	override public function update(elapsed:Float) 
	{
		if (!rolled)
		{
		rolled = true;
		reroll();
		}
		move();
	//	attraction();
		super.update(elapsed);
	}
	
	private function mitosis()
	{
		var m1 = new EnemyBlob(x , y , tsize - 3);
		var m2 = new EnemyBlob(x , y , tsize - 3);
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
	new FlxTimer().start(delayDirection, function(_)
		{
		 rolled = false;
	     roll  = FlxG.random.int(0, 100);	
		}, 1);
	}
	
	private function boundaries()
	{
		if (FlxG.collide(Reg.PS.map.loadedMap, this))
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
	
    private function attraction()
	{
		var aim = new FlxPoint( FlxG.camera.scroll.x + FlxG.camera.width/2, FlxG.camera.scroll.y + FlxG.camera.height/2);
		if (roll >= 50)
		FlxVelocity.moveTowardsPoint(this, aim, MOVE_SPEED, 0);	

	}
	private function move()
	{
		boundaries();
		velocity.set(FlxG.random.float(-MOVE_SPEED/2, MOVE_SPEED/2), FlxG.random.float( -MOVE_SPEED/2, MOVE_SPEED/2));
	}
}