package states;

import flixel.FlxCamera;
import flixel.FlxSubState;
import flixel.math.FlxPoint;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.group.FlxSpriteGroup;
import flixel.FlxG;


class HUD extends FlxSpriteGroup
{
	
	static inline var OFFSET:Int = 4;
	private var _textScore:FlxText;
	private var _currentHealth:FlxText;
	
	public function new() 
	{
		super();
		
		_textScore = new FlxText(OFFSET, OFFSET, 0);
		_currentHealth = new FlxText(FlxG.width - 35 , OFFSET,0);
		
		add(_textScore);
		add(_currentHealth);
		
		forEachOfType(FlxText, function(member)
		{
			member.setFormat(AssetPaths.pixel_font__ttf, 8, FlxColor.fromRGB(255,255,255,5) ,
			                 FlxTextBorderStyle.OUTLINE, FlxColor.fromRGB(0,0,0,200));				
	    });
		
		_textScore.alignment = FlxTextAlign.LEFT;
	}
	
	override public function update(elapsed:Float)
	{
		
		_textScore.text =  StringTools.lpad(
		Std.string(Reg.score), "0", 5);
		

		_currentHealth.text = (Reg.PS.player.HP +  ":" + Reg.PS.player.MAX_HP);
		
		if(!Reg.pause)
		super.update(elapsed);
	}
	
	
	public function setCamera(cam:FlxCamera)
	{
		forEach(function (member)
		{
			member.scrollFactor.set(0, 0);
			member.cameras = [cam];
		});
	}
	
}