package objects.enemies;

import flixel.math.FlxPoint;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.addons.effects.FlxTrail;
import objects.items.ImmunityWallItem;
import objects.items.Item;
import objects.items.HealthItem;
import objects.items.ItemsExplosiveItem;
import objects.items.RangeItem;
import flixel.math.FlxMath;
import objects.items.SpeedDownItem;
import objects.items.WeaponLaserItem;


class EnemyMover extends Enemy
{
	private var sinFactor:Float = 0;
	public var factor:Int = 0;
	private var MOVE_SPEED:Float = 0.5;


	public function new(x:Float, y:Float) 
	{
	    super(x, y);
		HP = 1;
		loadGraphic(AssetPaths.enemies__png, true, 8, 8);
		animation.add("idle", [16]);
        animation.play("idle");
	}
	
    override public function update(elapsed:Float)
	{
		if (_appeared)
		{
		move();
		}
		super.update(elapsed);		
	}
	
	
	override public function kill():Void
	{	
		drops = [new WeaponLaserItem(x, y)];
		dropRate = [1];
		dropItem(drops, dropRate);
		
		super.kill();
	}
	
	
	private function move()
	{
		sinFactor += factor * .02 * Math.PI;
		y += Math.sin(sinFactor);
		x -= MOVE_SPEED;	
	}
	
}