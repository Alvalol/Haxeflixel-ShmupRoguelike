#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSoundTray
#include <flixel/system/ui/FlxSoundTray.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetType
#include <openfl/_legacy/AssetType.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
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
namespace flixel{
namespace _system{
namespace frontEnds{

Void SoundFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","new",0x71610699,"flixel.system.frontEnds.SoundFrontEnd.new","flixel/system/frontEnds/SoundFrontEnd.hx",17,0x9ba4fb18)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(73)
	this->volume = ((Float)1);
	HX_STACK_LINE(69)
	this->list = ::flixel::group::FlxTypedGroup_obj::__new(null());
	HX_STACK_LINE(64)
	this->defaultSoundGroup = ::flixel::_system::FlxSoundGroup_obj::__new(null());
	HX_STACK_LINE(60)
	this->defaultMusicGroup = ::flixel::_system::FlxSoundGroup_obj::__new(null());
	HX_STACK_LINE(55)
	this->soundTrayEnabled = true;
	HX_STACK_LINE(48)
	this->muteKeys = Array_obj< int >::__new().Add((int)48).Add((int)96);
	HX_STACK_LINE(43)
	this->volumeDownKeys = Array_obj< int >::__new().Add((int)189).Add((int)109);
	HX_STACK_LINE(38)
	this->volumeUpKeys = Array_obj< int >::__new().Add((int)187).Add((int)107);
	HX_STACK_LINE(26)
	this->muted = false;
	HX_STACK_LINE(342)
	this->loadSavedPrefs();
}
;
	return null();
}

//SoundFrontEnd_obj::~SoundFrontEnd_obj() { }

Dynamic SoundFrontEnd_obj::__CreateEmpty() { return  new SoundFrontEnd_obj; }
hx::ObjectPtr< SoundFrontEnd_obj > SoundFrontEnd_obj::__new()
{  hx::ObjectPtr< SoundFrontEnd_obj > _result_ = new SoundFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Dynamic SoundFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundFrontEnd_obj > _result_ = new SoundFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Void SoundFrontEnd_obj::playMusic( Dynamic Music,hx::Null< Float >  __o_Volume,hx::Null< bool >  __o_Looped,::flixel::_system::FlxSoundGroup Group){
Float Volume = __o_Volume.Default(1);
bool Looped = __o_Looped.Default(true);
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","playMusic",0x3360250a,"flixel.system.frontEnds.SoundFrontEnd.playMusic","flixel/system/frontEnds/SoundFrontEnd.hx",84,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Music,"Music")
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(Group,"Group")
{
		HX_STACK_LINE(85)
		::flixel::_system::FlxSound tmp = this->music;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(85)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(85)
		if ((tmp1)){
			HX_STACK_LINE(87)
			::flixel::_system::FlxSound tmp2 = ::flixel::_system::FlxSound_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(87)
			this->music = tmp2;
		}
		else{
			HX_STACK_LINE(89)
			::flixel::_system::FlxSound tmp2 = this->music;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(89)
			bool tmp3 = tmp2->__Field(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(89)
			if ((tmp3)){
				HX_STACK_LINE(91)
				::flixel::_system::FlxSound tmp4 = this->music;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(91)
				::flixel::_system::FlxSound _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(91)
				bool tmp5 = _this->__Field(HX_HCSTRING("autoDestroy","\x4b","\xd1","\x69","\x0a"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(91)
				_this->__Field(HX_HCSTRING("cleanup","\x24","\x0c","\x42","\xab"), hx::paccDynamic )(tmp5,true,true);
				HX_STACK_LINE(91)
				_this;
			}
		}
		HX_STACK_LINE(94)
		::flixel::_system::FlxSound tmp2 = this->music;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		Dynamic tmp3 = Music;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		bool tmp4 = Looped;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(94)
		tmp2->__Field(HX_HCSTRING("loadEmbedded","\xd0","\x05","\xcb","\x97"), hx::paccDynamic )(tmp3,tmp4,null(),null());
		HX_STACK_LINE(95)
		::flixel::_system::FlxSound tmp5 = this->music;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(95)
		Float tmp6 = Volume;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(95)
		tmp5->__Field(HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"), hx::paccDynamic )(tmp6);
		HX_STACK_LINE(96)
		::flixel::_system::FlxSound tmp7 = this->music;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(96)
		tmp7->__FieldRef(HX_HCSTRING("persist","\x14","\x22","\x71","\x83")) = true;
		HX_STACK_LINE(97)
		::flixel::_system::FlxSound tmp8 = this->music;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(97)
		bool tmp9 = (Group == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(97)
		::flixel::_system::FlxSoundGroup tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(97)
		if ((tmp9)){
			HX_STACK_LINE(97)
			tmp10 = this->defaultMusicGroup;
		}
		else{
			HX_STACK_LINE(97)
			tmp10 = Group;
		}
		HX_STACK_LINE(97)
		tmp8->__Field(HX_HCSTRING("set_group","\xa2","\xfb","\xee","\xc0"), hx::paccDynamic )(tmp10);
		HX_STACK_LINE(98)
		::flixel::_system::FlxSound tmp11 = this->music;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(98)
		tmp11->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(SoundFrontEnd_obj,playMusic,(void))

::flixel::_system::FlxSound SoundFrontEnd_obj::load( Dynamic EmbeddedSound,hx::Null< Float >  __o_Volume,hx::Null< bool >  __o_Looped,::flixel::_system::FlxSoundGroup Group,hx::Null< bool >  __o_AutoDestroy,hx::Null< bool >  __o_AutoPlay,::String URL,Dynamic OnComplete){
Float Volume = __o_Volume.Default(1);
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(false);
bool AutoPlay = __o_AutoPlay.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","load",0xc239d5cd,"flixel.system.frontEnds.SoundFrontEnd.load","flixel/system/frontEnds/SoundFrontEnd.hx",115,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(EmbeddedSound,"EmbeddedSound")
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(Group,"Group")
	HX_STACK_ARG(AutoDestroy,"AutoDestroy")
	HX_STACK_ARG(AutoPlay,"AutoPlay")
	HX_STACK_ARG(URL,"URL")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(116)
		bool tmp = (EmbeddedSound == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		if ((tmp)){
			HX_STACK_LINE(116)
			tmp1 = (URL == null());
		}
		else{
			HX_STACK_LINE(116)
			tmp1 = false;
		}
		HX_STACK_LINE(116)
		if ((tmp1)){
			HX_STACK_LINE(119)
			return null();
		}
		HX_STACK_LINE(122)
		::flixel::group::FlxTypedGroup tmp2 = this->list;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(122)
		::flixel::_system::FlxSound tmp3 = tmp2->recycle(hx::ClassOf< ::flixel::_system::FlxSound >(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(122)
		::flixel::_system::FlxSound sound = tmp3;		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(124)
		bool tmp4 = (EmbeddedSound != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(124)
		if ((tmp4)){
			HX_STACK_LINE(126)
			Dynamic tmp5 = EmbeddedSound;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(126)
			bool tmp6 = Looped;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(126)
			bool tmp7 = AutoDestroy;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(126)
			Dynamic tmp8 = OnComplete;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(126)
			sound->__Field(HX_HCSTRING("loadEmbedded","\xd0","\x05","\xcb","\x97"), hx::paccDynamic )(tmp5,tmp6,tmp7,tmp8);
		}
		else{
			HX_STACK_LINE(130)
			::String tmp5 = URL;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(130)
			bool tmp6 = Looped;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(130)
			bool tmp7 = AutoDestroy;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(130)
			Dynamic tmp8 = OnComplete;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(130)
			sound->__Field(HX_HCSTRING("loadStream","\x46","\x43","\x58","\xc6"), hx::paccDynamic )(tmp5,tmp6,tmp7,tmp8);
		}
		HX_STACK_LINE(133)
		Float tmp5 = Volume;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(133)
		sound->__Field(HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"), hx::paccDynamic )(tmp5);
		HX_STACK_LINE(135)
		bool tmp6 = AutoPlay;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(135)
		if ((tmp6)){
			HX_STACK_LINE(137)
			sound->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
		}
		HX_STACK_LINE(140)
		bool tmp7 = (Group == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(140)
		::flixel::_system::FlxSoundGroup tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(140)
		if ((tmp7)){
			HX_STACK_LINE(140)
			tmp8 = this->defaultSoundGroup;
		}
		else{
			HX_STACK_LINE(140)
			tmp8 = Group;
		}
		HX_STACK_LINE(140)
		sound->__Field(HX_HCSTRING("set_group","\xa2","\xfb","\xee","\xc0"), hx::paccDynamic )(tmp8);
		HX_STACK_LINE(141)
		::flixel::_system::FlxSound tmp9 = sound;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(141)
		return tmp9;
	}
}


HX_DEFINE_DYNAMIC_FUNC8(SoundFrontEnd_obj,load,return )

::openfl::_legacy::media::Sound SoundFrontEnd_obj::cache( ::String EmbeddedSound){
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","cache",0xf88690bb,"flixel.system.frontEnds.SoundFrontEnd.cache","flixel/system/frontEnds/SoundFrontEnd.hx",152,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(EmbeddedSound,"EmbeddedSound")
	HX_STACK_LINE(154)
	::String tmp = EmbeddedSound;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	::String tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(154)
	bool tmp2 = ::openfl::_legacy::Assets_obj::exists(tmp1,::openfl::_legacy::AssetType_obj::SOUND);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(154)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(154)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(154)
	if ((tmp3)){
		HX_STACK_LINE(155)
		::String tmp5 = EmbeddedSound;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(155)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(155)
		tmp4 = ::openfl::_legacy::Assets_obj::exists(tmp6,::openfl::_legacy::AssetType_obj::MUSIC);
	}
	else{
		HX_STACK_LINE(154)
		tmp4 = true;
	}
	HX_STACK_LINE(154)
	if ((tmp4)){
		HX_STACK_LINE(156)
		::String tmp5 = EmbeddedSound;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(156)
		::openfl::_legacy::media::Sound tmp6 = ::openfl::_legacy::Assets_obj::getSound(tmp5,true);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(156)
		return tmp6;
	}
	HX_STACK_LINE(158)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,cache,return )

Void SoundFrontEnd_obj::cacheAll( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","cacheAll",0x49c00726,"flixel.system.frontEnds.SoundFrontEnd.cacheAll","flixel/system/frontEnds/SoundFrontEnd.hx",174,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(174)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(174)
		Array< ::String > _g1 = ::openfl::_legacy::Assets_obj::list(::openfl::_legacy::AssetType_obj::SOUND);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(174)
		while((true)){
			HX_STACK_LINE(174)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(174)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(174)
			if ((tmp1)){
				HX_STACK_LINE(174)
				break;
			}
			HX_STACK_LINE(174)
			::String tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(174)
			::String id = tmp2;		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(174)
			++(_g);
			HX_STACK_LINE(176)
			::String tmp3 = id;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(176)
			::String tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(176)
			bool tmp5 = ::openfl::_legacy::Assets_obj::exists(tmp4,::openfl::_legacy::AssetType_obj::SOUND);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(176)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(176)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(176)
			if ((tmp6)){
				HX_STACK_LINE(176)
				::String tmp8 = id;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(176)
				::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(176)
				tmp7 = ::openfl::_legacy::Assets_obj::exists(tmp9,::openfl::_legacy::AssetType_obj::MUSIC);
			}
			else{
				HX_STACK_LINE(176)
				tmp7 = true;
			}
			HX_STACK_LINE(176)
			if ((tmp7)){
				HX_STACK_LINE(176)
				::String tmp8 = id;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(176)
				::openfl::_legacy::Assets_obj::getSound(tmp8,true);
			}
			else{
				HX_STACK_LINE(176)
				Dynamic();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,cacheAll,(void))

::flixel::_system::FlxSound SoundFrontEnd_obj::play( Dynamic EmbeddedSound,hx::Null< Float >  __o_Volume,hx::Null< bool >  __o_Looped,::flixel::_system::FlxSoundGroup Group,hx::Null< bool >  __o_AutoDestroy,Dynamic OnComplete){
Float Volume = __o_Volume.Default(1);
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(true);
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","play",0xc4dc699b,"flixel.system.frontEnds.SoundFrontEnd.play","flixel/system/frontEnds/SoundFrontEnd.hx",214,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(EmbeddedSound,"EmbeddedSound")
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(Group,"Group")
	HX_STACK_ARG(AutoDestroy,"AutoDestroy")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(215)
		Dynamic tmp = EmbeddedSound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(215)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(215)
		if ((tmp1)){
			HX_STACK_LINE(217)
			Dynamic tmp2 = EmbeddedSound;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(217)
			Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(217)
			bool tmp4 = ::openfl::_legacy::Assets_obj::exists(tmp3,::openfl::_legacy::AssetType_obj::SOUND);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(217)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(217)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(217)
			if ((tmp5)){
				HX_STACK_LINE(217)
				Dynamic tmp7 = EmbeddedSound;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(217)
				Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(217)
				tmp6 = ::openfl::_legacy::Assets_obj::exists(tmp8,::openfl::_legacy::AssetType_obj::MUSIC);
			}
			else{
				HX_STACK_LINE(217)
				tmp6 = true;
			}
			HX_STACK_LINE(217)
			::openfl::_legacy::media::Sound tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(217)
			if ((tmp6)){
				HX_STACK_LINE(217)
				Dynamic tmp8 = EmbeddedSound;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(217)
				tmp7 = ::openfl::_legacy::Assets_obj::getSound(tmp8,true);
			}
			else{
				HX_STACK_LINE(217)
				tmp7 = null();
			}
			HX_STACK_LINE(217)
			EmbeddedSound = tmp7;
		}
		HX_STACK_LINE(219)
		::flixel::group::FlxTypedGroup tmp2 = this->list;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(219)
		::flixel::_system::FlxSound tmp3 = tmp2->recycle(hx::ClassOf< ::flixel::_system::FlxSound >(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(219)
		Dynamic tmp4 = EmbeddedSound;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(219)
		bool tmp5 = Looped;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(219)
		bool tmp6 = AutoDestroy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(219)
		Dynamic tmp7 = OnComplete;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(219)
		::flixel::_system::FlxSound tmp8 = tmp3->__Field(HX_HCSTRING("loadEmbedded","\xd0","\x05","\xcb","\x97"), hx::paccDynamic )(tmp4,tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(219)
		::flixel::_system::FlxSound sound = tmp8;		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(220)
		Float tmp9 = Volume;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(220)
		sound->__Field(HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"), hx::paccDynamic )(tmp9);
		HX_STACK_LINE(221)
		bool tmp10 = (Group == null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(221)
		::flixel::_system::FlxSoundGroup tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(221)
		if ((tmp10)){
			HX_STACK_LINE(221)
			tmp11 = this->defaultSoundGroup;
		}
		else{
			HX_STACK_LINE(221)
			tmp11 = Group;
		}
		HX_STACK_LINE(221)
		sound->__Field(HX_HCSTRING("set_group","\xa2","\xfb","\xee","\xc0"), hx::paccDynamic )(tmp11);
		HX_STACK_LINE(222)
		::flixel::_system::FlxSound tmp12 = sound->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(222)
		return tmp12;
	}
}


HX_DEFINE_DYNAMIC_FUNC6(SoundFrontEnd_obj,play,return )

::flixel::_system::FlxSound SoundFrontEnd_obj::stream( ::String URL,hx::Null< Float >  __o_Volume,hx::Null< bool >  __o_Looped,::flixel::_system::FlxSoundGroup Group,hx::Null< bool >  __o_AutoDestroy,Dynamic OnComplete){
Float Volume = __o_Volume.Default(1);
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(true);
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","stream",0xdd72c7e7,"flixel.system.frontEnds.SoundFrontEnd.stream","flixel/system/frontEnds/SoundFrontEnd.hx",238,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(URL,"URL")
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(Group,"Group")
	HX_STACK_ARG(AutoDestroy,"AutoDestroy")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(239)
		Float tmp = Volume;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(239)
		bool tmp1 = Looped;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(239)
		bool tmp2 = AutoDestroy;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(239)
		::String tmp3 = URL;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(239)
		Dynamic tmp4 = OnComplete;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(239)
		::flixel::_system::FlxSound tmp5 = this->load(null(),tmp,tmp1,null(),tmp2,true,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(239)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC6(SoundFrontEnd_obj,stream,return )

Void SoundFrontEnd_obj::pause( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","pause",0x74c9cd6f,"flixel.system.frontEnds.SoundFrontEnd.pause","flixel/system/frontEnds/SoundFrontEnd.hx",246,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(247)
		::flixel::_system::FlxSound tmp = this->music;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(247)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(247)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(247)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(247)
		if ((tmp2)){
			HX_STACK_LINE(247)
			::flixel::_system::FlxSound tmp4 = this->music;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(247)
			::flixel::_system::FlxSound tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(247)
			::flixel::_system::FlxSound tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(247)
			tmp3 = tmp6->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(247)
			tmp3 = false;
		}
		HX_STACK_LINE(247)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(247)
		if ((tmp3)){
			HX_STACK_LINE(247)
			::flixel::_system::FlxSound tmp5 = this->music;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(247)
			::flixel::_system::FlxSound tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(247)
			tmp4 = tmp6->__Field(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(247)
			tmp4 = false;
		}
		HX_STACK_LINE(247)
		if ((tmp4)){
			HX_STACK_LINE(249)
			::flixel::_system::FlxSound tmp5 = this->music;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(249)
			tmp5->__Field(HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"), hx::paccDynamic )();
		}
		HX_STACK_LINE(252)
		{
			HX_STACK_LINE(252)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(252)
			::flixel::group::FlxTypedGroup tmp5 = this->list;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(252)
			Array< ::Dynamic > _g1 = tmp5->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(252)
			while((true)){
				HX_STACK_LINE(252)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(252)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(252)
				if ((tmp7)){
					HX_STACK_LINE(252)
					break;
				}
				HX_STACK_LINE(252)
				::flixel::_system::FlxSound tmp8 = _g1->__get(_g).StaticCast< ::flixel::_system::FlxSound >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(252)
				::flixel::_system::FlxSound sound = tmp8;		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(252)
				++(_g);
				HX_STACK_LINE(254)
				bool tmp9 = (sound != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(254)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(254)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(254)
				if ((tmp10)){
					HX_STACK_LINE(254)
					tmp11 = sound->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic );
				}
				else{
					HX_STACK_LINE(254)
					tmp11 = false;
				}
				HX_STACK_LINE(254)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(254)
				if ((tmp11)){
					HX_STACK_LINE(254)
					tmp12 = sound->__Field(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"), hx::paccDynamic );
				}
				else{
					HX_STACK_LINE(254)
					tmp12 = false;
				}
				HX_STACK_LINE(254)
				if ((tmp12)){
					HX_STACK_LINE(256)
					sound->__Field(HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"), hx::paccDynamic )();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,pause,(void))

Void SoundFrontEnd_obj::resume( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","resume",0xd4ca1d14,"flixel.system.frontEnds.SoundFrontEnd.resume","flixel/system/frontEnds/SoundFrontEnd.hx",265,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(266)
		::flixel::_system::FlxSound tmp = this->music;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(266)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(266)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(266)
		if ((tmp1)){
			HX_STACK_LINE(266)
			::flixel::_system::FlxSound tmp3 = this->music;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(266)
			::flixel::_system::FlxSound tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(266)
			tmp2 = tmp4->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(266)
			tmp2 = false;
		}
		HX_STACK_LINE(266)
		if ((tmp2)){
			HX_STACK_LINE(268)
			::flixel::_system::FlxSound tmp3 = this->music;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(268)
			tmp3->__Field(HX_HCSTRING("resume","\xad","\x69","\x84","\x08"), hx::paccDynamic )();
		}
		HX_STACK_LINE(271)
		{
			HX_STACK_LINE(271)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(271)
			::flixel::group::FlxTypedGroup tmp3 = this->list;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(271)
			Array< ::Dynamic > _g1 = tmp3->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(271)
			while((true)){
				HX_STACK_LINE(271)
				bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(271)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(271)
				if ((tmp5)){
					HX_STACK_LINE(271)
					break;
				}
				HX_STACK_LINE(271)
				::flixel::_system::FlxSound tmp6 = _g1->__get(_g).StaticCast< ::flixel::_system::FlxSound >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(271)
				::flixel::_system::FlxSound sound = tmp6;		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(271)
				++(_g);
				HX_STACK_LINE(273)
				bool tmp7 = (sound != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(273)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(273)
				if ((tmp7)){
					HX_STACK_LINE(273)
					tmp8 = sound->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic );
				}
				else{
					HX_STACK_LINE(273)
					tmp8 = false;
				}
				HX_STACK_LINE(273)
				if ((tmp8)){
					HX_STACK_LINE(275)
					sound->__Field(HX_HCSTRING("resume","\xad","\x69","\x84","\x08"), hx::paccDynamic )();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,resume,(void))

Void SoundFrontEnd_obj::destroy( hx::Null< bool >  __o_ForceDestroy){
bool ForceDestroy = __o_ForceDestroy.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","destroy",0x153d73b3,"flixel.system.frontEnds.SoundFrontEnd.destroy","flixel/system/frontEnds/SoundFrontEnd.hx",286,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ForceDestroy,"ForceDestroy")
{
		HX_STACK_LINE(287)
		::flixel::_system::FlxSound tmp = this->music;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(287)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(287)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(287)
		if ((tmp1)){
			HX_STACK_LINE(287)
			bool tmp3 = ForceDestroy;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(287)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(287)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(287)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(287)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(287)
			if ((tmp7)){
				HX_STACK_LINE(287)
				::flixel::_system::FlxSound tmp8 = this->music;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(287)
				::flixel::_system::FlxSound tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(287)
				::flixel::_system::FlxSound tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(287)
				bool tmp11 = tmp10->__Field(HX_HCSTRING("persist","\x14","\x22","\x71","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(287)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(287)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(287)
				tmp2 = !(tmp13);
			}
			else{
				HX_STACK_LINE(287)
				tmp2 = true;
			}
		}
		else{
			HX_STACK_LINE(287)
			tmp2 = false;
		}
		HX_STACK_LINE(287)
		if ((tmp2)){
			HX_STACK_LINE(289)
			::flixel::_system::FlxSound tmp3 = this->music;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(289)
			tmp3->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
			HX_STACK_LINE(290)
			this->music = null();
		}
		HX_STACK_LINE(293)
		{
			HX_STACK_LINE(293)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(293)
			::flixel::group::FlxTypedGroup tmp3 = this->list;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(293)
			Array< ::Dynamic > _g1 = tmp3->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(293)
			while((true)){
				HX_STACK_LINE(293)
				bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(293)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(293)
				if ((tmp5)){
					HX_STACK_LINE(293)
					break;
				}
				HX_STACK_LINE(293)
				::flixel::_system::FlxSound tmp6 = _g1->__get(_g).StaticCast< ::flixel::_system::FlxSound >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(293)
				::flixel::_system::FlxSound sound = tmp6;		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(293)
				++(_g);
				HX_STACK_LINE(295)
				bool tmp7 = (sound != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(295)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(295)
				if ((tmp7)){
					HX_STACK_LINE(295)
					bool tmp9 = ForceDestroy;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(295)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(295)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(295)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(295)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(295)
					if ((tmp13)){
						HX_STACK_LINE(295)
						bool tmp14 = sound->__Field(HX_HCSTRING("persist","\x14","\x22","\x71","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(295)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(295)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(295)
						tmp8 = !(tmp16);
					}
					else{
						HX_STACK_LINE(295)
						tmp8 = true;
					}
				}
				else{
					HX_STACK_LINE(295)
					tmp8 = false;
				}
				HX_STACK_LINE(295)
				if ((tmp8)){
					HX_STACK_LINE(297)
					sound->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,destroy,(void))

Void SoundFrontEnd_obj::toggleMuted( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","toggleMuted",0xe215de70,"flixel.system.frontEnds.SoundFrontEnd.toggleMuted","flixel/system/frontEnds/SoundFrontEnd.hx",306,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(307)
		bool tmp = this->muted;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(307)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(307)
		this->muted = tmp1;
		HX_STACK_LINE(309)
		Dynamic tmp2 = this->volumeHandler_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(309)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(309)
		if ((tmp3)){
			HX_STACK_LINE(311)
			bool tmp4 = this->muted;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(311)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(311)
			if ((tmp4)){
				HX_STACK_LINE(311)
				tmp5 = (int)0;
			}
			else{
				HX_STACK_LINE(311)
				tmp5 = this->volume;
			}
			HX_STACK_LINE(311)
			this->volumeHandler(tmp5);
		}
		HX_STACK_LINE(314)
		this->showSoundTray();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,toggleMuted,(void))

Void SoundFrontEnd_obj::changeVolume( Float Amount){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","changeVolume",0x51b19e11,"flixel.system.frontEnds.SoundFrontEnd.changeVolume","flixel/system/frontEnds/SoundFrontEnd.hx",321,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Amount,"Amount")
		HX_STACK_LINE(322)
		this->muted = false;
		HX_STACK_LINE(323)
		{
			HX_STACK_LINE(323)
			::flixel::_system::frontEnds::SoundFrontEnd _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(323)
			Float tmp = (_g->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic ) + Amount);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(323)
			_g->__Field(HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"), hx::paccDynamic )(tmp);
		}
		HX_STACK_LINE(324)
		this->showSoundTray();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,changeVolume,(void))

Void SoundFrontEnd_obj::showSoundTray( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","showSoundTray",0x0761fd21,"flixel.system.frontEnds.SoundFrontEnd.showSoundTray","flixel/system/frontEnds/SoundFrontEnd.hx",331,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(333)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(333)
		::flixel::_system::ui::FlxSoundTray tmp1 = tmp->soundTray;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(333)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(333)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(333)
		if ((tmp2)){
			HX_STACK_LINE(333)
			tmp3 = this->soundTrayEnabled;
		}
		else{
			HX_STACK_LINE(333)
			tmp3 = false;
		}
		HX_STACK_LINE(333)
		if ((tmp3)){
			HX_STACK_LINE(335)
			::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(335)
			tmp4->soundTray->__Field(HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"), hx::paccDynamic )(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,showSoundTray,(void))

Void SoundFrontEnd_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","update",0x534b3970,"flixel.system.frontEnds.SoundFrontEnd.update","flixel/system/frontEnds/SoundFrontEnd.hx",349,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(350)
		::flixel::_system::FlxSound tmp = this->music;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(350)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(350)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(350)
		if ((tmp1)){
			HX_STACK_LINE(350)
			::flixel::_system::FlxSound tmp3 = this->music;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(350)
			::flixel::_system::FlxSound tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(350)
			tmp2 = tmp4->__Field(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(350)
			tmp2 = false;
		}
		HX_STACK_LINE(350)
		if ((tmp2)){
			HX_STACK_LINE(351)
			::flixel::_system::FlxSound tmp3 = this->music;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(351)
			Float tmp4 = elapsed;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(351)
			tmp3->__Field(HX_HCSTRING("update","\x09","\x86","\x05","\x87"), hx::paccDynamic )(tmp4);
		}
		HX_STACK_LINE(353)
		::flixel::group::FlxTypedGroup tmp3 = this->list;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(353)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(353)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(353)
		if ((tmp4)){
			HX_STACK_LINE(353)
			::flixel::group::FlxTypedGroup tmp6 = this->list;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(353)
			::flixel::group::FlxTypedGroup tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(353)
			tmp5 = tmp7->active;
		}
		else{
			HX_STACK_LINE(353)
			tmp5 = false;
		}
		HX_STACK_LINE(353)
		if ((tmp5)){
			HX_STACK_LINE(354)
			::flixel::group::FlxTypedGroup tmp6 = this->list;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(354)
			Float tmp7 = elapsed;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(354)
			tmp6->update(tmp7);
		}
		HX_STACK_LINE(357)
		::flixel::input::keyboard::FlxKeyboard tmp6 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(357)
		bool tmp7 = tmp6->checkKeyArrayState(this->muteKeys,(int)-1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(357)
		if ((tmp7)){
			HX_STACK_LINE(358)
			this->toggleMuted();
		}
		else{
			HX_STACK_LINE(359)
			::flixel::input::keyboard::FlxKeyboard tmp8 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(359)
			bool tmp9 = tmp8->checkKeyArrayState(this->volumeUpKeys,(int)-1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(359)
			if ((tmp9)){
				HX_STACK_LINE(360)
				this->changeVolume(((Float)0.1));
			}
			else{
				HX_STACK_LINE(361)
				::flixel::input::keyboard::FlxKeyboard tmp10 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(361)
				bool tmp11 = tmp10->checkKeyArrayState(this->volumeDownKeys,(int)-1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(361)
				if ((tmp11)){
					HX_STACK_LINE(362)
					this->changeVolume(((Float)-0.1));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,update,(void))

Void SoundFrontEnd_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","onFocusLost",0xeb797bf6,"flixel.system.frontEnds.SoundFrontEnd.onFocusLost","flixel/system/frontEnds/SoundFrontEnd.hx",367,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(368)
		::flixel::_system::FlxSound tmp = this->music;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(368)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(368)
		if ((tmp1)){
			HX_STACK_LINE(370)
			::flixel::_system::FlxSound tmp2 = this->music;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(370)
			tmp2->__Field(HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"), hx::paccDynamic )();
		}
		HX_STACK_LINE(373)
		{
			HX_STACK_LINE(373)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(373)
			::flixel::group::FlxTypedGroup tmp2 = this->list;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(373)
			Array< ::Dynamic > _g1 = tmp2->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(373)
			while((true)){
				HX_STACK_LINE(373)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(373)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(373)
				if ((tmp4)){
					HX_STACK_LINE(373)
					break;
				}
				HX_STACK_LINE(373)
				::flixel::_system::FlxSound tmp5 = _g1->__get(_g).StaticCast< ::flixel::_system::FlxSound >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(373)
				::flixel::_system::FlxSound sound = tmp5;		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(373)
				++(_g);
				HX_STACK_LINE(375)
				bool tmp6 = (sound != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(375)
				if ((tmp6)){
					HX_STACK_LINE(377)
					sound->__Field(HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"), hx::paccDynamic )();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,onFocusLost,(void))

Void SoundFrontEnd_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","onFocus",0x8b7e44f2,"flixel.system.frontEnds.SoundFrontEnd.onFocus","flixel/system/frontEnds/SoundFrontEnd.hx",383,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(384)
		::flixel::_system::FlxSound tmp = this->music;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(384)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(384)
		if ((tmp1)){
			HX_STACK_LINE(386)
			::flixel::_system::FlxSound tmp2 = this->music;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(386)
			tmp2->__Field(HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"), hx::paccDynamic )();
		}
		HX_STACK_LINE(389)
		{
			HX_STACK_LINE(389)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(389)
			::flixel::group::FlxTypedGroup tmp2 = this->list;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(389)
			Array< ::Dynamic > _g1 = tmp2->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(389)
			while((true)){
				HX_STACK_LINE(389)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(389)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(389)
				if ((tmp4)){
					HX_STACK_LINE(389)
					break;
				}
				HX_STACK_LINE(389)
				::flixel::_system::FlxSound tmp5 = _g1->__get(_g).StaticCast< ::flixel::_system::FlxSound >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(389)
				::flixel::_system::FlxSound sound = tmp5;		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(389)
				++(_g);
				HX_STACK_LINE(391)
				bool tmp6 = (sound != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(391)
				if ((tmp6)){
					HX_STACK_LINE(393)
					sound->__Field(HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"), hx::paccDynamic )();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,onFocus,(void))

Void SoundFrontEnd_obj::loadSavedPrefs( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","loadSavedPrefs",0xc70de056,"flixel.system.frontEnds.SoundFrontEnd.loadSavedPrefs","flixel/system/frontEnds/SoundFrontEnd.hx",402,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(403)
		::flixel::util::FlxSave tmp = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(403)
		bool tmp1 = (tmp->data->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(403)
		if ((tmp1)){
			HX_STACK_LINE(405)
			::flixel::util::FlxSave tmp2 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(405)
			this->set_volume(tmp2->data->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic ));
		}
		HX_STACK_LINE(408)
		::flixel::util::FlxSave tmp2 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(408)
		bool tmp3 = (tmp2->data->__Field(HX_HCSTRING("mute","\xd9","\x6e","\x65","\x48"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(408)
		if ((tmp3)){
			HX_STACK_LINE(410)
			::flixel::util::FlxSave tmp4 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(410)
			this->muted = tmp4->data->__Field(HX_HCSTRING("mute","\xd9","\x6e","\x65","\x48"), hx::paccDynamic );
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,loadSavedPrefs,(void))

Float SoundFrontEnd_obj::set_volume( Float Volume){
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","set_volume",0x2e392afe,"flixel.system.frontEnds.SoundFrontEnd.set_volume","flixel/system/frontEnds/SoundFrontEnd.hx",415,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_LINE(416)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(416)
	{
		HX_STACK_LINE(416)
		bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(416)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(416)
		if ((tmp1)){
			HX_STACK_LINE(416)
			tmp2 = (Volume < (int)0);
		}
		else{
			HX_STACK_LINE(416)
			tmp2 = false;
		}
		HX_STACK_LINE(416)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(416)
		if ((tmp2)){
			HX_STACK_LINE(416)
			tmp3 = (int)0;
		}
		else{
			HX_STACK_LINE(416)
			tmp3 = Volume;
		}
		HX_STACK_LINE(416)
		Float lowerBound = tmp3;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(416)
		bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(416)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(416)
		if ((tmp4)){
			HX_STACK_LINE(416)
			tmp5 = (lowerBound > (int)1);
		}
		else{
			HX_STACK_LINE(416)
			tmp5 = false;
		}
		HX_STACK_LINE(416)
		if ((tmp5)){
			HX_STACK_LINE(416)
			tmp = (int)1;
		}
		else{
			HX_STACK_LINE(416)
			tmp = lowerBound;
		}
	}
	HX_STACK_LINE(416)
	Volume = ((Float)(tmp));
	HX_STACK_LINE(418)
	Dynamic tmp1 = this->volumeHandler_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(418)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(418)
	if ((tmp2)){
		HX_STACK_LINE(420)
		bool tmp3 = this->muted;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(420)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(420)
		if ((tmp3)){
			HX_STACK_LINE(420)
			tmp4 = (int)0;
		}
		else{
			HX_STACK_LINE(420)
			tmp4 = Volume;
		}
		HX_STACK_LINE(420)
		Float param = tmp4;		HX_STACK_VAR(param,"param");
		HX_STACK_LINE(421)
		Float tmp5 = param;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(421)
		this->volumeHandler(tmp5);
	}
	HX_STACK_LINE(423)
	Float tmp3 = this->volume = Volume;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(423)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,set_volume,return )


SoundFrontEnd_obj::SoundFrontEnd_obj()
{
}

void SoundFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundFrontEnd);
	HX_MARK_MEMBER_NAME(music,"music");
	HX_MARK_MEMBER_NAME(muted,"muted");
	HX_MARK_MEMBER_NAME(volumeHandler,"volumeHandler");
	HX_MARK_MEMBER_NAME(volumeUpKeys,"volumeUpKeys");
	HX_MARK_MEMBER_NAME(volumeDownKeys,"volumeDownKeys");
	HX_MARK_MEMBER_NAME(muteKeys,"muteKeys");
	HX_MARK_MEMBER_NAME(soundTrayEnabled,"soundTrayEnabled");
	HX_MARK_MEMBER_NAME(defaultMusicGroup,"defaultMusicGroup");
	HX_MARK_MEMBER_NAME(defaultSoundGroup,"defaultSoundGroup");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(volume,"volume");
	HX_MARK_END_CLASS();
}

void SoundFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(music,"music");
	HX_VISIT_MEMBER_NAME(muted,"muted");
	HX_VISIT_MEMBER_NAME(volumeHandler,"volumeHandler");
	HX_VISIT_MEMBER_NAME(volumeUpKeys,"volumeUpKeys");
	HX_VISIT_MEMBER_NAME(volumeDownKeys,"volumeDownKeys");
	HX_VISIT_MEMBER_NAME(muteKeys,"muteKeys");
	HX_VISIT_MEMBER_NAME(soundTrayEnabled,"soundTrayEnabled");
	HX_VISIT_MEMBER_NAME(defaultMusicGroup,"defaultMusicGroup");
	HX_VISIT_MEMBER_NAME(defaultSoundGroup,"defaultSoundGroup");
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(volume,"volume");
}

Dynamic SoundFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { return music; }
		if (HX_FIELD_EQ(inName,"muted") ) { return muted; }
		if (HX_FIELD_EQ(inName,"cache") ) { return cache_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { return volume; }
		if (HX_FIELD_EQ(inName,"stream") ) { return stream_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { return muteKeys; }
		if (HX_FIELD_EQ(inName,"cacheAll") ) { return cacheAll_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playMusic") ) { return playMusic_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_volume") ) { return set_volume_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"toggleMuted") ) { return toggleMuted_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { return volumeUpKeys; }
		if (HX_FIELD_EQ(inName,"changeVolume") ) { return changeVolume_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"volumeHandler") ) { return volumeHandler; }
		if (HX_FIELD_EQ(inName,"showSoundTray") ) { return showSoundTray_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { return volumeDownKeys; }
		if (HX_FIELD_EQ(inName,"loadSavedPrefs") ) { return loadSavedPrefs_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"soundTrayEnabled") ) { return soundTrayEnabled; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultMusicGroup") ) { return defaultMusicGroup; }
		if (HX_FIELD_EQ(inName,"defaultSoundGroup") ) { return defaultSoundGroup; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SoundFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { music=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"muted") ) { muted=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == hx::paccAlways) return set_volume(inValue);volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { muteKeys=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { volumeUpKeys=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"volumeHandler") ) { volumeHandler=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { volumeDownKeys=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"soundTrayEnabled") ) { soundTrayEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultMusicGroup") ) { defaultMusicGroup=inValue.Cast< ::flixel::_system::FlxSoundGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultSoundGroup") ) { defaultSoundGroup=inValue.Cast< ::flixel::_system::FlxSoundGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("music","\xa5","\xd0","\x5a","\x10"));
	outFields->push(HX_HCSTRING("muted","\x6b","\x8f","\x5b","\x10"));
	outFields->push(HX_HCSTRING("volumeUpKeys","\x69","\xbb","\xf5","\x23"));
	outFields->push(HX_HCSTRING("volumeDownKeys","\x70","\x2f","\x58","\x0b"));
	outFields->push(HX_HCSTRING("muteKeys","\x6d","\x5d","\x88","\x16"));
	outFields->push(HX_HCSTRING("soundTrayEnabled","\x9c","\x10","\x68","\xe0"));
	outFields->push(HX_HCSTRING("defaultMusicGroup","\x7b","\x94","\xd9","\xa0"));
	outFields->push(HX_HCSTRING("defaultSoundGroup","\x11","\x80","\x9b","\xd9"));
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(SoundFrontEnd_obj,music),HX_HCSTRING("music","\xa5","\xd0","\x5a","\x10")},
	{hx::fsBool,(int)offsetof(SoundFrontEnd_obj,muted),HX_HCSTRING("muted","\x6b","\x8f","\x5b","\x10")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SoundFrontEnd_obj,volumeHandler),HX_HCSTRING("volumeHandler","\x10","\xfd","\x6f","\x5d")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(SoundFrontEnd_obj,volumeUpKeys),HX_HCSTRING("volumeUpKeys","\x69","\xbb","\xf5","\x23")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(SoundFrontEnd_obj,volumeDownKeys),HX_HCSTRING("volumeDownKeys","\x70","\x2f","\x58","\x0b")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(SoundFrontEnd_obj,muteKeys),HX_HCSTRING("muteKeys","\x6d","\x5d","\x88","\x16")},
	{hx::fsBool,(int)offsetof(SoundFrontEnd_obj,soundTrayEnabled),HX_HCSTRING("soundTrayEnabled","\x9c","\x10","\x68","\xe0")},
	{hx::fsObject /*::flixel::_system::FlxSoundGroup*/ ,(int)offsetof(SoundFrontEnd_obj,defaultMusicGroup),HX_HCSTRING("defaultMusicGroup","\x7b","\x94","\xd9","\xa0")},
	{hx::fsObject /*::flixel::_system::FlxSoundGroup*/ ,(int)offsetof(SoundFrontEnd_obj,defaultSoundGroup),HX_HCSTRING("defaultSoundGroup","\x11","\x80","\x9b","\xd9")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(SoundFrontEnd_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsFloat,(int)offsetof(SoundFrontEnd_obj,volume),HX_HCSTRING("volume","\xda","\x29","\x53","\x5f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("music","\xa5","\xd0","\x5a","\x10"),
	HX_HCSTRING("muted","\x6b","\x8f","\x5b","\x10"),
	HX_HCSTRING("volumeHandler","\x10","\xfd","\x6f","\x5d"),
	HX_HCSTRING("volumeUpKeys","\x69","\xbb","\xf5","\x23"),
	HX_HCSTRING("volumeDownKeys","\x70","\x2f","\x58","\x0b"),
	HX_HCSTRING("muteKeys","\x6d","\x5d","\x88","\x16"),
	HX_HCSTRING("soundTrayEnabled","\x9c","\x10","\x68","\xe0"),
	HX_HCSTRING("defaultMusicGroup","\x7b","\x94","\xd9","\xa0"),
	HX_HCSTRING("defaultSoundGroup","\x11","\x80","\x9b","\xd9"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"),
	HX_HCSTRING("playMusic","\x11","\xfe","\x3e","\x31"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"),
	HX_HCSTRING("cacheAll","\xff","\x6b","\x19","\x9a"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("stream","\x80","\x14","\x2d","\x11"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("toggleMuted","\x37","\x47","\x22","\x38"),
	HX_HCSTRING("changeVolume","\x6a","\xe3","\x80","\x46"),
	HX_HCSTRING("showSoundTray","\xa8","\x65","\xef","\x47"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("loadSavedPrefs","\xef","\xed","\x3b","\x02"),
	HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class SoundFrontEnd_obj::__mClass;

void SoundFrontEnd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.SoundFrontEnd","\x27","\xc6","\xa9","\x7e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SoundFrontEnd_obj >;
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
} // end namespace frontEnds
