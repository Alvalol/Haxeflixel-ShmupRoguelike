package objects.enemies;

import flixel.math.FlxPoint;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.addons.effects.FlxTrail;
import objects.items.Item;
import objects.items.HealthItem;
import objects.items.RangeItem;
import flixel.math.FlxMath;


class EnemyMover extends Enemy
{
	private var sinFactor:Float = 0;
	public var factor:Int = 0;
	private var MOVE_SPEED:Float = 0.5;
	private var bTrail:FlxTrail;

	public function new(x:Float, y:Float) 
	{
	    super(x, y);
		HP = 1;
		loadGraphic(AssetPaths.enemies__png, true, 8, 8);
		animation.add("idle", [16]);
        animation.play("idle");
		createTrail();
	}
	
    override public function update(elapsed:Float)
	{
		if (_appeared)
		{
		move();
		}
		super.update(elapsed);		
	}
	
    private function createTrail()
	{
        bTrail = new FlxTrail(this,null,4,1,0.4,0.05);
		Reg.PS.effects.add(bTrail);
	}
	
	override public function kill():Void
	{	
		drops = [new HealthItem(x, y),new RangeItem(x,y)];
		dropItem(drops);
		Reg.PS.effects.remove(bTrail);
		super.kill();
	}
	
	
	private function move()
	{
		sinFactor += factor * .02 * Math.PI;
		y += Math.sin(sinFactor);
		x -= MOVE_SPEED;	
	}
	
}