package objects.items;
import flixel.util.FlxColor;
import objects.Player;
import flixel.math.FlxVelocity;

class CurseItem extends Item
{
	
	public function new(x:Float, y:Float)
	{
		//maybe this item could set a random curse on the player
		// such as : change controls, make items explosive, make blocks explosive, speed of scroll faster, all turrets can aim towards the player.
		// 
		super(x, y);
		loadGraphic(AssetPaths.items__png, true, 8, 8);
		setSize(8, 8);
		animation.add("idle", [8]);
		animation.play("idle");
		set_name("YOU ARE CURSED");
		sinTween.active = false;
	}
	
	override public function update(elapsed:Float) 
	{
		moveToPlayer();
		super.update(elapsed);
	}
	
	private function moveToPlayer()
	{
	   FlxVelocity.accelerateTowardsObject(this, Reg.PS.player, 2000, 1000);
	}
	
	
	override public function interact(player:Player)
	{
		
		pickCurse();
		kill();
		super.interact(player);
	}
	
	private function pickCurse()
	{

		if (Reg.curseList != null)
		{
		var pickedCurse = Reg.CURRENT_SEED.getObject(Reg.curseList);
		Reg.curseList.remove(pickedCurse);
		activateCurse(pickedCurse);
		Reg.PS.player.currentCurses.push(pickedCurse);		
		}
		else
		{
			trace("No more curses exist");
		}
		
	}
	
	
	private function activateCurse(curseName:String)
	{
		switch curseName
		{
		case "WallsHurt": Reg.wallsHurt = true;
		case "MirrorControls": Reg.mirrorControls = true;
		case "ExplosiveItems": Reg.itemsExplode = true;
		case "SlowDown" : { Reg.PS.player.HOR_MOVE_SPEED -= Reg.PS.player.HOR_MOVE_SPEED / 3;
							Reg.PS.player.VERT_MOVE_SPEED -= Reg.PS.player.VERT_MOVE_SPEED / 3;
			                Reg.PS.player.maxVelocity.set(Reg.PS.player.HOR_MOVE_SPEED, Reg.PS.player.VERT_MOVE_SPEED);
						  }
		}
	}
	
	
	
}