#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_GraphicVirtualInput
#include <flixel/system/GraphicVirtualInput.h>
#endif
#ifndef INCLUDED_flixel_system_VirtualInputData
#include <flixel/system/VirtualInputData.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetType
#include <openfl/_legacy/AssetType.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
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
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
namespace flixel{
namespace _system{

Void FlxAssets_obj::__construct()
{
	return null();
}

//FlxAssets_obj::~FlxAssets_obj() { }

Dynamic FlxAssets_obj::__CreateEmpty() { return  new FlxAssets_obj; }
hx::ObjectPtr< FlxAssets_obj > FlxAssets_obj::__new()
{  hx::ObjectPtr< FlxAssets_obj > _result_ = new FlxAssets_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxAssets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAssets_obj > _result_ = new FlxAssets_obj();
	_result_->__construct();
	return _result_;}

::String FlxAssets_obj::FONT_DEFAULT;

::String FlxAssets_obj::FONT_DEBUGGER;

Void FlxAssets_obj::drawLogo( ::openfl::_legacy::display::Graphics graph){
{
		HX_STACK_FRAME("flixel.system.FlxAssets","drawLogo",0xabec0035,"flixel.system.FlxAssets.drawLogo","flixel/system/FlxAssets.hx",112,0xd3ac1356)
		HX_STACK_ARG(graph,"graph")
		HX_STACK_LINE(114)
		graph->beginFill((int)47394,null());
		HX_STACK_LINE(115)
		graph->moveTo((int)50,(int)13);
		HX_STACK_LINE(116)
		graph->lineTo((int)51,(int)13);
		HX_STACK_LINE(117)
		graph->lineTo((int)87,(int)50);
		HX_STACK_LINE(118)
		graph->lineTo((int)87,(int)51);
		HX_STACK_LINE(119)
		graph->lineTo((int)51,(int)87);
		HX_STACK_LINE(120)
		graph->lineTo((int)50,(int)87);
		HX_STACK_LINE(121)
		graph->lineTo((int)13,(int)51);
		HX_STACK_LINE(122)
		graph->lineTo((int)13,(int)50);
		HX_STACK_LINE(123)
		graph->lineTo((int)50,(int)13);
		HX_STACK_LINE(124)
		graph->endFill();
		HX_STACK_LINE(127)
		graph->beginFill((int)16761138,null());
		HX_STACK_LINE(128)
		graph->moveTo((int)0,(int)0);
		HX_STACK_LINE(129)
		graph->lineTo((int)25,(int)0);
		HX_STACK_LINE(130)
		graph->lineTo((int)50,(int)13);
		HX_STACK_LINE(131)
		graph->lineTo((int)13,(int)50);
		HX_STACK_LINE(132)
		graph->lineTo((int)0,(int)25);
		HX_STACK_LINE(133)
		graph->lineTo((int)0,(int)0);
		HX_STACK_LINE(134)
		graph->endFill();
		HX_STACK_LINE(137)
		graph->beginFill((int)16066382,null());
		HX_STACK_LINE(138)
		graph->moveTo((int)100,(int)0);
		HX_STACK_LINE(139)
		graph->lineTo((int)75,(int)0);
		HX_STACK_LINE(140)
		graph->lineTo((int)51,(int)13);
		HX_STACK_LINE(141)
		graph->lineTo((int)87,(int)50);
		HX_STACK_LINE(142)
		graph->lineTo((int)100,(int)25);
		HX_STACK_LINE(143)
		graph->lineTo((int)100,(int)0);
		HX_STACK_LINE(144)
		graph->endFill();
		HX_STACK_LINE(147)
		graph->beginFill((int)3555839,null());
		HX_STACK_LINE(148)
		graph->moveTo((int)0,(int)100);
		HX_STACK_LINE(149)
		graph->lineTo((int)25,(int)100);
		HX_STACK_LINE(150)
		graph->lineTo((int)50,(int)87);
		HX_STACK_LINE(151)
		graph->lineTo((int)13,(int)51);
		HX_STACK_LINE(152)
		graph->lineTo((int)0,(int)75);
		HX_STACK_LINE(153)
		graph->lineTo((int)0,(int)100);
		HX_STACK_LINE(154)
		graph->endFill();
		HX_STACK_LINE(157)
		graph->beginFill((int)314875,null());
		HX_STACK_LINE(158)
		graph->moveTo((int)100,(int)100);
		HX_STACK_LINE(159)
		graph->lineTo((int)75,(int)100);
		HX_STACK_LINE(160)
		graph->lineTo((int)51,(int)87);
		HX_STACK_LINE(161)
		graph->lineTo((int)87,(int)51);
		HX_STACK_LINE(162)
		graph->lineTo((int)100,(int)75);
		HX_STACK_LINE(163)
		graph->lineTo((int)100,(int)100);
		HX_STACK_LINE(164)
		graph->endFill();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,drawLogo,(void))

::openfl::_legacy::display::BitmapData FlxAssets_obj::getBitmapData( ::String id){
	HX_STACK_FRAME("flixel.system.FlxAssets","getBitmapData",0x17128189,"flixel.system.FlxAssets.getBitmapData","flixel/system/FlxAssets.hx",168,0xd3ac1356)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(169)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(169)
	bool tmp1 = ::openfl::_legacy::Assets_obj::exists(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(169)
	if ((tmp1)){
		HX_STACK_LINE(170)
		::String tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(170)
		::openfl::_legacy::display::BitmapData tmp3 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp2,false);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(170)
		return tmp3;
	}
	HX_STACK_LINE(172)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,getBitmapData,return )

::openfl::_legacy::display::BitmapData FlxAssets_obj::getBitmapFromClass( ::hx::Class source){
	HX_STACK_FRAME("flixel.system.FlxAssets","getBitmapFromClass",0x223d9eaf,"flixel.system.FlxAssets.getBitmapFromClass","flixel/system/FlxAssets.hx",182,0xd3ac1356)
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(183)
	::hx::Class tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	::openfl::_legacy::display::BitmapData tmp1 = ::Type_obj::createInstance(tmp,cpp::ArrayBase_obj::__new().Add((int)0).Add((int)0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,getBitmapFromClass,return )

::openfl::_legacy::display::BitmapData FlxAssets_obj::resolveBitmapData( Dynamic Graphic){
	HX_STACK_FRAME("flixel.system.FlxAssets","resolveBitmapData",0x02df705f,"flixel.system.FlxAssets.resolveBitmapData","flixel/system/FlxAssets.hx",197,0xd3ac1356)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_LINE(198)
	Dynamic tmp = Graphic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(198)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::openfl::_legacy::display::BitmapData >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(198)
	if ((tmp1)){
		HX_STACK_LINE(200)
		::openfl::_legacy::display::BitmapData tmp2 = ((::openfl::_legacy::display::BitmapData)(Graphic));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(200)
		return tmp2;
	}
	else{
		HX_STACK_LINE(202)
		Dynamic tmp2 = Graphic;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(202)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(202)
		if ((tmp3)){
			HX_STACK_LINE(204)
			::hx::Class tmp4 = ((::hx::Class)(Graphic));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(204)
			::openfl::_legacy::display::BitmapData tmp5 = ::Type_obj::createInstance(tmp4,cpp::ArrayBase_obj::__new().Add((int)0).Add((int)0));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(204)
			return tmp5;
		}
		else{
			HX_STACK_LINE(206)
			Dynamic tmp4 = Graphic;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(206)
			bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(206)
			if ((tmp5)){
				HX_STACK_LINE(208)
				Dynamic tmp6 = Graphic;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(208)
				bool tmp7 = ::openfl::_legacy::Assets_obj::exists(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(208)
				::openfl::_legacy::display::BitmapData tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(208)
				if ((tmp7)){
					HX_STACK_LINE(208)
					Dynamic tmp9 = Graphic;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(208)
					tmp8 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp9,false);
				}
				else{
					HX_STACK_LINE(208)
					tmp8 = null();
				}
				HX_STACK_LINE(208)
				return tmp8;
			}
		}
	}
	HX_STACK_LINE(211)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,resolveBitmapData,return )

::String FlxAssets_obj::resolveKey( Dynamic Graphic,::String Key){
	HX_STACK_FRAME("flixel.system.FlxAssets","resolveKey",0xd790f639,"flixel.system.FlxAssets.resolveKey","flixel/system/FlxAssets.hx",226,0xd3ac1356)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Key,"Key")
	HX_STACK_LINE(227)
	bool tmp = (Key != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(227)
	if ((tmp)){
		HX_STACK_LINE(229)
		::String tmp1 = Key;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(229)
		return tmp1;
	}
	HX_STACK_LINE(232)
	Dynamic tmp1 = Graphic;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(232)
	bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::openfl::_legacy::display::BitmapData >());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(232)
	if ((tmp2)){
		HX_STACK_LINE(234)
		::String tmp3 = Key;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(234)
		return tmp3;
	}
	else{
		HX_STACK_LINE(236)
		Dynamic tmp3 = Graphic;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(236)
		bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(236)
		if ((tmp4)){
			HX_STACK_LINE(238)
			::hx::Class tmp5 = ((::hx::Class)(Graphic));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(238)
			::String tmp6 = ::Type_obj::getClassName(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(238)
			return tmp6;
		}
		else{
			HX_STACK_LINE(240)
			Dynamic tmp5 = Graphic;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(240)
			bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(240)
			if ((tmp6)){
				HX_STACK_LINE(242)
				Dynamic tmp7 = Graphic;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(242)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(245)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAssets_obj,resolveKey,return )

::openfl::_legacy::media::Sound FlxAssets_obj::getSound( ::String id){
	HX_STACK_FRAME("flixel.system.FlxAssets","getSound",0x306e52ff,"flixel.system.FlxAssets.getSound","flixel/system/FlxAssets.hx",249,0xd3ac1356)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(250)
	::String extension = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(extension,"extension");
	HX_STACK_LINE(254)
	extension = HX_HCSTRING(".ogg","\xe1","\x64","\xbc","\x1e");
	HX_STACK_LINE(256)
	::String tmp = (id + extension);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(256)
	::openfl::_legacy::media::Sound tmp1 = ::openfl::_legacy::Assets_obj::getSound(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(256)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,getSound,return )

::flixel::graphics::frames::FlxAtlasFrames FlxAssets_obj::getVirtualInputFrames( ){
	HX_STACK_FRAME("flixel.system.FlxAssets","getVirtualInputFrames",0xfe1716d5,"flixel.system.FlxAssets.getVirtualInputFrames","flixel/system/FlxAssets.hx",260,0xd3ac1356)
	HX_STACK_LINE(261)
	::flixel::graphics::FlxGraphic tmp = ::flixel::graphics::FlxGraphic_obj::fromClass(hx::ClassOf< ::flixel::_system::GraphicVirtualInput >(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(261)
	::flixel::graphics::FlxGraphic graphic = tmp;		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(262)
	::flixel::graphics::FlxGraphic tmp1 = graphic;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(262)
	::flixel::_system::VirtualInputData tmp2 = ::flixel::_system::VirtualInputData_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(262)
	::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(262)
	::flixel::graphics::frames::FlxAtlasFrames tmp4 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSpriteSheetPacker(tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(262)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxAssets_obj,getVirtualInputFrames,return )


FlxAssets_obj::FlxAssets_obj()
{
}

bool FlxAssets_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"drawLogo") ) { outValue = drawLogo_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSound") ) { outValue = getSound_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"resolveKey") ) { outValue = resolveKey_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"FONT_DEFAULT") ) { outValue = FONT_DEFAULT; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FONT_DEBUGGER") ) { outValue = FONT_DEBUGGER; return true;  }
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { outValue = getBitmapData_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resolveBitmapData") ) { outValue = resolveBitmapData_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getBitmapFromClass") ) { outValue = getBitmapFromClass_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getVirtualInputFrames") ) { outValue = getVirtualInputFrames_dyn(); return true;  }
	}
	return false;
}

bool FlxAssets_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"FONT_DEFAULT") ) { FONT_DEFAULT=ioValue.Cast< ::String >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FONT_DEBUGGER") ) { FONT_DEBUGGER=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &FlxAssets_obj::FONT_DEFAULT,HX_HCSTRING("FONT_DEFAULT","\xf1","\x12","\x32","\xe2")},
	{hx::fsString,(void *) &FlxAssets_obj::FONT_DEBUGGER,HX_HCSTRING("FONT_DEBUGGER","\xd1","\xd3","\xef","\xea")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAssets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::FONT_DEFAULT,"FONT_DEFAULT");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::FONT_DEBUGGER,"FONT_DEBUGGER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::FONT_DEFAULT,"FONT_DEFAULT");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::FONT_DEBUGGER,"FONT_DEBUGGER");
};

#endif

hx::Class FlxAssets_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("FONT_DEFAULT","\xf1","\x12","\x32","\xe2"),
	HX_HCSTRING("FONT_DEBUGGER","\xd1","\xd3","\xef","\xea"),
	HX_HCSTRING("drawLogo","\x8f","\x49","\x21","\x5c"),
	HX_HCSTRING("getBitmapData","\xef","\x11","\x33","\x90"),
	HX_HCSTRING("getBitmapFromClass","\x89","\xdc","\x79","\xc1"),
	HX_HCSTRING("resolveBitmapData","\xc5","\x2b","\x67","\xfa"),
	HX_HCSTRING("resolveKey","\x13","\xca","\xae","\xf6"),
	HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0"),
	HX_HCSTRING("getVirtualInputFrames","\x3b","\x7d","\x77","\x6e"),
	::String(null()) };

void FlxAssets_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.FlxAssets","\x88","\x16","\x13","\xab");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAssets_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxAssets_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxAssets_obj >;
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

void FlxAssets_obj::__boot()
{
	FONT_DEFAULT= HX_HCSTRING("Nokia Cellphone FC Small","\xd6","\x2f","\x44","\xca");
	FONT_DEBUGGER= HX_HCSTRING("Monsterrat","\x2b","\x92","\x73","\x63");
}

} // end namespace flixel
} // end namespace system
