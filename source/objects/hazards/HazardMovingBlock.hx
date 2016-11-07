package objects.hazards;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.FlxObject;
import flixel.util.FlxTimer;

class HazardMovingBlock extends Hazard
{

	private var direction:Int = 0;
	private var MOVE_SPEED:Float = 0.5;
	private var horizontal:Bool;
	private var gotshot:Bool = false;
	
		public function new(x:Float, y:Float, hor:Bool) 
	{
		super(x, y);
		loadGraphic(AssetPaths.hazards__png, true, 8, 8);
		animation.add("static", [1]);
		animation.play("static");
		//immovable = true;
		maxVelocity.set(0, 0);
		centerOffsets();
		horizontal = hor;
	}
	
	override public function update(elapsed:Float):Void 
	{
		if (_appeared && !gotshot)
		   if (horizontal)
		   {
		       moveHorizontally();
		   }
		   else{
			   moveVertically();
		   }

		if (direction == 0)
			direction = Reg.CURRENT_SEED.int( -1, 1);
			
		super.update(elapsed);
	}
	
	
	override private function collisions()
	{
		if (horizontal)
		{
		if (FlxG.collide(this, Reg.PS.map) || (FlxG.collide(this,Reg.PS.blocks)))
		
			direction *=-1;
		}
		else
		{
			if (FlxG.collide(this, Reg.PS.map) || (FlxG.collide(this, Reg.PS.blocks)))
			{
		    flipY = !flipY;
			direction *=-1;	
			}
		}
		
		if ((FlxG.overlap(this, Reg.PS.PBullets) || FlxG.overlap(this,Reg.PS.player) && !gotshot))
		{
			gotshot = true;
			new FlxTimer().start(1, function(_) { gotshot = false; });
		}
		
//		super.collisions();
		if (FlxG.overlap(Reg.PS.player, this))
		{
		  Reg.PS.player.damage();
		}

	}
	
	public function moveVertically()
	{
		y += MOVE_SPEED * direction;
	}
	
	public function moveHorizontally()
	{
		x += MOVE_SPEED * direction;
	}
	
}