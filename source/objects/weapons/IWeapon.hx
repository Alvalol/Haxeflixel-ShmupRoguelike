package objects.weapons;
import flixel.math.FlxPoint;


interface IWeapon 
{
    public var range:Float;
	public var max_range:Int;
	public var max_bullets:Int;
	
	public var location:FlxPoint;
	
	public var damage:Int;
  
	public function prepareShot():Array<PlayerBullet>;
	public function shoot():Void;
	public function update_location(location:FlxPoint):Void;
    public function set_damage(value:Int):Int;
	public function get_damage():Int;
	public function get_range():Float;
	public function set_range(value:Float):Float;
}