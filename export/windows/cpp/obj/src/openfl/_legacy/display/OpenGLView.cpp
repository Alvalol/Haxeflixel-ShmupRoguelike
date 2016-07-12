#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_display_DirectRenderer
#include <openfl/_legacy/display/DirectRenderer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_OpenGLView
#include <openfl/_legacy/display/OpenGLView.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

Void OpenGLView_obj::__construct()
{
HX_STACK_FRAME("openfl._legacy.display.OpenGLView","new",0x99376116,"openfl._legacy.display.OpenGLView.new","openfl/_legacy/display/OpenGLView.hx",19,0xa91fb237)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	super::__construct(HX_HCSTRING("OpenGLView","\x94","\x0e","\xac","\x6e"));
}
;
	return null();
}

//OpenGLView_obj::~OpenGLView_obj() { }

Dynamic OpenGLView_obj::__CreateEmpty() { return  new OpenGLView_obj; }
hx::ObjectPtr< OpenGLView_obj > OpenGLView_obj::__new()
{  hx::ObjectPtr< OpenGLView_obj > _result_ = new OpenGLView_obj();
	_result_->__construct();
	return _result_;}

Dynamic OpenGLView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OpenGLView_obj > _result_ = new OpenGLView_obj();
	_result_->__construct();
	return _result_;}

::String OpenGLView_obj::CONTEXT_LOST;

::String OpenGLView_obj::CONTEXT_RESTORED;

bool OpenGLView_obj::isSupported;

bool OpenGLView_obj::get_isSupported( ){
	HX_STACK_FRAME("openfl._legacy.display.OpenGLView","get_isSupported",0x7340fe31,"openfl._legacy.display.OpenGLView.get_isSupported","openfl/_legacy/display/OpenGLView.hx",33,0xa91fb237)
	HX_STACK_LINE(33)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(OpenGLView_obj,get_isSupported,return )


OpenGLView_obj::OpenGLView_obj()
{
}

bool OpenGLView_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { outValue = inCallProp == hx::paccAlways ? get_isSupported() : isSupported; return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isSupported") ) { outValue = get_isSupported_dyn(); return true;  }
	}
	return false;
}

bool OpenGLView_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { isSupported=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &OpenGLView_obj::CONTEXT_LOST,HX_HCSTRING("CONTEXT_LOST","\x94","\x35","\x21","\xf9")},
	{hx::fsString,(void *) &OpenGLView_obj::CONTEXT_RESTORED,HX_HCSTRING("CONTEXT_RESTORED","\x06","\xe9","\x7b","\xfd")},
	{hx::fsBool,(void *) &OpenGLView_obj::isSupported,HX_HCSTRING("isSupported","\xe4","\x7c","\x8a","\xf3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OpenGLView_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(OpenGLView_obj::CONTEXT_LOST,"CONTEXT_LOST");
	HX_MARK_MEMBER_NAME(OpenGLView_obj::CONTEXT_RESTORED,"CONTEXT_RESTORED");
	HX_MARK_MEMBER_NAME(OpenGLView_obj::isSupported,"isSupported");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OpenGLView_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(OpenGLView_obj::CONTEXT_LOST,"CONTEXT_LOST");
	HX_VISIT_MEMBER_NAME(OpenGLView_obj::CONTEXT_RESTORED,"CONTEXT_RESTORED");
	HX_VISIT_MEMBER_NAME(OpenGLView_obj::isSupported,"isSupported");
};

#endif

hx::Class OpenGLView_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("CONTEXT_LOST","\x94","\x35","\x21","\xf9"),
	HX_HCSTRING("CONTEXT_RESTORED","\x06","\xe9","\x7b","\xfd"),
	HX_HCSTRING("isSupported","\xe4","\x7c","\x8a","\xf3"),
	HX_HCSTRING("get_isSupported","\x7b","\x34","\x6c","\xb4"),
	::String(null()) };

void OpenGLView_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.display.OpenGLView","\x24","\xde","\xc7","\xdb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OpenGLView_obj::__GetStatic;
	__mClass->mSetStaticField = &OpenGLView_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< OpenGLView_obj >;
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

void OpenGLView_obj::__boot()
{
	CONTEXT_LOST= HX_HCSTRING("glcontextlost","\x4e","\x21","\x17","\x07");
	CONTEXT_RESTORED= HX_HCSTRING("glcontextrestored","\xc0","\x71","\x0a","\x02");
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace display
