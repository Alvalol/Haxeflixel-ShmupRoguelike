package objects.items;
import flixel.util.FlxColor;
import objects.Player;
import objects.weapons.BirdAttack;

class BirdAttackItem extends Item
{

	public function new(x:Float, y:Float) 
	{
		super(x, y);
		makeGraphic(8, 8, FlxColor.GREEN);
	}
	
	override public function update(elapsed:Float) 
	{
		super.update(elapsed);
	}
	
	override public function interact(player:Player) 
	{
		var birdAttack = new BirdAttack();
		Reg.PS.add(birdAttack);
		super.interact(player);
	}
	
}