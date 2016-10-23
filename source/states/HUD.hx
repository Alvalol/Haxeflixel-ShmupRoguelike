package states;

import flixel.FlxCamera;
import flixel.FlxSprite;
import flixel.FlxSubState;
import flixel.math.FlxPoint;
import flixel.text.FlxText;
import flixel.ui.FlxBar;
import flixel.util.FlxColor;
import flixel.FlxG;
import Math;
import flixel.group.FlxSpriteGroup;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;

class HUD extends FlxSpriteGroup
{
	
	static inline var OFFSET:Int = 4;
	private var _textScore:FlxText;
	private var _currentHealth:FlxBar;
	private var _currentComboMod:FlxText;
	private var _comboBar:FlxBar;
	private var myTween:FlxTween;
	private var tweenStarted:Bool = false;

	public function new() 
	{
		super();

		_comboBar = new FlxBar(FlxG.width - 38, OFFSET + 6, LEFT_TO_RIGHT, 30, 3, Reg.PS.player, "timeLeft", 0, 5, true);
		_currentHealth = new FlxBar(FlxG.width - 38 , OFFSET , LEFT_TO_RIGHT, 30, 5, Reg.PS.player,"HP",0, Reg.PS.player.MAX_HP,true);
		_currentComboMod = new FlxText(FlxG.width - 18, OFFSET + 8, 0);		
		_textScore = new FlxText(OFFSET + 2, OFFSET, 0);
	
		add(_comboBar);
		add(_textScore);
		add(_currentHealth);
		add(_currentComboMod);

		
		forEachOfType(FlxText, function(member)
		{
			member.setFormat(AssetPaths.smallfont__ttf, 8, FlxColor.fromRGB(255,255,255,5) ,
			                 FlxTextBorderStyle.OUTLINE, FlxColor.fromRGB(0,0,0,200));				
	    });
		
		_textScore.alignment = FlxTextAlign.LEFT;
	}
	
	override public function update(elapsed:Float)
	{

		_textScore.text =  StringTools.lpad(Std.string(Math.round(Reg.score)), "0", 6);
		
	
		_currentComboMod.text = ("x" + Std.string(Reg.PS.player.get_comboMultiplier()));
		

	//	_currentHealth.text = (Reg.PS.player.HP +  "on" + Reg.PS.player.MAX_HP);
		
		if(!Reg.pause)
		super.update(elapsed);
	}
	
	
	public function animateHud(element:FlxText):Void
	{
		   if (!tweenStarted)
	     {
			tweenStarted = true;
	        myTween = FlxTween.tween(element.scale, { x:1.15, y:1.15 }, 0.1,
	        { type :FlxTween.PINGPONG, ease: FlxEase.cubeInOut,  onComplete: function(tween:FlxTween):Void {
            if (tween.executions == 2) 
	        {
               tween.cancel();
	           tweenStarted = false;
	        }
			
			} } );
		}
	}

	
	public function setCamera(cam:FlxCamera)
	{
		forEach(function (member)
		{
			member.scrollFactor.set(0, 0);
			member.cameras = [cam];
		});
	}
	
	public function get_textScore():FlxText 
	{
		return _textScore;
	}
	
	public function set_textScore(value:FlxText):FlxText 
	{
		return _textScore = value;
	}
	
	public function get_currentHealth():FlxBar 
	{
		return _currentHealth;
	}
	
	public function set_currentHealth(value:FlxBar):FlxBar
	{
		return _currentHealth = value;
	}
	
	public function get_currentComboMod():FlxText 
	{
		return _currentComboMod;
	}
	
	public function set_currentComboMod(value:FlxText):FlxText 
	{
		return _currentComboMod = value;
	}
	
	public function get_comboBar():FlxBar 
	{
		return _comboBar;
	}
	
	public function set_comboBar(value:FlxBar):FlxBar 
	{
		return _comboBar = value;
	}
	
}