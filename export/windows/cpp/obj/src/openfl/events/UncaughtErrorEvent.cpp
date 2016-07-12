#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_events_UncaughtErrorEvent
#include <openfl/events/UncaughtErrorEvent.h>
#endif
namespace openfl{
namespace events{

Void UncaughtErrorEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,Dynamic error)
{
HX_STACK_FRAME("openfl.events.UncaughtErrorEvent","new",0x17652810,"openfl.events.UncaughtErrorEvent.new","openfl/events/UncaughtErrorEvent.hx",12,0x0dad2340)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(error,"error")
bool bubbles = __o_bubbles.Default(true);
bool cancelable = __o_cancelable.Default(true);
{
	HX_STACK_LINE(14)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(14)
	super::__construct(tmp,tmp1,tmp2,null(),null());
	HX_STACK_LINE(16)
	this->error = error;
}
;
	return null();
}

//UncaughtErrorEvent_obj::~UncaughtErrorEvent_obj() { }

Dynamic UncaughtErrorEvent_obj::__CreateEmpty() { return  new UncaughtErrorEvent_obj; }
hx::ObjectPtr< UncaughtErrorEvent_obj > UncaughtErrorEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,Dynamic error)
{  hx::ObjectPtr< UncaughtErrorEvent_obj > _result_ = new UncaughtErrorEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable,error);
	return _result_;}

Dynamic UncaughtErrorEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UncaughtErrorEvent_obj > _result_ = new UncaughtErrorEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::openfl::_legacy::events::Event UncaughtErrorEvent_obj::clone( ){
	HX_STACK_FRAME("openfl.events.UncaughtErrorEvent","clone",0x483db70d,"openfl.events.UncaughtErrorEvent.clone","openfl/events/UncaughtErrorEvent.hx",21,0x0dad2340)
	HX_STACK_THIS(this)
	HX_STACK_LINE(23)
	::String tmp = this->get_type();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	bool tmp1 = this->get_bubbles();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	bool tmp2 = this->get_cancelable();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	Dynamic tmp3 = this->error;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(23)
	::openfl::events::UncaughtErrorEvent tmp4 = ::openfl::events::UncaughtErrorEvent_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(23)
	::openfl::events::UncaughtErrorEvent event = tmp4;		HX_STACK_VAR(event,"event");
	HX_STACK_LINE(24)
	Dynamic tmp5 = this->get_target();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(24)
	event->set_target(tmp5);
	HX_STACK_LINE(25)
	Dynamic tmp6 = this->get_currentTarget();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(25)
	event->set_currentTarget(tmp6);
	HX_STACK_LINE(29)
	::openfl::events::UncaughtErrorEvent tmp7 = event;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(29)
	return tmp7;
}


::String UncaughtErrorEvent_obj::toString( ){
	HX_STACK_FRAME("openfl.events.UncaughtErrorEvent","toString",0x4ef19afc,"openfl.events.UncaughtErrorEvent.toString","openfl/events/UncaughtErrorEvent.hx",34,0x0dad2340)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	::String tmp = this->__formatToString(HX_HCSTRING("UncaughtErrorEvent","\x47","\x72","\x9a","\xe0"),Array_obj< ::String >::__new().Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")).Add(HX_HCSTRING("bubbles","\x67","\xbb","\x56","\x61")).Add(HX_HCSTRING("cancelable","\x14","\xa0","\x79","\xc4")).Add(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73")));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	return tmp;
}


::String UncaughtErrorEvent_obj::UNCAUGHT_ERROR;


UncaughtErrorEvent_obj::UncaughtErrorEvent_obj()
{
}

void UncaughtErrorEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UncaughtErrorEvent);
	HX_MARK_MEMBER_NAME(error,"error");
	::openfl::events::TextEvent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UncaughtErrorEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(error,"error");
	::openfl::events::TextEvent_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UncaughtErrorEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return error; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UncaughtErrorEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { error=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UncaughtErrorEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UncaughtErrorEvent_obj,error),HX_HCSTRING("error","\xc8","\xcb","\x29","\x73")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &UncaughtErrorEvent_obj::UNCAUGHT_ERROR,HX_HCSTRING("UNCAUGHT_ERROR","\x3e","\x1f","\xae","\xd3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UncaughtErrorEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UncaughtErrorEvent_obj::UNCAUGHT_ERROR,"UNCAUGHT_ERROR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UncaughtErrorEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UncaughtErrorEvent_obj::UNCAUGHT_ERROR,"UNCAUGHT_ERROR");
};

#endif

hx::Class UncaughtErrorEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("UNCAUGHT_ERROR","\x3e","\x1f","\xae","\xd3"),
	::String(null()) };

void UncaughtErrorEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.UncaughtErrorEvent","\x1e","\x20","\x14","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UncaughtErrorEvent_obj >;
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

void UncaughtErrorEvent_obj::__boot()
{
	UNCAUGHT_ERROR= HX_HCSTRING("uncaughtError","\xf3","\x98","\x8b","\x8b");
}

} // end namespace openfl
} // end namespace events
