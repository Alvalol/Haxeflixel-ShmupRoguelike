#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxFocusLostScreen
#include <flixel/system/ui/FlxFocusLostScreen.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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
namespace flixel{
namespace _system{
namespace ui{

Void FlxFocusLostScreen_obj::__construct()
{
HX_STACK_FRAME("flixel.system.ui.FlxFocusLostScreen","new",0xbe260b15,"flixel.system.ui.FlxFocusLostScreen.new","flixel/system/ui/FlxFocusLostScreen.hx",12,0x1e64ca7a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(13)
	super::__construct();
	HX_STACK_LINE(14)
	this->draw();
	HX_STACK_LINE(16)
	::openfl::_legacy::display::Sprite tmp = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	::openfl::_legacy::display::Sprite logo = tmp;		HX_STACK_VAR(logo,"logo");
	HX_STACK_LINE(17)
	::openfl::_legacy::display::Graphics tmp1 = logo->get_graphics();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(17)
	::flixel::_system::FlxAssets_obj::drawLogo(tmp1);
	HX_STACK_LINE(18)
	Float tmp2 = logo->set_scaleY(((Float)0.2));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(18)
	logo->set_scaleX(tmp2);
	HX_STACK_LINE(19)
	Float tmp3 = logo->set_y((int)5);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(19)
	logo->set_x(tmp3);
	HX_STACK_LINE(20)
	logo->set_alpha(((Float)0.35));
	HX_STACK_LINE(21)
	::openfl::_legacy::display::Sprite tmp4 = logo;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(21)
	this->addChild(tmp4);
	HX_STACK_LINE(23)
	this->set_visible(false);
}
;
	return null();
}

//FlxFocusLostScreen_obj::~FlxFocusLostScreen_obj() { }

Dynamic FlxFocusLostScreen_obj::__CreateEmpty() { return  new FlxFocusLostScreen_obj; }
hx::ObjectPtr< FlxFocusLostScreen_obj > FlxFocusLostScreen_obj::__new()
{  hx::ObjectPtr< FlxFocusLostScreen_obj > _result_ = new FlxFocusLostScreen_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxFocusLostScreen_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxFocusLostScreen_obj > _result_ = new FlxFocusLostScreen_obj();
	_result_->__construct();
	return _result_;}

Void FlxFocusLostScreen_obj::draw( ){
{
		HX_STACK_FRAME("flixel.system.ui.FlxFocusLostScreen","draw",0x9c914faf,"flixel.system.ui.FlxFocusLostScreen.draw","flixel/system/ui/FlxFocusLostScreen.hx",30,0x1e64ca7a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(31)
		::openfl::_legacy::display::Graphics tmp = this->get_graphics();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		::openfl::_legacy::display::Graphics gfx = tmp;		HX_STACK_VAR(gfx,"gfx");
		HX_STACK_LINE(33)
		::openfl::_legacy::display::MovieClip tmp1 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		::openfl::_legacy::display::Stage tmp2 = tmp1->get_stage();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		int tmp3 = tmp2->get_stageWidth();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(33)
		int screenWidth = tmp4;		HX_STACK_VAR(screenWidth,"screenWidth");
		HX_STACK_LINE(34)
		::openfl::_legacy::display::MovieClip tmp5 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(34)
		::openfl::_legacy::display::Stage tmp6 = tmp5->get_stage();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(34)
		int tmp7 = tmp6->get_stageHeight();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(34)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(34)
		int screenHeight = tmp8;		HX_STACK_VAR(screenHeight,"screenHeight");
		HX_STACK_LINE(37)
		gfx->clear();
		HX_STACK_LINE(38)
		gfx->moveTo((int)0,(int)0);
		HX_STACK_LINE(39)
		gfx->beginFill((int)0,((Float)0.5));
		HX_STACK_LINE(40)
		int tmp9 = screenWidth;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(40)
		int tmp10 = screenHeight;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(40)
		gfx->drawRect((int)0,(int)0,tmp9,tmp10);
		HX_STACK_LINE(41)
		gfx->endFill();
		HX_STACK_LINE(44)
		Float tmp11 = (Float(screenWidth) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(44)
		int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(44)
		int halfWidth = tmp12;		HX_STACK_VAR(halfWidth,"halfWidth");
		HX_STACK_LINE(45)
		Float tmp13 = (Float(screenHeight) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(45)
		int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(45)
		int halfHeight = tmp14;		HX_STACK_VAR(halfHeight,"halfHeight");
		HX_STACK_LINE(46)
		int tmp15 = halfWidth;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(46)
		int tmp16 = halfHeight;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(46)
		Float tmp17 = ::Math_obj::min(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(46)
		Float tmp18 = (Float(tmp17) / Float((int)3));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(46)
		int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(46)
		int helper = tmp19;		HX_STACK_VAR(helper,"helper");
		HX_STACK_LINE(47)
		int tmp20 = (halfWidth - helper);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(47)
		int tmp21 = (halfHeight - helper);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(47)
		gfx->moveTo(tmp20,tmp21);
		HX_STACK_LINE(48)
		gfx->beginFill((int)16777215,((Float)0.65));
		HX_STACK_LINE(49)
		int tmp22 = (halfWidth + helper);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(49)
		int tmp23 = halfHeight;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(49)
		gfx->lineTo(tmp22,tmp23);
		HX_STACK_LINE(50)
		int tmp24 = (halfWidth - helper);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(50)
		int tmp25 = (halfHeight + helper);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(50)
		gfx->lineTo(tmp24,tmp25);
		HX_STACK_LINE(51)
		int tmp26 = (halfWidth - helper);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(51)
		int tmp27 = (halfHeight - helper);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(51)
		gfx->lineTo(tmp26,tmp27);
		HX_STACK_LINE(52)
		gfx->endFill();
		HX_STACK_LINE(54)
		::flixel::_system::scaleModes::BaseScaleMode tmp28 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(54)
		Float tmp29 = tmp28->__Field(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(54)
		Float tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(54)
		this->set_x(tmp30);
		HX_STACK_LINE(55)
		::flixel::_system::scaleModes::BaseScaleMode tmp31 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(55)
		Float tmp32 = tmp31->__Field(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(55)
		Float tmp33 = -(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(55)
		this->set_y(tmp33);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFocusLostScreen_obj,draw,(void))


FlxFocusLostScreen_obj::FlxFocusLostScreen_obj()
{
}

Dynamic FlxFocusLostScreen_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxFocusLostScreen_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxFocusLostScreen_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxFocusLostScreen_obj::__mClass;

void FlxFocusLostScreen_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.ui.FlxFocusLostScreen","\xa3","\xdc","\xfb","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxFocusLostScreen_obj >;
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
} // end namespace ui
