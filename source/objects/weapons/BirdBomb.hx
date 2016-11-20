package objects.weapons;
import flixel.FlxSprite;
import flixel.addons.effects.FlxTrail;
import flixel.addons.effects.FlxTrailArea;
import flixel.math.FlxPoint;
import flixel.math.FlxVelocity;
import flixel.util.FlxColor;
import flixel.FlxG;

class BirdBomb extends FlxSprite
{
	private var destination:FlxPoint;
	private var _appeared:Bool = false;
	private var trailArea:FlxTrailArea;
	
	public function new(x:Float, y:Float) 
    {
		super(x, y);
        loadGraphic(AssetPaths.items__png, true, 8, 8);
		animation.add("default", [24, 25], 12, true);
		animation.play("default");
		destination = new FlxPoint(FlxG.camera.x + FlxG.width * 2, Reg.CURRENT_SEED.int(10, FlxG.height));
	}
	
	
	override public function update(elapsed:Float):Void 
	{
		move();
		collisions();

		
		if (_appeared && isOnScreen())
		{
			_appeared = true;
		}
		
		basicChecks();
		
		super.update(elapsed);
	}
	
	private function basicChecks()
	{
		if (!isOnScreen() && _appeared)
		{
			kill();
		}
	}
	private function move()
	{
		FlxVelocity.moveTowardsPoint(this, destination,400,2000);	
	}
	
	private function collisions()
	{
		FlxG.overlap(Reg.PS.enemies, this, killBoth);

	}
	
	private function killBoth(bird:FlxSprite, enemy:FlxSprite)
	{
		bird.kill();
		enemy.kill();
	}
}