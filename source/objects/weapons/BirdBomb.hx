package objects.weapons;
import flixel.FlxSprite;
import flixel.addons.effects.FlxTrail;
import flixel.addons.effects.FlxTrailArea;
import flixel.math.FlxPoint;
import flixel.math.FlxVelocity;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.util.FlxTimer;

class BirdBomb extends FlxSprite
{
	private var destination:FlxPoint;
	private var lifespan:Int = 5;
	
	public function new(x:Float, y:Float) 
    {
		super(x, y);
        loadGraphic(AssetPaths.items__png, true, 8, 8);
		animation.add("default", [24, 25], 12, true);
		animation.play("default");
		scale.set(2, 2);
		destination = new FlxPoint(FlxG.camera.scroll.x + FlxG.camera.width * 2, Reg.CURRENT_SEED.int(-10, FlxG.camera.height+10));
	}
	
	
	override public function update(elapsed:Float):Void 
	{
		move();
		collisions();
		super.update(elapsed);
	}
	
	private function move()
	{
		FlxVelocity.moveTowardsPoint(this, destination,400,2000);	
	}
	
	private function collisions()
	{
		
		if (x >= FlxG.camera.scroll.x + FlxG.camera.width + 10)
		{
			kill();
		}
		
		if (x <= FlxG.camera.scroll.x + FlxG.camera.width)
		{
		FlxG.overlap(Reg.PS.enemies, this, killBoth);
		FlxG.overlap(Reg.PS.blocks, this, killBoth);
		}
	}
	
	private function killBoth(enemy:FlxSprite, bird:FlxSprite)
	{
		bird.kill();
		enemy.kill();
	}
	
	override public function kill():Void 
	{
		super.kill();
	}
}