#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSplash
#include <flixel/system/FlxSplash.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_Sound
#include <openfl/_legacy/media/Sound.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
namespace flixel{
namespace _system{

Void FlxSplash_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("flixel.system.FlxSplash","new",0x887e165e,"flixel.system.FlxSplash.new","flixel/system/FlxSplash.hx",16,0xa5de80f2)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(27)
	this->_curPart = (int)0;
	HX_STACK_LINE(16)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	super::__construct(tmp);
}
;
	return null();
}

//FlxSplash_obj::~FlxSplash_obj() { }

Dynamic FlxSplash_obj::__CreateEmpty() { return  new FlxSplash_obj; }
hx::ObjectPtr< FlxSplash_obj > FlxSplash_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< FlxSplash_obj > _result_ = new FlxSplash_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic FlxSplash_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSplash_obj > _result_ = new FlxSplash_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void FlxSplash_obj::create( ){
{
		HX_STACK_FRAME("flixel.system.FlxSplash","create",0x2dc273be,"flixel.system.FlxSplash.create","flixel/system/FlxSplash.hx",33,0xa5de80f2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		::flixel::_system::frontEnds::CameraFrontEnd tmp = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		int tmp1 = tmp->__Field(HX_HCSTRING("get_bgColor","\x75","\xe1","\x7d","\x7d"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		this->_cachedBgColor = tmp1;
		HX_STACK_LINE(35)
		::flixel::_system::frontEnds::CameraFrontEnd tmp2 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		tmp2->__Field(HX_HCSTRING("set_bgColor","\x81","\xe8","\xea","\x87"), hx::paccDynamic )((int)-16777216);
		HX_STACK_LINE(38)
		bool tmp3 = ::flixel::FlxG_obj::fixedTimestep;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		this->_cachedTimestep = tmp3;
		HX_STACK_LINE(39)
		::flixel::FlxG_obj::fixedTimestep = false;
		HX_STACK_LINE(41)
		bool tmp4 = ::flixel::FlxG_obj::autoPause;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		this->_cachedAutoPause = tmp4;
		HX_STACK_LINE(42)
		::flixel::FlxG_obj::autoPause = false;
		HX_STACK_LINE(45)
		::flixel::input::keyboard::FlxKeyboard tmp5 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(45)
		tmp5->enabled = false;
		HX_STACK_LINE(48)
		this->_times = Array_obj< Float >::__new().Add(((Float)0.041)).Add(((Float)0.184)).Add(((Float)0.334)).Add(((Float)0.495)).Add(((Float)0.636));
		HX_STACK_LINE(49)
		this->_colors = Array_obj< int >::__new().Add((int)47394).Add((int)16761138).Add((int)16066382).Add((int)3555839).Add((int)314875);
		HX_STACK_LINE(50)
		Dynamic tmp6 = this->drawGreen_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(50)
		Dynamic tmp7 = this->drawYellow_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(50)
		Dynamic tmp8 = this->drawRed_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(50)
		Dynamic tmp9 = this->drawBlue_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(50)
		Dynamic tmp10 = this->drawLightBlue_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(50)
		this->_functions = cpp::ArrayBase_obj::__new().Add(tmp6).Add(tmp7).Add(tmp8).Add(tmp9).Add(tmp10);
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(52)
			Array< Float > _g1 = this->_times;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp11 = (_g < _g1->length);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(52)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(52)
				if ((tmp12)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(52)
				Float tmp13 = _g1->__get(_g);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(52)
				Float time = tmp13;		HX_STACK_VAR(time,"time");
				HX_STACK_LINE(52)
				++(_g);
				HX_STACK_LINE(54)
				::flixel::util::FlxTimer tmp14 = ::flixel::util::FlxTimer_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(54)
				Float tmp15 = time;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(54)
				Dynamic tmp16 = this->timerCallback_dyn();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(54)
				tmp14->start(tmp15,tmp16,null());
			}
		}
		HX_STACK_LINE(57)
		::openfl::_legacy::display::MovieClip tmp11 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(57)
		::openfl::_legacy::display::Stage tmp12 = tmp11->get_stage();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(57)
		int tmp13 = tmp12->get_stageWidth();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(57)
		int stageWidth = tmp13;		HX_STACK_VAR(stageWidth,"stageWidth");
		HX_STACK_LINE(58)
		::openfl::_legacy::display::MovieClip tmp14 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(58)
		::openfl::_legacy::display::Stage tmp15 = tmp14->get_stage();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(58)
		int tmp16 = tmp15->get_stageHeight();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(58)
		int stageHeight = tmp16;		HX_STACK_VAR(stageHeight,"stageHeight");
		HX_STACK_LINE(60)
		::openfl::_legacy::display::Sprite tmp17 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(60)
		this->_sprite = tmp17;
		HX_STACK_LINE(61)
		::openfl::_legacy::display::MovieClip tmp18 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(61)
		::openfl::_legacy::display::Stage tmp19 = tmp18->get_stage();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(61)
		::openfl::_legacy::display::Sprite tmp20 = this->_sprite;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(61)
		tmp19->addChild(tmp20);
		HX_STACK_LINE(62)
		::openfl::_legacy::display::Sprite tmp21 = this->_sprite;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(62)
		::openfl::_legacy::display::Graphics tmp22 = tmp21->get_graphics();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(62)
		this->_gfx = tmp22;
		HX_STACK_LINE(64)
		::openfl::_legacy::text::TextField tmp23 = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(64)
		this->_text = tmp23;
		HX_STACK_LINE(65)
		::openfl::_legacy::text::TextField tmp24 = this->_text;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(65)
		tmp24->set_selectable(false);
		HX_STACK_LINE(66)
		::openfl::_legacy::text::TextField tmp25 = this->_text;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(66)
		tmp25->set_embedFonts(true);
		HX_STACK_LINE(67)
		::String tmp26 = ::flixel::_system::FlxAssets_obj::FONT_DEFAULT;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(67)
		::openfl::_legacy::text::TextFormat tmp27 = ::openfl::_legacy::text::TextFormat_obj::__new(tmp26,(int)16,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(67)
		::openfl::_legacy::text::TextFormat dtf = tmp27;		HX_STACK_VAR(dtf,"dtf");
		HX_STACK_LINE(68)
		dtf->align = HX_HCSTRING("center","\xd5","\x25","\xdb","\x05");
		HX_STACK_LINE(69)
		::openfl::_legacy::text::TextField tmp28 = this->_text;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(69)
		::openfl::_legacy::text::TextFormat tmp29 = dtf;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(69)
		tmp28->set_defaultTextFormat(tmp29);
		HX_STACK_LINE(70)
		::openfl::_legacy::text::TextField tmp30 = this->_text;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(70)
		tmp30->set_text(HX_HCSTRING("HaxeFlixel","\x42","\x8f","\x0c","\xac"));
		HX_STACK_LINE(71)
		::openfl::_legacy::display::MovieClip tmp31 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(71)
		::openfl::_legacy::display::Stage tmp32 = tmp31->get_stage();		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(71)
		::openfl::_legacy::text::TextField tmp33 = this->_text;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(71)
		tmp32->addChild(tmp33);
		HX_STACK_LINE(73)
		int tmp34 = stageWidth;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(73)
		int tmp35 = stageHeight;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(73)
		this->onResize(tmp34,tmp35);
		HX_STACK_LINE(76)
		::flixel::_system::frontEnds::SoundFrontEnd tmp36 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(76)
		::openfl::_legacy::media::Sound tmp37;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			::String extension = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(extension,"extension");
			HX_STACK_LINE(76)
			extension = HX_HCSTRING(".ogg","\xe1","\x64","\xbc","\x1e");
			HX_STACK_LINE(76)
			::String tmp38 = (HX_HCSTRING("flixel/sounds/flixel","\x54","\x41","\xd6","\x5d") + extension);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(76)
			tmp37 = ::openfl::_legacy::Assets_obj::getSound(tmp38,null());
		}
		HX_STACK_LINE(76)
		::flixel::_system::FlxSound tmp38 = tmp36->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(tmp37,null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(76)
		tmp38->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
	}
return null();
}


Void FlxSplash_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.FlxSplash","destroy",0xef7e49f8,"flixel.system.FlxSplash.destroy","flixel/system/FlxSplash.hx",81,0xa5de80f2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(82)
		this->_sprite = null();
		HX_STACK_LINE(83)
		this->_gfx = null();
		HX_STACK_LINE(84)
		this->_text = null();
		HX_STACK_LINE(85)
		this->_times = null();
		HX_STACK_LINE(86)
		this->_colors = null();
		HX_STACK_LINE(87)
		this->_functions = null();
		HX_STACK_LINE(88)
		this->super::destroy();
	}
return null();
}


Void FlxSplash_obj::onResize( int Width,int Height){
{
		HX_STACK_FRAME("flixel.system.FlxSplash","onResize",0xb64991b5,"flixel.system.FlxSplash.onResize","flixel/system/FlxSplash.hx",92,0xa5de80f2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(93)
		int tmp = Width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		int tmp1 = Height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		this->super::onResize(tmp,tmp1);
		HX_STACK_LINE(95)
		::openfl::_legacy::display::Sprite tmp2 = this->_sprite;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(95)
		Float tmp3 = (Float(Width) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(95)
		tmp2->set_x(tmp3);
		HX_STACK_LINE(96)
		::openfl::_legacy::display::Sprite tmp4 = this->_sprite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(96)
		Float tmp5 = (Float(Height) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(96)
		::flixel::FlxGame tmp6 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(96)
		Float tmp7 = tmp6->get_scaleY();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(96)
		Float tmp8 = ((int)20 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(96)
		Float tmp9 = (tmp5 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(96)
		tmp4->set_y(tmp9);
		HX_STACK_LINE(98)
		::openfl::_legacy::text::TextField tmp10 = this->_text;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(98)
		int tmp11 = Width;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(98)
		::flixel::FlxGame tmp12 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(98)
		Float tmp13 = tmp12->get_scaleX();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(98)
		Float tmp14 = (Float(tmp11) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(98)
		tmp10->set_width(tmp14);
		HX_STACK_LINE(99)
		::openfl::_legacy::text::TextField tmp15 = this->_text;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(99)
		tmp15->set_x((int)0);
		HX_STACK_LINE(100)
		::openfl::_legacy::text::TextField tmp16 = this->_text;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(100)
		::openfl::_legacy::display::Sprite tmp17 = this->_sprite;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(100)
		Float tmp18 = tmp17->get_y();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(100)
		::flixel::FlxGame tmp19 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(100)
		Float tmp20 = tmp19->get_scaleY();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(100)
		Float tmp21 = ((int)80 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(100)
		Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(100)
		tmp16->set_y(tmp22);
		HX_STACK_LINE(102)
		::openfl::_legacy::display::Sprite tmp23 = this->_sprite;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(102)
		::openfl::_legacy::text::TextField tmp24 = this->_text;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(102)
		::flixel::FlxGame tmp25 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(102)
		Float tmp26 = tmp25->get_scaleX();		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(102)
		Float tmp27 = tmp24->set_scaleX(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(102)
		tmp23->set_scaleX(tmp27);
		HX_STACK_LINE(103)
		::openfl::_legacy::display::Sprite tmp28 = this->_sprite;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(103)
		::openfl::_legacy::text::TextField tmp29 = this->_text;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(103)
		::flixel::FlxGame tmp30 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(103)
		Float tmp31 = tmp30->get_scaleY();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(103)
		Float tmp32 = tmp29->set_scaleY(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(103)
		tmp28->set_scaleY(tmp32);
	}
return null();
}


Void FlxSplash_obj::timerCallback( ::flixel::util::FlxTimer Timer){
{
		HX_STACK_FRAME("flixel.system.FlxSplash","timerCallback",0x874bd228,"flixel.system.FlxSplash.timerCallback","flixel/system/FlxSplash.hx",107,0xa5de80f2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Timer,"Timer")
		HX_STACK_LINE(108)
		int tmp = this->_curPart;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		Dynamic tmp1 = this->_functions->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(108)
		tmp1().Cast< Void >();
		HX_STACK_LINE(109)
		::openfl::_legacy::text::TextField tmp2 = this->_text;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(109)
		int tmp3 = this->_curPart;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(109)
		int tmp4 = this->_colors->__GetItem(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(109)
		tmp2->set_textColor(tmp4);
		HX_STACK_LINE(110)
		::openfl::_legacy::text::TextField tmp5 = this->_text;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(110)
		tmp5->set_text(HX_HCSTRING("HaxeFlixel","\x42","\x8f","\x0c","\xac"));
		HX_STACK_LINE(111)
		(this->_curPart)++;
		HX_STACK_LINE(113)
		int tmp6 = this->_curPart;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(113)
		bool tmp7 = (tmp6 == (int)5);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(113)
		if ((tmp7)){
			HX_STACK_LINE(116)
			::openfl::_legacy::display::Sprite tmp8 = this->_sprite;		HX_STACK_VAR(tmp8,"tmp8");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/FlxSplash.hx",116,0xa5de80f2)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , (int)0,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(116)
			Dynamic tmp9 = _Function_2_1::Block();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(116)
			Dynamic tmp10 = ::flixel::tweens::FlxEase_obj::quadOut_dyn();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(116)
			Dynamic tmp11 = this->onComplete_dyn();		HX_STACK_VAR(tmp11,"tmp11");
			struct _Function_2_2{
				inline static Dynamic Block( Dynamic &tmp11,Dynamic &tmp10){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/FlxSplash.hx",116,0xa5de80f2)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43") , tmp10,false);
						__result->Add(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d") , tmp11,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(116)
			Dynamic tmp12 = _Function_2_2::Block(tmp11,tmp10);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(116)
			::flixel::tweens::FlxTween_obj::tween(tmp8,tmp9,((Float)3.0),tmp12);
			HX_STACK_LINE(117)
			::openfl::_legacy::text::TextField tmp13 = this->_text;		HX_STACK_VAR(tmp13,"tmp13");
			struct _Function_2_3{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/FlxSplash.hx",117,0xa5de80f2)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , (int)0,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(117)
			Dynamic tmp14 = _Function_2_3::Block();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(117)
			Dynamic tmp15 = ::flixel::tweens::FlxEase_obj::quadOut_dyn();		HX_STACK_VAR(tmp15,"tmp15");
			struct _Function_2_4{
				inline static Dynamic Block( Dynamic &tmp15){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/FlxSplash.hx",117,0xa5de80f2)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43") , tmp15,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(117)
			Dynamic tmp16 = _Function_2_4::Block(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(117)
			::flixel::tweens::FlxTween_obj::tween(tmp13,tmp14,((Float)3.0),tmp16);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSplash_obj,timerCallback,(void))

Void FlxSplash_obj::drawGreen( ){
{
		HX_STACK_FRAME("flixel.system.FlxSplash","drawGreen",0xf0f01c9d,"flixel.system.FlxSplash.drawGreen","flixel/system/FlxSplash.hx",122,0xa5de80f2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(123)
		::openfl::_legacy::display::Graphics tmp = this->_gfx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		tmp->beginFill((int)47394,null());
		HX_STACK_LINE(124)
		::openfl::_legacy::display::Graphics tmp1 = this->_gfx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(124)
		tmp1->moveTo((int)0,(int)-37);
		HX_STACK_LINE(125)
		::openfl::_legacy::display::Graphics tmp2 = this->_gfx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(125)
		tmp2->lineTo((int)1,(int)-37);
		HX_STACK_LINE(126)
		::openfl::_legacy::display::Graphics tmp3 = this->_gfx;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(126)
		tmp3->lineTo((int)37,(int)0);
		HX_STACK_LINE(127)
		::openfl::_legacy::display::Graphics tmp4 = this->_gfx;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(127)
		tmp4->lineTo((int)37,(int)1);
		HX_STACK_LINE(128)
		::openfl::_legacy::display::Graphics tmp5 = this->_gfx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(128)
		tmp5->lineTo((int)1,(int)37);
		HX_STACK_LINE(129)
		::openfl::_legacy::display::Graphics tmp6 = this->_gfx;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(129)
		tmp6->lineTo((int)0,(int)37);
		HX_STACK_LINE(130)
		::openfl::_legacy::display::Graphics tmp7 = this->_gfx;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(130)
		tmp7->lineTo((int)-37,(int)1);
		HX_STACK_LINE(131)
		::openfl::_legacy::display::Graphics tmp8 = this->_gfx;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(131)
		tmp8->lineTo((int)-37,(int)0);
		HX_STACK_LINE(132)
		::openfl::_legacy::display::Graphics tmp9 = this->_gfx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(132)
		tmp9->lineTo((int)0,(int)-37);
		HX_STACK_LINE(133)
		::openfl::_legacy::display::Graphics tmp10 = this->_gfx;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(133)
		tmp10->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSplash_obj,drawGreen,(void))

Void FlxSplash_obj::drawYellow( ){
{
		HX_STACK_FRAME("flixel.system.FlxSplash","drawYellow",0x9c05b05a,"flixel.system.FlxSplash.drawYellow","flixel/system/FlxSplash.hx",137,0xa5de80f2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		::openfl::_legacy::display::Graphics tmp = this->_gfx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(138)
		tmp->beginFill((int)16761138,null());
		HX_STACK_LINE(139)
		::openfl::_legacy::display::Graphics tmp1 = this->_gfx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		tmp1->moveTo((int)-50,(int)-50);
		HX_STACK_LINE(140)
		::openfl::_legacy::display::Graphics tmp2 = this->_gfx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		tmp2->lineTo((int)-25,(int)-50);
		HX_STACK_LINE(141)
		::openfl::_legacy::display::Graphics tmp3 = this->_gfx;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(141)
		tmp3->lineTo((int)0,(int)-37);
		HX_STACK_LINE(142)
		::openfl::_legacy::display::Graphics tmp4 = this->_gfx;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(142)
		tmp4->lineTo((int)-37,(int)0);
		HX_STACK_LINE(143)
		::openfl::_legacy::display::Graphics tmp5 = this->_gfx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(143)
		tmp5->lineTo((int)-50,(int)-25);
		HX_STACK_LINE(144)
		::openfl::_legacy::display::Graphics tmp6 = this->_gfx;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(144)
		tmp6->lineTo((int)-50,(int)-50);
		HX_STACK_LINE(145)
		::openfl::_legacy::display::Graphics tmp7 = this->_gfx;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(145)
		tmp7->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSplash_obj,drawYellow,(void))

Void FlxSplash_obj::drawRed( ){
{
		HX_STACK_FRAME("flixel.system.FlxSplash","drawRed",0xc6cedcab,"flixel.system.FlxSplash.drawRed","flixel/system/FlxSplash.hx",149,0xa5de80f2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(150)
		::openfl::_legacy::display::Graphics tmp = this->_gfx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		tmp->beginFill((int)16066382,null());
		HX_STACK_LINE(151)
		::openfl::_legacy::display::Graphics tmp1 = this->_gfx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(151)
		tmp1->moveTo((int)50,(int)-50);
		HX_STACK_LINE(152)
		::openfl::_legacy::display::Graphics tmp2 = this->_gfx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(152)
		tmp2->lineTo((int)25,(int)-50);
		HX_STACK_LINE(153)
		::openfl::_legacy::display::Graphics tmp3 = this->_gfx;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(153)
		tmp3->lineTo((int)1,(int)-37);
		HX_STACK_LINE(154)
		::openfl::_legacy::display::Graphics tmp4 = this->_gfx;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(154)
		tmp4->lineTo((int)37,(int)0);
		HX_STACK_LINE(155)
		::openfl::_legacy::display::Graphics tmp5 = this->_gfx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(155)
		tmp5->lineTo((int)50,(int)-25);
		HX_STACK_LINE(156)
		::openfl::_legacy::display::Graphics tmp6 = this->_gfx;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(156)
		tmp6->lineTo((int)50,(int)-50);
		HX_STACK_LINE(157)
		::openfl::_legacy::display::Graphics tmp7 = this->_gfx;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(157)
		tmp7->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSplash_obj,drawRed,(void))

Void FlxSplash_obj::drawBlue( ){
{
		HX_STACK_FRAME("flixel.system.FlxSplash","drawBlue",0x23a42e00,"flixel.system.FlxSplash.drawBlue","flixel/system/FlxSplash.hx",161,0xa5de80f2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(162)
		::openfl::_legacy::display::Graphics tmp = this->_gfx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(162)
		tmp->beginFill((int)3555839,null());
		HX_STACK_LINE(163)
		::openfl::_legacy::display::Graphics tmp1 = this->_gfx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(163)
		tmp1->moveTo((int)-50,(int)50);
		HX_STACK_LINE(164)
		::openfl::_legacy::display::Graphics tmp2 = this->_gfx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		tmp2->lineTo((int)-25,(int)50);
		HX_STACK_LINE(165)
		::openfl::_legacy::display::Graphics tmp3 = this->_gfx;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(165)
		tmp3->lineTo((int)0,(int)37);
		HX_STACK_LINE(166)
		::openfl::_legacy::display::Graphics tmp4 = this->_gfx;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(166)
		tmp4->lineTo((int)-37,(int)1);
		HX_STACK_LINE(167)
		::openfl::_legacy::display::Graphics tmp5 = this->_gfx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(167)
		tmp5->lineTo((int)-50,(int)25);
		HX_STACK_LINE(168)
		::openfl::_legacy::display::Graphics tmp6 = this->_gfx;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(168)
		tmp6->lineTo((int)-50,(int)50);
		HX_STACK_LINE(169)
		::openfl::_legacy::display::Graphics tmp7 = this->_gfx;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(169)
		tmp7->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSplash_obj,drawBlue,(void))

Void FlxSplash_obj::drawLightBlue( ){
{
		HX_STACK_FRAME("flixel.system.FlxSplash","drawLightBlue",0x099f256a,"flixel.system.FlxSplash.drawLightBlue","flixel/system/FlxSplash.hx",173,0xa5de80f2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(174)
		::openfl::_legacy::display::Graphics tmp = this->_gfx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(174)
		tmp->beginFill((int)314875,null());
		HX_STACK_LINE(175)
		::openfl::_legacy::display::Graphics tmp1 = this->_gfx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(175)
		tmp1->moveTo((int)50,(int)50);
		HX_STACK_LINE(176)
		::openfl::_legacy::display::Graphics tmp2 = this->_gfx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(176)
		tmp2->lineTo((int)25,(int)50);
		HX_STACK_LINE(177)
		::openfl::_legacy::display::Graphics tmp3 = this->_gfx;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(177)
		tmp3->lineTo((int)1,(int)37);
		HX_STACK_LINE(178)
		::openfl::_legacy::display::Graphics tmp4 = this->_gfx;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(178)
		tmp4->lineTo((int)37,(int)1);
		HX_STACK_LINE(179)
		::openfl::_legacy::display::Graphics tmp5 = this->_gfx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(179)
		tmp5->lineTo((int)50,(int)25);
		HX_STACK_LINE(180)
		::openfl::_legacy::display::Graphics tmp6 = this->_gfx;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(180)
		tmp6->lineTo((int)50,(int)50);
		HX_STACK_LINE(181)
		::openfl::_legacy::display::Graphics tmp7 = this->_gfx;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(181)
		tmp7->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSplash_obj,drawLightBlue,(void))

Void FlxSplash_obj::onComplete( ::flixel::tweens::FlxTween Tween){
{
		HX_STACK_FRAME("flixel.system.FlxSplash","onComplete",0xe7646aba,"flixel.system.FlxSplash.onComplete","flixel/system/FlxSplash.hx",185,0xa5de80f2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Tween,"Tween")
		HX_STACK_LINE(186)
		::flixel::_system::frontEnds::CameraFrontEnd tmp = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(186)
		int tmp1 = this->_cachedBgColor;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(186)
		tmp->__Field(HX_HCSTRING("set_bgColor","\x81","\xe8","\xea","\x87"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(187)
		bool tmp2 = this->_cachedTimestep;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(187)
		::flixel::FlxG_obj::fixedTimestep = tmp2;
		HX_STACK_LINE(188)
		bool tmp3 = this->_cachedAutoPause;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(188)
		::flixel::FlxG_obj::autoPause = tmp3;
		HX_STACK_LINE(190)
		::flixel::input::keyboard::FlxKeyboard tmp4 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(190)
		tmp4->enabled = true;
		HX_STACK_LINE(192)
		::openfl::_legacy::display::MovieClip tmp5 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(192)
		::openfl::_legacy::display::Stage tmp6 = tmp5->get_stage();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(192)
		::openfl::_legacy::display::Sprite tmp7 = this->_sprite;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(192)
		tmp6->removeChild(tmp7);
		HX_STACK_LINE(193)
		::openfl::_legacy::display::MovieClip tmp8 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(193)
		::openfl::_legacy::display::Stage tmp9 = tmp8->get_stage();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(193)
		::openfl::_legacy::text::TextField tmp10 = this->_text;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(193)
		tmp9->removeChild(tmp10);
		HX_STACK_LINE(194)
		{
			HX_STACK_LINE(194)
			::hx::Class tmp11 = ::flixel::_system::FlxSplash_obj::nextState;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(194)
			::flixel::FlxState tmp12 = ::Type_obj::createInstance(tmp11,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(194)
			::flixel::FlxState nextState = tmp12;		HX_STACK_VAR(nextState,"nextState");
			HX_STACK_LINE(194)
			::flixel::FlxGame tmp13 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(194)
			::flixel::FlxState tmp14 = nextState;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(194)
			bool tmp15 = tmp13->_state->switchTo(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(194)
			if ((tmp15)){
				HX_STACK_LINE(194)
				::flixel::FlxGame tmp16 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(194)
				tmp16->_requestedState = nextState;
			}
		}
		HX_STACK_LINE(195)
		::flixel::FlxGame tmp11 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(195)
		tmp11->_gameJustStarted = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSplash_obj,onComplete,(void))

::hx::Class FlxSplash_obj::nextState;


FlxSplash_obj::FlxSplash_obj()
{
}

void FlxSplash_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSplash);
	HX_MARK_MEMBER_NAME(_sprite,"_sprite");
	HX_MARK_MEMBER_NAME(_gfx,"_gfx");
	HX_MARK_MEMBER_NAME(_text,"_text");
	HX_MARK_MEMBER_NAME(_times,"_times");
	HX_MARK_MEMBER_NAME(_colors,"_colors");
	HX_MARK_MEMBER_NAME(_functions,"_functions");
	HX_MARK_MEMBER_NAME(_curPart,"_curPart");
	HX_MARK_MEMBER_NAME(_cachedBgColor,"_cachedBgColor");
	HX_MARK_MEMBER_NAME(_cachedTimestep,"_cachedTimestep");
	HX_MARK_MEMBER_NAME(_cachedAutoPause,"_cachedAutoPause");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSplash_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_sprite,"_sprite");
	HX_VISIT_MEMBER_NAME(_gfx,"_gfx");
	HX_VISIT_MEMBER_NAME(_text,"_text");
	HX_VISIT_MEMBER_NAME(_times,"_times");
	HX_VISIT_MEMBER_NAME(_colors,"_colors");
	HX_VISIT_MEMBER_NAME(_functions,"_functions");
	HX_VISIT_MEMBER_NAME(_curPart,"_curPart");
	HX_VISIT_MEMBER_NAME(_cachedBgColor,"_cachedBgColor");
	HX_VISIT_MEMBER_NAME(_cachedTimestep,"_cachedTimestep");
	HX_VISIT_MEMBER_NAME(_cachedAutoPause,"_cachedAutoPause");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxSplash_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_gfx") ) { return _gfx; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { return _text; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_times") ) { return _times; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_sprite") ) { return _sprite; }
		if (HX_FIELD_EQ(inName,"_colors") ) { return _colors; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"drawRed") ) { return drawRed_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_curPart") ) { return _curPart; }
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		if (HX_FIELD_EQ(inName,"drawBlue") ) { return drawBlue_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawGreen") ) { return drawGreen_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_functions") ) { return _functions; }
		if (HX_FIELD_EQ(inName,"drawYellow") ) { return drawYellow_dyn(); }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"timerCallback") ) { return timerCallback_dyn(); }
		if (HX_FIELD_EQ(inName,"drawLightBlue") ) { return drawLightBlue_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_cachedBgColor") ) { return _cachedBgColor; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_cachedTimestep") ) { return _cachedTimestep; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_cachedAutoPause") ) { return _cachedAutoPause; }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxSplash_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"nextState") ) { outValue = nextState; return true;  }
	}
	return false;
}

Dynamic FlxSplash_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_gfx") ) { _gfx=inValue.Cast< ::openfl::_legacy::display::Graphics >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { _text=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_times") ) { _times=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_sprite") ) { _sprite=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_colors") ) { _colors=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_curPart") ) { _curPart=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_functions") ) { _functions=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_cachedBgColor") ) { _cachedBgColor=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_cachedTimestep") ) { _cachedTimestep=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_cachedAutoPause") ) { _cachedAutoPause=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxSplash_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"nextState") ) { nextState=ioValue.Cast< ::hx::Class >(); return true; }
	}
	return false;
}

void FlxSplash_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_sprite","\xa4","\xed","\x0c","\x32"));
	outFields->push(HX_HCSTRING("_gfx","\x7a","\xc6","\x19","\x3f"));
	outFields->push(HX_HCSTRING("_text","\x8c","\xe8","\x0a","\x00"));
	outFields->push(HX_HCSTRING("_times","\x07","\x07","\x1d","\x0c"));
	outFields->push(HX_HCSTRING("_colors","\x4f","\xd7","\xfd","\x34"));
	outFields->push(HX_HCSTRING("_functions","\x1c","\x86","\xa5","\x0f"));
	outFields->push(HX_HCSTRING("_curPart","\x14","\xaf","\x1f","\xef"));
	outFields->push(HX_HCSTRING("_cachedBgColor","\xdd","\xd9","\x56","\x6b"));
	outFields->push(HX_HCSTRING("_cachedTimestep","\x7a","\x54","\xfe","\xe6"));
	outFields->push(HX_HCSTRING("_cachedAutoPause","\x46","\xcb","\x1c","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(FlxSplash_obj,_sprite),HX_HCSTRING("_sprite","\xa4","\xed","\x0c","\x32")},
	{hx::fsObject /*::openfl::_legacy::display::Graphics*/ ,(int)offsetof(FlxSplash_obj,_gfx),HX_HCSTRING("_gfx","\x7a","\xc6","\x19","\x3f")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(FlxSplash_obj,_text),HX_HCSTRING("_text","\x8c","\xe8","\x0a","\x00")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxSplash_obj,_times),HX_HCSTRING("_times","\x07","\x07","\x1d","\x0c")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxSplash_obj,_colors),HX_HCSTRING("_colors","\x4f","\xd7","\xfd","\x34")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(FlxSplash_obj,_functions),HX_HCSTRING("_functions","\x1c","\x86","\xa5","\x0f")},
	{hx::fsInt,(int)offsetof(FlxSplash_obj,_curPart),HX_HCSTRING("_curPart","\x14","\xaf","\x1f","\xef")},
	{hx::fsInt,(int)offsetof(FlxSplash_obj,_cachedBgColor),HX_HCSTRING("_cachedBgColor","\xdd","\xd9","\x56","\x6b")},
	{hx::fsBool,(int)offsetof(FlxSplash_obj,_cachedTimestep),HX_HCSTRING("_cachedTimestep","\x7a","\x54","\xfe","\xe6")},
	{hx::fsBool,(int)offsetof(FlxSplash_obj,_cachedAutoPause),HX_HCSTRING("_cachedAutoPause","\x46","\xcb","\x1c","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::hx::Class*/ ,(void *) &FlxSplash_obj::nextState,HX_HCSTRING("nextState","\x1e","\x90","\x50","\x2b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_sprite","\xa4","\xed","\x0c","\x32"),
	HX_HCSTRING("_gfx","\x7a","\xc6","\x19","\x3f"),
	HX_HCSTRING("_text","\x8c","\xe8","\x0a","\x00"),
	HX_HCSTRING("_times","\x07","\x07","\x1d","\x0c"),
	HX_HCSTRING("_colors","\x4f","\xd7","\xfd","\x34"),
	HX_HCSTRING("_functions","\x1c","\x86","\xa5","\x0f"),
	HX_HCSTRING("_curPart","\x14","\xaf","\x1f","\xef"),
	HX_HCSTRING("_cachedBgColor","\xdd","\xd9","\x56","\x6b"),
	HX_HCSTRING("_cachedTimestep","\x7a","\x54","\xfe","\xe6"),
	HX_HCSTRING("_cachedAutoPause","\x46","\xcb","\x1c","\x2d"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8"),
	HX_HCSTRING("timerCallback","\xaa","\xe2","\x0a","\x97"),
	HX_HCSTRING("drawGreen","\x1f","\x44","\xf8","\x61"),
	HX_HCSTRING("drawYellow","\x98","\x1a","\x20","\x12"),
	HX_HCSTRING("drawRed","\xad","\xbf","\xd6","\xfb"),
	HX_HCSTRING("drawBlue","\xbe","\xec","\x82","\x55"),
	HX_HCSTRING("drawLightBlue","\xec","\x35","\x5e","\x19"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSplash_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxSplash_obj::nextState,"nextState");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSplash_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxSplash_obj::nextState,"nextState");
};

#endif

hx::Class FlxSplash_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("nextState","\x1e","\x90","\x50","\x2b"),
	::String(null()) };

void FlxSplash_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.FlxSplash","\x6c","\x4f","\xa8","\x1e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxSplash_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxSplash_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxSplash_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
