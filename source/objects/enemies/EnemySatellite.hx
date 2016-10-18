package objects.enemies;
import flixel.FlxSprite;
import flixel.math.FlxPoint;
import flixel.util.FlxColor;
import objects.Player;
import flixel.math.FlxMath;
import flixel.util.FlxSpriteUtil;
import flixel.FlxG;


class EnemySatellite extends Enemy
{

	private var connected:Bool = false;
	private var otherSatellite:EnemySatellite;
	private var tempcanvas:FlxSprite;
	private var drawnConnection:FlxSprite;
	private var MOVE_SPEED:FlxPoint = new FlxPoint(Reg.CURRENT_SEED.int( -10, 10),
	                                               Reg.CURRENT_SEED.int(-10,10));
	
	public function new(x:Float,y:Float) 
	{
		super(x, y);
		HP = 3;
		makeGraphic(8, 8, FlxColor.YELLOW);
		velocity.set(MOVE_SPEED.x,MOVE_SPEED.y);
	}

	override public function update(elapsed:Float)
	{

		lookForConnection();
		connect(otherSatellite);
		createConnection(otherSatellite);
		super.update(elapsed);
	}
	
	
	override function collisions()
	{
		super.collisions();
	}
	
	private function lookForConnection()
	{
	    for (enemy in Reg.PS.enemies)
		{
		if (Type.getClassName(Type.getClass(enemy)).indexOf("EnemySatellite") > -1)
		{
		otherSatellite = cast enemy;
		}
		}	
	}
	
	
	private function connect(satelliteB:EnemySatellite)
	{
		if (FlxMath.distanceBetween(this, satelliteB) <= 100)
		{
			set_connected(true);
			satelliteB.set_connected(true);
			tempcanvas = new FlxSprite();
		    tempcanvas.makeGraphic(FlxG.width, FlxG.height, FlxColor.TRANSPARENT, true);
		    Reg.PS.add(tempcanvas);
		}
		else
		{
			
			set_connected(false);
			satelliteB.set_connected(false);
			destroyConnection();
		}
	}
	
	private function destroyConnection()
	{
		if(!connected)
		tempcanvas.set_visible(false);
	}
	
	private function createConnection(satelliteB:EnemySatellite)
	{
		var lineStyle:LineStyle = { color: FlxColor.WHITE, thickness: 1};
        var drawStyle:DrawStyle = { smoothing: false };
		
	//	FlxSpriteUtil.fill(tempcanvas, FlxColor.TRANSPARENT);
		FlxSpriteUtil.drawLine(tempcanvas, x + width / 2, y + height / 2, 
		                       satelliteB.x + width / 2, satelliteB.y + height / 2, lineStyle, drawStyle);					   
	}
	

	private function set_connected(value:Bool)
	{
		connected = value;
	}
	
}