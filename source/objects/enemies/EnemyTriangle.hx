package objects.enemies;

import flixel.FlxObject;
import flixel.addons.effects.FlxTrail;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.math.FlxVelocity;
import flixel.util.FlxTimer;
import objects.items.MagnetItem;
import objects.items.WeaponBackItem;

// NEEDS TO BE FIXED

class EnemyTriangle extends Enemy
{

	private var MOVE_SPEED:Int = 50;
	private var _angle:Int = 120;
	private var delay:Float = 1.2;
	private var bTrail:FlxTrail;
	
	public function new(x:Float, y:Float) 
	{
		super(x, y);
		HP = 1;
		
		loadGraphic(AssetPaths.enemies__png, true, 8, 8);
		animation.add("default", [8,9,10,11],8);
        animation.play("default");
		triggerAngleChange();
		
		createTrail();
		
		//color = 0x00FF80; //placeholder while there is no asset for this enemy
	}
	
	override public function update(elapsed:Float) 
	{
		super.update(elapsed);
		move();	
	}
	
	private function move()
	{
		velocity.set(FlxVelocity.velocityFromAngle(_angle, MOVE_SPEED).x, FlxVelocity.velocityFromAngle(_angle, MOVE_SPEED).y);
	}
	
	private function triggerAngleChange()
	{
		new FlxTimer().start(delay, changeAngle, 1);
	}
	
	private function changeAngle(timer:FlxTimer)
	{
		if (_angle >= 240)
		{
			_angle = 110;
		}
		else
		{
			_angle = 240;
		}
		
		triggerAngleChange();
	}
	
	override public function kill():Void
	{	
		drops = [new MagnetItem(x, y), new WeaponBackItem(x,y)];
		dropRate = [0.25,0.25];
		dropItem(drops, dropRate);
		Reg.PS.effects.remove(bTrail);
		super.kill();
	}
	
	private function createTrail()
	{
        bTrail = new FlxTrail(this,null,4,1,0.4,0.05);
		Reg.PS.effects.add(bTrail);
	}
}