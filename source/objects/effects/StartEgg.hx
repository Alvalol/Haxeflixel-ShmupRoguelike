package objects.effects;
import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.effects.FlxFlicker;
import flixel.text.FlxText;
import flixel.util.FlxSpriteUtil;
import flixel.FlxG;
import flixel.util.FlxTimer;
import objects.BaseBullet;

class StartEgg extends FlxSprite
{

	private var tuto:FlxText;
	private var tutoAdded = false;
	private var HP = 5;
	private var hatched = false;
	// Game starts
	// hatched = false
	// Camera, enemy spawn and player movement are dependent on OutOfEgg being true

	
	public function new(x:Float, y:Float) 
	{
		super(x, y);
		loadGraphic(AssetPaths.startegg__png, true, 24,16);
		animation.add("idle", [0], true);
		animation.add("hatched",[1], true);
		animation.play("idle");
		offset.set(8, 8);
		tuto = new FlxText(75,  4, 0, "Press SPACE / M to hatch!", 8, true);

		tuto.color = FlxColor.WHITE;
		tuto.font = AssetPaths.smallfont__ttf;

	}
	
	override public function update(elapsed:Float):Void 
	{
		
		if (!Reg.hatched)
		{
		if (!tutoAdded)
		{
		tutoAdded = true;
		Reg.PS.add(tuto);
		}

		//trace(x, y, "start egg exists");
		if (HP <= 0 && !hatched)
		    hatch();
		
		FlxG.overlap(Reg.PS.PBullets, this, eggBreak);
		}
		else if (Reg.hatched && !hatched)
		{
			new FlxTimer().start(0.25, function(_) {hatch(); });
		}
		if(!Reg.pause)
		   super.update(elapsed);
	}
	
	private function eggBreak(_bullet:BaseBullet,_egg:StartEgg)
	{
		_bullet.kill();
		tuto.kill();
		HP -= 1;
		x -= 2;
		Reg.PS.player.x -=2;
		if(HP >=1)
	    FlxG.camera.shake(0.01, 0.05);
	}
	
	private function hatch()
	{
		FlxG.camera.flash(FlxColor.WHITE, 0.1);
		hatched = true;
		Reg.hatched = true;
		animation.play("hatched");
		Reg.PS.player.x += 30;
		FlxSpriteUtil.flicker(this, 1, 0.04, true,false, killEgg);
		FlxG.camera.shake(0.025,0.04);
	}
	
	private function killEgg(m:FlxFlicker):Void
	{
		kill();
	}
	
}