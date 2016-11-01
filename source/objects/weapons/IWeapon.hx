package objects.weapons;
import flash.display.InterpolationMethod;
import flixel.math.FlxPoint;


interface IWeapon 
{
    public var range:Float;
	public var max_range:Int;
	public var max_bullets:Int;
	private var canSpread:Bool;
	private var maxSpread:Int;
	
	public var location:FlxPoint;
	
	public var damage:Int;
  
	public function shoot():Void;
	public function update_location(location:FlxPoint):Void;
    public function set_damage(value:Int):Int;
	public function get_damage():Int;
	public function get_range():Float;
	public function set_range(value:Float):Float;
	public function set_spread(value:Int):Void;
	public function get_spread():Int;
	public function get_canSpread():Bool;
	public function get_maxSpread():Int;
}