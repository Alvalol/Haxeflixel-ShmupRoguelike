package objects.items;
import flixel.util.FlxColor;

class AntidoteItem extends Item
{

	public function new(x:Float, y:Float) 
	{
		super(x, y);
		makeGraphic(8, 8, FlxColor.GREEN);
		set_name("YOU FOUND A CURE");
	}
	
	override public function interact(player:Player)
	{
		kill();
		Reg.score += 100;
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
			}
			
		}
		
		

	}
	
	
}