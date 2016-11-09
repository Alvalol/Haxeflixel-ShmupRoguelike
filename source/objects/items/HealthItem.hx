package objects.items;
import objects.Player;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxG;

class HealthItem extends Item
{

	public function new(x:Float,y:Float) 
	{
		super(x, y);
		loadGraphic(AssetPaths.items__png, true, 8,8);
		animation.add("move", [9,10,11,12,13,14,15,16], 12);
		animation.play("move");
		set_name("HEALTH");
	}
	
	override function interact(player:Player)
	{
		if (player.HP < player.MAX_HP)
		player.HP++;
		
		applyAntidote();
		super.interact(player);
	}
	
		private function applyAntidote()
	{
		if (Reg.PS.player.currentCurses != null)
		{
			var pickedCurse:String =  Reg.CURRENT_SEED.getObject(Reg.PS.player.currentCurses);
			switch pickedCurse
			{
			case "WallsHurt": Reg.wallsHurt = false;
		    case "MirrorControls":  Reg.mirrorControls = false;
		    case "ExplosiveItems": Reg.itemsExplode = false;
			case "SlowDown" : {   
                                Reg.PS.player.HOR_MOVE_SPEED = 50;
							    Reg.PS.player.VERT_MOVE_SPEED = 68;
				                Reg.PS.player.maxVelocity.set(Reg.PS.player.HOR_MOVE_SPEED, Reg.PS.player.VERT_MOVE_SPEED);
		                      }
							
			}
			
		}

	}
	
}