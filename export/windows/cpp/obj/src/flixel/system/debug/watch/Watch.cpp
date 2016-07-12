#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace _system{
namespace debug{
namespace watch{

Void Watch_obj::__construct(::String Title,::openfl::_legacy::display::BitmapData Icon,Dynamic Width,Dynamic Height,Dynamic Resizable,::openfl::_legacy::geom::Rectangle Bounds,Dynamic Closable)
{
HX_STACK_FRAME("flixel.system.debug.watch.Watch","new",0xfeaf943a,"flixel.system.debug.watch.Watch.new","flixel/system/debug/watch/Watch.hx",13,0x446c9b58)
HX_STACK_THIS(this)
HX_STACK_ARG(Title,"Title")
HX_STACK_ARG(Icon,"Icon")
HX_STACK_ARG(Width,"Width")
HX_STACK_ARG(Height,"Height")
HX_STACK_ARG(Resizable,"Resizable")
HX_STACK_ARG(Bounds,"Bounds")
HX_STACK_ARG(Closable,"Closable")
{
	HX_STACK_LINE(13)
	::String tmp = Title;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	::openfl::_legacy::display::BitmapData tmp1 = Icon;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	Dynamic tmp2 = Width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(13)
	Dynamic tmp3 = Height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(13)
	Dynamic tmp4 = Resizable;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(13)
	::openfl::_legacy::geom::Rectangle tmp5 = Bounds;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(13)
	Dynamic tmp6 = Closable;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(13)
	super::__construct(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);
}
;
	return null();
}

//Watch_obj::~Watch_obj() { }

Dynamic Watch_obj::__CreateEmpty() { return  new Watch_obj; }
hx::ObjectPtr< Watch_obj > Watch_obj::__new(::String Title,::openfl::_legacy::display::BitmapData Icon,Dynamic Width,Dynamic Height,Dynamic Resizable,::openfl::_legacy::geom::Rectangle Bounds,Dynamic Closable)
{  hx::ObjectPtr< Watch_obj > _result_ = new Watch_obj();
	_result_->__construct(Title,Icon,Width,Height,Resizable,Bounds,Closable);
	return _result_;}

Dynamic Watch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Watch_obj > _result_ = new Watch_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _result_;}


Watch_obj::Watch_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Watch_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Watch_obj::__mClass,"__mClass");
};

#endif

hx::Class Watch_obj::__mClass;

void Watch_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.watch.Watch","\x48","\xaf","\x96","\x48");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Watch_obj >;
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
} // end namespace debug
} // end namespace watch
