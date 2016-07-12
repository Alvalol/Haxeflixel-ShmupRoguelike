#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
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
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_ui_Mouse
#include <openfl/_legacy/ui/Mouse.h>
#endif
namespace openfl{
namespace _legacy{
namespace ui{

Void Mouse_obj::__construct()
{
	return null();
}

//Mouse_obj::~Mouse_obj() { }

Dynamic Mouse_obj::__CreateEmpty() { return  new Mouse_obj; }
hx::ObjectPtr< Mouse_obj > Mouse_obj::__new()
{  hx::ObjectPtr< Mouse_obj > _result_ = new Mouse_obj();
	_result_->__construct();
	return _result_;}

Dynamic Mouse_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mouse_obj > _result_ = new Mouse_obj();
	_result_->__construct();
	return _result_;}

Void Mouse_obj::hide( ){
{
		HX_STACK_FRAME("openfl._legacy.ui.Mouse","hide",0x4b9f7d41,"openfl._legacy.ui.Mouse.hide","openfl/_legacy/ui/Mouse.hx",10,0x1c6bb10e)
		HX_STACK_LINE(12)
		::openfl::_legacy::display::Stage tmp = ::openfl::_legacy::Lib_obj::get_stage();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(12)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12)
		if ((tmp1)){
			HX_STACK_LINE(14)
			::openfl::_legacy::display::Stage tmp2 = ::openfl::_legacy::Lib_obj::get_stage();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(14)
			tmp2->showCursor(false);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,hide,(void))

Void Mouse_obj::show( ){
{
		HX_STACK_FRAME("openfl._legacy.ui.Mouse","show",0x52e41d7c,"openfl._legacy.ui.Mouse.show","openfl/_legacy/ui/Mouse.hx",21,0x1c6bb10e)
		HX_STACK_LINE(23)
		::openfl::_legacy::display::Stage tmp = ::openfl::_legacy::Lib_obj::get_stage();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		if ((tmp1)){
			HX_STACK_LINE(25)
			::openfl::_legacy::display::Stage tmp2 = ::openfl::_legacy::Lib_obj::get_stage();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(25)
			tmp2->showCursor(true);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,show,(void))


Mouse_obj::Mouse_obj()
{
}

bool Mouse_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hide") ) { outValue = hide_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"show") ) { outValue = show_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mouse_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mouse_obj::__mClass,"__mClass");
};

#endif

hx::Class Mouse_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	::String(null()) };

void Mouse_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.ui.Mouse","\x4f","\xe8","\xa5","\xc1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Mouse_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Mouse_obj >;
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

} // end namespace openfl
} // end namespace _legacy
} // end namespace ui
