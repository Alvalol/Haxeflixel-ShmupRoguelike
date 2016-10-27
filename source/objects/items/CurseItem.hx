package objects.items;
import flixel.util.FlxColor;
import objects.Player;

class CurseItem extends Item
{
	
	public function new(x:Float, y:Float)
	{
		//maybe this item could set a random curse on the player
		// such as : change controls, make items explosive, make blocks explosive, speed of scroll faster, all turrets can aim towards the player.
		// 
		super(x, y);
		makeGraphic(8, 8, FlxColor.YELLOW);
		set_name("YOU ARE CURSED");
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
		case "MirrorControls": trace("MirrorControls has been chosen");
		case "MirrorDisplay": trace("MirrorDisplay has been chosen");
		case "ExplosiveItems": Reg.itemsExplode = true;
		case "ReducedView": trace("ReducedView has been chosen");
		}
	}
	
	
	
}