#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_TouchInfo
#include <openfl/_legacy/display/TouchInfo.h>
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

Void TouchInfo_obj::__construct()
{
HX_STACK_FRAME("openfl._legacy.display.TouchInfo","new",0x00066d8f,"openfl._legacy.display.TouchInfo.new","openfl/_legacy/display/Stage.hx",1515,0x8b30a073)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1515)
	this->touchOverObjects = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//TouchInfo_obj::~TouchInfo_obj() { }

Dynamic TouchInfo_obj::__CreateEmpty() { return  new TouchInfo_obj; }
hx::ObjectPtr< TouchInfo_obj > TouchInfo_obj::__new()
{  hx::ObjectPtr< TouchInfo_obj > _result_ = new TouchInfo_obj();
	_result_->__construct();
	return _result_;}

Dynamic TouchInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TouchInfo_obj > _result_ = new TouchInfo_obj();
	_result_->__construct();
	return _result_;}


TouchInfo_obj::TouchInfo_obj()
{
}

void TouchInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TouchInfo);
	HX_MARK_MEMBER_NAME(touchOverObjects,"touchOverObjects");
	HX_MARK_END_CLASS();
}

void TouchInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(touchOverObjects,"touchOverObjects");
}

Dynamic TouchInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"touchOverObjects") ) { return touchOverObjects; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TouchInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"touchOverObjects") ) { touchOverObjects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TouchInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("touchOverObjects","\x61","\x3c","\xa5","\xeb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TouchInfo_obj,touchOverObjects),HX_HCSTRING("touchOverObjects","\x61","\x3c","\xa5","\xeb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("touchOverObjects","\x61","\x3c","\xa5","\xeb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TouchInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TouchInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class TouchInfo_obj::__mClass;

void TouchInfo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.display.TouchInfo","\x1d","\xfa","\xa6","\xb6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TouchInfo_obj >;
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
} // end namespace display
