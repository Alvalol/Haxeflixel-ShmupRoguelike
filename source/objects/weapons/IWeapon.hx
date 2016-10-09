package objects.weapons;
import flixel.math.FlxPoint;


interface IWeapon 
{
    public var range:Int;
	public var max_range:Int;
	public var max_bullets:Int;
	
	public var location:FlxPoint;
	
	public var damage:Int;
  
	public function prepareShot():Array<PlayerBullet>;
	public function shoot():Void;
	public function update_location(location:FlxPoint):Void;
}