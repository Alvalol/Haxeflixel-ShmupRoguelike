#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_UncaughtErrorEvents
#include <openfl/events/UncaughtErrorEvents.h>
#endif
namespace openfl{
namespace events{

Void UncaughtErrorEvents_obj::__construct()
{
HX_STACK_FRAME("openfl.events.UncaughtErrorEvents","new",0xf17d0a07,"openfl.events.UncaughtErrorEvents.new","openfl/events/UncaughtErrorEvents.hx",9,0x17415d69)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	super::__construct(null());
}
;
	return null();
}

//UncaughtErrorEvents_obj::~UncaughtErrorEvents_obj() { }

Dynamic UncaughtErrorEvents_obj::__CreateEmpty() { return  new UncaughtErrorEvents_obj; }
hx::ObjectPtr< UncaughtErrorEvents_obj > UncaughtErrorEvents_obj::__new()
{  hx::ObjectPtr< UncaughtErrorEvents_obj > _result_ = new UncaughtErrorEvents_obj();
	_result_->__construct();
	return _result_;}

Dynamic UncaughtErrorEvents_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UncaughtErrorEvents_obj > _result_ = new UncaughtErrorEvents_obj();
	_result_->__construct();
	return _result_;}


UncaughtErrorEvents_obj::UncaughtErrorEvents_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UncaughtErrorEvents_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UncaughtErrorEvents_obj::__mClass,"__mClass");
};

#endif

hx::Class UncaughtErrorEvents_obj::__mClass;

void UncaughtErrorEvents_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.UncaughtErrorEvents","\x95","\xfa","\x87","\x0b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< UncaughtErrorEvents_obj >;
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
} // end namespace events
